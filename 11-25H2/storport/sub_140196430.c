/*
 * XREFs of sub_140196430 @ 0x140196430
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14019564C @ 0x14019564C (sub_14019564C.c)
 *     sub_140195A38 @ 0x140195A38 (sub_140195A38.c)
 *     sub_140195D40 @ 0x140195D40 (sub_140195D40.c)
 *     sub_140195E90 @ 0x140195E90 (sub_140195E90.c)
 *     sub_140195ED0 @ 0x140195ED0 (sub_140195ED0.c)
 */

__int64 __fastcall sub_140196430(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  int v6; // r15d
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  char *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r10
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rax
  PVOID v19; // r14
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  unsigned __int64 v25; // rdx
  char v26; // r12
  _BYTE *v27; // r9
  unsigned __int8 v28; // r10
  char v29; // si
  char v30; // r11
  char v31; // r13
  char *v32; // r11
  int v33; // eax
  unsigned int v34; // r8d
  unsigned int *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  char v38; // cl
  char v39; // r8
  _BYTE *v40; // rax
  unsigned int v41; // eax
  char v42; // al
  __int64 v44; // [rsp+20h] [rbp-59h]
  __int64 v45; // [rsp+28h] [rbp-51h]
  __int64 v46; // [rsp+30h] [rbp-49h]
  char v47; // [rsp+60h] [rbp-19h] BYREF
  char v48[7]; // [rsp+61h] [rbp-18h] BYREF
  PVOID v49; // [rsp+68h] [rbp-11h] BYREF
  char *v50; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v51; // [rsp+78h] [rbp-1h] BYREF
  GUID v52; // [rsp+80h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v48[0] = 0;
  v49 = 0LL;
  v51 = 0LL;
  v47 = 0;
  v50 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( !*(_BYTE *)(a2 + 64) )
  {
    if ( *(_DWORD *)(v2 + 16) < 0x48u )
    {
      v6 = -1073741789;
      goto LABEL_27;
    }
    v7 = *(_QWORD *)(v2 + 32);
    if ( *(_DWORD *)v7 != 72 )
    {
      v6 = -1073741811;
      goto LABEL_27;
    }
    v6 = sub_140195A38(a1, (__int64 *)&v51);
    if ( v6 >= 0 )
    {
      v9 = sub_14019564C(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL), v8, v7, (__int64 *)&v49, v48, &v50, &v47);
      v10 = v50;
      v6 = v9;
      if ( v9 < 0 )
      {
        v19 = v49;
      }
      else
      {
        if ( !v47 )
        {
          v11 = *(_QWORD **)(v7 + 64);
          v12 = v50 + 8;
          if ( *v11 != v7 + 56 )
            goto LABEL_16;
          *v12 = v7 + 56;
          *((_QWORD *)v10 + 2) = v11;
          *v11 = v12;
          *(_QWORD *)(v7 + 64) = v12;
        }
        v13 = v51;
        v14 = v49;
        v50 = 0LL;
        v51[8] = v10;
        v10 = 0LL;
        if ( !v48[0] )
        {
          v15 = *(_QWORD **)(v7 + 48);
          v16 = v14 + 1;
          if ( *v15 != v7 + 40 )
            goto LABEL_16;
          *v16 = v7 + 40;
          v14[2] = v15;
          *v15 = v16;
          *(_QWORD *)(v7 + 48) = v16;
        }
        v13[7] = v14;
        v17 = *(_QWORD **)(v7 + 32);
        v18 = v13 + 1;
        v19 = 0LL;
        v49 = 0LL;
        if ( *v17 != v7 + 24 )
LABEL_16:
          __fastfail(3u);
        *v18 = v7 + 24;
        v13[2] = v17;
        *v17 = v18;
        *(_QWORD *)(v7 + 32) = v18;
        *(_QWORD *)(v7 + 16) = v13;
        v51 = 0LL;
      }
      if ( !v47 && v10 )
        sub_140195ED0((PVOID *)&v50);
      if ( !v48[0] && v19 )
        sub_140195D40(&v49);
    }
    if ( v51 )
      sub_140195E90((PVOID *)&v51);
    goto LABEL_27;
  }
  v6 = -1073741790;
LABEL_27:
  v20 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v20 )
    goto LABEL_93;
  v52 = 0LL;
  IoGetActivityIdIrp(a2, &v52);
  v22 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v22 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_93;
    v24 = &stru_140148B18;
    goto LABEL_92;
  }
  if ( *(_BYTE *)v22 != 15 )
  {
    if ( *(_BYTE *)v22 != 27 )
      goto LABEL_93;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v23 = *(int **)(a2 + 56);
        if ( v23 )
          v3 = *v23;
        LODWORD(v45) = *(_DWORD *)(a2 + 48);
        LODWORD(v44) = v3;
        sub_140056AB0(v21, v22, &v52, a2, v44, v45);
      }
      goto LABEL_93;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_93;
    v24 = &stru_140149FE8;
