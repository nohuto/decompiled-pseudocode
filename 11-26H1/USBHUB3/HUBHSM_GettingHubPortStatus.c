/*
 * XREFs of HUBHSM_GettingHubPortStatus @ 0x1400091A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1400049CC (HUBHTX_GetHubStatusUsingControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubPortStatus(__int64 a1)
{
  HUBHTX_GetHubStatusUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
