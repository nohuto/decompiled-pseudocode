/*
 * XREFs of VidSchiRewindPacket @ 0x14000BD80
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiCompleteRewindPacket @ 0x14000BE70 (VidSchiCompleteRewindPacket.c)
 */

void __fastcall VidSchiRewindPacket(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v9; // r15
  int v10; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 88);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 2016), &LockHandle);
  if ( (*(_DWORD *)(v4 + 192) & 4) == 0 )
  {
    WdLogSingleEntry3(4LL, v9, v4, *(unsigned int *)(a1 + 112));
    WdLogGlobalForLineNumber = 16168;
    v10 = *(_DWORD *)(v4 + 192) | 4;
    *(_QWORD *)(v4 + 664) = a1;
    *(_DWORD *)(v4 + 192) = v10;
  }
  if ( a3 )
    VidSchiCompleteRewindPacket(v4, a4);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
