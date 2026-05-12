/*
 * XREFs of sub_14019E49C @ 0x14019E49C
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14019E49C(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 *v3; // rsi
  int v4; // ebx
  __int64 v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 v14; // rdx
  char v15; // r15
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r13
  char v20; // r12
  char *v21; // r11
  unsigned int v22; // r14d
  unsigned __int64 v23; // rbp
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  unsigned __int64 v30; // r8
  char v31; // al
  int v33; // [rsp+20h] [rbp-98h]
  char v34; // [rsp+60h] [rbp-58h]
  unsigned int v35; // [rsp+64h] [rbp-54h]
  unsigned int v36; // [rsp+68h] [rbp-50h]
  GUID v37; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = (__int64 *)(a2 + 184);
  v4 = 0;
  if ( v2 && *(_DWORD *)(*v3 + 8) >= 8u )
  {
    *(_DWORD *)v2 = 8;
    v6 = 0LL;
    *(_BYTE *)(v2 + 4) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 56LL);
    do
    {
      *(_BYTE *)(v2 + v6 + 5) = *(_BYTE *)(v6 + *(_QWORD *)(a1 + 16) + 616);
      ++v6;
    }
    while ( v6 < 2 );
    v7 = 0;
    *(_BYTE *)(v2 + 7) = *(_BYTE *)(a1 + 56);
    v8 = 8LL;
  }
  else
  {
    v7 = -1073741789;
    v8 = 0LL;
  }
  *(_QWORD *)(a2 + 56) = v8;
  v9 = byte_140168DAA == 0;
  v35 = v7;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v9 )
    goto LABEL_70;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v11 = *v3;
  if ( *(_BYTE *)*v3 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_70;
    v33 = *(_DWORD *)(a2 + 48);
    v13 = &stru_140148B18;
    goto LABEL_69;
  }
  if ( *(_BYTE *)*v3 != 15 )
  {
    if ( *(_BYTE *)*v3 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v4 = *v12;
        sub_140056AB0(v10, v11, &v37, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_70;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_70;
    v13 = &stru_140149FE8;
    v33 = *(_DWORD *)(a2 + 48);
LABEL_69:
    sub_140052F3C(v10, v13, &v37, a2, v33);
    goto LABEL_70;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_70;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( *(_BYTE *)(v14 + 2) )
      goto LABEL_70;
LABEL_48:
    LOBYTE(v10) = v26 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_70;
    if ( *(_BYTE *)(v14 + 3) == 1 || !v16 || !v17 )
      goto LABEL_65;
    v27 = 0;
    v10 = (unsigned __int64)&v16[v17];
    v28 = v16 + 8;
    if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v28 > v10 )
        goto LABEL_63;
      v19 = v16[2];
      v18 = v16[1] & 0xF;
      v20 = v16[3];
    }
    else
    {
      if ( (unsigned __int64)v28 > v10 )
        goto LABEL_63;
      v18 = v16[2] & 0xF;
      v29 = v17;
      if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
        v29 = (unsigned __int8)v16[7] + 8;
      v10 = (unsigned __int64)(v16 + 13);
      v30 = (unsigned __int64)&v16[v29];
      if ( (unsigned __int64)(v16 + 13) <= v30 )
        v19 = v16[12];
      if ( (unsigned __int64)(v16 + 14) <= v30 )
        v20 = *(_BYTE *)v10;
    }
    v27 = 1;
LABEL_63:
    if ( v27 )
    {
      LOBYTE(v4) = v19;
      v31 = v20;
LABEL_66:
      sub_140052E64(v10, v14, &v37, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v14 + 3), v15, v18, v4, v31, a2);
      goto LABEL_70;
    }
LABEL_65:
    v18 = 0;
    v31 = 0;
    goto LABEL_66;
  }
  v21 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_70;
  v22 = 0;
  v36 = *(_DWORD *)(v14 + 56);
  if ( !v36 )
    goto LABEL_45;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v14 + 4LL * v22 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v23 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v10 < (unsigned int)v23 )
        break;
    }
LABEL_38:
    if ( ++v22 >= v36 )
      goto LABEL_44;
  }
  v24 = (unsigned int)v10;
  v25 = *(_DWORD *)(v10 + v14) - 64;
  if ( v25 )
  {
    v10 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        v10 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v14 + 12) )
            v21 = (char *)(v24 + v14 + 32);
          v16 = *(_BYTE **)(v24 + v14 + 24);
          goto LABEL_43;
        }
      }
    }
    else
    {
      v10 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v24 + v14 + 10) )
          v21 = (char *)(v24 + v14 + 24);
        v15 = *(_BYTE *)(v24 + v14 + 8);
        v16 = *(_BYTE **)(v24 + v14 + 16);
        v17 = *(_BYTE *)(v24 + v14 + 9);
      }
    }
    goto LABEL_37;
  }
  v10 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_37:
    if ( v34 )
      goto LABEL_44;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v24 + v14 + 10) )
    v21 = (char *)(v24 + v14 + 24);
  v16 = *(_BYTE **)(v24 + v14 + 16);
LABEL_43:
  v17 = *(_BYTE *)(v24 + v14 + 9);
  v15 = *(_BYTE *)(v24 + v14 + 8);
LABEL_44:
  v7 = v35;
LABEL_45:
  if ( v21 )
  {
    v26 = *v21;
    goto LABEL_48;
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
