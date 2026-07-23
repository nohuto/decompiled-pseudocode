/*
 * XREFs of PnpDeferNotification @ 0x1409AAF28
 * Callers:
 *     PiRegisterKernelSoftRestartNotification @ 0x1407B5C44 (PiRegisterKernelSoftRestartNotification.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PnpInsertNoopEvent @ 0x1409AB01C (PnpInsertNoopEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpDeferNotification(__int64 a1)
{
  char v2; // bp
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  struct _SINGLE_LIST_ENTRY *v5; // rdi
  struct _SINGLE_LIST_ENTRY *Next; // rax

  v2 = 0;
  v3 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( BYTE3(NlsMbOemCodePageTag) || *(_DWORD *)(a1 + 16) == 3 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v5 = (struct _SINGLE_LIST_ENTRY *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = a1;
      ++*(_WORD *)(a1 + 56);
      *(_BYTE *)(a1 + 58) = 1;
      ExAcquireFastMutex(&PnpDeferredRegistrationLock);
      Next = PspSiloMonitorLock.SystemAffinityTokenListHead.Next;
      if ( PspSiloMonitorLock.SystemAffinityTokenListHead.Next->Next != (struct _SINGLE_LIST_ENTRY *)&PspSiloMonitorLock.Spare36 )
        __fastfail(3u);
      v5->Next = (struct _SINGLE_LIST_ENTRY *)&PspSiloMonitorLock.Spare36;
      v5[1].Next = Next;
      Next->Next = v5;
      PspSiloMonitorLock.SystemAffinityTokenListHead.Next = v5;
      KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
      if ( !BYTE3(NlsMbOemCodePageTag) )
        v2 = 1;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( v2 )
  {
    PnpInsertNoopEvent(0LL, 0LL);
    return 0;
  }
  return v3;
}
