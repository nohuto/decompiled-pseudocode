/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x140A6B260
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1404C9B60 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1409C7944 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x1403BD9F0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(__int64 **)(a1 + 760), a1, 2u, a2);
  return result;
}
