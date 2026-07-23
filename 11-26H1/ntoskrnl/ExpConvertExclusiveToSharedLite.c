/*
 * XREFs of ExpConvertExclusiveToSharedLite @ 0x14041EB0C
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x14041E930 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 *     KeWakeWaitChain @ 0x140272C70 (KeWakeWaitChain.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall ExpConvertExclusiveToSharedLite(__int64 a1)
{
  int v2; // edx
  __int64 *v3; // rax
  int v4; // ebx
  char v5; // si
  __int64 v6; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v8; // [rsp+50h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v2 = *(_DWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 26) &= ~0x80u;
  v3 = *(__int64 **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  v8 = v3;
  *(_DWORD *)(a1 + 64) = v4 + v2;
  v5 = *(_BYTE *)(a1 + 27);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeWakeWaitChain(&v8, 0, 0LL);
  if ( v4 && v5 )
    ExpApplyPriorityBoost(a1, 65280LL, (__int64)KeGetCurrentThread(), v6);
  __incgsdword(0x90B4u);
}
