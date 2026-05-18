/*
 * XREFs of sub_180013A30 @ 0x180013A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180012E6C @ 0x180012E6C (sub_180012E6C.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180019470 @ 0x180019470 (sub_180019470.c)
 *     sub_18001BF48 @ 0x18001BF48 (sub_18001BF48.c)
 *     sub_18001C078 @ 0x18001C078 (sub_18001C078.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180033D9C @ 0x180033D9C (sub_180033D9C.c)
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_180040D64 @ 0x180040D64 (sub_180040D64.c)
 *     sub_180041100 @ 0x180041100 (sub_180041100.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180013A30(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  char v5; // r12
  __int128 *v6; // rax
  char v7; // di
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r15
  _QWORD *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  _DWORD *v16; // rsi
  _DWORD *v17; // rdi
  _QWORD *j; // rdx
  _QWORD *v19; // rax
  __int64 v20; // r10
  _QWORD *v21; // rax
  _QWORD *i; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v28; // [rsp+20h] [rbp-89h] BYREF
  __int64 v29; // [rsp+28h] [rbp-81h]
  __int128 v30; // [rsp+30h] [rbp-79h] BYREF
  __int64 v31; // [rsp+40h] [rbp-69h] BYREF
  __int64 v32; // [rsp+48h] [rbp-61h]
  __int64 v33; // [rsp+50h] [rbp-59h] BYREF
  __int64 v34; // [rsp+58h] [rbp-51h]
  __int64 v35; // [rsp+60h] [rbp-49h] BYREF
  __int64 v36; // [rsp+68h] [rbp-41h]
  _QWORD v37[3]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v38[4]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v40; // [rsp+B0h] [rbp+7h]
  _BYTE v41[72]; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v42; // [rsp+110h] [rbp+67h]

  v4 = qword_1801C8518;
  v42 = qword_1801C8518;
  sub_18001367C(*(_QWORD *)(a1 + 16), &v33);
  sub_180029C50(v33 + 16, v41);
  sub_180013644(*(_QWORD *)(a1 + 16), &v39);
  v5 = 1;
  if ( a2 )
  {
    v6 = (__int128 *)sub_180012C40(&v28, (_QWORD *)(a2 + 32));
    v7 = 1;
  }
  else
  {
    v30 = 0LL;
    v6 = &v30;
    v7 = 2;
  }
  sub_180012C40(&v31, v6);
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( *((_QWORD *)&v30 + 1) )
      sub_180010EC8(*((__int64 *)&v30 + 1));
  }
  if ( (v7 & 1) != 0 && v29 )
    sub_180010EC8(v29);
  v8 = v39;
  v9 = v31;
  if ( v39 != v31 )
  {
    v30 = 0LL;
    if ( v31 )
    {
      v15 = (__int64 *)sub_18001367C(v31, &v35);
      sub_180011F5C(&v30, v15);
      if ( v36 )
        sub_180010EC8(v36);
      v5 = 0;
      v12 = v30;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 184);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 104) = *(_DWORD *)(a1 + 200);
        *(_QWORD *)(a1 + 184) = 0LL;
        v11 = *(_QWORD *)(a1 + 192);
        *(_QWORD *)(a1 + 192) = 0LL;
        if ( v11 )
          sub_180010EC8(v11);
      }
      sub_180033D9C(*(_QWORD *)(v4 + 56), &v28);
      sub_180011F5C(&v30, &v28);
      if ( v29 )
        sub_180010EC8(v29);
      v12 = v30;
      sub_180029C50(v30 + 16, &v35);
      v13 = sub_180013440(v38, (__int64)&unk_1801C90B8);
      v14 = (__int64 *)sub_180040570(v12, &v28, v13);
      sub_180011F5C(&v31, v14);
      if ( v29 )
        sub_180010EC8(v29);
      sub_180011E54((__int64)&v35);
      v9 = v31;
    }
    v16 = (_DWORD *)(a1 + 48);
    if ( v33 == v12 )
    {
      v17 = (_DWORD *)(a1 + 48);
      if ( *v16 && *v16 != 4 && !v5 )
      {
        sub_180012E6C(v33, (__int64)v38);
        for ( i = (_QWORD *)v38[0]; i != (_QWORD *)v38[1]; i += 2 )
        {
          if ( *(float *)(*i + 104LL) > 0.000001 )
          {
            sub_180013540((__int64 *)(a1 + 184), i);
            break;
          }
        }
        sub_1800141F0(v38);
      }
      sub_180012C40(v38, &v31);
      v23 = sub_180012C40(v37, (_QWORD *)(a1 + 16));
      sub_180041100(v33, v23);
    }
    else
    {
      sub_180029C50(v12 + 16, v38);
      v17 = (_DWORD *)(a1 + 48);
      if ( *v16 && *v16 != 4 && !v5 )
      {
        sub_180012E6C(v12, (__int64)v37);
        for ( j = (_QWORD *)v37[0]; j != (_QWORD *)v37[1]; j += 2 )
        {
          if ( *(float *)(*j + 104LL) > 0.000001 )
          {
            sub_180013540((__int64 *)(a1 + 184), j);
            break;
          }
        }
        sub_1800141F0(v37);
      }
      v19 = sub_180012C40(&v35, &v31);
      sub_18003AFB0(v20, &v28, 131075LL, v19);
      v21 = sub_180012C40(v37, (_QWORD *)(a1 + 16));
      sub_180040D64(v33, v21);
      sub_180013540((__int64 *)(a1 + 16), &v28);
      if ( v29 )
        sub_180010EC8(v29);
      sub_180011E54((__int64)v38);
    }
    v24 = *(_QWORD *)(a1 + 184);
    if ( v24 )
      *(_DWORD *)(v24 + 104) = 0;
    if ( !*v17 || *v17 == 4 )
    {
      if ( v8 )
      {
        v25 = sub_180019470(v42, v8);
        if ( v25 )
        {
          if ( *v17 )
            sub_18001C078(v25, a1 + 72);
          else
            sub_18001BF48(v25, a1 + 52);
        }
      }
      if ( v9 )
      {
        v26 = sub_180019470(v42, v9);
        if ( v26 )
        {
          if ( *v17 )
            sub_18001C078(v26, a1 + 72);
          else
            sub_18001BF48(v26, a1 + 52);
        }
      }
    }
    if ( *((_QWORD *)&v30 + 1) )
      sub_180010EC8(*((__int64 *)&v30 + 1));
  }
  if ( v32 )
    sub_180010EC8(v32);
  if ( v40 )
    sub_180010EC8(v40);
  sub_180011E54((__int64)v41);
  if ( v34 )
    sub_180010EC8(v34);
  return 0LL;
}
