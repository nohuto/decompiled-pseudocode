/*
 * XREFs of sub_1800880D0 @ 0x1800880D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18001F45C @ 0x18001F45C (sub_18001F45C.c)
 *     sub_180060168 @ 0x180060168 (sub_180060168.c)
 *     sub_18007AA80 @ 0x18007AA80 (sub_18007AA80.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800880D0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_180012C40(&v8, a2);
  sub_18007AA80(a1, v4);
  sub_180060168(&v8, a2);
  v5 = v8;
  *(_BYTE *)(v8 + 88) = *(_BYTE *)(a1 + 88);
  sub_180013540((__int64 *)(v5 + 96), (_QWORD *)(a1 + 96));
  sub_18001F45C((void **)(v5 + 112), a1 + 112);
  *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(v5 + 144) = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(v5 + 152) = *(_QWORD *)(a1 + 152);
  result = *(unsigned int *)(a1 + 160);
  *(_DWORD *)(v5 + 160) = result;
  if ( v9 )
    result = sub_180010EC8(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
