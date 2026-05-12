/*
 * XREFs of sub_1400D1300 @ 0x1400D1300
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 *     sub_14012F0B0 @ 0x14012F0B0 (sub_14012F0B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400D1300(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
