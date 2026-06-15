/*
 * XREFs of sub_140093458 @ 0x140093458
 * Callers:
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 * Callees:
 *     sub_140092F58 @ 0x140092F58 (sub_140092F58.c)
 *     sub_140093414 @ 0x140093414 (sub_140093414.c)
 */

char *__fastcall sub_140093458(__int64 *a1, _DWORD *a2, __int64 *a3)
{
  _QWORD *v4; // rdx
  __int64 v6; // rdx

  v4 = (_QWORD *)a1[1];
  if ( v4 == (_QWORD *)a1[2] )
    return sub_140092F58(a1, v4, (__int64)a2, (__int64)a3);
  sub_140093414((__int64)a1, (__int64)v4, a2, a3);
  v6 = a1[1];
  a1[1] = v6 + 16;
  return (char *)v6;
}
