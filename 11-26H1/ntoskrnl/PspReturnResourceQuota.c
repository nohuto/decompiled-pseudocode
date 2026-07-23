/*
 * XREFs of PspReturnResourceQuota @ 0x1403C7360
 * Callers:
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     PspDereferenceQuotaBlock @ 0x1408FFC10 (PspDereferenceQuotaBlock.c)
 *     PsReturnSharedPoolQuota @ 0x1409B8E10 (PsReturnSharedPoolQuota.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403C7AF4 (PspLockQuotaExpansion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PspReturnResourceQuota(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  _KDPC **v7; // rbx
  __int64 v9; // rdx
  _QWORD *v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  v7 = &PsAltSystemCallRegistrationLock.Timer.Dpc + 7 * (int)a1;
  PspLockQuotaExpansion(v7, &v12);
  if ( a3 )
    guard_dispatch_icall_no_overrides(a1, a3);
  if ( a4 )
  {
    v9 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v9 + 8) != a2 + 80 || (v11 = *(_QWORD **)(a2 + 88), *v11 != a2 + 80) )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(v9 + 8) = v11;
  }
  LOBYTE(v9) = v12;
  return PspUnlockQuotaExpansion(v7, v9);
}
