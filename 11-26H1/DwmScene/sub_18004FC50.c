/*
 * XREFs of sub_18004FC50 @ 0x18004FC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180017DA0 @ 0x180017DA0 (sub_180017DA0.c)
 *     sub_18004F828 @ 0x18004F828 (sub_18004F828.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_1800500E0 @ 0x1800500E0 (sub_1800500E0.c)
 *     sub_18007AA80 @ 0x18007AA80 (sub_18007AA80.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004FC50(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_180012C40(&v8, a2);
  sub_18007AA80(a1, v4);
  sub_180017DA0(&v8, a2);
  v5 = v8;
  *(_DWORD *)(v8 + 92) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 100) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(a1 + 104);
  sub_18004F828((_DWORD *)(v5 + 108), (_DWORD *)(a1 + 108));
  sub_18004F930((_DWORD *)(v5 + 256), (_DWORD *)(a1 + 256));
  sub_180013540((__int64 *)(v5 + 432), (_QWORD *)(a1 + 432));
  sub_180013540((__int64 *)(v5 + 448), (_QWORD *)(a1 + 448));
  sub_180013540((__int64 *)(v5 + 512), (_QWORD *)(a1 + 512));
  *(_DWORD *)(v5 + 528) = *(_DWORD *)(a1 + 528);
  result = sub_1800500E0(v5);
  if ( v9 )
    result = sub_180010EC8(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
