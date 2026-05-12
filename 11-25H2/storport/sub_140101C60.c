/*
 * XREFs of sub_140101C60 @ 0x140101C60
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140108D10 @ 0x140108D10 (sub_140108D10.c)
 *     sub_140108F3C @ 0x140108F3C (sub_140108F3C.c)
 *     sub_140109194 @ 0x140109194 (sub_140109194.c)
 *     sub_1401093A0 @ 0x1401093A0 (sub_1401093A0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140101C60(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v3; // ebx
  char v6; // cl
  __int64 v7; // r8
  unsigned int v8; // edi
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  unsigned __int8 v13; // al
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r9
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  char v22; // r15
  _BYTE *v23; // r8
  unsigned __int8 v24; // r10
  char v25; // r11
  char v26; // r13
  char v27; // r12
  char *v28; // r14
  unsigned int v29; // r9d
  unsigned int *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rbp
  char v33; // cl
  char v34; // r9
  _BYTE *v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // r9
  char v38; // al
  char v40; // [rsp+60h] [rbp-68h]
  int v41; // [rsp+68h] [rbp-60h]
  __int64 v42; // [rsp+70h] [rbp-58h]
  GUID v43; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  switch ( *(_BYTE *)(v2 + 9) & 0xF )
  {
    case 1:
      v7 = 1LL;
      break;
    case 3:
      v7 = 2LL;
      break;
    case 5:
      v7 = 3LL;
      break;
    case 6:
      v7 = 4LL;
      break;
    case 7:
      v7 = 5LL;
      break;
    case 8:
      v7 = 6LL;
      break;
    default:
      v6 = *(_BYTE *)(v2 + 8) & 0x1F;
      if ( ((v6 - 1) & 0xFC) == 0 && v6 != 3 )
        goto LABEL_10;
      v7 = 0LL;
      if ( v6 == 5 )
        goto LABEL_10;
      break;
  }
  if ( (*(_BYTE *)(v2 + 9) & 0xF0) != 0 )
  {
    v13 = *(_BYTE *)(v2 + 8) & 0x1F;
    if ( v13 > 7u )
      goto LABEL_10;
    v14 = 201;
    if ( !_bittest(&v14, v13) )
      goto LABEL_10;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL) + 520LL) & 0x20) == 0
    || !*(_BYTE *)(*(_QWORD *)(a1 + 176) + 31LL) )
  {
    v8 = -1073741808;
    goto LABEL_11;
  }
  v15 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v15 < 0x24 || *(_DWORD *)(v2 + 4) < v15 || (v16 = v2 + 10, (*(_BYTE *)(v2 + 30) & 8) != 0) )
  {
LABEL_10:
    v8 = -1073741811;
    goto LABEL_11;
  }
  switch ( *(_BYTE *)(v2 + 8) & 0x1F )
  {
    case 0:
      v7 = 0LL;
      goto LABEL_54;
    case 1:
      v18 = 0LL;
      goto LABEL_52;
    case 2:
      v19 = 0LL;
      goto LABEL_50;
    case 3:
      v19 = 1LL;
LABEL_50:
      v17 = sub_1401093A0(a1, v16, v7, v19);
      goto LABEL_55;
    case 4:
      v18 = 1LL;
      goto LABEL_52;
    case 5:
      v18 = 2LL;
LABEL_52:
      v17 = sub_140108D10(a1, v16, v7, v18);
      goto LABEL_55;
    case 6:
      LOBYTE(v7) = 1;
LABEL_54:
      v17 = sub_140108F3C(a1, v16, v7);
      goto LABEL_55;
  }
  if ( (*(_BYTE *)(v2 + 8) & 0x1F) != 7 )
    goto LABEL_10;
  v17 = sub_140109194(a1, v16, v7);
LABEL_55:
  v8 = v17;
LABEL_11:
  v9 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v9 )
    goto LABEL_110;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_110;
    v20 = &stru_140148B18;
    goto LABEL_109;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_110;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v3 = *v12;
        sub_140056AB0(v10, v11, &v43, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_110;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_110;
    v20 = &stru_140149FE8;
LABEL_109:
    sub_140052F3C(v10, v20, &v43, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_110;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_110;
  v21 = *(_QWORD *)(v11 + 8);
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v21 + 72);
    v23 = *(_BYTE **)(v21 + 32);
    v24 = *(_BYTE *)(v21 + 11);
    v22 = *(_BYTE *)(v21 + 4);
    if ( *(_BYTE *)(v21 + 2) )
      goto LABEL_110;
LABEL_88:
    LOBYTE(v10) = v33 - 8;
    if ( (v10 & 0x5D) != 0 )
      goto LABEL_110;
    if ( *(_BYTE *)(v21 + 3) == 1 || !v23 || !v24 )
      goto LABEL_105;
    v34 = 0;
    v10 = (unsigned __int64)&v23[v24];
    v35 = v23 + 8;
    if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v35 > v10 )
        goto LABEL_103;
      v26 = v23[2];
      v25 = v23[1] & 0xF;
      v27 = v23[3];
    }
    else
    {
      if ( (unsigned __int64)v35 > v10 )
        goto LABEL_103;
      v25 = v23[2] & 0xF;
      v36 = v24;
      if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
        v36 = (unsigned __int8)v23[7] + 8;
      v10 = (unsigned __int64)(v23 + 13);
      v37 = (unsigned __int64)&v23[v36];
      if ( (unsigned __int64)(v23 + 13) <= v37 )
        v26 = v23[12];
      if ( (unsigned __int64)(v23 + 14) <= v37 )
        v27 = *(_BYTE *)v10;
    }
    v34 = 1;
LABEL_103:
    if ( v34 )
    {
      LOBYTE(v3) = v26;
      v38 = v27;
LABEL_106:
      sub_140052E64(v10, v21, &v43, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v21 + 3), v22, v25, v3, v38, a2);
      goto LABEL_110;
    }
LABEL_105:
    v25 = 0;
    v38 = 0;
    goto LABEL_106;
  }
  v28 = 0LL;
  v40 = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_110;
  v10 = 0LL;
  v41 = 0;
  if ( !*(_DWORD *)(v21 + 56) )
    goto LABEL_85;
  v29 = *(_DWORD *)(v21 + 56);
  v30 = (unsigned int *)(v21 + 120);
  v42 = v21 + 120;
  while ( 1 )
  {
    v31 = *v30;
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_79:
    v10 = (unsigned int)(v10 + 1);
    v30 = (unsigned int *)(v42 + 4);
    v41 = v10;
    v42 += 4LL;
    if ( (unsigned int)v10 >= v29 )
      goto LABEL_85;
  }
  if ( *(_DWORD *)(v31 + v21) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v31 + v21) - 65);
    if ( *(_DWORD *)(v31 + v21) == 65 )
    {
      v10 = v31 + 56;
      if ( v31 + 56 <= v32 )
      {
        v40 = 1;
        if ( *(_BYTE *)(v31 + v21 + 10) )
          v28 = (char *)(v31 + v21 + 24);
        v22 = *(_BYTE *)(v31 + v21 + 8);
        v23 = *(_BYTE **)(v31 + v21 + 16);
        v24 = *(_BYTE *)(v31 + v21 + 9);
      }
    }
    else if ( *(_DWORD *)(v31 + v21) == 66 )
    {
      v10 = v31 + 40;
      if ( v31 + 40 <= v32 )
      {
        if ( *(_DWORD *)(v31 + v21 + 12) )
          v28 = (char *)(v31 + v21 + 32);
        v23 = *(_BYTE **)(v31 + v21 + 24);
        goto LABEL_84;
      }
    }
    goto LABEL_77;
  }
  v10 = v31 + 40;
  if ( v31 + 40 > v32 )
  {
LABEL_77:
    if ( v40 )
      goto LABEL_85;
    LODWORD(v10) = v41;
    v29 = *(_DWORD *)(v21 + 56);
    goto LABEL_79;
  }
  if ( *(_BYTE *)(v31 + v21 + 10) )
    v28 = (char *)(v31 + v21 + 24);
  v23 = *(_BYTE **)(v31 + v21 + 16);
LABEL_84:
  v24 = *(_BYTE *)(v31 + v21 + 9);
  v22 = *(_BYTE *)(v31 + v21 + 8);
LABEL_85:
  if ( v28 )
  {
    v33 = *v28;
    goto LABEL_88;
  }
LABEL_110:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
