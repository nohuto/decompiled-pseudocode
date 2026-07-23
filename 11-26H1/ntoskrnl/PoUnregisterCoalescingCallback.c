/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x1407D2290
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoalRegistrationListLock, v7, v8, v9);
    v10 = a1[6];
    if ( *(_QWORD **)(v10 + 8) != a1 + 6 || (v11 = (_QWORD *)a1[7], (_QWORD *)*v11 != a1 + 6) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    PopReleaseRwLock((struct _KTHREAD *)&PopCoalRegistrationListLock);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    ExDereferenceCallBackBlock(v3, v5);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12);
  }
}
