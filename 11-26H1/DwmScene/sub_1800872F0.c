/*
 * XREFs of sub_1800872F0 @ 0x1800872F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180012D9C @ 0x180012D9C (sub_180012D9C.c)
 *     sub_18001B4F8 @ 0x18001B4F8 (sub_18001B4F8.c)
 *     sub_18004ED7C @ 0x18004ED7C (sub_18004ED7C.c)
 *     sub_18004EDB4 @ 0x18004EDB4 (sub_18004EDB4.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     sub_180086570 @ 0x180086570 (sub_180086570.c)
 *     sub_180086B94 @ 0x180086B94 (sub_180086B94.c)
 *     sub_180086C54 @ 0x180086C54 (sub_180086C54.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800872F0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // xmm6_4
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h]
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(sub_18007AB60(a1) + 512);
  v18 = 0LL;
  sub_18004ED7C(v6, a1 + 1768, &v18);
  v18 = 0LL;
  sub_18004ED7C(v6, a1 + 1848, &v18);
  sub_180012A94(a1 + 56, &v16);
  sub_180012D9C(v16, &v18);
  if ( v17 )
    sub_180010EC8(v17);
  v7 = v18;
  if ( *(_BYTE *)(v18 + 124) )
  {
    v8 = 0;
    if ( *(float *)(v18 + 104) > 0.0 )
    {
      sub_180086570(a1);
      if ( *(_DWORD *)(a1 + 1960) )
      {
        v8 = 1065353216;
        v9 = 3;
        if ( *(_DWORD *)(v7 + 120) != 2 )
          v9 = 1;
      }
      else if ( *(_DWORD *)(a1 + 1944) )
      {
        v9 = 4;
        if ( *(_DWORD *)(v7 + 120) != 2 )
          v9 = 2;
      }
      else
      {
        v8 = 1065353216;
        v9 = 3;
        if ( *(_DWORD *)(v7 + 120) != 2 )
          v9 = 1;
      }
      *(_DWORD *)(a1 + 412) = sub_18001B4F8(a1, v9);
      *(_DWORD *)(a1 + 312) = v8;
      v11 = *(_DWORD *)(a1 + 1940) - v10;
      *(_DWORD *)(a1 + 372) = v10;
      *(_DWORD *)(a1 + 376) = v10;
      *(_DWORD *)(a1 + 380) = v11;
      *(_DWORD *)(a1 + 384) = v11;
      *(_BYTE *)(a1 + 388) = v10;
      sub_180059AA0(v12, a2, a3);
      v13 = sub_180086C54(a1, &v16);
      sub_18004ED7C(v6, a1 + 1768, v13);
      if ( v17 )
        sub_180010EC8(v17);
      v14 = sub_180086B94(a1, &v16);
      sub_18004ED7C(v6, a1 + 1848, v14);
      if ( v17 )
        sub_180010EC8(v17);
    }
  }
  sub_180012C40(&v16, (_QWORD *)(a1 + 1816));
  sub_18004EDB4(v6, a1 + 1768, &v16);
  if ( v17 )
    sub_180010EC8(v17);
  sub_180012C40(&v16, (_QWORD *)(a1 + 1896));
  result = sub_18004EDB4(v6, a1 + 1848, &v16);
  if ( v17 )
    result = sub_180010EC8(v17);
  if ( *((_QWORD *)&v18 + 1) )
    return sub_180010EC8(*((__int64 *)&v18 + 1));
  return result;
}
