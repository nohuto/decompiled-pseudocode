/*
 * XREFs of sub_180012470 @ 0x180012470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180038C44 @ 0x180038C44 (sub_180038C44.c)
 *     sub_1800C05D4 @ 0x1800C05D4 (sub_1800C05D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180012470(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  sub_180012B20(&v8);
  sub_1800C05D4(a1, &v6);
  v2 = v6;
  if ( v6 )
  {
    sub_180029EF8(v6 + 24);
    sub_180038C44(*(_QWORD *)(v2 + 272));
  }
  if ( v7 )
    sub_180010EC8(v7);
  sub_180012B20(&v6);
  v3 = v8;
  a1[34] = v8;
  v4 = v6;
  a1[35] = v6;
  result = v4 - v3;
  a1[36] = result;
  return result;
}
