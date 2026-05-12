/*
 * XREFs of sub_1400CF9D0 @ 0x1400CF9D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400CF9D0(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rcx
  __int16 v7; // ax
  int v8; // r8d
  __int64 v9; // rsi
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  bool v17; // zf
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  int v21; // ebx
  __int64 v22; // rbp
  __int64 v23; // rsi
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  bool v35; // zf
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  bool v51; // zf
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned __int64 v63; // rcx
  __int64 v64; // rdx
  int *v65; // rax
  const EVENT_DESCRIPTOR *v66; // rdx
  unsigned __int64 v67; // rdx
  char v68; // r14
  _BYTE *v69; // r9
  unsigned __int8 v70; // r10
  char v71; // r11
  char v72; // r12
  char v73; // r15
  char *v74; // rbx
  unsigned int *v75; // r13
  __int64 v76; // rax
  unsigned __int64 v77; // rbp
  char v78; // cl
  char v79; // r8
  _BYTE *v80; // rax
  unsigned int v81; // eax
  char v82; // al
  __int64 v83; // [rsp+20h] [rbp-E8h]
  __int64 v84; // [rsp+28h] [rbp-E0h]
  __int64 v85; // [rsp+30h] [rbp-D8h]
  __int64 v86; // [rsp+38h] [rbp-D0h]
  __int64 v87; // [rsp+40h] [rbp-C8h]
  __int64 v88; // [rsp+48h] [rbp-C0h]
  char v89; // [rsp+A0h] [rbp-68h]
  int v90; // [rsp+A4h] [rbp-64h]
  unsigned int v91; // [rsp+A8h] [rbp-60h]
  GUID v92; // [rsp+B0h] [rbp-58h] BYREF

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
  v8 = 2;
  v9 = *a2;
  v10 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 2
        && (unsigned __int8)(v10 >> 1) != 128
        && (unsigned __int8)(v10 >> 1) != 129
        && (unsigned __int8)(v10 >> 1) != 130
        && (unsigned __int8)(v10 >> 1) != 131
        && (unsigned __int8)(v10 >> 1) != 132 )
      {
        v11 = (unsigned __int8)(v10 >> 1) - 133;
        if ( (unsigned __int8)(v10 >> 1) != 133 )
        {
LABEL_88:
          if ( v11 == 1 )
            goto LABEL_89;
        }
      }
LABEL_97:
      v21 = -1073741435;
      goto LABEL_29;
    }
    v12 = v10 >> 1;
    v13 = (unsigned __int8)(v10 >> 1);
    if ( v13 > 0x80 )
    {
      v40 = v13 - 129;
      if ( !v40 )
        goto LABEL_28;
      v20 = v40 - 1;
      if ( v20 )
        goto LABEL_77;
    }
    else
    {
      if ( (unsigned __int8)v12 == 128 )
        goto LABEL_28;
      if ( v13 <= 0x11 )
      {
        if ( v13 != 17 )
        {
          if ( v13 <= 9 )
          {
            if ( v13 == 9 )
              goto LABEL_28;
            if ( !(_BYTE)v12 )
              goto LABEL_28;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_28;
            v15 = v14 - 1;
            if ( !v15 )
              goto LABEL_28;
            v16 = v15 - 1;
            if ( !v16 )
              goto LABEL_28;
            v18 = v16 - 2;
            v17 = v18 == 0;
LABEL_25:
            if ( v17 )
              goto LABEL_28;
            v19 = v18 - 1;
            if ( !v19 )
              goto LABEL_28;
            v20 = v19 - 1;
            if ( !v20 )
              goto LABEL_28;
LABEL_77:
            v51 = v20 == 1;
LABEL_96:
            if ( !v51 )
              goto LABEL_97;
LABEL_28:
            v21 = -1073741808;
            goto LABEL_29;
          }
          v24 = v13 - 10;
          if ( !v24 )
            goto LABEL_28;
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( !v26 )
              goto LABEL_28;
            v27 = v26 - 1;
            if ( !v27 )
              goto LABEL_28;
            v28 = v27 - 1;
            if ( !v28 )
              goto LABEL_28;
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_28;
            if ( v29 != 1 )
              goto LABEL_97;
          }
        }
        v21 = -2147483210;
        goto LABEL_29;
      }
      if ( v13 <= 0x1A )
      {
        if ( v13 == 26 )
          goto LABEL_49;
        v30 = v13 - 18;
        if ( !v30 )
          goto LABEL_49;
        v31 = v30 - 1;
        if ( !v31 )
          goto LABEL_49;
        v32 = v31 - 1;
        if ( !v32 )
        {
          v21 = -1073741800;
          goto LABEL_29;
        }
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_97;
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_49;
        v36 = v34 - 2;
        v35 = v36 == 0;
        goto LABEL_47;
      }
      v37 = v13 - 27;
      if ( !v37 )
      {
        v21 = -1073741637;
        goto LABEL_29;
      }
      v38 = v37 - 1;
      if ( !v38 )
        goto LABEL_28;
      v39 = v38 - 2;
      if ( v39 )
      {
        v18 = v39 - 1;
        v17 = v18 == 0;
        goto LABEL_25;
      }
    }
LABEL_89:
    v21 = -1073741790;
    goto LABEL_29;
  }
  v41 = v10 >> 1;
  v42 = (unsigned __int8)(v10 >> 1);
  if ( v42 > 0x80 )
  {
    v62 = v42 - 129;
    if ( !v62 )
      goto LABEL_28;
    v20 = v62 - 1;
    if ( v20 )
      goto LABEL_77;
    v21 = -1073741661;
  }
  else
  {
    if ( (unsigned __int8)v41 == 128 )
      goto LABEL_28;
    if ( v42 <= 0xE )
    {
      if ( v42 == 14 )
        goto LABEL_28;
      if ( v42 > 7 )
      {
        v47 = v42 - 8;
        if ( v47 )
        {
          v48 = v47 - 1;
          if ( v48 )
          {
            v49 = v48 - 1;
            if ( v49 )
            {
              v50 = v49 - 1;
              if ( !v50 )
                goto LABEL_28;
              v20 = v50 - 1;
              if ( !v20 )
              {
                v21 = -1073740758;
                goto LABEL_29;
              }
              goto LABEL_77;
            }
          }
        }
      }
      else if ( v42 != 7 )
      {
        if ( !(_BYTE)v41 )
        {
          v21 = 0;
          goto LABEL_29;
        }
        v43 = v42 - 1;
        if ( !v43 )
          goto LABEL_28;
        v44 = v43 - 1;
        if ( !v44 )
          goto LABEL_28;
        v45 = v44 - 1;
        if ( !v45 )
          goto LABEL_97;
        v46 = v45 - 1;
        if ( !v46 )
          goto LABEL_97;
        v36 = v46 - 1;
        v35 = v36 == 0;
LABEL_47:
        if ( !v35 && v36 != 1 )
          goto LABEL_97;
        goto LABEL_49;
      }
LABEL_79:
      v21 = -1073741248;
      goto LABEL_29;
    }
    if ( v42 <= 0x16 )
    {
      if ( v42 == 22 )
        goto LABEL_28;
      v52 = v42 - 15;
      if ( !v52 )
        goto LABEL_28;
      v53 = v52 - 1;
      if ( !v53 )
        goto LABEL_28;
      v54 = v53 - 1;
      if ( !v54 )
        goto LABEL_28;
      v55 = v54 - 1;
      if ( !v55 )
        goto LABEL_28;
      v56 = v55 - 1;
      if ( !v56 )
        goto LABEL_28;
      v11 = v56 - 1;
      if ( v11 )
        goto LABEL_88;
LABEL_49:
      v21 = -1073741436;
      goto LABEL_29;
    }
    v57 = v42 - 24;
    if ( !v57 )
      goto LABEL_28;
    v58 = v57 - 1;
    if ( v58 )
    {
      v59 = v58 - 1;
      if ( v59 )
      {
        v60 = v59 - 1;
        if ( v60 )
        {
          v61 = v60 - 1;
          if ( !v61 )
            goto LABEL_97;
          v51 = v61 == 2;
          goto LABEL_96;
        }
        goto LABEL_79;
      }
    }
    v21 = -1073741643;
  }
LABEL_29:
  v22 = *(_QWORD *)(v9 + 4224);
  v23 = *(_QWORD *)(v9 + 4184);
  if ( v21 >= 0 )
    v21 = 0;
  else
    sub_1400A870C(
      a1,
      1,
      2,
      (__int64)L"Firmware download command failed.",
      L"NVMeStatus",
      v10,
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
  *(_DWORD *)(v23 + 48) = v21;
  *(_QWORD *)(v23 + 56) = 0LL;
  sub_1400F5FEC(a1, *(_DWORD *)(*a2 + 4248), v8, *(_QWORD *)(*a2 + 4160), *(_QWORD *)(*a2 + 4168));
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  sub_140122C20(a1, a2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v22 + 152));
  v17 = byte_140168DAA == 0;
  *(_BYTE *)(v23 + 141) = -84;
  if ( v17 )
    goto LABEL_167;
  v92 = 0LL;
  IoGetActivityIdIrp(v23, &v92);
  v64 = *(_QWORD *)(v23 + 184);
  if ( *(_BYTE *)v64 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_167;
    v66 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_166;
  }
  if ( *(_BYTE *)v64 != 15 )
  {
    if ( *(_BYTE *)v64 != 27 )
      goto LABEL_167;
    if ( *(_BYTE *)(v64 + 1) == 7 && !*(_DWORD *)(v64 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v65 = *(int **)(v23 + 56);
        if ( v65 )
          v3 = *v65;
        LODWORD(v84) = *(_DWORD *)(v23 + 48);
        LODWORD(v83) = v3;
        sub_140056AB0(v63, v64, &v92, v23, v83, v84);
      }
      goto LABEL_167;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_167;
    v66 = &stru_140149FE8;
LABEL_166:
    LODWORD(v83) = *(_DWORD *)(v23 + 48);
    sub_140052F3C(v63, v66, &v92, v23, v83);
    goto LABEL_167;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_167;
  v67 = *(_QWORD *)(v64 + 8);
  v68 = 0;
  v69 = 0LL;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  if ( *(_BYTE *)(v67 + 2) != 40 )
  {
    v78 = *(_BYTE *)(v67 + 72);
    v69 = *(_BYTE **)(v67 + 32);
    v70 = *(_BYTE *)(v67 + 11);
    v68 = *(_BYTE *)(v67 + 4);
    if ( *(_BYTE *)(v67 + 2) )
      goto LABEL_167;
LABEL_145:
    LOBYTE(v63) = v78 - 8;
    if ( (v63 & 0x5D) != 0 )
      goto LABEL_167;
    v79 = *(_BYTE *)(v67 + 3);
    if ( v79 == 1 || !v69 || !v70 )
      goto LABEL_162;
    LOBYTE(v67) = 0;
    v63 = (unsigned __int64)&v69[v70];
    v80 = v69 + 8;
    if ( (unsigned __int8)((*v69 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v80 > v63 )
        goto LABEL_160;
      v72 = v69[2];
      v71 = v69[1] & 0xF;
      v73 = v69[3];
    }
    else
    {
      if ( (unsigned __int64)v80 > v63 )
        goto LABEL_160;
      v71 = v69[2] & 0xF;
      v81 = v70;
      if ( (unsigned int)(unsigned __int8)v69[7] + 8 <= v70 )
        v81 = (unsigned __int8)v69[7] + 8;
      v63 = (unsigned __int64)(v69 + 13);
      v67 = (unsigned __int64)&v69[v81];
      if ( (unsigned __int64)(v69 + 13) <= v67 )
        v72 = v69[12];
      if ( (unsigned __int64)(v69 + 14) <= v67 )
        v73 = *(_BYTE *)v63;
    }
    LOBYTE(v67) = 1;
LABEL_160:
    if ( (_BYTE)v67 )
    {
      LOBYTE(v3) = v72;
      v82 = v73;
LABEL_163:
      LOBYTE(v88) = v82;
      LOBYTE(v87) = v3;
      LOBYTE(v86) = v71;
      LOBYTE(v85) = v68;
      LOBYTE(v84) = v79;
      LODWORD(v83) = *(_DWORD *)(v23 + 48);
      sub_140052E64(v63, v67, &v92, v23, v83, v84, v85, v86, v87, v88, v23);
      goto LABEL_167;
    }
LABEL_162:
    v71 = 0;
    v82 = 0;
    goto LABEL_163;
  }
  v74 = 0LL;
  v89 = 0;
  if ( *(_DWORD *)(v67 + 20) )
    goto LABEL_167;
  v63 = 0LL;
  v90 = 0;
  v91 = *(_DWORD *)(v67 + 56);
  if ( !v91 )
    goto LABEL_142;
  v75 = (unsigned int *)(v67 + 120);
  while ( 1 )
  {
    v76 = *v75;
    if ( (unsigned int)v76 >= 0x80 )
    {
      v77 = *(unsigned int *)(v67 + 16);
      if ( (unsigned int)v76 < (unsigned int)v77 )
        break;
    }
LABEL_136:
    v63 = (unsigned int)(v63 + 1);
    ++v75;
    v90 = v63;
    if ( (unsigned int)v63 >= v91 )
      goto LABEL_142;
  }
  if ( *(_DWORD *)(v76 + v67) != 64 )
  {
    v63 = (unsigned int)(*(_DWORD *)(v76 + v67) - 65);
    if ( *(_DWORD *)(v76 + v67) == 65 )
    {
      v63 = v76 + 56;
      if ( v76 + 56 <= v77 )
      {
        v89 = 1;
        if ( *(_BYTE *)(v76 + v67 + 10) )
          v74 = (char *)(v76 + v67 + 24);
        v68 = *(_BYTE *)(v76 + v67 + 8);
        v69 = *(_BYTE **)(v76 + v67 + 16);
        v70 = *(_BYTE *)(v76 + v67 + 9);
      }
    }
    else if ( *(_DWORD *)(v76 + v67) == 66 )
    {
      v63 = v76 + 40;
      if ( v76 + 40 <= v77 )
      {
        if ( *(_DWORD *)(v76 + v67 + 12) )
          v74 = (char *)(v76 + v67 + 32);
        v69 = *(_BYTE **)(v76 + v67 + 24);
        goto LABEL_141;
      }
    }
    goto LABEL_134;
  }
  v63 = v76 + 40;
  if ( v76 + 40 > v77 )
  {
LABEL_134:
    if ( v89 )
      goto LABEL_142;
    LODWORD(v63) = v90;
    goto LABEL_136;
  }
  if ( *(_BYTE *)(v76 + v67 + 10) )
    v74 = (char *)(v76 + v67 + 24);
  v69 = *(_BYTE **)(v76 + v67 + 16);
LABEL_141:
  v70 = *(_BYTE *)(v76 + v67 + 9);
  v68 = *(_BYTE *)(v76 + v67 + 8);
LABEL_142:
  if ( v74 )
  {
    v78 = *v74;
    goto LABEL_145;
  }
LABEL_167:
  IofCompleteRequest((PIRP)v23, 1);
}
