/*
 * XREFs of sub_180015E60 @ 0x180015E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180033D9C @ 0x180033D9C (sub_180033D9C.c)
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_180040D64 @ 0x180040D64 (sub_180040D64.c)
 *     sub_180041100 @ 0x180041100 (sub_180041100.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180015E60(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int128 *v6; // rax
  char v7; // bl
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r10
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-59h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h]
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h]
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-21h]
  _QWORD v24[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-9h] BYREF
  __int64 v26; // [rsp+78h] [rbp-1h]
  __int64 v27; // [rsp+80h] [rbp+7h] BYREF
  __int64 v28; // [rsp+88h] [rbp+Fh]
  _QWORD v29[4]; // [rsp+90h] [rbp+17h] BYREF
  _BYTE v30[16]; // [rsp+B0h] [rbp+37h] BYREF

  v3 = qword_1801C8518;
  v4 = (__int64 *)(a1 + 32);
  sub_18001367C(*(_QWORD *)(a1 + 32), &v27);
  v5 = v27;
  sub_180029C50(v27 + 16, v30);
  sub_180013644(*v4, &v25);
  if ( a2 )
  {
    v6 = (__int128 *)sub_180012C40(&v18, (_QWORD *)(a2 + 32));
    v7 = 1;
  }
  else
  {
    v17 = 0LL;
    v6 = &v17;
    v7 = 2;
  }
  sub_180012C40(&v20, v6);
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( *((_QWORD *)&v17 + 1) )
      sub_180010EC8(*((__int64 *)&v17 + 1));
  }
  if ( (v7 & 1) != 0 && v19 )
    sub_180010EC8(v19);
  if ( v25 != v20 )
  {
    v17 = 0LL;
    if ( v20 )
    {
      v11 = (__int64 *)sub_18001367C(v20, &v22);
      sub_180011F5C(&v17, v11);
      if ( v23 )
        sub_180010EC8(v23);
      v8 = v17;
    }
    else
    {
      sub_180033D9C(*(_QWORD *)(v3 + 56), &v18);
      sub_180011F5C(&v17, &v18);
      if ( v19 )
        sub_180010EC8(v19);
      v8 = v17;
      sub_180029C50(v17 + 16, &v22);
      v9 = sub_180013440(v29, (__int64)&unk_1801C9038);
      v10 = (__int64 *)sub_180040570(v8, &v18, v9);
      sub_180011F5C(&v20, v10);
      if ( v19 )
        sub_180010EC8(v19);
      sub_180011E54((__int64)&v22);
    }
    if ( v5 == v8 )
    {
      sub_180012C40(v29, &v20);
      v15 = sub_180012C40(v24, v4);
      sub_180041100(v5, v15);
    }
    else
    {
      sub_180029C50(v8 + 16, v29);
      v12 = sub_180012C40(&v22, &v20);
      sub_18003AFB0(v13, &v18, 131075LL, v12);
      v14 = sub_180012C40(v24, v4);
      sub_180040D64(v5, v14);
      sub_180013540(v4, &v18);
      if ( v19 )
        sub_180010EC8(v19);
      sub_180011E54((__int64)v29);
    }
    if ( *((_QWORD *)&v17 + 1) )
      sub_180010EC8(*((__int64 *)&v17 + 1));
  }
  if ( v21 )
    sub_180010EC8(v21);
  if ( v26 )
    sub_180010EC8(v26);
  sub_180011E54((__int64)v30);
  if ( v28 )
    sub_180010EC8(v28);
  return 0LL;
}
