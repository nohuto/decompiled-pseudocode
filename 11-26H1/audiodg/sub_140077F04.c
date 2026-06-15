/*
 * XREFs of sub_140077F04 @ 0x140077F04
 * Callers:
 *     sub_1400786E0 @ 0x1400786E0 (sub_1400786E0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140077F04(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    sub_1400B6010(v2);
  }
  return sub_140050010(a1);
}
