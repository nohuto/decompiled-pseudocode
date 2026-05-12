/*
 * XREFs of sub_140104680 @ 0x140104680
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
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_140104680(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rcx
  __int64 v7; // r14
  __int64 v8; // rbp
  __int16 v9; // ax
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
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  int *v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  bool v38; // zf
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  _DWORD *v50; // rdi
  __int64 v51; // rbx
  int v52; // ecx
  int v53; // eax
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  bool v60; // zf
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  const EVENT_DESCRIPTOR *v72; // rdx
  unsigned __int64 v73; // rdx
  char v74; // r14
  _BYTE *v75; // r9
  unsigned __int8 v76; // r10
  char v77; // r11
  char v78; // r13
  char v79; // r12
  char *v80; // rbx
  unsigned int v81; // r15d
  unsigned __int64 v82; // rdi
  __int64 v83; // r8
  int v84; // ecx
  char v85; // cl
  char v86; // r8
  _BYTE *v87; // rax
  unsigned int v88; // eax
  char v89; // al
  __int64 v90; // [rsp+20h] [rbp-D8h]
  __int64 v91; // [rsp+28h] [rbp-D0h]
  __int64 v92; // [rsp+30h] [rbp-C8h]
  __int64 v93; // [rsp+38h] [rbp-C0h]
  __int64 v94; // [rsp+40h] [rbp-B8h]
  __int64 v95; // [rsp+48h] [rbp-B0h]
  char v96; // [rsp+A0h] [rbp-58h]
  unsigned int v97; // [rsp+A4h] [rbp-54h]
  GUID v98; // [rsp+A8h] [rbp-50h] BYREF

  v3 = 0;
  v5 = *a2;
  v7 = *(_QWORD *)(*a2 + 4216);
  v8 = *(_QWORD *)(*a2 + 4184);
  if ( a3 )
  {
    v9 = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v5 + 4260) = 0;
    *(_WORD *)(*a2 + 4260) &= 0xF1FFu;
    v5 = *a2;
    v9 = *(_WORD *)(*a2 + 4260) & 0xFE01 | 0xC;
  }
  *(_WORD *)(v5 + 4260) = v9;
  v10 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 2 )
        goto LABEL_106;
      switch ( (unsigned __int8)(v10 >> 1) )
      {
        case 0x80u:
          goto LABEL_106;
        case 0x81u:
          goto LABEL_106;
        case 0x82u:
          goto LABEL_106;
        case 0x83u:
          goto LABEL_106;
        case 0x84u:
          goto LABEL_106;
      }
      v11 = (unsigned __int8)(v10 >> 1) - 133;
      if ( (unsigned __int8)(v10 >> 1) == 133 )
        goto LABEL_106;
      goto LABEL_97;
    }
    v12 = v10 >> 1;
    v13 = (unsigned __int8)(v10 >> 1);
    if ( v13 <= 0x80 )
    {
      if ( (unsigned __int8)v12 == 128 )
        goto LABEL_28;
      if ( v13 <= 0x11 )
      {
        if ( v13 == 17 )
          goto LABEL_47;
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
          goto LABEL_86;
        }
        v27 = v13 - 10;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_28;
            v30 = v29 - 1;
            if ( !v30 )
              goto LABEL_28;
            v31 = v30 - 1;
            if ( !v31 )
              goto LABEL_28;
            v32 = v31 - 1;
            if ( !v32 )
              goto LABEL_28;
            if ( v32 != 1 )
              goto LABEL_106;
          }
LABEL_47:
          v21 = -2147483210;
          goto LABEL_29;
        }
LABEL_28:
        v21 = -1073741808;
LABEL_29:
        sub_1400A870C(
          a1,
          1,
          2,
          (__int64)L"Failed to retrieve namespace endurance information log from controller.",
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
        v23 = 0LL;
        *(_DWORD *)(v8 + 48) = v21;
        goto LABEL_30;
      }
      if ( v13 <= 0x1A )
      {
        if ( v13 == 26 )
          goto LABEL_58;
        v33 = v13 - 18;
        if ( !v33 )
          goto LABEL_58;
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_58;
        v35 = v34 - 1;
        if ( !v35 )
        {
          v21 = -1073741800;
          goto LABEL_29;
        }
        v36 = v35 - 1;
        if ( !v36 )
          goto LABEL_106;
        v37 = v36 - 1;
        if ( !v37 )
          goto LABEL_58;
        v39 = v37 - 2;
        v38 = v39 == 0;
        goto LABEL_56;
      }
      v40 = v13 - 27;
      if ( !v40 )
      {
        v21 = -1073741637;
        goto LABEL_29;
      }
      v41 = v40 - 1;
      if ( !v41 )
        goto LABEL_28;
      v42 = v41 - 2;
      if ( v42 )
      {
        v18 = v42 - 1;
        v17 = v18 == 0;
        goto LABEL_25;
      }
LABEL_98:
      v21 = -1073741790;
      goto LABEL_29;
    }
    v43 = v13 - 129;
    if ( !v43 )
      goto LABEL_28;
    v20 = v43 - 1;
    if ( !v20 )
      goto LABEL_98;
LABEL_86:
    v60 = v20 == 1;
LABEL_105:
    if ( !v60 )
      goto LABEL_106;
    goto LABEL_28;
  }
  v44 = v10 >> 1;
  v45 = (unsigned __int8)(v10 >> 1);
  if ( v45 > 0x80 )
  {
    v71 = v45 - 129;
    if ( !v71 )
      goto LABEL_28;
    v20 = v71 - 1;
    if ( !v20 )
    {
      v21 = -1073741661;
      goto LABEL_29;
    }
    goto LABEL_86;
  }
  if ( (unsigned __int8)v44 == 128 )
    goto LABEL_28;
  if ( v45 > 0xE )
  {
    if ( v45 <= 0x16 )
    {
      if ( v45 == 22 )
        goto LABEL_28;
      v61 = v45 - 15;
      if ( !v61 )
        goto LABEL_28;
      v62 = v61 - 1;
      if ( !v62 )
        goto LABEL_28;
      v63 = v62 - 1;
      if ( !v63 )
        goto LABEL_28;
      v64 = v63 - 1;
      if ( !v64 )
        goto LABEL_28;
      v65 = v64 - 1;
      if ( !v65 )
        goto LABEL_28;
      v11 = v65 - 1;
      if ( v11 )
      {
LABEL_97:
        if ( v11 == 1 )
          goto LABEL_98;
LABEL_106:
        v21 = -1073741435;
        goto LABEL_29;
      }
LABEL_58:
      v21 = -1073741436;
      goto LABEL_29;
    }
    v66 = v45 - 24;
    if ( !v66 )
      goto LABEL_28;
    v67 = v66 - 1;
    if ( !v67 || (v68 = v67 - 1) == 0 )
    {
      v21 = -1073741643;
      goto LABEL_29;
    }
    v69 = v68 - 1;
    if ( v69 )
    {
      v70 = v69 - 1;
      if ( !v70 )
        goto LABEL_106;
      v60 = v70 == 2;
      goto LABEL_105;
    }
    goto LABEL_88;
  }
  if ( v45 == 14 )
    goto LABEL_28;
  if ( v45 > 7 )
  {
    v56 = v45 - 8;
    if ( v56 )
    {
      v57 = v56 - 1;
      if ( v57 )
      {
        v58 = v57 - 1;
        if ( v58 )
        {
          v59 = v58 - 1;
          if ( !v59 )
            goto LABEL_28;
          v20 = v59 - 1;
          if ( !v20 )
          {
            v21 = -1073740758;
            goto LABEL_29;
          }
          goto LABEL_86;
        }
      }
    }
LABEL_88:
    v21 = -1073741248;
    goto LABEL_29;
  }
  if ( v45 == 7 )
    goto LABEL_88;
  if ( (_BYTE)v44 )
  {
    v46 = v45 - 1;
    if ( !v46 )
      goto LABEL_28;
    v47 = v46 - 1;
    if ( !v47 )
      goto LABEL_28;
    v48 = v47 - 1;
    if ( !v48 )
      goto LABEL_106;
    v49 = v48 - 1;
    if ( !v49 )
      goto LABEL_106;
    v39 = v49 - 1;
    v38 = v39 == 0;
LABEL_56:
    if ( !v38 && v39 != 1 )
      goto LABEL_106;
    goto LABEL_58;
  }
  v50 = *(_DWORD **)(v8 + 24);
  *(_DWORD *)(v8 + 48) = 0;
  v51 = *(_QWORD *)(*a2 + 4160);
  memset_0(v50, 0, *(unsigned int *)(*(_QWORD *)(v8 + 184) + 8LL));
  v23 = 56LL;
  *v50 = 56;
  v50[1] = 56;
  v52 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 176) + 100LL);
  v50[2] = 1;
  v50[3] = v52;
  v53 = *(unsigned __int8 *)(v51 + 5);
  v50[2] = 5;
  v50[5] = v53;
  v54 = *(_OWORD *)(v51 + 48);
  v50[2] = 13;
  *(_OWORD *)(v50 + 6) = v54;
  v55 = *(_OWORD *)(v51 + 64);
  v50[2] = 29;
  *(_OWORD *)(v50 + 10) = v55;
LABEL_30:
  *(_QWORD *)(v8 + 56) = v23;
  sub_1400F5FEC(a1, *(_DWORD *)(*a2 + 4248), v22, *(_QWORD *)(*a2 + 4160), *(_QWORD *)(*a2 + 4168));
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  sub_140122C20(a1, a2);
  v17 = byte_140168DAA == 0;
  *(_BYTE *)(v8 + 141) = -84;
  if ( v17 )
    goto LABEL_163;
  v98 = 0LL;
  IoGetActivityIdIrp(v8, &v98);
  v25 = *(_QWORD *)(v8 + 184);
  if ( *(_BYTE *)v25 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_163;
    v72 = &stru_140148B18;
    goto LABEL_162;
  }
  if ( *(_BYTE *)v25 != 15 )
  {
    if ( *(_BYTE *)v25 != 27 )
      goto LABEL_163;
    if ( *(_BYTE *)(v25 + 1) == 7 && !*(_DWORD *)(v25 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v26 = *(int **)(v8 + 56);
        if ( v26 )
          v3 = *v26;
        LODWORD(v91) = *(_DWORD *)(v8 + 48);
        LODWORD(v90) = v3;
        sub_140056AB0(v24, v25, &v98, v8, v90, v91);
      }
      goto LABEL_163;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_163;
    v72 = &stru_140149FE8;
LABEL_162:
    LODWORD(v90) = *(_DWORD *)(v8 + 48);
    sub_140052F3C(v24, v72, &v98, v8, v90);
    goto LABEL_163;
  }
  if ( (byte_1401694F1 & 0x80) == 0 )
    goto LABEL_163;
  v73 = *(_QWORD *)(v25 + 8);
  v74 = 0;
  v75 = 0LL;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  if ( *(_BYTE *)(v73 + 2) != 40 )
  {
    v85 = *(_BYTE *)(v73 + 72);
    v75 = *(_BYTE **)(v73 + 32);
    v76 = *(_BYTE *)(v73 + 11);
    v74 = *(_BYTE *)(v73 + 4);
    if ( *(_BYTE *)(v73 + 2) )
      goto LABEL_163;
LABEL_141:
    LOBYTE(v24) = v85 - 8;
    if ( (v24 & 0x5D) != 0 )
      goto LABEL_163;
    v86 = *(_BYTE *)(v73 + 3);
    if ( v86 == 1 || !v75 || !v76 )
      goto LABEL_158;
    LOBYTE(v73) = 0;
    v24 = (unsigned __int64)&v75[v76];
    v87 = v75 + 8;
    if ( (unsigned __int8)((*v75 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v87 > v24 )
        goto LABEL_156;
      v78 = v75[2];
      v77 = v75[1] & 0xF;
      v79 = v75[3];
    }
    else
    {
      if ( (unsigned __int64)v87 > v24 )
        goto LABEL_156;
      v77 = v75[2] & 0xF;
      v88 = v76;
      if ( (unsigned int)(unsigned __int8)v75[7] + 8 <= v76 )
        v88 = (unsigned __int8)v75[7] + 8;
      v24 = (unsigned __int64)(v75 + 13);
      v73 = (unsigned __int64)&v75[v88];
      if ( (unsigned __int64)(v75 + 13) <= v73 )
        v78 = v75[12];
      if ( (unsigned __int64)(v75 + 14) <= v73 )
        v79 = *(_BYTE *)v24;
    }
    LOBYTE(v73) = 1;
LABEL_156:
    if ( (_BYTE)v73 )
    {
      LOBYTE(v3) = v78;
      v89 = v79;
LABEL_159:
      LOBYTE(v95) = v89;
      LOBYTE(v94) = v3;
      LOBYTE(v93) = v77;
      LOBYTE(v92) = v74;
      LOBYTE(v91) = v86;
      LODWORD(v90) = *(_DWORD *)(v8 + 48);
      sub_140052E64(v24, v73, &v98, v8, v90, v91, v92, v93, v94, v95, v8);
      goto LABEL_163;
    }
LABEL_158:
    v77 = 0;
    v89 = 0;
    goto LABEL_159;
  }
  v80 = 0LL;
  v96 = 0;
  if ( *(_DWORD *)(v73 + 20) )
    goto LABEL_163;
  v81 = 0;
  v97 = *(_DWORD *)(v73 + 56);
  if ( !v97 )
    goto LABEL_138;
  while ( 1 )
  {
    v24 = *(unsigned int *)(v73 + 4LL * v81 + 120);
    if ( (unsigned int)v24 >= 0x80 )
    {
      v82 = *(unsigned int *)(v73 + 16);
      if ( (unsigned int)v24 < (unsigned int)v82 )
        break;
    }
LABEL_132:
    if ( ++v81 >= v97 )
      goto LABEL_138;
  }
  v83 = (unsigned int)v24;
  v84 = *(_DWORD *)(v24 + v73) - 64;
  if ( v84 )
  {
    v24 = (unsigned int)(v84 - 1);
    if ( (_DWORD)v24 )
    {
      if ( (_DWORD)v24 == 1 )
      {
        v24 = v83 + 40;
        if ( v83 + 40 <= v82 )
        {
          if ( *(_DWORD *)(v83 + v73 + 12) )
            v80 = (char *)(v83 + v73 + 32);
          v75 = *(_BYTE **)(v83 + v73 + 24);
          goto LABEL_137;
        }
      }
    }
    else
    {
      v24 = v83 + 56;
      if ( v83 + 56 <= v82 )
      {
        v96 = 1;
        if ( *(_BYTE *)(v83 + v73 + 10) )
          v80 = (char *)(v83 + v73 + 24);
        v74 = *(_BYTE *)(v83 + v73 + 8);
        v75 = *(_BYTE **)(v83 + v73 + 16);
        v76 = *(_BYTE *)(v83 + v73 + 9);
      }
    }
    goto LABEL_131;
  }
  v24 = v83 + 40;
  if ( v83 + 40 > v82 )
  {
LABEL_131:
    if ( v96 )
      goto LABEL_138;
    goto LABEL_132;
  }
  if ( *(_BYTE *)(v83 + v73 + 10) )
    v80 = (char *)(v83 + v73 + 24);
  v75 = *(_BYTE **)(v83 + v73 + 16);
LABEL_137:
  v76 = *(_BYTE *)(v83 + v73 + 9);
  v74 = *(_BYTE *)(v83 + v73 + 8);
LABEL_138:
  if ( v80 )
  {
    v85 = *v80;
    goto LABEL_141;
  }
LABEL_163:
  IofCompleteRequest((PIRP)v8, 1);
}
