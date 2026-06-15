/*
 * XREFs of sub_14003D760 @ 0x14003D760
 * Callers:
 *     sub_14003D750 @ 0x14003D750 (sub_14003D750.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14003D760(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 256);
  return v1 == 2 || v1 == 3;
}
