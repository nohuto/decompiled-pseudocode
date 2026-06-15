/*
 * XREFs of sub_140093678 @ 0x140093678
 * Callers:
 *     sub_140093194 @ 0x140093194 (sub_140093194.c)
 *     sub_1400B3FFE @ 0x1400B3FFE (sub_1400B3FFE.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14008B52C @ 0x14008B52C (sub_14008B52C.c)
 */

__int64 __fastcall sub_140093678(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 8);
  if ( v1 )
  {
    v3 = v1[3];
    if ( v3 )
    {
      sub_14008B52C(v3, v1[4]);
      sub_1400453E4(v1[3], (v1[5] - v1[3]) & 0xFFFFFFFFFFFFFFF0uLL);
      v1[3] = 0LL;
      v1[4] = 0LL;
      v1[5] = 0LL;
    }
  }
  return sub_1400935F8(a1);
}
