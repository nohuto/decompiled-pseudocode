/*
 * XREFs of sub_18007EDAC @ 0x18007EDAC
 * Callers:
 *     sub_180043704 @ 0x180043704 (sub_180043704.c)
 *     sub_18004ED7C @ 0x18004ED7C (sub_18004ED7C.c)
 *     sub_18006E60C @ 0x18006E60C (sub_18006E60C.c)
 *     sub_18007E34C @ 0x18007E34C (sub_18007E34C.c)
 *     sub_18008DF20 @ 0x18008DF20 (sub_18008DF20.c)
 *     sub_180093D70 @ 0x180093D70 (sub_180093D70.c)
 *     sub_180094020 @ 0x180094020 (sub_180094020.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 *     sub_18007EE1C @ 0x18007EE1C (sub_18007EE1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007EDAC(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_18007C6F4(*(_QWORD *)(a1 + 16), a2);
  v8[0] = *a3;
  v8[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  result = sub_18007EE1C(a1, v5, v8);
  v7 = a3[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
