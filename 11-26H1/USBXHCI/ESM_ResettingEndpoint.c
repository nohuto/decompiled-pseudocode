/*
 * XREFs of ESM_ResettingEndpoint @ 0x140031320
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_ResetEndpoint @ 0x140031344 (Endpoint_SM_ResetEndpoint.c)
 */

__int64 __fastcall ESM_ResettingEndpoint(__int64 a1)
{
  Endpoint_SM_ResetEndpoint(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
