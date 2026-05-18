/*
 * XREFs of sub_18008FA84 @ 0x18008FA84
 * Callers:
 *     sub_18006E60C @ 0x18006E60C (sub_18006E60C.c)
 *     sub_180093D70 @ 0x180093D70 (sub_180093D70.c)
 *     sub_180094020 @ 0x180094020 (sub_180094020.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180038D44 @ 0x180038D44 (sub_180038D44.c)
 *     sub_1800592E4 @ 0x1800592E4 (sub_1800592E4.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008FA84(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 *v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_1800592E4(a1, &v12, a2);
  sub_180038D44(v12, a3, a4, a5);
  v8 = sub_180012C40(v14, a3);
  result = sub_18005A8BC(a1, v8);
  if ( v13 )
    result = sub_180010EC8(v13);
  v10 = a3[1];
  if ( v10 )
    result = sub_180010EC8(v10);
  v11 = *(_QWORD *)(a4 + 8);
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}
