/*
 * XREFs of PpmBeginProfileAccumulation @ 0x14077A7DC
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140CD8F20 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1464) = a2;
}
