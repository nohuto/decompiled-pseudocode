/*
 * XREFs of MiUnlockImageSection @ 0x140366FC8
 * Callers:
 *     MmUnlockPagableImageSection @ 0x140366CB0 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x140366F30 (MiLockPagableImageSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockCodePage @ 0x140367FA8 (MiUnlockCodePage.c)
 *     ExpUnblockPushLock @ 0x1403682A0 (ExpUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockImageSection(__int64 a1, volatile signed __int32 *a2, ULONG_PTR a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // r8
  __int64 result; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = v6 + 8LL * *(unsigned int *)a2;
  v8 = v6 + 8LL * *((unsigned int *)a2 + 1);
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v10 = (unsigned int)_InterlockedDecrement(a2 + 2);
  result = (unsigned int)(v10 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, v7 << 25 >> 16, a3, (int)v10);
  if ( (_DWORD)v10 == 1 )
  {
    MiUnlockCodePage(v7, v8, 0LL);
    _InterlockedAdd(a2 + 2, 0xFFFFFFFF);
    _InterlockedOr(v12, 0);
    result = *(_QWORD *)&stru_140E2D150.SuspendEvent.Header.Lock;
    if ( *(_QWORD *)&stru_140E2D150.SuspendEvent.Header.Lock )
      result = ExpUnblockPushLock(&stru_140E2D150.SuspendEvent, 0LL, 0LL);
  }
  if ( !CurrentIrql )
    return KeLeaveCriticalRegionThread((__int64)CurrentThread, v8, v10);
  return result;
}
