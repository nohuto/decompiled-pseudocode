/*
 * XREFs of MiUnlockImageSection @ 0x140368D68
 * Callers:
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x140368CD0 (MiLockPagableImageSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockImageSection(__int64 a1, volatile signed __int32 *a2, ULONG_PTR a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v10; // r8d
  __int64 result; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = v6 + 8LL * *(unsigned int *)a2;
  v8 = v6 + 8LL * *((unsigned int *)a2 + 1);
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v10 = _InterlockedDecrement(a2 + 2);
  result = (unsigned int)(v10 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, v7 << 25 >> 16, a3, v10);
  if ( v10 == 1 )
  {
    MiUnlockCodePage(v7, v8, 0LL);
    _InterlockedAdd(a2 + 2, 0xFFFFFFFF);
    _InterlockedOr(v12, 0);
    result = *(_QWORD *)&stru_140E2D2D0.SuspendEvent.Header.Lock;
    if ( *(_QWORD *)&stru_140E2D2D0.SuspendEvent.Header.Lock )
      result = ExpUnblockPushLock(&stru_140E2D2D0.SuspendEvent, 0LL, 0LL);
  }
  if ( !CurrentIrql )
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return result;
}
