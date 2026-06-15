/*
 * XREFs of sub_14005DEF4 @ 0x14005DEF4
 * Callers:
 *     sub_14005DB34 @ 0x14005DB34 (sub_14005DB34.c)
 *     sub_14006496C @ 0x14006496C (sub_14006496C.c)
 *     sub_1400B1ECF @ 0x1400B1ECF (sub_1400B1ECF.c)
 *     sub_1400B2666 @ 0x1400B2666 (sub_1400B2666.c)
 * Callees:
 *     sub_14005DF50 @ 0x14005DF50 (sub_14005DF50.c)
 */

__int64 __fastcall sub_14005DEF4(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_14005DF50(v2 + 16);
  return sub_140045378(a1);
}
