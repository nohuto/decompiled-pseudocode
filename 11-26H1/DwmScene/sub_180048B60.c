/*
 * XREFs of sub_180048B60 @ 0x180048B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001501C @ 0x18001501C (sub_18001501C.c)
 *     sub_18007AA80 @ 0x18007AA80 (sub_18007AA80.c)
 */

__int64 __fastcall sub_180048B60(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // xmm0_8
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_180012C40(&v8, a2);
  sub_18007AA80(a1, v4);
  sub_18001501C(&v8, a2);
  v5 = *(_QWORD *)(a1 + 104);
  result = v8;
  *(_OWORD *)(v8 + 88) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(result + 104) = v5;
  if ( v9 )
    result = sub_180010EC8(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
