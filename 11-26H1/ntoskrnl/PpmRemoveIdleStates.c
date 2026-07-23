/*
 * XREFs of PpmRemoveIdleStates @ 0x140605D80
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRemoveIdleStates(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v6[264]; // [rsp+28h] [rbp-120h] BYREF

  memset_0(v6, 0, 0x100uLL);
  v2 = *(void **)(a1 + 34880);
  if ( v2 )
  {
    v5 = 2097153LL;
    memset_0(v6, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&v5, *(_DWORD *)(a1 + 36));
    LOBYTE(v3) = 1;
    guard_dispatch_icall_no_overrides(v3, &v5);
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 34880) = 0LL;
    KxReleaseSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 34888) = 0LL;
    ExFreePoolWithTag(v2, 0x694D5050u);
  }
  return 0LL;
}
