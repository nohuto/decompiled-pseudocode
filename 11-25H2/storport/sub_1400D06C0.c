/*
 * XREFs of sub_1400D06C0 @ 0x1400D06C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400C93F4 @ 0x1400C93F4 (sub_1400C93F4.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_1400D06C0(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rcx
  __int16 v7; // ax
  __int64 v8; // rsi
  unsigned int v9; // edx
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v12; // edx
  bool v13; // zf
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  bool v22; // zf
  int v23; // ecx
  unsigned int v24; // edx
  bool v25; // zf
  __int64 v26; // rax
  _DWORD *v27; // rbx
  unsigned __int64 v28; // rbp
  _BYTE *v29; // r12
  char v30; // dl
  char v31; // al
  unsigned int v32; // eax
  unsigned int v33; // r9d
  int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // rdx
  unsigned int v37; // r10d
  __int64 v38; // r9
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  int *v41; // rax
  const EVENT_DESCRIPTOR *v42; // rdx
  __int64 v43; // rdx
  char v44; // bp
  _BYTE *v45; // r9
  unsigned __int8 v46; // r10
  char v47; // r11
  char v48; // r13
  char v49; // r12
  char *v50; // rbx
  unsigned int v51; // r15d
  unsigned __int64 v52; // r14
  __int64 v53; // r8
  int v54; // ecx
  char v55; // cl
  char v56; // r8
  _BYTE *v57; // rax
  char *v58; // r12
  unsigned int v59; // eax
  char v60; // al
  __int64 v61; // [rsp+20h] [rbp-D8h]
  __int64 v62; // [rsp+28h] [rbp-D0h]
  __int64 v63; // [rsp+30h] [rbp-C8h]
  __int64 v64; // [rsp+38h] [rbp-C0h]
  __int64 v65; // [rsp+40h] [rbp-B8h]
  __int64 v66; // [rsp+48h] [rbp-B0h]
  char v67; // [rsp+A0h] [rbp-58h]
  unsigned int v68; // [rsp+A4h] [rbp-54h]
  GUID v69; // [rsp+A8h] [rbp-50h] BYREF

  v3 = 0;
  v5 = *a2;
  if ( a3 )
  {
    v7 = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v5 + 4260) = 0;
    *(_WORD *)(*a2 + 4260) &= 0xF1FFu;
    v5 = *a2;
    v7 = *(_WORD *)(*a2 + 4260) & 0xFE01 | 0xC;
  }
  *(_WORD *)(v5 + 4260) = v7;
  v8 = *a2;
  v9 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 2 )
      {
        v10 = v9 >> 1;
        if ( (unsigned __int8)v10 != 128
          && (unsigned __int8)v10 != 129
          && (unsigned __int8)v10 != 130
          && (unsigned __int8)v10 != 131
          && (unsigned __int8)v10 != 132 )
        {
          v11 = (unsigned __int8)v10 - 133;
          if ( (unsigned __int8)v10 != 133 )
          {
LABEL_88:
            if ( v11 == 1 )
              goto LABEL_89;
          }
        }
      }
LABEL_97:
      v17 = -1073741435;
      goto LABEL_29;
    }
    v12 = v9 >> 1;
    if ( (unsigned __int8)v12 > 0x80u )
    {
      if ( (unsigned __int8)v12 == 129 )
        goto LABEL_28;
      v16 = (unsigned __int8)v12 - 130;
      if ( (unsigned __int8)v12 != 130 )
        goto LABEL_77;
    }
    else
    {
      if ( (unsigned __int8)v12 == 128 )
        goto LABEL_28;
      if ( (unsigned __int8)v12 <= 0x11u )
      {
        if ( (unsigned __int8)v12 != 17 )
        {
          if ( (unsigned __int8)v12 <= 9u )
          {
            if ( (unsigned __int8)v12 == 9
              || !(_BYTE)v12
              || (unsigned __int8)v12 == 1
              || (unsigned __int8)v12 == 2
              || (unsigned __int8)v12 == 3 )
            {
              goto LABEL_28;
            }
            v14 = (unsigned __int8)v12 - 5;
            v13 = (unsigned __int8)v12 == 5;
LABEL_25:
            if ( v13 )
              goto LABEL_28;
            v15 = v14 - 1;
            if ( !v15 )
              goto LABEL_28;
            v16 = v15 - 1;
            if ( !v16 )
              goto LABEL_28;
LABEL_77:
            v25 = v16 == 1;
LABEL_96:
            if ( !v25 )
              goto LABEL_97;
LABEL_28:
            v17 = -1073741808;
            goto LABEL_29;
          }
          if ( (unsigned __int8)v12 == 10 )
            goto LABEL_28;
          if ( (unsigned __int8)v12 != 11 )
          {
            if ( (unsigned __int8)v12 == 12
              || (unsigned __int8)v12 == 13
              || (unsigned __int8)v12 == 14
              || (unsigned __int8)v12 == 15 )
            {
              goto LABEL_28;
            }
            if ( (unsigned __int8)v12 != 16 )
              goto LABEL_97;
          }
        }
        v17 = -2147483210;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v12 <= 0x1Au )
      {
        switch ( (unsigned __int8)v12 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_49;
          case 0x14u:
            v17 = -1073741800;
            goto LABEL_29;
          case 0x15u:
            goto LABEL_97;
          case 0x16u:
            goto LABEL_49;
        }
        v23 = (unsigned __int8)v12 - 24;
        v22 = (unsigned __int8)v12 == 24;
        goto LABEL_47;
      }
      if ( (unsigned __int8)v12 == 27 )
      {
        v17 = -1073741637;
        goto LABEL_29;
      }
      if ( (unsigned __int8)v12 == 28 )
        goto LABEL_28;
      if ( (unsigned __int8)v12 != 30 )
      {
        v14 = (unsigned __int8)v12 - 31;
        v13 = (unsigned __int8)v12 == 31;
        goto LABEL_25;
      }
    }
LABEL_89:
    v17 = -1073741790;
    goto LABEL_29;
  }
  v24 = v9 >> 1;
  if ( (unsigned __int8)v24 > 0x80u )
  {
    if ( (unsigned __int8)v24 == 129 )
      goto LABEL_28;
    v16 = (unsigned __int8)v24 - 130;
    if ( (unsigned __int8)v24 != 130 )
      goto LABEL_77;
    v17 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v24 == 128 )
      goto LABEL_28;
    if ( (unsigned __int8)v24 <= 0xEu )
    {
      if ( (unsigned __int8)v24 == 14 )
        goto LABEL_28;
      if ( (unsigned __int8)v24 > 7u )
      {
        if ( (unsigned __int8)v24 != 8 && (unsigned __int8)v24 != 9 && (unsigned __int8)v24 != 10 )
        {
          if ( (unsigned __int8)v24 == 11 )
            goto LABEL_28;
          v16 = (unsigned __int8)v24 - 12;
          if ( (unsigned __int8)v24 == 12 )
          {
            v17 = -1073740758;
            goto LABEL_29;
          }
          goto LABEL_77;
        }
      }
      else if ( (unsigned __int8)v24 != 7 )
      {
        if ( !(_BYTE)v24 )
        {
          v17 = 0;
          goto LABEL_29;
        }
        if ( (unsigned __int8)v24 == 1 || (unsigned __int8)v24 == 2 )
          goto LABEL_28;
        if ( (unsigned __int8)v24 == 3 || (unsigned __int8)v24 == 4 )
          goto LABEL_97;
        v23 = (unsigned __int8)v24 - 5;
        v22 = (unsigned __int8)v24 == 5;
LABEL_47:
        if ( !v22 && v23 != 1 )
          goto LABEL_97;
        goto LABEL_49;
      }
LABEL_79:
      v17 = -1073741248;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v24 <= 0x16u )
    {
      if ( (unsigned __int8)v24 == 22
        || (unsigned __int8)v24 == 15
        || (unsigned __int8)v24 == 16
        || (unsigned __int8)v24 == 17
        || (unsigned __int8)v24 == 18
        || (unsigned __int8)v24 == 19 )
      {
        goto LABEL_28;
      }
      v11 = (unsigned __int8)v24 - 20;
      if ( (unsigned __int8)v24 != 20 )
        goto LABEL_88;
LABEL_49:
      v17 = -1073741436;
      goto LABEL_29;
    }
    if ( (unsigned __int8)v24 == 24 )
      goto LABEL_28;
    if ( (unsigned __int8)v24 != 25 && (unsigned __int8)v24 != 26 )
    {
      if ( (unsigned __int8)v24 != 27 )
      {
        if ( (unsigned __int8)v24 == 28 )
          goto LABEL_97;
        v25 = (unsigned __int8)v24 == 30;
        goto LABEL_96;
      }
      goto LABEL_79;
    }
    v17 = -1073741643;
  }
LABEL_29:
  v18 = *(_QWORD *)(v8 + 4224);
  v19 = *(_QWORD *)(v8 + 4184);
  if ( v17 >= 0 )
  {
    v26 = *(_QWORD *)(v19 + 184);
    v27 = *(_DWORD **)(v19 + 24);
    *(_DWORD *)(v19 + 48) = 0;
    v28 = *(unsigned int *)(v26 + 8);
    v29 = *(_BYTE **)(*a2 + 4160);
    memset_0(v27, 0, (unsigned int)v28);
    v30 = *((_BYTE *)v27 + 8);
    *v27 = 56;
    v27[1] = 56;
    *((_BYTE *)v27 + 8) = v30 ^ (v30 ^ (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 256LL) >> 2)) & 1;
    *((_BYTE *)v27 + 9) = (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 260LL) >> 1) & 7;
    *((_BYTE *)v27 + 10) = *v29 & 7;
    v31 = -1;
    if ( ((*v29 >> 4) & 7) != 0 )
      v31 = (*v29 >> 4) & 7;
    *((_BYTE *)v27 + 11) = v31;
    *((_BYTE *)v27 + 12) = 1;
    v32 = sub_1400C93F4(a1);
    v33 = v32;
    if ( v32 )
    {
      v27[4] = v32;
      LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 200LL);
      v34 = v20 - (unsigned int)v20 % v32;
      if ( !((unsigned int)v20 % v33) )
        v34 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 200LL);
    }
    else
    {
      v27[4] = 4;
      v34 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 200LL);
    }
    v27[5] = v34;
    v35 = 0;
    v36 = *(_QWORD *)(a1 + 592);
    if ( (*(_BYTE *)(v36 + 260) & 0xE) != 0 )
    {
      while ( 1 )
      {
        v37 = v35 + 1;
        if ( v28 < 32 * (unsigned __int64)(v35 + 1) + 24 )
          break;
        if ( v35 )
          v27[1] += 32;
        v20 = 32LL * v35;
        v38 = v35;
        v27[(unsigned __int64)v20 / 4 + 6] = 32;
        v27[(unsigned __int64)v20 / 4 + 7] = 32;
        LOBYTE(v27[(unsigned __int64)v20 / 4 + 8]) = v35 + 1;
        if ( v35 )
          BYTE1(v27[(unsigned __int64)v20 / 4 + 8]) &= ~1u;
        else
          BYTE1(v27[(unsigned __int64)v20 / 4 + 8]) ^= (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 260LL) ^ BYTE1(v27[(unsigned __int64)v20 / 4 + 8])) & 1;
        ++v35;
        *(_QWORD *)&v27[(unsigned __int64)v20 / 4 + 10] = *(_QWORD *)&v29[8 * v38 + 8];
        v36 = *(_QWORD *)(a1 + 592);
        if ( v37 >= ((*(unsigned __int8 *)(v36 + 260) >> 1) & 7u) )
          goto LABEL_119;
      }
      v27[1] = 32 * ((*(unsigned __int8 *)(v36 + 260) >> 1) & 7) + 24;
      *(_DWORD *)(v19 + 48) = -2147483643;
    }
LABEL_119:
    v21 = (unsigned int)v27[1];
    if ( (unsigned int)v28 < (unsigned int)v21 )
      v21 = (unsigned int)v28;
  }
  else
  {
    sub_1400A870C(
      a1,
      1,
      2,
      (__int64)L"Failed to retrieve firmware slot information log from controller.",
      L"NVMeStatus",
      *(_WORD *)(a3 + 14),
      &dword_140149108,
      0,
      &dword_140149108,
      0,
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
    v21 = 0LL;
    *(_DWORD *)(v19 + 48) = v17;
  }
  *(_QWORD *)(v19 + 56) = v21;
  sub_1400F5FEC(a1, *(_DWORD *)(*a2 + 4248), v20, *(_QWORD *)(*a2 + 4160), *(_QWORD *)(*a2 + 4168));
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  sub_140122C20(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v18 + 152));
  v13 = byte_140168DAA == 0;
  *(_BYTE *)(v19 + 141) = -84;
  if ( v13 )
    goto LABEL_184;
  v69 = 0LL;
  IoGetActivityIdIrp(v19, &v69);
  v40 = *(_QWORD *)(v19 + 184);
  if ( *(_BYTE *)v40 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_184;
    v42 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_183;
  }
  if ( *(_BYTE *)v40 != 15 )
  {
    if ( *(_BYTE *)v40 != 27 )
      goto LABEL_184;
    if ( *(_BYTE *)(v40 + 1) == 7 && !*(_DWORD *)(v40 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v41 = *(int **)(v19 + 56);
        if ( v41 )
          v3 = *v41;
        LODWORD(v62) = *(_DWORD *)(v19 + 48);
        LODWORD(v61) = v3;
        sub_140056AB0(v39, v40, &v69, v19, v61, v62);
      }
      goto LABEL_184;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_184;
    v42 = &stru_140149FE8;
LABEL_183:
    LODWORD(v61) = *(_DWORD *)(v19 + 48);
    sub_140052F3C(v39, v42, &v69, v19, v61);
    goto LABEL_184;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_184;
  v43 = *(_QWORD *)(v40 + 8);
  v44 = 0;
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  if ( *(_BYTE *)(v43 + 2) != 40 )
  {
    v55 = *(_BYTE *)(v43 + 72);
    v45 = *(_BYTE **)(v43 + 32);
    v46 = *(_BYTE *)(v43 + 11);
    v44 = *(_BYTE *)(v43 + 4);
    if ( *(_BYTE *)(v43 + 2) )
      goto LABEL_184;
LABEL_161:
    LOBYTE(v39) = v55 - 8;
    if ( (v39 & 0x5D) != 0 )
      goto LABEL_184;
    if ( *(_BYTE *)(v43 + 3) == 1 || !v45 || !v46 )
      goto LABEL_179;
    v56 = 0;
    v39 = (unsigned __int64)&v45[v46];
    v57 = v45 + 8;
    if ( (unsigned __int8)((*v45 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v57 > v39 )
        goto LABEL_177;
      v48 = v45[2];
      v47 = v45[1] & 0xF;
      v49 = v45[3];
    }
    else
    {
      if ( (unsigned __int64)v57 > v39 )
        goto LABEL_177;
      v58 = v45 + 13;
      v47 = v45[2] & 0xF;
      v59 = v46;
      if ( (unsigned int)(unsigned __int8)v45[7] + 8 <= v46 )
        v59 = (unsigned __int8)v45[7] + 8;
      v39 = (unsigned __int64)&v45[v59];
      if ( (unsigned __int64)v58 <= v39 )
        v48 = v45[12];
      if ( (unsigned __int64)(v45 + 14) > v39 )
        v49 = 0;
      else
        v49 = *v58;
    }
    v56 = 1;
LABEL_177:
    if ( v56 )
    {
      LOBYTE(v3) = v48;
      v60 = v49;
LABEL_180:
      LOBYTE(v66) = v60;
      LOBYTE(v65) = v3;
      LOBYTE(v64) = v47;
      LOBYTE(v63) = v44;
      LOBYTE(v62) = *(_BYTE *)(v43 + 3);
      LODWORD(v61) = *(_DWORD *)(v19 + 48);
      sub_140052E64(v39, v43, &v69, v19, v61, v62, v63, v64, v65, v66, v19);
      goto LABEL_184;
    }
LABEL_179:
    v47 = 0;
    v60 = 0;
    goto LABEL_180;
  }
  v50 = 0LL;
  v67 = 0;
  if ( *(_DWORD *)(v43 + 20) )
    goto LABEL_184;
  v51 = 0;
  v68 = *(_DWORD *)(v43 + 56);
  if ( !v68 )
    goto LABEL_158;
  while ( 1 )
  {
    v39 = *(unsigned int *)(v43 + 4LL * v51 + 120);
    if ( (unsigned int)v39 >= 0x80 )
    {
      v52 = *(unsigned int *)(v43 + 16);
      if ( (unsigned int)v39 < (unsigned int)v52 )
        break;
    }
LABEL_152:
    if ( ++v51 >= v68 )
      goto LABEL_158;
  }
  v53 = (unsigned int)v39;
  v54 = *(_DWORD *)(v39 + v43) - 64;
  if ( v54 )
  {
    v39 = (unsigned int)(v54 - 1);
    if ( (_DWORD)v39 )
    {
      if ( (_DWORD)v39 == 1 )
      {
        v39 = v53 + 40;
        if ( v53 + 40 <= v52 )
        {
          if ( *(_DWORD *)(v53 + v43 + 12) )
            v50 = (char *)(v53 + v43 + 32);
          v45 = *(_BYTE **)(v53 + v43 + 24);
          goto LABEL_157;
        }
      }
    }
    else
    {
      v39 = v53 + 56;
      if ( v53 + 56 <= v52 )
      {
        v67 = 1;
        if ( *(_BYTE *)(v53 + v43 + 10) )
          v50 = (char *)(v53 + v43 + 24);
        v44 = *(_BYTE *)(v53 + v43 + 8);
        v45 = *(_BYTE **)(v53 + v43 + 16);
        v46 = *(_BYTE *)(v53 + v43 + 9);
      }
    }
    goto LABEL_151;
  }
  v39 = v53 + 40;
  if ( v53 + 40 > v52 )
  {
LABEL_151:
    if ( v67 )
      goto LABEL_158;
    goto LABEL_152;
  }
  if ( *(_BYTE *)(v53 + v43 + 10) )
    v50 = (char *)(v53 + v43 + 24);
  v45 = *(_BYTE **)(v53 + v43 + 16);
LABEL_157:
  v46 = *(_BYTE *)(v53 + v43 + 9);
  v44 = *(_BYTE *)(v53 + v43 + 8);
LABEL_158:
  if ( v50 )
  {
    v55 = *v50;
    goto LABEL_161;
  }
LABEL_184:
  IofCompleteRequest((PIRP)v19, 1);
}
