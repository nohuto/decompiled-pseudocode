/*
 * XREFs of sub_1400121EC @ 0x1400121EC
 * Callers:
 *     sub_140011F40 @ 0x140011F40 (sub_140011F40.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400121EC(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  unsigned int v3; // esi
  unsigned int v4; // ebp
  unsigned int v5; // edi
  float v6; // xmm6_4

  v1 = 0;
  if ( a1 )
  {
    v2 = sub_1400B6010(a1);
    v3 = *(unsigned __int16 *)(v2 + 14);
    v4 = *(unsigned __int16 *)(v2 + 2);
    v5 = v3 >> 3;
    v6 = (float)*(int *)(v2 + 4);
    if ( *(_WORD *)v2 == 0xFFFE )
      v3 = *(unsigned __int16 *)(v2 + 18);
    if ( isnan(v6) || v6 <= 0.0 || !v4 || !v5 || !v3 || v5 > 0x20 || 8 * v5 < v3 || v4 > 0x1000 )
      return (unsigned int)-2147024809;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v1;
}
