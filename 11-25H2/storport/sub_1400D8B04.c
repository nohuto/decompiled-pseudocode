/*
 * XREFs of sub_1400D8B04 @ 0x1400D8B04
 * Callers:
 *     sub_1400CB150 @ 0x1400CB150 (sub_1400CB150.c)
 *     sub_14012F0B0 @ 0x14012F0B0 (sub_14012F0B0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400D8B04(__int64 a1)
{
  _QWORD *v1; // rdx
  char result; // al

  v1 = *(_QWORD **)(a1 + 160);
  result = 0;
  if ( v1[35] && v1[36] || v1[37] )
    return 1;
  return result;
}
