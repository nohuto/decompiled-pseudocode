/*
 * XREFs of sub_18002F640 @ 0x18002F640
 * Callers:
 *     sub_180036C34 @ 0x180036C34 (sub_180036C34.c)
 *     sub_18006BDBC @ 0x18006BDBC (sub_18006BDBC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011AF4 @ 0x180011AF4 (sub_180011AF4.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 *     sub_18002FC28 @ 0x18002FC28 (sub_18002FC28.c)
 *     sub_1800313C4 @ 0x1800313C4 (sub_1800313C4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F640(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+28h] BYREF

  sub_180011AF4(a1, &v13, a3);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_QWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      sub_18001DF68();
    v11 = v5;
    v15 = *a1;
    v12 = (unsigned __int64)a1;
    v6 = sub_18002ECC8(1uLL);
    v7 = sub_180011790(v6);
    sub_18002FC28(v8, v7 + 32, v9, &v11);
    sub_180013074((__int64 *)v7, &v15);
    sub_180013074((__int64 *)(v7 + 8), &v15);
    sub_180013074((__int64 *)(v7 + 16), &v15);
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    sub_1800313C4(&v12);
    v12 = v13;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v12, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
