/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x140A7C890
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1404C3598 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x1403C7860 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(__int64 **)(a1 + 760), a1, 2u, a2);
  return result;
}
