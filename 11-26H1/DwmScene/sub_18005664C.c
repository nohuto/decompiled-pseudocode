/*
 * XREFs of sub_18005664C @ 0x18005664C
 * Callers:
 *     sub_18005AA68 @ 0x18005AA68 (sub_18005AA68.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180055F5C @ 0x180055F5C (sub_180055F5C.c)
 *     sub_1800568A0 @ 0x1800568A0 (sub_1800568A0.c)
 *     sub_180056FDC @ 0x180056FDC (sub_180056FDC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005664C(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rsi
  char v9; // cl
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  _DWORD *v18; // [rsp+A8h] [rbp+48h] BYREF

  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  v16 = (unsigned __int64)v7;
  v8 = v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    *(_QWORD *)&v16 = v7;
    v9 = sub_180055F5C((_DWORD *)(v7 + 32), a3);
    if ( v9 )
    {
      DWORD2(v16) = 0;
    }
    else
    {
      DWORD2(v16) = 1;
      v8 = v7;
    }
    v10 = (__int64 *)(v7 + 16);
    if ( !v9 )
      v10 = (__int64 *)v7;
    v7 = *v10;
  }
  if ( *(_BYTE *)(v8 + 25) || sub_180055F5C(a3, (_DWORD *)(v8 + 32)) )
  {
    if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
      sub_18001DF68();
    v18 = a3;
    v17 = v6;
    *(_QWORD *)&v15 = a1;
    v11 = sub_180011790(0x58uLL);
    sub_1800568A0(v12, v11 + 32, v13, &v18);
    sub_180013074((__int64 *)v11, &v17);
    sub_180013074((__int64 *)(v11 + 8), &v17);
    sub_180013074((__int64 *)(v11 + 16), &v17);
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v15 + 1) = 0LL;
    sub_180056FDC(&v15);
    v15 = v16;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v15, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
