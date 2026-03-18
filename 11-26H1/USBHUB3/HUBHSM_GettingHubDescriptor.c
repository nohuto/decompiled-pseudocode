/*
 * XREFs of HUBHSM_GettingHubDescriptor @ 0x140009170
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x140004928 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubDescriptor(__int64 a1)
{
  HUBHTX_GetHubDescriptorUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
