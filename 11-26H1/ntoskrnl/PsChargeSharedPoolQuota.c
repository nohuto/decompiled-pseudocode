/*
 * XREFs of PsChargeSharedPoolQuota @ 0x1409B9190
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     PspAllocateRateControl @ 0x1409B90E0 (PspAllocateRateControl.c)
 * Callees:
 *     PspChargeQuota @ 0x1403C7410 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403C7860 (PspReturnQuota.c)
 */

__int64 __fastcall PsChargeSharedPoolQuota(__int64 a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = *(_QWORD *)(a1 + 760);
  if ( !a2 || (int)PspChargeQuota(*(_QWORD *)(a1 + 760), 0LL, 1, a2) >= 0 )
  {
    if ( !a3 || (int)PspChargeQuota(v5, 0LL, 0, a3) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 512));
      return v5;
    }
    if ( a2 )
      PspReturnQuota((__int64 *)v5, 0LL, 1u, a2);
  }
  return 0LL;
}
