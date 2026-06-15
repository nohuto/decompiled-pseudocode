/*
 * XREFs of sub_140093134 @ 0x140093134
 * Callers:
 *     sub_1400930FC @ 0x1400930FC (sub_1400930FC.c)
 *     sub_140093A80 @ 0x140093A80 (sub_140093A80.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14008B52C @ 0x14008B52C (sub_14008B52C.c)
 */

__int64 __fastcall sub_140093134(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx

  v2 = a2[3];
  if ( v2 )
  {
    sub_14008B52C(v2, a2[4]);
    sub_1400453E4(a2[3], (a2[5] - a2[3]) & 0xFFFFFFFFFFFFFFF0uLL);
    a2[3] = 0LL;
    a2[4] = 0LL;
    a2[5] = 0LL;
  }
  return sub_1400453E4((__int64)a2, 0x30uLL);
}
