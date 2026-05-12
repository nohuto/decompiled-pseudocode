/*
 * XREFs of sub_140009AA8 @ 0x140009AA8
 * Callers:
 *     sub_140008510 @ 0x140008510 (sub_140008510.c)
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_140009C20 @ 0x140009C20 (sub_140009C20.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_140009AA8(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 51LL, &unk_14014C778, a1, a2);
  }
  if ( *(_DWORD *)(a1 + 548) != 4 || a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    return sub_140009C20((PVOID)a1, a2);
  if ( (*(_BYTE *)(v2 + 108) & 8) == 0
    && *(_QWORD *)(v2 + 4960)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3608), 1, 0) )
  {
    sub_1400212C0(v2, 0LL, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
  if ( *(int *)(v2 + 348) <= 1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return sub_140009C20((PVOID)a1, a2);
  }
  *(_BYTE *)(a1 + 2041) = 1;
  *(_QWORD *)(a1 + 2048) = a2;
  sub_1400066C0(a1, (__int64)a2, 1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 4944), (PSLIST_ENTRY)(a1 + 2064));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 259LL;
}
