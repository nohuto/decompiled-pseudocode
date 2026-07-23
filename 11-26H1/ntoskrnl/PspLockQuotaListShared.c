/*
 * XREFs of PspLockQuotaListShared @ 0x1404C8964
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140ABA274 (PspLookupProcessQuotaBlock.c)
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PspLockQuotaListShared(
        __int64 a1,
        volatile signed __int64 *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *v5; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 484);
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a2, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64(a2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a2, 0, v5, (struct _KTHREAD *)a2);
  if ( v5 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  return result;
}
