/*
 * XREFs of ESM_NotifyingTransferRingsEndpointHalted @ 0x140032ED0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_NotifyTransferRingsEndpointHalted @ 0x140032EF4 (Endpoint_SM_NotifyTransferRingsEndpointHalted.c)
 */

__int64 __fastcall ESM_NotifyingTransferRingsEndpointHalted(__int64 a1)
{
  Endpoint_SM_NotifyTransferRingsEndpointHalted(*(_QWORD *)(a1 + 960));
  return 29LL;
}