LABEL_92:
    LODWORD(v44) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v21, v24, &v52, a2, v44);
    goto LABEL_93;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_93;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = 0;
  v27 = 0LL;
  v47 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( *(_BYTE *)(v25 + 2) != 40 )
  {
    v38 = *(_BYTE *)(v25 + 72);
    v27 = *(_BYTE **)(v25 + 32);
    v28 = *(_BYTE *)(v25 + 11);
    v26 = *(_BYTE *)(v25 + 4);
    if ( !*(_BYTE *)(v25 + 2) )
      goto LABEL_69;
    goto LABEL_93;
  }
  v32 = 0LL;
  v48[0] = 0;
  if ( *(_DWORD *)(v25 + 20) )
    goto LABEL_93;
  v33 = *(_DWORD *)(v25 + 56);
  v21 = 0LL;
  LODWORD(v50) = 0;
  LODWORD(v49) = v33;
  if ( !v33 )
    goto LABEL_66;
  v34 = (unsigned int)v49;
  v35 = (unsigned int *)(v25 + 120);
  v51 = (_QWORD *)(v25 + 120);
  while ( 1 )
  {
    v36 = *v35;
    if ( (unsigned int)v36 >= 0x80 )
    {
      v37 = *(unsigned int *)(v25 + 16);
      if ( (unsigned int)v36 < (unsigned int)v37 )
        break;
    }
LABEL_60:
    v21 = (unsigned int)(v21 + 1);
    v35 = (unsigned int *)v51 + 1;
    LODWORD(v50) = v21;
    v51 = (_QWORD *)((char *)v51 + 4);
    if ( (unsigned int)v21 >= v34 )
      goto LABEL_66;
  }
  if ( *(_DWORD *)(v36 + v25) != 64 )
  {
    v21 = (unsigned int)(*(_DWORD *)(v36 + v25) - 65);
    if ( *(_DWORD *)(v36 + v25) == 65 )
    {
      v21 = v36 + 56;
      if ( v36 + 56 <= v37 )
      {
        v48[0] = 1;
        if ( *(_BYTE *)(v36 + v25 + 10) )
          v32 = (char *)(v36 + v25 + 24);
        v26 = *(_BYTE *)(v36 + v25 + 8);
        v27 = *(_BYTE **)(v36 + v25 + 16);
        v28 = *(_BYTE *)(v36 + v25 + 9);
      }
    }
    else if ( *(_DWORD *)(v36 + v25) == 66 )
    {
      v21 = v36 + 40;
      if ( v36 + 40 <= v37 )
      {
        if ( *(_DWORD *)(v36 + v25 + 12) )
          v32 = (char *)(v36 + v25 + 32);
        v27 = *(_BYTE **)(v36 + v25 + 24);
        goto LABEL_65;
      }
    }
    goto LABEL_58;
  }
  v21 = v36 + 40;
  if ( v36 + 40 > v37 )
  {
LABEL_58:
    if ( v48[0] )
      goto LABEL_66;
    LODWORD(v21) = (_DWORD)v50;
    v34 = (unsigned int)v49;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(v36 + v25 + 10) )
    v32 = (char *)(v36 + v25 + 24);
  v27 = *(_BYTE **)(v36 + v25 + 16);
LABEL_65:
  v28 = *(_BYTE *)(v36 + v25 + 9);
  v26 = *(_BYTE *)(v36 + v25 + 8);
LABEL_66:
  if ( v32 )
  {
    v38 = *v32;
    v30 = 0;
LABEL_69:
    LOBYTE(v21) = v38 - 8;
    if ( (v21 & 0x5D) == 0 )
    {
      v39 = *(_BYTE *)(v25 + 3);
      if ( v39 == 1 || !v27 || !v28 )
        goto LABEL_88;
      LOBYTE(v25) = 0;
      v21 = (unsigned __int64)&v27[v28];
      v40 = v27 + 8;
      if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v40 <= v21 )
        {
          LOBYTE(v25) = 1;
          v30 = v27[2];
          v29 = v27[1] & 0xF;
          v31 = v27[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v40 <= v21 )
        {
          v29 = v27[2] & 0xF;
          v41 = v28;
          if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
            v41 = (unsigned __int8)v27[7] + 8;
          v21 = (unsigned __int64)(v27 + 13);
          v25 = (unsigned __int64)&v27[v41];
          if ( (unsigned __int64)(v27 + 13) > v25 )
            v47 = 0;
          else
            v47 = v27[12];
          if ( (unsigned __int64)(v27 + 14) <= v25 )
            v31 = *(_BYTE *)v21;
          LOBYTE(v25) = 1;
        }
        v30 = v47;
      }
      if ( (_BYTE)v25 )
      {
        LOBYTE(v3) = v30;
        v42 = v31;
      }
      else
      {
LABEL_88:
        v29 = 0;
        v42 = 0;
      }
      LOBYTE(v46) = v26;
      LOBYTE(v45) = v39;
      LODWORD(v44) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v21, v25, &v52, a2, v44, v45, v46, v29, v3, v42, a2);
    }
  }
LABEL_93:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
