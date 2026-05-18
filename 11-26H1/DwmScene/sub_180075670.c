/*
 * XREFs of sub_180075670 @ 0x180075670
 * Callers:
 *     sub_180075B8C @ 0x180075B8C (sub_180075B8C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_18007595C @ 0x18007595C (sub_18007595C.c)
 *     sub_180075A8C @ 0x180075A8C (sub_180075A8C.c)
 *     sub_180075E88 @ 0x180075E88 (sub_180075E88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180075670(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // r10
  int v9; // r9d
  char v10; // dl
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  v17 = a1;
  v7 = *(_QWORD *)(qword_1801CDAC8 + 8);
  v16 = (unsigned __int64)v7;
  v8 = qword_1801CDAC8;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v16 = v7;
      if ( *(_DWORD *)(v7 + 32) >= v9 )
      {
        v10 = 0;
        DWORD2(v16) = 1;
        v8 = v7;
      }
      else
      {
        v10 = 1;
        DWORD2(v16) = 0;
      }
      v11 = (__int64 *)(v7 + 16);
      if ( !v10 )
        v11 = (__int64 *)v7;
      v7 = *v11;
    }
    while ( !*(_BYTE *)(*v11 + 25) );
  }
  if ( *(_BYTE *)(v8 + 25) || *a3 < *(_DWORD *)(v8 + 32) )
  {
    if ( qword_1801CDAD0 == 0x492492492492492LL )
      sub_18001DF68();
    v17 = qword_1801CDAC8;
    v12 = sub_180011790(0x38uLL);
    sub_18007595C(v13, v12 + 32, a3, a4, &qword_1801CDAC8, 0LL);
    sub_180013074((__int64 *)v12, &v17);
    sub_180013074((__int64 *)(v12 + 8), &v17);
    sub_180013074((__int64 *)(v12 + 16), &v17);
    *(_WORD *)(v12 + 24) = 0;
    *((_QWORD *)&v15 + 1) = 0LL;
    sub_180075A8C(&v15);
    v15 = v16;
    *(_QWORD *)a2 = sub_180075E88(&qword_1801CDAC8, &v15, v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
