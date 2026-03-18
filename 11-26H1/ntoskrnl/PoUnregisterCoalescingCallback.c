/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x1407CF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExDereferenceCallBackBlock @ 0x140435D80 (ExDereferenceCallBackBlock.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x140463604 (ExCompareExchangeCallBack.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(_QWORD *a1, signed __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v3; // rsi
  struct _EX_RUNDOWN_REF *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 8;
  --CurrentThread->KernelApcDisable;
  v5 = ExReferenceCallBackBlock(a1 + 8, a2);
  if ( ExCompareExchangeCallBack(v3, 0LL, (__int64)v5) )
  {
    ExDereferenceCallBackBlock(v3, v5);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v6);
    ExWaitForRundownProtectionRelease(v5);
    PopAcquireRwLockExclusive(&stru_140F11D08.AffinityVersion, v7, v8, v9);
    v10 = a1[6];
    if ( *(_QWORD **)(v10 + 8) != a1 + 6 || (v11 = (_QWORD *)a1[7], (_QWORD *)*v11 != a1 + 6) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F11D08.AffinityVersion);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    ExDereferenceCallBackBlock(v3, v5);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12);
  }
}
