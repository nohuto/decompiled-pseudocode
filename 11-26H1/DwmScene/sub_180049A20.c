/*
 * XREFs of sub_180049A20 @ 0x180049A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18007E080 @ 0x18007E080 (sub_18007E080.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_180049A20(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v22[7]; // [rsp+50h] [rbp-38h] BYREF

  v5 = sub_180012C40(v19, a2)[1];
  if ( v5 )
    sub_180010EC8(v5);
  sub_180029EF8(*a2 + 24LL, v4);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 104);
  result = 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v7) >> 3);
  if ( result )
  {
    v9 = 0LL;
    do
    {
      if ( *(_QWORD *)(v9 + v7 + 40) )
      {
        v10 = sub_180012C40(v19, a2);
        sub_18007E080(v11, v10);
      }
      if ( *(_QWORD *)(v9 + v7 + 24) )
      {
        v12 = sub_180012C40(&v20, a2);
        sub_18007E080(v13, v12);
      }
      if ( *(_QWORD *)(v9 + v7 + 56) )
      {
        v14 = sub_180012C40(&v21, a2);
        sub_18007E080(v15, v14);
      }
      if ( *(_QWORD *)(v9 + v7 + 72) )
      {
        v16 = sub_180012C40(v22, a2);
        sub_18007E080(v17, v16);
      }
      ++v6;
      v9 += 88LL;
      v7 = *(_QWORD *)(a1 + 104);
      result = 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v7) >> 3);
    }
    while ( v6 < result );
  }
  v18 = a2[1];
  if ( v18 )
    return sub_180010EC8(v18);
  return result;
}
