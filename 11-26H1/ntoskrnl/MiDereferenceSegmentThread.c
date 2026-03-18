/*
 * XREFs of MiDereferenceSegmentThread @ 0x1404ACC30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     MiIssueSegmentDereferenceWork @ 0x1404B07E0 (MiIssueSegmentDereferenceWork.c)
 *     MiSetDeleteOnCloseTimer @ 0x1404B5BD0 (MiSetDeleteOnCloseTimer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall MiDereferenceSegmentThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  unsigned int v4; // ebx
  struct _KEVENT *v5; // rcx
  KIRQL v6; // al
  volatile LONG *v7; // rcx
  PVOID Object[8]; // [rsp+40h] [rbp-1F8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1B8h] BYREF

  *(_BYTE *)(a1 + 2425) = 1;
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 21);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  Object[0] = (PVOID)(a1 + 88);
  Object[2] = (PVOID)(a1 + 2296);
  Object[1] = (PVOID)(a1 + 2144);
  Object[4] = (PVOID)(a1 + 2360);
  Object[3] = (PVOID)(a1 + 2168);
  Object[5] = (PVOID)(a1 + 2528);
  Object[7] = (PVOID)(a1 + 2776);
  Object[6] = (PVOID)(a1 + 2832);
  do
  {
    result = KeWaitForMultipleObjects(
               8 - (&MiSystemPartition != (ULONG *)a1),
               Object,
               WaitAny,
               WrVirtualMemory,
               0,
               0,
               0LL,
               &WaitBlockArray);
    v4 = result;
    if ( result >= 8 )
      continue;
    switch ( result )
    {
      case 0:
        v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
        *(_BYTE *)(a1 + 2424) = 1;
        v7 = (volatile LONG *)(a1 + 2112);
        if ( v6 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v7);
        else
          ExReleaseSpinLockExclusive(v7, v6);
        break;
      case 1:
        v5 = (struct _KEVENT *)(a1 + 2144);
        goto LABEL_10;
      case 3:
        v5 = (struct _KEVENT *)(a1 + 2168);
        goto LABEL_10;
      case 7:
        v5 = (struct _KEVENT *)(a1 + 2776);
LABEL_10:
        KeResetEvent(v5);
        break;
    }
    MiIssueSegmentDereferenceWork(a1, v4);
    result = MiSetDeleteOnCloseTimer(a1);
  }
  while ( v4 );
  return result;
}
