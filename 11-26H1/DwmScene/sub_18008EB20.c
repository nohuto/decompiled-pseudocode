/*
 * XREFs of sub_18008EB20 @ 0x18008EB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180013E60 @ 0x180013E60 (sub_180013E60.c)
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008EB20(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+28h] [rbp-28h]
  unsigned __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  int v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+48h] [rbp-8h]

  sub_180012A94(a1 + 56, &v8);
  v4 = 0x3F80000000000000LL;
  v5 = 0;
  sub_180013E60(v8, &v4);
  v4 = 0x3F80000000000000LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  result = sub_18003BF34(v8, &v6, (__int64)&v4);
  *(_QWORD *)(a1 + 96) = 0LL;
  v3 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v3 )
    result = sub_180010EC8(v3);
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 124) = 0LL;
  *(_QWORD *)(a1 + 132) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 116) = 1065353216LL;
  *(_QWORD *)(a1 + 140) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  if ( v9 )
    return sub_180010EC8(v9);
  return result;
}
