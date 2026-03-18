/*
 * XREFs of HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer @ 0x140008D70
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1400033DC (HUBHTX_CompleteGetPortStatusWithPortStatusResult.c)
 */

__int64 __fastcall HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer(__int64 a1)
{
  HUBHTX_CompleteGetPortStatusWithPortStatusResult(*(__int64 **)(a1 + 960));
  return 2053LL;
}
