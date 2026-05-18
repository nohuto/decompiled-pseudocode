/*
 * XREFs of sub_18008A5FC @ 0x18008A5FC
 * Callers:
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 */

_QWORD *__fastcall sub_18008A5FC(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v4 = sub_18004232C(a1 + 8, &v6);
  *a2 = a1 + 1876;
  a2[1] = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v7 )
    sub_180010EC8(v7);
  return a2;
}
