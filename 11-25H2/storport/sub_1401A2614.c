/*
 * XREFs of sub_1401A2614 @ 0x1401A2614
 * Callers:
 *     sub_1401A4D74 @ 0x1401A4D74 (sub_1401A4D74.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400879CC @ 0x1400879CC (sub_1400879CC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401A2614(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _DWORD *v3; // rsi
  size_t v5; // r15
  __int64 v6; // r14
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const GUID *v11; // r8
  unsigned int v12; // esi
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r12
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // r14
  char v20; // r11
  char v21; // r13
  char *v22; // r11
  unsigned int v23; // r15d
  unsigned __int64 v24; // rsi
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  const GUID *v32; // r8
  const GUID *v33; // r8
  int *v34; // rax
  char v35; // r12
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // r14
  char v39; // r11
  char v40; // r13
  char *v41; // r11
  unsigned int v42; // r15d
  unsigned __int64 v43; // rsi
  __int64 v44; // r8
  int v45; // ecx
  char v46; // cl
  char v47; // r8
  _BYTE *v48; // rax
  unsigned int v49; // eax
  char v50; // al
  int v51; // ecx
  __int64 v52; // rdx
  int *v53; // rax
  const GUID *v54; // r8
  const EVENT_DESCRIPTOR *v55; // rdx
  unsigned __int64 v56; // rdx
  char v57; // r12
  _BYTE *v58; // r9
  unsigned __int8 v59; // r10
  char v60; // r14
  char v61; // r11
  char v62; // r13
  char *v63; // r11
  unsigned int v64; // r15d
  unsigned __int64 v65; // rsi
  __int64 v66; // r8
  int v67; // ecx
  char v68; // cl
  char v69; // r8
  _BYTE *v70; // rax
  unsigned int v71; // eax
  char v72; // al
  const GUID *v73; // r8
  __int64 v74; // rcx
  __int64 v75; // rdx
  unsigned int *v76; // rax
  __int64 v77; // rcx
  const EVENT_DESCRIPTOR *v78; // rdx
  unsigned __int64 v79; // rdx
  char v80; // r12
  _BYTE *v81; // r9
  unsigned __int8 v82; // r10
  char v83; // si
  char v84; // r11
  unsigned __int8 v85; // r13
  char *v86; // r11
  unsigned int v87; // r15d
  __int64 v88; // rcx
  unsigned __int64 v89; // r14
  __int64 v90; // r8
  int v91; // ecx
  int v92; // ecx
  char v93; // cl
  char v94; // r8
  _BYTE *v95; // rcx
  _BYTE *v96; // rax
  unsigned int v97; // eax
  char v98; // al
  __int64 v99; // rcx
  int v100; // eax
  int *v101; // rax
  char v102; // r12
  _BYTE *v103; // r9
  unsigned __int8 v104; // r10
  char v105; // si
  char v106; // r11
  char v107; // r13
  char *v108; // r11
  unsigned int v109; // r15d
  unsigned __int64 v110; // r14
  __int64 v111; // r8
  int v112; // ecx
  char v113; // cl
  char v114; // r8
  _BYTE *v115; // rax
  unsigned int v116; // eax
  unsigned __int64 v117; // r8
  char v118; // al
  char v119; // [rsp+28h] [rbp-81h]
  char v120; // [rsp+30h] [rbp-79h]
  char v121; // [rsp+38h] [rbp-71h]
  char v122; // [rsp+40h] [rbp-69h]
  char v123; // [rsp+48h] [rbp-61h]
  __int64 v124; // [rsp+50h] [rbp-59h]
  char v125; // [rsp+60h] [rbp-49h]
  char v126; // [rsp+60h] [rbp-49h]
  char v127; // [rsp+60h] [rbp-49h]
  char v128; // [rsp+60h] [rbp-49h]
  char v129; // [rsp+60h] [rbp-49h]
  char v130; // [rsp+61h] [rbp-48h]
  char v131; // [rsp+61h] [rbp-48h]
  char v132; // [rsp+61h] [rbp-48h]
  char v133; // [rsp+61h] [rbp-48h]
  char v134; // [rsp+61h] [rbp-48h]
  int v135; // [rsp+64h] [rbp-45h]
  unsigned int v136; // [rsp+68h] [rbp-41h]
  unsigned int v137; // [rsp+68h] [rbp-41h]
  unsigned int v138; // [rsp+68h] [rbp-41h]
  unsigned int v139; // [rsp+68h] [rbp-41h]
  unsigned int v140; // [rsp+68h] [rbp-41h]
  __int128 v141; // [rsp+70h] [rbp-39h] BYREF
  __int128 v142; // [rsp+80h] [rbp-29h] BYREF
  GUID v143; // [rsp+90h] [rbp-19h] BYREF
  GUID v144; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v145; // [rsp+B0h] [rbp+7h] BYREF

  v2 = 0;
  v3 = *(_DWORD **)(a2 + 24);
  v135 = 0;
  v5 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 400) + 184LL) & 0x40000000) == 0 )
  {
    v7 = byte_140168DAA == 0;
    v135 = -1073741637;
    *(_DWORD *)(a2 + 48) = -1073741637;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v7 )
      goto LABEL_13;
    v141 = 0LL;
    IoGetActivityIdIrp(a2, &v141);
    v9 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v9 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_13;
        v14 = &stru_140148B18;
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_13;
        v15 = *(_QWORD *)(v9 + 8);
        v16 = 0;
        v17 = 0LL;
        v125 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        if ( *(_BYTE *)(v15 + 2) == 40 )
        {
          v22 = 0LL;
          v130 = 0;
          if ( *(_DWORD *)(v15 + 20) )
            goto LABEL_13;
          v23 = 0;
          v136 = *(_DWORD *)(v15 + 56);
          if ( !v136 )
            goto LABEL_42;
          while ( 1 )
          {
            v8 = *(unsigned int *)(v15 + 4LL * v23 + 120);
            if ( (unsigned int)v8 >= 0x80 )
            {
              v24 = *(unsigned int *)(v15 + 16);
              if ( (unsigned int)v8 < (unsigned int)v24 )
              {
                v25 = (unsigned int)v8;
                v26 = *(_DWORD *)(v8 + v15) - 64;
                if ( v26 )
                {
                  v8 = (unsigned int)(v26 - 1);
                  if ( (_DWORD)v8 )
                  {
                    if ( (_DWORD)v8 == 1 )
                    {
                      v8 = v25 + 40;
                      if ( v25 + 40 <= v24 )
                      {
                        if ( *(_DWORD *)(v25 + v15 + 12) )
                          v22 = (char *)(v25 + v15 + 32);
                        v17 = *(_BYTE **)(v25 + v15 + 24);
                        goto LABEL_41;
                      }
                    }
                  }
                  else
                  {
                    v8 = v25 + 56;
                    if ( v25 + 56 <= v24 )
                    {
                      v130 = 1;
                      if ( *(_BYTE *)(v25 + v15 + 10) )
                        v22 = (char *)(v25 + v15 + 24);
                      v16 = *(_BYTE *)(v25 + v15 + 8);
                      v17 = *(_BYTE **)(v25 + v15 + 16);
                      v18 = *(_BYTE *)(v25 + v15 + 9);
                    }
                  }
                }
                else
                {
                  v8 = v25 + 40;
                  if ( v25 + 40 <= v24 )
                  {
                    if ( *(_BYTE *)(v25 + v15 + 10) )
                      v22 = (char *)(v25 + v15 + 24);
                    v17 = *(_BYTE **)(v25 + v15 + 16);
LABEL_41:
                    v18 = *(_BYTE *)(v25 + v15 + 9);
                    v16 = *(_BYTE *)(v25 + v15 + 8);
LABEL_42:
                    if ( v22 )
                    {
                      v27 = *v22;
                      v20 = 0;
                      goto LABEL_45;
                    }
                    goto LABEL_13;
                  }
                }
                if ( v130 )
                  goto LABEL_42;
              }
            }
            if ( ++v23 >= v136 )
              goto LABEL_42;
          }
        }
        v27 = *(_BYTE *)(v15 + 72);
        v17 = *(_BYTE **)(v15 + 32);
        v18 = *(_BYTE *)(v15 + 11);
        v16 = *(_BYTE *)(v15 + 4);
        if ( *(_BYTE *)(v15 + 2) )
          goto LABEL_13;
LABEL_45:
        LOBYTE(v8) = v27 - 8;
        if ( (v8 & 0x5D) == 0 )
        {
          v28 = *(_BYTE *)(v15 + 3);
          if ( v28 == 1 || !v17 || !v18 )
            goto LABEL_64;
          LOBYTE(v15) = 0;
          v8 = (unsigned __int64)&v17[v18];
          v29 = v17 + 8;
          if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
          {
            if ( (unsigned __int64)v29 <= v8 )
            {
              LOBYTE(v15) = 1;
              v20 = v17[2];
              v19 = v17[1] & 0xF;
              v21 = v17[3];
            }
          }
          else
          {
            if ( (unsigned __int64)v29 <= v8 )
            {
              v19 = v17[2] & 0xF;
              v30 = v18;
              if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
                v30 = (unsigned __int8)v17[7] + 8;
              v8 = (unsigned __int64)(v17 + 13);
              v15 = (unsigned __int64)&v17[v30];
              if ( (unsigned __int64)(v17 + 13) > v15 )
                v125 = 0;
              else
                v125 = v17[12];
              if ( (unsigned __int64)(v17 + 14) <= v15 )
                v21 = *(_BYTE *)v8;
              LOBYTE(v15) = 1;
            }
            v20 = v125;
          }
          if ( (_BYTE)v15 )
          {
            LOBYTE(v2) = v20;
            v31 = v21;
          }
          else
          {
LABEL_64:
            v19 = 0;
            v31 = 0;
          }
          v124 = a2;
          v123 = v31;
          v122 = v2;
          v121 = v19;
          v120 = v16;
          v119 = v28;
          v32 = (const GUID *)&v141;
          goto LABEL_66;
        }
LABEL_13:
        v12 = v135;
        goto LABEL_14;
      case 0x1B:
        if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) == 0 )
            goto LABEL_13;
          v10 = *(int **)(a2 + 56);
          if ( v10 )
            v2 = *v10;
          v11 = (const GUID *)&v141;
          goto LABEL_12;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_13;
        v14 = &stru_140149FE8;
        break;
      default:
        goto LABEL_13;
    }
    v33 = (const GUID *)&v141;
    goto LABEL_70;
  }
  if ( !v3 )
  {
    v7 = byte_140168DAA == 0;
    v135 = -1073741811;
    *(_DWORD *)(a2 + 48) = -1073741811;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v7 )
      goto LABEL_13;
    v142 = 0LL;
    IoGetActivityIdIrp(a2, &v142);
    v9 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v9 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_13;
        v14 = &stru_140148B18;
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_13;
        v15 = *(_QWORD *)(v9 + 8);
        v35 = 0;
        v36 = 0LL;
        v126 = 0;
        v37 = 0;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        if ( *(_BYTE *)(v15 + 2) != 40 )
        {
          v46 = *(_BYTE *)(v15 + 72);
          v36 = *(_BYTE **)(v15 + 32);
          v37 = *(_BYTE *)(v15 + 11);
          v35 = *(_BYTE *)(v15 + 4);
          if ( *(_BYTE *)(v15 + 2) )
            goto LABEL_13;
          goto LABEL_112;
        }
        v41 = 0LL;
        v131 = 0;
        if ( *(_DWORD *)(v15 + 20) )
          goto LABEL_13;
        v42 = 0;
        v137 = *(_DWORD *)(v15 + 56);
        if ( !v137 )
          goto LABEL_109;
        while ( 1 )
        {
          v8 = *(unsigned int *)(v15 + 4LL * v42 + 120);
          if ( (unsigned int)v8 >= 0x80 )
          {
            v43 = *(unsigned int *)(v15 + 16);
            if ( (unsigned int)v8 < (unsigned int)v43 )
            {
              v44 = (unsigned int)v8;
              v45 = *(_DWORD *)(v8 + v15) - 64;
              if ( v45 )
              {
                v8 = (unsigned int)(v45 - 1);
                if ( (_DWORD)v8 )
                {
                  if ( (_DWORD)v8 == 1 )
                  {
                    v8 = v44 + 40;
                    if ( v44 + 40 <= v43 )
                    {
                      if ( *(_DWORD *)(v44 + v15 + 12) )
                        v41 = (char *)(v44 + v15 + 32);
                      v36 = *(_BYTE **)(v44 + v15 + 24);
                      goto LABEL_108;
                    }
                  }
                }
                else
                {
                  v8 = v44 + 56;
                  if ( v44 + 56 <= v43 )
                  {
                    v131 = 1;
                    if ( *(_BYTE *)(v44 + v15 + 10) )
                      v41 = (char *)(v44 + v15 + 24);
                    v35 = *(_BYTE *)(v44 + v15 + 8);
                    v36 = *(_BYTE **)(v44 + v15 + 16);
                    v37 = *(_BYTE *)(v44 + v15 + 9);
                  }
                }
              }
              else
              {
                v8 = v44 + 40;
                if ( v44 + 40 <= v43 )
                {
                  if ( *(_BYTE *)(v44 + v15 + 10) )
                    v41 = (char *)(v44 + v15 + 24);
                  v36 = *(_BYTE **)(v44 + v15 + 16);
LABEL_108:
                  v37 = *(_BYTE *)(v44 + v15 + 9);
                  v35 = *(_BYTE *)(v44 + v15 + 8);
LABEL_109:
                  if ( !v41 )
                    goto LABEL_13;
                  v46 = *v41;
                  v39 = 0;
LABEL_112:
                  LOBYTE(v8) = v46 - 8;
                  if ( (v8 & 0x5D) != 0 )
                    goto LABEL_13;
                  v47 = *(_BYTE *)(v15 + 3);
                  if ( v47 == 1 || !v36 || !v37 )
                    goto LABEL_131;
                  LOBYTE(v15) = 0;
                  v8 = (unsigned __int64)&v36[v37];
                  v48 = v36 + 8;
                  if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
                  {
                    if ( (unsigned __int64)v48 <= v8 )
                    {
                      LOBYTE(v15) = 1;
                      v39 = v36[2];
                      v38 = v36[1] & 0xF;
                      v40 = v36[3];
                    }
                  }
                  else
                  {
                    if ( (unsigned __int64)v48 <= v8 )
                    {
                      v38 = v36[2] & 0xF;
                      v49 = v37;
                      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
                        v49 = (unsigned __int8)v36[7] + 8;
                      v8 = (unsigned __int64)(v36 + 13);
                      v15 = (unsigned __int64)&v36[v49];
                      if ( (unsigned __int64)(v36 + 13) > v15 )
                        v126 = 0;
                      else
                        v126 = v36[12];
                      if ( (unsigned __int64)(v36 + 14) <= v15 )
                        v40 = *(_BYTE *)v8;
                      LOBYTE(v15) = 1;
                    }
                    v39 = v126;
                  }
                  if ( (_BYTE)v15 )
                  {
                    LOBYTE(v2) = v39;
                    v50 = v40;
                  }
                  else
                  {
LABEL_131:
                    v38 = 0;
                    v50 = 0;
                  }
                  v124 = a2;
                  v123 = v50;
                  v122 = v2;
                  v121 = v38;
                  v120 = v35;
                  v119 = v47;
                  v32 = (const GUID *)&v142;
LABEL_66:
                  sub_140052E64(v8, v15, v32, a2, *(_DWORD *)(a2 + 48), v119, v120, v121, v122, v123, v124);
                  goto LABEL_13;
                }
              }
              if ( v131 )
                goto LABEL_109;
            }
          }
          if ( ++v42 >= v137 )
            goto LABEL_109;
        }
      case 0x1B:
        if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) == 0 )
            goto LABEL_13;
          v34 = *(int **)(a2 + 56);
          if ( v34 )
            v2 = *v34;
          v11 = (const GUID *)&v142;
LABEL_12:
          sub_140056AB0(v8, v9, v11, a2, v2, *(_DWORD *)(a2 + 48));
          goto LABEL_13;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_13;
        v14 = &stru_140149FE8;
        break;
      default:
        goto LABEL_13;
    }
    v33 = (const GUID *)&v142;
LABEL_70:
    sub_140052F3C(v8, v14, v33, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_13;
  }
  v51 = v3[1];
  if ( !v51 )
  {
    if ( (unsigned int)v5 >= 0x10 )
    {
      if ( (*(_DWORD *)(v6 + 144) & 0x40000) != 0
        || (v100 = sub_1400879CC(*(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 576) + 160LL), v135 = v100, v100 >= 0) )
      {
        memset_0(v3, 0, v5);
        *v3 = 16;
        v3[1] = 16;
        *((_QWORD *)v3 + 1) = *(unsigned int *)(*(_QWORD *)(v6 + 576) + 160LL);
        *(_QWORD *)(a2 + 56) = 16LL;
        v12 = v135;
LABEL_279:
        v7 = byte_140168DAA == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = v12;
        if ( v7 )
          goto LABEL_14;
        v145 = 0LL;
        IoGetActivityIdIrp(a2, &v145);
        v52 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v52 )
        {
          case 0xE:
            if ( (byte_1401694F2 & 8) == 0 )
              goto LABEL_14;
            v73 = (const GUID *)&v145;
            v55 = &stru_140148B18;
            break;
          case 0xF:
            if ( byte_1401694F1 >= 0 )
              goto LABEL_14;
            v15 = *(_QWORD *)(v52 + 8);
            v102 = 0;
            v103 = 0LL;
            v129 = 0;
            v104 = 0;
            v105 = 0;
            v106 = 0;
            v107 = 0;
            if ( *(_BYTE *)(v15 + 2) == 40 )
            {
              v108 = 0LL;
              v134 = 0;
              if ( *(_DWORD *)(v15 + 20) )
                goto LABEL_13;
              v109 = 0;
              v140 = *(_DWORD *)(v15 + 56);
              if ( !v140 )
                goto LABEL_317;
              while ( 1 )
              {
                v8 = *(unsigned int *)(v15 + 4LL * v109 + 120);
                if ( (unsigned int)v8 >= 0x80 )
                {
                  v110 = *(unsigned int *)(v15 + 16);
                  if ( (unsigned int)v8 < (unsigned int)v110 )
                  {
                    v111 = (unsigned int)v8;
                    v112 = *(_DWORD *)(v15 + v8) - 64;
                    if ( v112 )
                    {
                      v8 = (unsigned int)(v112 - 1);
                      if ( (_DWORD)v8 )
                      {
                        if ( (_DWORD)v8 == 1 )
                        {
                          v8 = v111 + 40;
                          if ( v111 + 40 <= v110 )
                          {
                            if ( *(_DWORD *)(v15 + v111 + 12) )
                              v108 = (char *)(v111 + v15 + 32);
                            v103 = *(_BYTE **)(v15 + v111 + 24);
                            goto LABEL_316;
                          }
                        }
                      }
                      else
                      {
                        v8 = v111 + 56;
                        if ( v111 + 56 <= v110 )
                        {
                          v134 = 1;
                          if ( *(_BYTE *)(v15 + v111 + 10) )
                            v108 = (char *)(v111 + v15 + 24);
                          v102 = *(_BYTE *)(v15 + v111 + 8);
                          v103 = *(_BYTE **)(v15 + v111 + 16);
                          v104 = *(_BYTE *)(v15 + v111 + 9);
                        }
                      }
                    }
                    else
                    {
                      v8 = v111 + 40;
                      if ( v111 + 40 <= v110 )
                      {
                        if ( *(_BYTE *)(v15 + v111 + 10) )
                          v108 = (char *)(v111 + v15 + 24);
                        v103 = *(_BYTE **)(v15 + v111 + 16);
LABEL_316:
                        v104 = *(_BYTE *)(v15 + v111 + 9);
                        v102 = *(_BYTE *)(v15 + v111 + 8);
LABEL_317:
                        if ( !v108 )
                          goto LABEL_13;
                        v113 = *v108;
                        v106 = 0;
LABEL_320:
                        LOBYTE(v8) = v113 - 8;
                        if ( (v8 & 0x5D) != 0 )
                          goto LABEL_13;
                        if ( *(_BYTE *)(v15 + 3) == 1 || !v103 || !v104 )
                          goto LABEL_339;
                        v114 = 0;
                        v8 = (unsigned __int64)&v103[v104];
                        v115 = v103 + 8;
                        if ( (unsigned __int8)((*v103 & 0x7F) - 114) <= 1u )
                        {
                          if ( (unsigned __int64)v115 <= v8 )
                          {
                            v114 = 1;
                            v106 = v103[2];
                            v105 = v103[1] & 0xF;
                            v107 = v103[3];
                          }
                        }
                        else
                        {
                          if ( (unsigned __int64)v115 <= v8 )
                          {
                            v105 = v103[2] & 0xF;
                            v116 = v104;
                            if ( (unsigned int)(unsigned __int8)v103[7] + 8 <= v104 )
                              v116 = (unsigned __int8)v103[7] + 8;
                            v8 = (unsigned __int64)(v103 + 13);
                            v117 = (unsigned __int64)&v103[v116];
                            if ( (unsigned __int64)(v103 + 13) > v117 )
                              v129 = 0;
                            else
                              v129 = v103[12];
                            if ( (unsigned __int64)(v103 + 14) <= v117 )
                              v107 = *(_BYTE *)v8;
                            v114 = 1;
                          }
                          v106 = v129;
                        }
                        if ( v114 )
                        {
                          LOBYTE(v2) = v106;
                          v118 = v107;
                        }
                        else
                        {
LABEL_339:
                          v105 = 0;
                          v118 = 0;
                        }
                        v124 = a2;
                        v32 = (const GUID *)&v145;
                        v123 = v118;
                        v122 = v2;
                        v121 = v105;
                        v120 = v102;
                        v119 = *(_BYTE *)(v15 + 3);
                        goto LABEL_66;
                      }
                    }
                    if ( v134 )
                      goto LABEL_317;
                  }
                }
                if ( ++v109 >= v140 )
                  goto LABEL_317;
              }
            }
            v113 = *(_BYTE *)(v15 + 72);
            v103 = *(_BYTE **)(v15 + 32);
            v104 = *(_BYTE *)(v15 + 11);
            v102 = *(_BYTE *)(v15 + 4);
            if ( *(_BYTE *)(v15 + 2) )
              goto LABEL_13;
            goto LABEL_320;
          case 0x1B:
            if ( *(_BYTE *)(v52 + 1) == 7 && !*(_DWORD *)(v52 + 8) )
            {
              if ( (byte_1401694F2 & 0x40) == 0 )
                goto LABEL_14;
              v101 = *(int **)(a2 + 56);
              if ( v101 )
                v2 = *v101;
              v54 = (const GUID *)&v145;
              goto LABEL_289;
            }
            if ( (byte_1401694F2 & 0x20) == 0 )
              goto LABEL_14;
            v73 = (const GUID *)&v145;
            v55 = &stru_140149FE8;
            break;
          default:
            goto LABEL_14;
        }
LABEL_203:
        sub_140052F3C(v8, v55, v73, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_14;
      }
      v135 = v100;
      v12 = v100;
      if ( v100 == -2147483643 )
        goto LABEL_279;
    }
    else
    {
      if ( (unsigned int)v5 >= 8 )
      {
        *v3 = 16;
        v3[1] = 16;
        v12 = 0;
        *(_QWORD *)(a2 + 56) = 8LL;
        v135 = 0;
        goto LABEL_279;
      }
      v12 = -1073741789;
      v135 = -1073741789;
    }
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_279;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v51 == 1 )
  {
    v7 = byte_140168DAA == 0;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v7 )
      goto LABEL_269;
    v144 = 0LL;
    IoGetActivityIdIrp(a2, &v144);
    v75 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v75 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_269;
        v78 = &stru_140148B18;
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_269;
        v79 = *(_QWORD *)(v75 + 8);
        v80 = 0;
        v81 = 0LL;
        v128 = 0;
        v82 = 0;
        v83 = 0;
        v84 = 0;
        v85 = 0;
        if ( *(_BYTE *)(v79 + 2) != 40 )
        {
          v93 = *(_BYTE *)(v79 + 72);
          v81 = *(_BYTE **)(v79 + 32);
          v82 = *(_BYTE *)(v79 + 11);
          v80 = *(_BYTE *)(v79 + 4);
          if ( !*(_BYTE *)(v79 + 2) )
            goto LABEL_245;
          goto LABEL_269;
        }
        v86 = 0LL;
        v133 = 0;
        if ( *(_DWORD *)(v79 + 20) )
          goto LABEL_269;
        v87 = 0;
        v139 = *(_DWORD *)(v79 + 56);
        if ( !v139 )
          goto LABEL_242;
        while ( 1 )
        {
          v88 = *(unsigned int *)(v79 + 4LL * v87 + 120);
          if ( (unsigned int)v88 >= 0x80 )
          {
            v89 = *(unsigned int *)(v79 + 16);
            if ( (unsigned int)v88 < (unsigned int)v89 )
            {
              v90 = (unsigned int)v88;
              v91 = *(_DWORD *)(v79 + v88) - 64;
              if ( v91 )
              {
                v92 = v91 - 1;
                if ( v92 )
                {
                  if ( v92 == 1 && v90 + 40 <= v89 )
                  {
                    if ( *(_DWORD *)(v79 + v90 + 12) )
                      v86 = (char *)(v90 + v79 + 32);
                    v81 = *(_BYTE **)(v79 + v90 + 24);
                    goto LABEL_241;
                  }
                }
                else if ( v90 + 56 <= v89 )
                {
                  v133 = 1;
                  if ( *(_BYTE *)(v79 + v90 + 10) )
                    v86 = (char *)(v90 + v79 + 24);
                  v80 = *(_BYTE *)(v79 + v90 + 8);
                  v81 = *(_BYTE **)(v79 + v90 + 16);
                  v82 = *(_BYTE *)(v79 + v90 + 9);
                }
              }
              else if ( v90 + 40 <= v89 )
              {
                if ( *(_BYTE *)(v79 + v90 + 10) )
                  v86 = (char *)(v90 + v79 + 24);
                v81 = *(_BYTE **)(v79 + v90 + 16);
LABEL_241:
                v82 = *(_BYTE *)(v79 + v90 + 9);
                v80 = *(_BYTE *)(v79 + v90 + 8);
LABEL_242:
                if ( v86 )
                {
                  v93 = *v86;
                  v84 = 0;
LABEL_245:
                  if ( ((v93 - 8) & 0x5D) == 0 )
                  {
                    v94 = *(_BYTE *)(v79 + 3);
                    if ( v94 == 1 || !v81 || !v82 )
                      goto LABEL_264;
                    LOBYTE(v79) = 0;
                    v95 = &v81[v82];
                    v96 = v81 + 8;
                    if ( (unsigned __int8)((*v81 & 0x7F) - 114) <= 1u )
                    {
                      if ( v96 <= v95 )
                      {
                        LOBYTE(v79) = 1;
                        v84 = v81[2];
                        v83 = v81[1] & 0xF;
                        v85 = v81[3];
                      }
                    }
                    else
                    {
                      if ( v96 <= v95 )
                      {
                        v83 = v81[2] & 0xF;
                        v97 = v82;
                        if ( (unsigned int)(unsigned __int8)v81[7] + 8 <= v82 )
                          v97 = (unsigned __int8)v81[7] + 8;
                        v79 = (unsigned __int64)&v81[v97];
                        if ( (unsigned __int64)(v81 + 13) > v79 )
                          v128 = 0;
                        else
                          v128 = v81[12];
                        if ( (unsigned __int64)(v81 + 14) <= v79 )
                          v85 = v81[13];
                        LOBYTE(v79) = 1;
                      }
                      v84 = v128;
                    }
                    if ( (_BYTE)v79 )
                    {
                      v98 = v84;
                      v99 = v85;
                    }
                    else
                    {
LABEL_264:
                      v83 = 0;
                      v98 = 0;
                      v99 = 0LL;
                    }
                    sub_140052E64(v99, v79, &v144, a2, *(_DWORD *)(a2 + 48), v94, v80, v83, v98, v99, a2);
                  }
                }
                goto LABEL_269;
              }
              if ( v133 )
                goto LABEL_242;
            }
          }
          if ( ++v87 >= v139 )
            goto LABEL_242;
        }
      case 0x1B:
        if ( *(_BYTE *)(v75 + 1) == 7 && !*(_DWORD *)(v75 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v76 = *(unsigned int **)(a2 + 56);
            if ( v76 )
              v77 = *v76;
            else
              v77 = 0LL;
            sub_140056AB0(v77, v75, &v144, a2, v77, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_269;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_269:
          v12 = 0;
          goto LABEL_14;
        }
        v78 = &stru_140149FE8;
        break;
      default:
        goto LABEL_269;
    }
    sub_140052F3C(v74, v78, &v144, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_269;
  }
  v7 = byte_140168DAA == 0;
  v12 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v7 )
    goto LABEL_14;
  v143 = 0LL;
  IoGetActivityIdIrp(a2, &v143);
  v52 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v52 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_14;
    v55 = &stru_140148B18;
LABEL_202:
    v73 = &v143;
    goto LABEL_203;
  }
  if ( *(_BYTE *)v52 != 15 )
  {
    if ( *(_BYTE *)v52 != 27 )
      goto LABEL_14;
    if ( *(_BYTE *)(v52 + 1) == 7 && !*(_DWORD *)(v52 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_14;
      v53 = *(int **)(a2 + 56);
      if ( v53 )
        v2 = *v53;
      v54 = &v143;
LABEL_289:
      sub_140056AB0(v8, v52, v54, a2, v2, *(_DWORD *)(a2 + 48));
      goto LABEL_14;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_14;
    v55 = &stru_140149FE8;
    goto LABEL_202;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_14;
  v56 = *(_QWORD *)(v52 + 8);
  v57 = 0;
  v58 = 0LL;
  v127 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  if ( *(_BYTE *)(v56 + 2) != 40 )
  {
    v68 = *(_BYTE *)(v56 + 72);
    v58 = *(_BYTE **)(v56 + 32);
    v59 = *(_BYTE *)(v56 + 11);
    v57 = *(_BYTE *)(v56 + 4);
    if ( !*(_BYTE *)(v56 + 2) )
      goto LABEL_179;
    goto LABEL_14;
  }
  v63 = 0LL;
  v132 = 0;
  if ( *(_DWORD *)(v56 + 20) )
    goto LABEL_14;
  v64 = 0;
  v138 = *(_DWORD *)(v56 + 56);
  if ( !v138 )
    goto LABEL_176;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v56 + 4LL * v64 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v65 = *(unsigned int *)(v56 + 16);
      if ( (unsigned int)v8 < (unsigned int)v65 )
        break;
    }
LABEL_169:
    if ( ++v64 >= v138 )
      goto LABEL_175;
  }
  v66 = (unsigned int)v8;
  v67 = *(_DWORD *)(v8 + v56) - 64;
  if ( v67 )
  {
    v8 = (unsigned int)(v67 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v8 = v66 + 40;
        if ( v66 + 40 <= v65 )
        {
          if ( *(_DWORD *)(v66 + v56 + 12) )
            v63 = (char *)(v66 + v56 + 32);
          v58 = *(_BYTE **)(v66 + v56 + 24);
          goto LABEL_174;
        }
      }
    }
    else
    {
      v8 = v66 + 56;
      if ( v66 + 56 <= v65 )
      {
        v132 = 1;
        if ( *(_BYTE *)(v66 + v56 + 10) )
          v63 = (char *)(v66 + v56 + 24);
        v57 = *(_BYTE *)(v66 + v56 + 8);
        v58 = *(_BYTE **)(v66 + v56 + 16);
        v59 = *(_BYTE *)(v66 + v56 + 9);
      }
    }
    goto LABEL_168;
  }
  v8 = v66 + 40;
  if ( v66 + 40 > v65 )
  {
LABEL_168:
    if ( v132 )
      goto LABEL_175;
    goto LABEL_169;
  }
  if ( *(_BYTE *)(v66 + v56 + 10) )
    v63 = (char *)(v66 + v56 + 24);
  v58 = *(_BYTE **)(v66 + v56 + 16);
LABEL_174:
  v59 = *(_BYTE *)(v66 + v56 + 9);
  v57 = *(_BYTE *)(v66 + v56 + 8);
LABEL_175:
  v12 = -1073741637;
LABEL_176:
  if ( v63 )
  {
    v68 = *v63;
    v61 = 0;
LABEL_179:
    LOBYTE(v8) = v68 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v69 = *(_BYTE *)(v56 + 3);
      if ( v69 == 1 || !v58 || !v59 )
        goto LABEL_198;
      LOBYTE(v56) = 0;
      v8 = (unsigned __int64)&v58[v59];
      v70 = v58 + 8;
      if ( (unsigned __int8)((*v58 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v70 <= v8 )
        {
          LOBYTE(v56) = 1;
          v61 = v58[2];
          v60 = v58[1] & 0xF;
          v62 = v58[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v70 <= v8 )
        {
          v60 = v58[2] & 0xF;
          v71 = v59;
          if ( (unsigned int)(unsigned __int8)v58[7] + 8 <= v59 )
            v71 = (unsigned __int8)v58[7] + 8;
          v8 = (unsigned __int64)(v58 + 13);
          v56 = (unsigned __int64)&v58[v71];
          if ( (unsigned __int64)(v58 + 13) > v56 )
            v127 = 0;
          else
            v127 = v58[12];
          if ( (unsigned __int64)(v58 + 14) <= v56 )
            v62 = *(_BYTE *)v8;
          LOBYTE(v56) = 1;
        }
        v61 = v127;
      }
      if ( (_BYTE)v56 )
      {
        LOBYTE(v2) = v61;
        v72 = v62;
      }
      else
      {
LABEL_198:
        v60 = 0;
        v72 = 0;
      }
      sub_140052E64(v8, v56, &v143, a2, *(_DWORD *)(a2 + 48), v69, v57, v60, v2, v72, a2);
    }
  }
LABEL_14:
  IofCompleteRequest((PIRP)a2, 0);
  return v12;
}
