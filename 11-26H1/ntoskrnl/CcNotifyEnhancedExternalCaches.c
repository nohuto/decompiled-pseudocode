/*
 * XREFs of CcNotifyEnhancedExternalCaches @ 0x140500920
 * Callers:
 *     CcNotifyExternalCachesInternal @ 0x1405007BC (CcNotifyExternalCachesInternal.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall CcNotifyEnhancedExternalCaches(int a1, __int64 a2, __int64 a3)
{
  KIRQL v5; // r14
  _QWORD *i; // rdi
  int v7; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-48h]
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-30h]

  memset_0(&v7, 0, 0x40uLL);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&EmpParseLock.SchedulerAssistYieldCounter);
  for ( i = *(_QWORD **)(a3 + 1264); i != (_QWORD *)(a3 + 1264); i = (_QWORD *)*i )
  {
    v7 = 1;
    v8 = 0LL;
    v9 = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    if ( a1 == 4 || a1 == 8 )
      goto LABEL_6;
    if ( a1 != 16 )
    {
      if ( a1 != 32 )
        goto LABEL_8;
LABEL_6:
      v8 = *(_QWORD *)(a3 + 1016);
      v9 = *(unsigned int *)(a3 + 1040);
    }
    v10 = 0x80000LL;
    v11 = 0x40000LL;
LABEL_8:
    guard_dispatch_icall_no_overrides(i - 4, &v7);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&EmpParseLock.SchedulerAssistYieldCounter, v5);
}
