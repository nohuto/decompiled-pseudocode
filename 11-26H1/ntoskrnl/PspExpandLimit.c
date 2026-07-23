/*
 * XREFs of PspExpandLimit @ 0x140617B20
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1407F5B50 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403C7AF4 (PspLockQuotaExpansion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PspExpandLimit(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _KDPC **v5; // rdi
  char v6; // bl
  KIRQL v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v5 = &PsAltSystemCallRegistrationLock.Timer.Dpc + 7 * (int)a1;
  PspLockQuotaExpansion(v5, &v8, a3, a4);
  v6 = guard_dispatch_icall_no_overrides(a1, 0LL);
  PspUnlockQuotaExpansion((__int64)v5, v8);
  return v6;
}
