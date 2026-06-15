/*
 * XREFs of sub_1400ABB40 @ 0x1400ABB40
 * Callers:
 *     sub_1400ABBD0 @ 0x1400ABBD0 (sub_1400ABBD0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_1400ABB40(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1400B6010(v2);
  *(_BYTE *)(a1 + 16) = 0;
}
