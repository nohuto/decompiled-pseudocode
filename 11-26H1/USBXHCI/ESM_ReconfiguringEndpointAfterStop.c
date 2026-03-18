/*
 * XREFs of ESM_ReconfiguringEndpointAfterStop @ 0x140037760
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1400054F4 (Endpoint_OnCancelEndpointConfigure.c)
 */

__int64 __fastcall ESM_ReconfiguringEndpointAfterStop(__int64 a1)
{
  Endpoint_OnCancelEndpointConfigure(*(_DWORD **)(a1 + 960));
  return 1000LL;
}
