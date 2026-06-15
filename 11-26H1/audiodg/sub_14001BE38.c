/*
 * XREFs of sub_14001BE38 @ 0x14001BE38
 * Callers:
 *     sub_14001A950 @ 0x14001A950 (sub_14001A950.c)
 *     sub_14001AC60 @ 0x14001AC60 (sub_14001AC60.c)
 *     sub_14001AF20 @ 0x14001AF20 (sub_14001AF20.c)
 *     sub_140076EBC @ 0x140076EBC (sub_140076EBC.c)
 *     sub_140077388 @ 0x140077388 (sub_140077388.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_14001BE38(_QWORD *a1)
{
  __int64 *v2; // r14
  LPUNKNOWN v3; // rbx
  LPUNKNOWN v4; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  *a1 = &off_1400B8C68;
  v2 = a1 + 3;
  a1[3] = 0LL;
  ppunkMarshal = 0LL;
  sub_1400125D4((__int64 *)&ppunkMarshal);
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = ppunkMarshal;
    sub_1400125D4(v2);
    sub_1400B6010(v3);
  }
  v4 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    sub_1400B6010(v4);
  }
  return a1;
}
