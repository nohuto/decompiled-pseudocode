/*
 * XREFs of sub_1800D44E0 @ 0x1800D44E0
 * Callers:
 *     sub_1800D4AA0 @ 0x1800D4AA0 (sub_1800D4AA0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180024FEC @ 0x180024FEC (sub_180024FEC.c)
 *     sub_180050BD8 @ 0x180050BD8 (sub_180050BD8.c)
 *     sub_1800D2558 @ 0x1800D2558 (sub_1800D2558.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D44E0(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  _DWORD *v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+28h] BYREF

  sub_180024FEC(a1, &v13, a3);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_DWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001DF68();
    v11 = v5;
    v15 = *a1;
    v12 = (unsigned __int64)a1;
    v6 = sub_180011790(0x68uLL);
    sub_1800D2558(v7, v6 + 32, v8, &v11);
    sub_180013074((__int64 *)v6, &v15);
    sub_180013074((__int64 *)(v6 + 8), &v15);
    sub_180013074((__int64 *)(v6 + 16), &v15);
    *(_WORD *)(v6 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_180050BD8((__int64)&v12, v9);
    v12 = v13;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v12, v6);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
