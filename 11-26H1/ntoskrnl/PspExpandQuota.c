/*
 * XREFs of PspExpandQuota @ 0x1403C7758
 * Callers:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsChargeProcessPoolQuota @ 0x1403C71D0 (PsChargeProcessPoolQuota.c)
 *     PspChargeQuota @ 0x1403C7410 (PspChargeQuota.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140C169D0 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403C7AF4 (PspLockQuotaExpansion.c)
 *     PspReleaseReturnedQuota @ 0x140617C44 (PspReleaseReturnedQuota.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PspExpandQuota(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  _KDPC **v7; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  signed __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  char v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h]

  v17 = 0;
  v18 = 0LL;
  v7 = &PsAltSystemCallRegistrationLock.Timer.Dpc + 7 * (int)a1;
  PspLockQuotaExpansion(v7, &v17);
  v11 = *(_QWORD *)(a2 + 64);
  if ( a3 + a4 <= v11 )
  {
    LOBYTE(v10) = v17;
    PspUnlockQuotaExpansion(v7, v10);
    *a5 = v11;
    return 1;
  }
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 64))
    || PspReleaseReturnedQuota(a1, v7) && (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v11) )
  {
    v13 = v18 - v11;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), v18 - v11);
    LOBYTE(v12) = v17;
    v15 = v13 + v14;
    PspUnlockQuotaExpansion(v7, v12);
    *a5 = v15;
    return 1;
  }
  LOBYTE(v12) = v17;
  PspUnlockQuotaExpansion(v7, v12);
  *a5 = v11;
  return 0;
}
