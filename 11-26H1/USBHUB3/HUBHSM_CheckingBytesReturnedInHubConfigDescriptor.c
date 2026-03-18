/*
 * XREFs of HUBHSM_CheckingBytesReturnedInHubConfigDescriptor @ 0x1400089B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_CheckingBytesReturnedInHubConfigDescriptor(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v2; // cx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(*(_QWORD *)(v1 + 1272) + 2LL);
  *(_WORD *)(v1 + 2620) = v2;
  return v2 > 0xFFu ? 2057 : 2041;
}
