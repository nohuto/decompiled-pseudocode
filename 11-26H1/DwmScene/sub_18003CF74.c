/*
 * XREFs of sub_18003CF74 @ 0x18003CF74
 * Callers:
 *     sub_18008B770 @ 0x18008B770 (sub_18008B770.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_180013E60 @ 0x180013E60 (sub_180013E60.c)
 *     sub_18001955C @ 0x18001955C (sub_18001955C.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003D1E8 @ 0x18003D1E8 (sub_18003D1E8.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_18003CF74(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 *v5; // rax
  __int128 *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-89h] BYREF
  __int64 v9; // [rsp+30h] [rbp-81h]
  __int64 v10; // [rsp+38h] [rbp-79h] BYREF
  __int64 v11; // [rsp+40h] [rbp-71h]
  _OWORD v12[4]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v13[4]; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v14[4]; // [rsp+C8h] [rbp+17h] BYREF

  v4 = 0;
  if ( *sub_180013644(a1, &v8) )
  {
    v5 = sub_180013644(a1, &v10);
    v4 = 1;
    v6 = sub_18003BCCC(*v5, v14);
  }
  else
  {
    v12[0] = xmmword_1800FA780;
    v12[1] = xmmword_1800FA790;
    v12[2] = xmmword_1800FA7A0;
    v12[3] = xmmword_1800FA7B0;
    v6 = v12;
  }
  v13[0] = *v6;
  v13[1] = v6[1];
  v13[2] = v6[2];
  v13[3] = v6[3];
  if ( (v4 & 1) != 0 && v11 )
    sub_180010EC8(v11);
  if ( v9 )
    sub_180010EC8(v9);
  sub_18001955C(v13, (__int64)v12);
  sub_18003D1E8(&v8, a2, v12);
  v10 = v8;
  LODWORD(v11) = v9;
  return sub_180013E60(a1, &v10);
}
