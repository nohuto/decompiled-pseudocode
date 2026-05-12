/*
 * XREFs of sub_1400D7E90 @ 0x1400D7E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14008F59C @ 0x14008F59C (sub_14008F59C.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

void __fastcall sub_1400D7E90(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rcx
  __int64 v7; // r13
  __int64 v8; // r15
  _DWORD *v9; // rsi
  int v10; // eax
  int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // edx
  bool v16; // zf
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  int *v26; // rax
  bool v27; // zf
  int v28; // ecx
  unsigned int v29; // edx
  bool v30; // zf
  const void *v31; // rdx
  unsigned int v32; // ecx
  const EVENT_DESCRIPTOR *v33; // rdx
  unsigned __int64 v34; // rdx
  char v35; // bp
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // r11
  char v39; // r12
  char v40; // r15
  char *v41; // rsi
  unsigned int v42; // eax
  unsigned int v43; // r8d
  unsigned int *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  char v47; // cl
  char v48; // r8
  _BYTE *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  __int64 v52; // [rsp+20h] [rbp-E8h]
  __int64 v53; // [rsp+28h] [rbp-E0h]
  __int64 v54; // [rsp+30h] [rbp-D8h]
  __int64 v55; // [rsp+38h] [rbp-D0h]
  __int64 v56; // [rsp+40h] [rbp-C8h]
  __int64 v57; // [rsp+48h] [rbp-C0h]
  char v58; // [rsp+A0h] [rbp-68h]
  unsigned int v59; // [rsp+A4h] [rbp-64h] BYREF
  int v60; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v61; // [rsp+B0h] [rbp-58h]
  GUID v62; // [rsp+B8h] [rbp-50h] BYREF

  v3 = 0;
  v5 = *a2;
  v7 = *(_QWORD *)(*a2 + 4184);
  v8 = *(_QWORD *)(*a2 + 4224);
  v9 = *(_DWORD **)(v7 + 24);
  if ( a3 )
  {
    *(_WORD *)(v5 + 4260) = *(_WORD *)(a3 + 14);
    v9[16] = *(_DWORD *)a3;
    v10 = *(_DWORD *)(a3 + 4);
  }
  else
  {
    *(_WORD *)(v5 + 4260) = 0;
    *(_WORD *)(*a2 + 4260) &= 0xF1FFu;
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(*a2 + 4260) & 0xFE01 | 0xC;
    v10 = 0;
    v9[16] = 0;
  }
  v9[17] = v10;
  v11 = 2;
  v12 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 2 )
      {
        v13 = v12 >> 1;
        if ( (unsigned __int8)v13 != 128
          && (unsigned __int8)v13 != 129
          && (unsigned __int8)v13 != 130
          && (unsigned __int8)v13 != 131
          && (unsigned __int8)v13 != 132 )
        {
          v14 = (unsigned __int8)v13 - 133;
          if ( (unsigned __int8)v13 != 133 )
          {
LABEL_101:
            if ( v14 == 1 )
              goto LABEL_102;
          }
        }
      }
LABEL_110:
      v20 = -1073741435;
      goto LABEL_29;
    }
    v15 = v12 >> 1;
    if ( (unsigned __int8)v15 > 0x80u )
    {
      if ( (unsigned __int8)v15 == 129 )
        goto LABEL_28;
      v19 = (unsigned __int8)v15 - 130;
      if ( (unsigned __int8)v15 != 130 )
        goto LABEL_90;
    }
    else
    {
      if ( (unsigned __int8)v15 == 128 )
        goto LABEL_28;
      if ( (unsigned __int8)v15 <= 0x11u )
      {
        if ( (unsigned __int8)v15 != 17 )
        {
          if ( (unsigned __int8)v15 <= 9u )
          {
            if ( (unsigned __int8)v15 == 9
              || !(_BYTE)v15
              || (unsigned __int8)v15 == 1
              || (unsigned __int8)v15 == 2
              || (unsigned __int8)v15 == 3 )
            {
              goto LABEL_28;
            }
            v17 = (unsigned __int8)v15 - 5;
            v16 = (unsigned __int8)v15 == 5;
LABEL_25:
            if ( v16 )
              goto LABEL_28;
            v18 = v17 - 1;
            if ( !v18 )
              goto LABEL_28;
            v19 = v18 - 1;
            if ( !v19 )
              goto LABEL_28;
LABEL_90:
            v30 = v19 == 1;
LABEL_109:
            if ( !v30 )
              goto LABEL_110;
LABEL_28:
            v20 = -1073741808;
            goto LABEL_29;
          }
          if ( (unsigned __int8)v15 == 10 )
            goto LABEL_28;
          if ( (unsigned __int8)v15 != 11 )
          {
            if ( (unsigned __int8)v15 == 12
              || (unsigned __int8)v15 == 13
              || (unsigned __int8)v15 == 14
              || (unsigned __int8)v15 == 15 )
            {
              goto LABEL_28;
            }
            if ( (unsigned __int8)v15 != 16 )
              goto LABEL_110;
          }
        }
        v20 = -2147483210;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v15 <= 0x1Au )
      {
        switch ( (unsigned __int8)v15 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_62;
          case 0x14u:
            v20 = -1073741800;
            goto LABEL_29;
          case 0x15u:
            goto LABEL_110;
          case 0x16u:
            goto LABEL_62;
        }
        v28 = (unsigned __int8)v15 - 24;
        v27 = (unsigned __int8)v15 == 24;
        goto LABEL_60;
      }
      if ( (unsigned __int8)v15 == 27 )
      {
        v20 = -1073741637;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v15 == 28 )
        goto LABEL_28;
      if ( (unsigned __int8)v15 != 30 )
      {
        v17 = (unsigned __int8)v15 - 31;
        v16 = (unsigned __int8)v15 == 31;
        goto LABEL_25;
      }
    }
LABEL_102:
    v20 = -1073741790;
    goto LABEL_29;
  }
  v29 = v12 >> 1;
  if ( (unsigned __int8)v29 > 0x80u )
  {
    if ( (unsigned __int8)v29 == 129 )
      goto LABEL_28;
    v19 = (unsigned __int8)v29 - 130;
    if ( (unsigned __int8)v29 != 130 )
      goto LABEL_90;
    v20 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v29 == 128 )
      goto LABEL_28;
    if ( (unsigned __int8)v29 <= 0xEu )
    {
      if ( (unsigned __int8)v29 == 14 )
        goto LABEL_28;
      if ( (unsigned __int8)v29 > 7u )
      {
        if ( (unsigned __int8)v29 != 8 && (unsigned __int8)v29 != 9 && (unsigned __int8)v29 != 10 )
        {
          if ( (unsigned __int8)v29 == 11 )
            goto LABEL_28;
          v19 = (unsigned __int8)v29 - 12;
          if ( (unsigned __int8)v29 == 12 )
          {
            v20 = -1073740758;
            goto LABEL_29;
          }
          goto LABEL_90;
        }
      }
      else if ( (unsigned __int8)v29 != 7 )
      {
        if ( !(_BYTE)v29 )
        {
          v20 = 0;
          goto LABEL_29;
        }
        if ( (unsigned __int8)v29 == 1 || (unsigned __int8)v29 == 2 )
          goto LABEL_28;
        if ( (unsigned __int8)v29 == 3 || (unsigned __int8)v29 == 4 )
          goto LABEL_110;
        v28 = (unsigned __int8)v29 - 5;
        v27 = (unsigned __int8)v29 == 5;
LABEL_60:
        if ( !v27 && v28 != 1 )
          goto LABEL_110;
        goto LABEL_62;
      }
LABEL_92:
      v20 = -1073741248;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v29 <= 0x16u )
    {
      if ( (unsigned __int8)v29 == 22
        || (unsigned __int8)v29 == 15
        || (unsigned __int8)v29 == 16
        || (unsigned __int8)v29 == 17
        || (unsigned __int8)v29 == 18
        || (unsigned __int8)v29 == 19 )
      {
        goto LABEL_28;
      }
      v14 = (unsigned __int8)v29 - 20;
      if ( (unsigned __int8)v29 != 20 )
        goto LABEL_101;
LABEL_62:
      v20 = -1073741436;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v29 == 24 )
      goto LABEL_28;
    if ( (unsigned __int8)v29 != 25 && (unsigned __int8)v29 != 26 )
    {
      if ( (unsigned __int8)v29 != 27 )
      {
        if ( (unsigned __int8)v29 == 28 )
          goto LABEL_110;
        v30 = (unsigned __int8)v29 == 30;
        goto LABEL_109;
      }
      goto LABEL_92;
    }
    v20 = -1073741643;
  }
LABEL_29:
  if ( v20 < 0 )
  {
    v9[4] = 2;
    v9[5] = *(unsigned __int16 *)(*a2 + 4260);
    sub_1400A870C(
      a1,
      0,
      2,
      (__int64)L"Controller failed protocol command.",
      L"CDW0",
      v9[20],
      L"NSID",
      v9[21],
      L"NvmeStatus",
      *(_WORD *)(*a2 + 4260),
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    v21 = (_DWORD *)(v7 + 48);
    *(_DWORD *)(v7 + 48) = 0;
LABEL_31:
    v22 = 84LL;
    goto LABEL_32;
  }
  v21 = (_DWORD *)(v7 + 48);
  *(_DWORD *)(v7 + 48) = 0;
  *((_QWORD *)v9 + 2) = 1LL;
  v31 = *(const void **)(*a2 + 4160);
  if ( !v31 )
    goto LABEL_31;
  v32 = *(_DWORD *)(*a2 + 4248);
  if ( !v32 )
    goto LABEL_31;
  if ( v9[9] )
    memmove((char *)v9 + (unsigned int)v9[13], v31, v32);
  v59 = 84;
  sub_14008F59C(v9, &v59);
  v22 = v59;
LABEL_32:
  *(_QWORD *)(v7 + 56) = v22;
  v23 = *(_QWORD *)(*a2 + 4160);
  if ( v23 )
    sub_1400F5FEC(a1, *(_DWORD *)(*a2 + 4248), v11, v23, *(_QWORD *)(*a2 + 4168));
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  sub_140122C20(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 152));
  v16 = byte_140168DAA == 0;
  *(_BYTE *)(v7 + 141) = -84;
  if ( v16 )
    goto LABEL_174;
  v62 = 0LL;
  IoGetActivityIdIrp(v7, &v62);
  v25 = *(_QWORD *)(v7 + 184);
  if ( *(_BYTE *)v25 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_174;
    v33 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_173;
  }
  if ( *(_BYTE *)v25 != 15 )
  {
    if ( *(_BYTE *)v25 != 27 )
      goto LABEL_174;
    if ( *(_BYTE *)(v25 + 1) == 7 && !*(_DWORD *)(v25 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v26 = *(int **)(v7 + 56);
        if ( v26 )
          v3 = *v26;
        LODWORD(v53) = *v21;
        LODWORD(v52) = v3;
        sub_140056AB0(v24, v25, &v62, v7, v52, v53);
      }
      goto LABEL_174;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_174;
    v33 = &stru_140149FE8;
LABEL_173:
    LODWORD(v52) = *v21;
    sub_140052F3C(v24, v33, &v62, v7, v52);
    goto LABEL_174;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_174;
  v34 = *(_QWORD *)(v25 + 8);
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( *(_BYTE *)(v34 + 2) != 40 )
  {
    v47 = *(_BYTE *)(v34 + 72);
    v36 = *(_BYTE **)(v34 + 32);
    v37 = *(_BYTE *)(v34 + 11);
    v35 = *(_BYTE *)(v34 + 4);
    if ( *(_BYTE *)(v34 + 2) )
      goto LABEL_174;
LABEL_152:
    LOBYTE(v24) = v47 - 8;
    if ( (v24 & 0x5D) != 0 )
      goto LABEL_174;
    v48 = *(_BYTE *)(v34 + 3);
    if ( v48 == 1 || !v36 || !v37 )
      goto LABEL_169;
    LOBYTE(v34) = 0;
    v24 = (unsigned __int64)&v36[v37];
    v49 = v36 + 8;
    if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v49 > v24 )
        goto LABEL_167;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      if ( (unsigned __int64)v49 > v24 )
        goto LABEL_167;
      v38 = v36[2] & 0xF;
      v50 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v50 = (unsigned __int8)v36[7] + 8;
      v24 = (unsigned __int64)(v36 + 13);
      v34 = (unsigned __int64)&v36[v50];
      if ( (unsigned __int64)(v36 + 13) <= v34 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) <= v34 )
        v40 = *(_BYTE *)v24;
    }
    LOBYTE(v34) = 1;
LABEL_167:
    if ( (_BYTE)v34 )
    {
      LOBYTE(v3) = v39;
      v51 = v40;
LABEL_170:
      LOBYTE(v57) = v51;
      LOBYTE(v56) = v3;
      LOBYTE(v55) = v38;
      LOBYTE(v54) = v35;
      LOBYTE(v53) = v48;
      LODWORD(v52) = *v21;
      sub_140052E64(v24, v34, &v62, v7, v52, v53, v54, v55, v56, v57, v7);
      goto LABEL_174;
    }
LABEL_169:
    v38 = 0;
    v51 = 0;
    goto LABEL_170;
  }
  v41 = 0LL;
  v58 = 0;
  if ( *(_DWORD *)(v34 + 20) )
    goto LABEL_174;
  v42 = *(_DWORD *)(v34 + 56);
  v24 = 0LL;
  v60 = 0;
  v59 = v42;
  if ( !v42 )
    goto LABEL_149;
  v43 = v59;
  v44 = (unsigned int *)(v34 + 120);
  v61 = v34 + 120;
  while ( 1 )
  {
    v45 = *v44;
    if ( (unsigned int)v45 >= 0x80 )
    {
      v46 = *(unsigned int *)(v34 + 16);
      if ( (unsigned int)v45 < (unsigned int)v46 )
        break;
    }
LABEL_143:
    v24 = (unsigned int)(v24 + 1);
    v44 = (unsigned int *)(v61 + 4);
    v60 = v24;
    v61 += 4LL;
    if ( (unsigned int)v24 >= v43 )
      goto LABEL_149;
  }
  if ( *(_DWORD *)(v45 + v34) != 64 )
  {
    v24 = (unsigned int)(*(_DWORD *)(v45 + v34) - 65);
    if ( *(_DWORD *)(v45 + v34) == 65 )
    {
      v24 = v45 + 56;
      if ( v45 + 56 <= v46 )
      {
        v58 = 1;
        if ( *(_BYTE *)(v45 + v34 + 10) )
          v41 = (char *)(v45 + v34 + 24);
        v35 = *(_BYTE *)(v45 + v34 + 8);
        v36 = *(_BYTE **)(v45 + v34 + 16);
        v37 = *(_BYTE *)(v45 + v34 + 9);
      }
    }
    else if ( *(_DWORD *)(v45 + v34) == 66 )
    {
      v24 = v45 + 40;
      if ( v45 + 40 <= v46 )
      {
        if ( *(_DWORD *)(v45 + v34 + 12) )
          v41 = (char *)(v45 + v34 + 32);
        v36 = *(_BYTE **)(v45 + v34 + 24);
        goto LABEL_148;
      }
    }
    goto LABEL_141;
  }
  v24 = v45 + 40;
  if ( v45 + 40 > v46 )
  {
LABEL_141:
    if ( v58 )
      goto LABEL_149;
    LODWORD(v24) = v60;
    v43 = v59;
    goto LABEL_143;
  }
  if ( *(_BYTE *)(v45 + v34 + 10) )
    v41 = (char *)(v45 + v34 + 24);
  v36 = *(_BYTE **)(v45 + v34 + 16);
LABEL_148:
  v37 = *(_BYTE *)(v45 + v34 + 9);
  v35 = *(_BYTE *)(v45 + v34 + 8);
LABEL_149:
  if ( v41 )
  {
    v47 = *v41;
    goto LABEL_152;
  }
LABEL_174:
  IofCompleteRequest((PIRP)v7, 1);
}
