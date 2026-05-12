/*
 * XREFs of sub_1401A4D74 @ 0x1401A4D74
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140121B14 @ 0x140121B14 (sub_140121B14.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14019B62C @ 0x14019B62C (sub_14019B62C.c)
 *     sub_1401A0494 @ 0x1401A0494 (sub_1401A0494.c)
 *     sub_1401A0894 @ 0x1401A0894 (sub_1401A0894.c)
 *     sub_1401A0D00 @ 0x1401A0D00 (sub_1401A0D00.c)
 *     sub_1401A1E58 @ 0x1401A1E58 (sub_1401A1E58.c)
 *     sub_1401A2214 @ 0x1401A2214 (sub_1401A2214.c)
 *     sub_1401A2614 @ 0x1401A2614 (sub_1401A2614.c)
 *     sub_1401A35CC @ 0x1401A35CC (sub_1401A35CC.c)
 *     sub_1401A39C0 @ 0x1401A39C0 (sub_1401A39C0.c)
 *     sub_1401A3DA4 @ 0x1401A3DA4 (sub_1401A3DA4.c)
 *     sub_1401A4160 @ 0x1401A4160 (sub_1401A4160.c)
 *     sub_1401A4548 @ 0x1401A4548 (sub_1401A4548.c)
 *     sub_1401A4934 @ 0x1401A4934 (sub_1401A4934.c)
 */

__int64 __fastcall sub_1401A4D74(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  int *v6; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r12
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r13
  char *v22; // r11
  unsigned int v23; // r15d
  unsigned __int64 v24; // r14
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  unsigned int v32; // r14d
  int v33; // r8d
  int v34; // r8d
  int v35; // r8d
  int v36; // r8d
  int v37; // r8d
  int v38; // r8d
  int v40; // r8d
  int v41; // r8d
  int v42; // r8d
  int v43; // r8d
  int v44; // r8d
  int v45; // r8d
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  int *v48; // rax
  const EVENT_DESCRIPTOR *v49; // rdx
  unsigned __int64 v50; // rdx
  char v51; // r12
  _BYTE *v52; // r9
  unsigned __int8 v53; // r10
  char v54; // si
  char v55; // r11
  char v56; // r13
  char *v57; // r11
  unsigned int v58; // r15d
  unsigned __int64 v59; // r14
  __int64 v60; // r8
  int v61; // ecx
  char v62; // cl
  char v63; // r8
  _BYTE *v64; // rax
  unsigned int v65; // eax
  char v66; // al
  unsigned __int64 v67; // rcx
  __int64 v68; // rdx
  int *v69; // rax
  const GUID *v70; // r8
  const EVENT_DESCRIPTOR *v71; // rdx
  unsigned __int64 v72; // rdx
  char v73; // r12
  _BYTE *v74; // r9
  unsigned __int8 v75; // r10
  char v76; // si
  char v77; // r11
  char v78; // r13
  char *v79; // r11
  unsigned int v80; // r15d
  unsigned __int64 v81; // r14
  __int64 v82; // r8
  int v83; // ecx
  char v84; // cl
  char v85; // r8
  _BYTE *v86; // rax
  unsigned int v87; // eax
  char v88; // al
  const GUID *v89; // r8
  int *v90; // rax
  const EVENT_DESCRIPTOR *v91; // rdx
  char v92; // r12
  _BYTE *v93; // r9
  unsigned __int8 v94; // r10
  char v95; // si
  char v96; // r11
  char v97; // r13
  char *v98; // r11
  unsigned int v99; // r15d
  unsigned __int64 v100; // r14
  __int64 v101; // r8
  int v102; // ecx
  char v103; // cl
  char v104; // r8
  _BYTE *v105; // rax
  unsigned int v106; // eax
  char v107; // al
  int *v108; // rax
  const EVENT_DESCRIPTOR *v109; // rdx
  char v110; // r12
  _BYTE *v111; // r9
  unsigned __int8 v112; // r10
  char v113; // si
  char v114; // r11
  char v115; // r13
  char *v116; // r11
  unsigned int v117; // r15d
  unsigned __int64 v118; // r14
  __int64 v119; // r8
  int v120; // ecx
  char v121; // cl
  char v122; // r8
  _BYTE *v123; // rax
  unsigned int v124; // eax
  char v125; // al
  unsigned int v127; // eax
  unsigned int v128; // esi
  unsigned __int64 v129; // rcx
  __int64 v130; // rdx
  int *v131; // rax
  const EVENT_DESCRIPTOR *v132; // rdx
  unsigned __int64 v133; // rdx
  char v134; // r13
  _BYTE *v135; // r9
  unsigned __int8 v136; // r10
  char v137; // r14
  char v138; // r15
  char v139; // r11
  char *v140; // r11
  unsigned int v141; // r12d
  unsigned __int64 v142; // r15
  __int64 v143; // r8
  int v144; // ecx
  char v145; // cl
  char v146; // r8
  _BYTE *v147; // rax
  unsigned int v148; // eax
  char v149; // al
  unsigned __int64 v150; // rcx
  __int64 v151; // rdx
  int *v152; // rax
  const EVENT_DESCRIPTOR *v153; // rdx
  unsigned __int64 v154; // rdx
  char v155; // r12
  _BYTE *v156; // r9
  unsigned __int8 v157; // r10
  char v158; // si
  char v159; // r11
  char v160; // r13
  char *v161; // r11
  unsigned int v162; // r15d
  unsigned __int64 v163; // r14
  __int64 v164; // r8
  int v165; // ecx
  char v166; // cl
  char v167; // r8
  _BYTE *v168; // rax
  unsigned int v169; // eax
  char v170; // al
  int v171; // [rsp+20h] [rbp-79h]
  int v172; // [rsp+20h] [rbp-79h]
  char v173; // [rsp+28h] [rbp-71h]
  char v174; // [rsp+30h] [rbp-69h]
  char v175; // [rsp+38h] [rbp-61h]
  char v176; // [rsp+40h] [rbp-59h]
  char v177; // [rsp+48h] [rbp-51h]
  __int64 v178; // [rsp+50h] [rbp-49h]
  char v179; // [rsp+60h] [rbp-39h]
  char v180; // [rsp+60h] [rbp-39h]
  char v181; // [rsp+60h] [rbp-39h]
  char v182; // [rsp+60h] [rbp-39h]
  char v183; // [rsp+60h] [rbp-39h]
  char v184; // [rsp+60h] [rbp-39h]
  char v185; // [rsp+61h] [rbp-38h]
  char v186; // [rsp+61h] [rbp-38h]
  char v187; // [rsp+61h] [rbp-38h]
  char v188; // [rsp+61h] [rbp-38h]
  char v189; // [rsp+61h] [rbp-38h]
  char v190; // [rsp+61h] [rbp-38h]
  char v191; // [rsp+61h] [rbp-38h]
  char v192; // [rsp+62h] [rbp-37h]
  char v193; // [rsp+62h] [rbp-37h]
  unsigned int v194; // [rsp+64h] [rbp-35h]
  unsigned int v195; // [rsp+64h] [rbp-35h]
  unsigned int v196; // [rsp+64h] [rbp-35h]
  unsigned int v197; // [rsp+64h] [rbp-35h]
  unsigned int v198; // [rsp+64h] [rbp-35h]
  unsigned int v199; // [rsp+64h] [rbp-35h]
  unsigned int v200; // [rsp+64h] [rbp-35h]
  GUID v201; // [rsp+68h] [rbp-31h] BYREF
  GUID v202; // [rsp+78h] [rbp-21h] BYREF
  GUID v203; // [rsp+88h] [rbp-11h] BYREF
  GUID v204; // [rsp+98h] [rbp-1h] BYREF
  GUID v205; // [rsp+A8h] [rbp+Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  *a3 = 1;
  v5 = 0;
  v6 = *(int **)(a2 + 24);
  if ( !v6 || *(_DWORD *)(v3 + 16) < 8u )
  {
    v10 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v10 )
      goto LABEL_502;
    v201 = 0LL;
    IoGetActivityIdIrp(a2, &v201);
    v151 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v151 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_502;
        v150 = *(unsigned int *)(a2 + 48);
        v153 = &stru_140148B18;
        v172 = *(_DWORD *)(a2 + 48);
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_502;
        v154 = *(_QWORD *)(v151 + 8);
        v155 = 0;
        v156 = 0LL;
        v191 = 0;
        v157 = 0;
        v158 = 0;
        v159 = 0;
        v160 = 0;
        if ( *(_BYTE *)(v154 + 2) != 40 )
        {
          v166 = *(_BYTE *)(v154 + 72);
          v156 = *(_BYTE **)(v154 + 32);
          v157 = *(_BYTE *)(v154 + 11);
          v155 = *(_BYTE *)(v154 + 4);
          if ( !*(_BYTE *)(v154 + 2) )
            goto LABEL_478;
          goto LABEL_502;
        }
        v161 = 0LL;
        v193 = 0;
        if ( *(_DWORD *)(v154 + 20) )
          goto LABEL_502;
        v162 = 0;
        v200 = *(_DWORD *)(v154 + 56);
        if ( !v200 )
          goto LABEL_475;
        while ( 1 )
        {
          v150 = *(unsigned int *)(v154 + 4LL * v162 + 120);
          if ( (unsigned int)v150 >= 0x80 )
          {
            v163 = *(unsigned int *)(v154 + 16);
            if ( (unsigned int)v150 < (unsigned int)v163 )
            {
              v164 = (unsigned int)v150;
              v165 = *(_DWORD *)(v150 + v154) - 64;
              if ( v165 )
              {
                v150 = (unsigned int)(v165 - 1);
                if ( (_DWORD)v150 )
                {
                  if ( (_DWORD)v150 == 1 )
                  {
                    v150 = v164 + 40;
                    if ( v164 + 40 <= v163 )
                    {
                      if ( *(_DWORD *)(v164 + v154 + 12) )
                        v161 = (char *)(v164 + v154 + 32);
                      v156 = *(_BYTE **)(v164 + v154 + 24);
                      goto LABEL_474;
                    }
                  }
                }
                else
                {
                  v150 = v164 + 56;
                  if ( v164 + 56 <= v163 )
                  {
                    v193 = 1;
                    if ( *(_BYTE *)(v164 + v154 + 10) )
                      v161 = (char *)(v164 + v154 + 24);
                    v155 = *(_BYTE *)(v164 + v154 + 8);
                    v156 = *(_BYTE **)(v164 + v154 + 16);
                    v157 = *(_BYTE *)(v164 + v154 + 9);
                  }
                }
              }
              else
              {
                v150 = v164 + 40;
                if ( v164 + 40 <= v163 )
                {
                  if ( *(_BYTE *)(v164 + v154 + 10) )
                    v161 = (char *)(v164 + v154 + 24);
                  v156 = *(_BYTE **)(v164 + v154 + 16);
LABEL_474:
                  v157 = *(_BYTE *)(v164 + v154 + 9);
                  v155 = *(_BYTE *)(v164 + v154 + 8);
LABEL_475:
                  if ( v161 )
                  {
                    v166 = *v161;
                    v159 = 0;
LABEL_478:
                    LOBYTE(v150) = v166 - 8;
                    if ( (v150 & 0x5D) == 0 )
                    {
                      v167 = *(_BYTE *)(v154 + 3);
                      if ( v167 == 1 || !v156 || !v157 )
                        goto LABEL_497;
                      LOBYTE(v154) = 0;
                      v150 = (unsigned __int64)&v156[v157];
                      v168 = v156 + 8;
                      if ( (unsigned __int8)((*v156 & 0x7F) - 114) <= 1u )
                      {
                        if ( (unsigned __int64)v168 <= v150 )
                        {
                          LOBYTE(v154) = 1;
                          v159 = v156[2];
                          v158 = v156[1] & 0xF;
                          v160 = v156[3];
                        }
                      }
                      else
                      {
                        if ( (unsigned __int64)v168 <= v150 )
                        {
                          v158 = v156[2] & 0xF;
                          v169 = v157;
                          if ( (unsigned int)(unsigned __int8)v156[7] + 8 <= v157 )
                            v169 = (unsigned __int8)v156[7] + 8;
                          v150 = (unsigned __int64)(v156 + 13);
                          v154 = (unsigned __int64)&v156[v169];
                          if ( (unsigned __int64)(v156 + 13) > v154 )
                            v191 = 0;
                          else
                            v191 = v156[12];
                          if ( (unsigned __int64)(v156 + 14) <= v154 )
                            v160 = *(_BYTE *)v150;
                          LOBYTE(v154) = 1;
                        }
                        v159 = v191;
                      }
                      if ( (_BYTE)v154 )
                      {
                        LOBYTE(v5) = v159;
                        v170 = v160;
                      }
                      else
                      {
LABEL_497:
                        v158 = 0;
                        v170 = 0;
                      }
                      sub_140052E64(v150, v154, &v201, a2, *(_DWORD *)(a2 + 48), v167, v155, v158, v5, v170, a2);
                    }
                  }
                  goto LABEL_502;
                }
              }
              if ( v193 )
                goto LABEL_475;
            }
          }
          if ( ++v162 >= v200 )
            goto LABEL_475;
        }
      case 0x1B:
        if ( *(_BYTE *)(v151 + 1) == 7 && !*(_DWORD *)(v151 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v152 = *(int **)(a2 + 56);
            if ( v152 )
              v5 = *v152;
            sub_140056AB0(v150, v151, &v201, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_502;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
        {
LABEL_502:
          IofCompleteRequest((PIRP)a2, 0);
          return 3221225485LL;
        }
        v153 = &stru_140149FE8;
        v172 = *(_DWORD *)(a2 + 48);
        break;
      default:
        goto LABEL_502;
    }
    sub_140052F3C(v150, v153, &v201, a2, v172);
    goto LABEL_502;
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 136) & 2LL;
  if ( (*(_QWORD *)(v8 + 136) & 2) == 0 || *(_DWORD *)(v8 + 568) == 2 )
  {
    v33 = *v6;
    if ( v33 <= 12 )
    {
      if ( v33 == 12 )
        return (unsigned int)sub_1401A39C0(a1, a2);
      if ( !v33 )
        return (unsigned int)sub_1401A3DA4(a1, a2);
      v34 = v33 - 1;
      if ( !v34 )
        return (unsigned int)sub_1401A0894(a1, a2);
      v35 = v34 - 1;
      if ( !v35 )
        return (unsigned int)sub_1401A1E58(a1, a2);
      v36 = v35 - 2;
      if ( !v36 )
        return (unsigned int)sub_1401A4934(a1, a2);
      v37 = v36 - 2;
      if ( !v37 )
        return (unsigned int)sub_1401A0494((_DWORD *)a1, a2);
      v38 = v37 - 1;
      if ( !v38 )
        return (unsigned int)sub_1401A4160(a1, a2);
      if ( v38 == 1 )
        return (unsigned int)sub_1401A4548(a1, a2);
      goto LABEL_94;
    }
    v40 = v33 - 48;
    if ( !v40 )
      return (unsigned int)sub_1401A2214(a1, a2);
    v41 = v40 - 2;
    if ( !v41 )
    {
LABEL_297:
      if ( !v9 )
      {
        v127 = sub_140121B14(*(_QWORD *)(a1 + 8), (_QWORD *)a2, a3);
        v128 = v127;
        if ( v127 == 259 )
        {
          *a3 = 0;
          return v128;
        }
        v10 = byte_140168DAA == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = v127;
        if ( v10 )
          goto LABEL_434;
        v201 = 0LL;
        IoGetActivityIdIrp(a2, &v201);
        v130 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v130 )
        {
          case 0xE:
            if ( (byte_1401694F2 & 8) == 0 )
              goto LABEL_434;
            v132 = &stru_140148B18;
            break;
          case 0xF:
            if ( byte_1401694F1 >= 0 )
              goto LABEL_434;
            v133 = *(_QWORD *)(v130 + 8);
            v134 = 0;
            v135 = 0LL;
            v184 = 0;
            v136 = 0;
            v190 = 0;
            v137 = 0;
            v138 = 0;
            v139 = 0;
            if ( *(_BYTE *)(v133 + 2) != 40 )
            {
              v145 = *(_BYTE *)(v133 + 72);
              v135 = *(_BYTE **)(v133 + 32);
              v136 = *(_BYTE *)(v133 + 11);
              v134 = *(_BYTE *)(v133 + 4);
              if ( !*(_BYTE *)(v133 + 2) )
                goto LABEL_409;
              goto LABEL_434;
            }
            v140 = 0LL;
            v192 = 0;
            if ( *(_DWORD *)(v133 + 20) )
              goto LABEL_434;
            v141 = 0;
            v199 = *(_DWORD *)(v133 + 56);
            if ( !v199 )
              goto LABEL_406;
            while ( 1 )
            {
              v129 = *(unsigned int *)(v133 + 4LL * v141 + 120);
              if ( (unsigned int)v129 >= 0x80 )
              {
                v142 = *(unsigned int *)(v133 + 16);
                if ( (unsigned int)v129 < (unsigned int)v142 )
                {
                  v143 = (unsigned int)v129;
                  v144 = *(_DWORD *)(v133 + v129) - 64;
                  if ( v144 )
                  {
                    v129 = (unsigned int)(v144 - 1);
                    if ( (_DWORD)v129 )
                    {
                      if ( (_DWORD)v129 == 1 )
                      {
                        v129 = v143 + 40;
                        if ( v143 + 40 <= v142 )
                        {
                          if ( *(_DWORD *)(v133 + v143 + 12) )
                            v140 = (char *)(v143 + v133 + 32);
                          v135 = *(_BYTE **)(v133 + v143 + 24);
LABEL_404:
                          v136 = *(_BYTE *)(v133 + v143 + 9);
                          v134 = *(_BYTE *)(v133 + v143 + 8);
LABEL_405:
                          v138 = 0;
LABEL_406:
                          if ( v140 )
                          {
                            v145 = *v140;
                            v139 = 0;
LABEL_409:
                            LOBYTE(v129) = v145 - 8;
                            if ( (v129 & 0x5D) == 0 )
                            {
                              v146 = *(_BYTE *)(v133 + 3);
                              if ( v146 == 1 || !v135 || !v136 )
                                goto LABEL_429;
                              LOBYTE(v133) = 0;
                              v129 = (unsigned __int64)&v135[v136];
                              v147 = v135 + 8;
                              if ( (unsigned __int8)((*v135 & 0x7F) - 114) <= 1u )
                              {
                                if ( (unsigned __int64)v147 <= v129 )
                                {
                                  LOBYTE(v133) = 1;
                                  v138 = v135[2];
                                  v137 = v135[1] & 0xF;
                                  v139 = v135[3];
                                }
                              }
                              else
                              {
                                if ( (unsigned __int64)v147 <= v129 )
                                {
                                  v137 = v135[2] & 0xF;
                                  v148 = v136;
                                  if ( (unsigned int)(unsigned __int8)v135[7] + 8 <= v136 )
                                    v148 = (unsigned __int8)v135[7] + 8;
                                  v129 = (unsigned __int64)(v135 + 13);
                                  v133 = (unsigned __int64)&v135[v148];
                                  if ( (unsigned __int64)(v135 + 13) > v133 )
                                    v184 = 0;
                                  else
                                    v184 = v135[12];
                                  if ( (unsigned __int64)(v135 + 14) > v133 )
                                    v190 = 0;
                                  else
                                    v190 = *(_BYTE *)v129;
                                  LOBYTE(v133) = 1;
                                }
                                v139 = v190;
                                v138 = v184;
                              }
                              if ( (_BYTE)v133 )
                              {
                                LOBYTE(v5) = v138;
                                v149 = v139;
                              }
                              else
                              {
LABEL_429:
                                v137 = 0;
                                v149 = 0;
                              }
                              sub_140052E64(v129, v133, &v201, a2, *(_DWORD *)(a2 + 48), v146, v134, v137, v5, v149, a2);
                            }
                          }
LABEL_434:
                          IofCompleteRequest((PIRP)a2, 0);
                          return v128;
                        }
                      }
                    }
                    else
                    {
                      v129 = v143 + 56;
                      if ( v143 + 56 <= v142 )
                      {
                        v192 = 1;
                        if ( *(_BYTE *)(v133 + v143 + 10) )
                          v140 = (char *)(v143 + v133 + 24);
                        v134 = *(_BYTE *)(v133 + v143 + 8);
                        v135 = *(_BYTE **)(v133 + v143 + 16);
                        v136 = *(_BYTE *)(v133 + v143 + 9);
                      }
                    }
                  }
                  else
                  {
                    v129 = v143 + 40;
                    if ( v143 + 40 <= v142 )
                    {
                      if ( *(_BYTE *)(v133 + v143 + 10) )
                        v140 = (char *)(v143 + v133 + 24);
                      v135 = *(_BYTE **)(v133 + v143 + 16);
                      goto LABEL_404;
                    }
                  }
                  if ( v192 )
                    goto LABEL_405;
                }
              }
              if ( ++v141 >= v199 )
                goto LABEL_405;
            }
          case 0x1B:
            if ( *(_BYTE *)(v130 + 1) == 7 && !*(_DWORD *)(v130 + 8) )
            {
              if ( (byte_1401694F2 & 0x40) != 0 )
              {
                v131 = *(int **)(a2 + 56);
                if ( v131 )
                  v5 = *v131;
                sub_140056AB0(v129, v130, &v201, a2, v5, *(_DWORD *)(a2 + 48));
              }
              goto LABEL_434;
            }
            if ( (byte_1401694F2 & 0x20) == 0 )
              goto LABEL_434;
            v132 = &stru_140149FE8;
            break;
          default:
            goto LABEL_434;
        }
        sub_140052F3C(v129, v132, &v201, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_434;
      }
      v10 = byte_140168DAA == 0;
      v32 = -1073741637;
      *(_DWORD *)(a2 + 48) = -1073741637;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v10 )
        goto LABEL_365;
      v201 = 0LL;
      IoGetActivityIdIrp(a2, &v201);
      v68 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v68 )
      {
        case 0xE:
          if ( (byte_1401694F2 & 8) == 0 )
            goto LABEL_365;
          v67 = *(unsigned int *)(a2 + 48);
          v109 = &stru_140148B18;
          v171 = *(_DWORD *)(a2 + 48);
          break;
        case 0xF:
          if ( byte_1401694F1 >= 0 )
            goto LABEL_365;
          v72 = *(_QWORD *)(v68 + 8);
          v110 = 0;
          v111 = 0LL;
          v183 = 0;
          v112 = 0;
          v113 = 0;
          v114 = 0;
          v115 = 0;
          if ( *(_BYTE *)(v72 + 2) != 40 )
          {
            v121 = *(_BYTE *)(v72 + 72);
            v111 = *(_BYTE **)(v72 + 32);
            v112 = *(_BYTE *)(v72 + 11);
            v110 = *(_BYTE *)(v72 + 4);
            if ( *(_BYTE *)(v72 + 2) )
              goto LABEL_365;
            goto LABEL_340;
          }
          v116 = 0LL;
          v189 = 0;
          if ( *(_DWORD *)(v72 + 20) )
            goto LABEL_365;
          v117 = 0;
          v198 = *(_DWORD *)(v72 + 56);
          if ( !v198 )
            goto LABEL_337;
          while ( 1 )
          {
            v67 = *(unsigned int *)(v72 + 4LL * v117 + 120);
            if ( (unsigned int)v67 >= 0x80 )
            {
              v118 = *(unsigned int *)(v72 + 16);
              if ( (unsigned int)v67 < (unsigned int)v118 )
              {
                v119 = (unsigned int)v67;
                v120 = *(_DWORD *)(v72 + v67) - 64;
                if ( v120 )
                {
                  v67 = (unsigned int)(v120 - 1);
                  if ( (_DWORD)v67 )
                  {
                    if ( (_DWORD)v67 == 1 )
                    {
                      v67 = v119 + 40;
                      if ( v119 + 40 <= v118 )
                      {
                        if ( *(_DWORD *)(v72 + v119 + 12) )
                          v116 = (char *)(v119 + v72 + 32);
                        v111 = *(_BYTE **)(v72 + v119 + 24);
LABEL_335:
                        v112 = *(_BYTE *)(v72 + v119 + 9);
                        v110 = *(_BYTE *)(v72 + v119 + 8);
LABEL_336:
                        v32 = -1073741637;
LABEL_337:
                        if ( !v116 )
                          goto LABEL_365;
                        v121 = *v116;
                        v114 = 0;
LABEL_340:
                        LOBYTE(v67) = v121 - 8;
                        if ( (v67 & 0x5D) != 0 )
                          goto LABEL_365;
                        v122 = *(_BYTE *)(v72 + 3);
                        if ( v122 == 1 || !v111 || !v112 )
                          goto LABEL_359;
                        LOBYTE(v72) = 0;
                        v67 = (unsigned __int64)&v111[v112];
                        v123 = v111 + 8;
                        if ( (unsigned __int8)((*v111 & 0x7F) - 114) <= 1u )
                        {
                          if ( (unsigned __int64)v123 <= v67 )
                          {
                            LOBYTE(v72) = 1;
                            v114 = v111[2];
                            v113 = v111[1] & 0xF;
                            v115 = v111[3];
                          }
                        }
                        else
                        {
                          if ( (unsigned __int64)v123 <= v67 )
                          {
                            v113 = v111[2] & 0xF;
                            v124 = v112;
                            if ( (unsigned int)(unsigned __int8)v111[7] + 8 <= v112 )
                              v124 = (unsigned __int8)v111[7] + 8;
                            v67 = (unsigned __int64)(v111 + 13);
                            v72 = (unsigned __int64)&v111[v124];
                            if ( (unsigned __int64)(v111 + 13) > v72 )
                              v183 = 0;
                            else
                              v183 = v111[12];
                            if ( (unsigned __int64)(v111 + 14) <= v72 )
                              v115 = *(_BYTE *)v67;
                            LOBYTE(v72) = 1;
                          }
                          v114 = v183;
                        }
                        if ( (_BYTE)v72 )
                        {
                          LOBYTE(v5) = v114;
                          v125 = v115;
                        }
                        else
                        {
LABEL_359:
                          v113 = 0;
                          v125 = 0;
                        }
                        v178 = a2;
                        v177 = v125;
                        v176 = v5;
                        v175 = v113;
                        v174 = v110;
                        v173 = v122;
                        v89 = &v201;
LABEL_361:
                        sub_140052E64(v67, v72, v89, a2, *(_DWORD *)(a2 + 48), v173, v174, v175, v176, v177, v178);
                        goto LABEL_365;
                      }
                    }
                  }
                  else
                  {
                    v67 = v119 + 56;
                    if ( v119 + 56 <= v118 )
                    {
                      v189 = 1;
                      if ( *(_BYTE *)(v72 + v119 + 10) )
                        v116 = (char *)(v119 + v72 + 24);
                      v110 = *(_BYTE *)(v72 + v119 + 8);
                      v111 = *(_BYTE **)(v72 + v119 + 16);
                      v112 = *(_BYTE *)(v72 + v119 + 9);
                    }
                  }
                }
                else
                {
                  v67 = v119 + 40;
                  if ( v119 + 40 <= v118 )
                  {
                    if ( *(_BYTE *)(v72 + v119 + 10) )
                      v116 = (char *)(v119 + v72 + 24);
                    v111 = *(_BYTE **)(v72 + v119 + 16);
                    goto LABEL_335;
                  }
                }
                if ( v189 )
                  goto LABEL_336;
              }
            }
            if ( ++v117 >= v198 )
              goto LABEL_336;
          }
        case 0x1B:
          if ( *(_BYTE *)(v68 + 1) == 7 && !*(_DWORD *)(v68 + 8) )
          {
            if ( (byte_1401694F2 & 0x40) == 0 )
              goto LABEL_365;
            v108 = *(int **)(a2 + 56);
            if ( v108 )
              v5 = *v108;
            v70 = &v201;
            goto LABEL_308;
          }
          if ( (byte_1401694F2 & 0x20) == 0 )
            goto LABEL_365;
          v109 = &stru_140149FE8;
          v171 = *(_DWORD *)(a2 + 48);
          break;
        default:
          goto LABEL_365;
      }
      sub_140052F3C(v67, v109, &v201, a2, v171);
      goto LABEL_365;
    }
    v42 = v41 - 9;
    if ( v42 )
    {
      v43 = v42 - 3;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( !v44 )
        {
          if ( v9 )
          {
            v10 = byte_140168DAA == 0;
            *(_QWORD *)(a2 + 56) = 0LL;
            *(_BYTE *)(a2 + 141) = -84;
            *(_DWORD *)(a2 + 48) = -1073741637;
            if ( v10 )
              goto LABEL_161;
            v203 = 0LL;
            IoGetActivityIdIrp(a2, &v203);
            v47 = *(_QWORD *)(a2 + 184);
            switch ( *(_BYTE *)v47 )
            {
              case 0xE:
                if ( (byte_1401694F2 & 8) == 0 )
                  goto LABEL_161;
                v49 = &stru_140148B18;
                break;
              case 0xF:
                if ( byte_1401694F1 >= 0 )
                  goto LABEL_161;
                v50 = *(_QWORD *)(v47 + 8);
                v51 = 0;
                v52 = 0LL;
                v180 = 0;
                v53 = 0;
                v54 = 0;
                v55 = 0;
                v56 = 0;
                if ( *(_BYTE *)(v50 + 2) != 40 )
                {
                  v62 = *(_BYTE *)(v50 + 72);
                  v52 = *(_BYTE **)(v50 + 32);
                  v53 = *(_BYTE *)(v50 + 11);
                  v51 = *(_BYTE *)(v50 + 4);
                  if ( !*(_BYTE *)(v50 + 2) )
                    goto LABEL_137;
                  goto LABEL_161;
                }
                v57 = 0LL;
                v186 = 0;
                if ( *(_DWORD *)(v50 + 20) )
                  goto LABEL_161;
                v58 = 0;
                v195 = *(_DWORD *)(v50 + 56);
                if ( !v195 )
                  goto LABEL_134;
                while ( 1 )
                {
                  v46 = *(unsigned int *)(v50 + 4LL * v58 + 120);
                  if ( (unsigned int)v46 >= 0x80 )
                  {
                    v59 = *(unsigned int *)(v50 + 16);
                    if ( (unsigned int)v46 < (unsigned int)v59 )
                    {
                      v60 = (unsigned int)v46;
                      v61 = *(_DWORD *)(v50 + v46) - 64;
                      if ( v61 )
                      {
                        v46 = (unsigned int)(v61 - 1);
                        if ( (_DWORD)v46 )
                        {
                          if ( (_DWORD)v46 == 1 )
                          {
                            v46 = v60 + 40;
                            if ( v60 + 40 <= v59 )
                            {
                              if ( *(_DWORD *)(v50 + v60 + 12) )
                                v57 = (char *)(v60 + v50 + 32);
                              v52 = *(_BYTE **)(v50 + v60 + 24);
                              goto LABEL_133;
                            }
                          }
                        }
                        else
                        {
                          v46 = v60 + 56;
                          if ( v60 + 56 <= v59 )
                          {
                            v186 = 1;
                            if ( *(_BYTE *)(v50 + v60 + 10) )
                              v57 = (char *)(v60 + v50 + 24);
                            v51 = *(_BYTE *)(v50 + v60 + 8);
                            v52 = *(_BYTE **)(v50 + v60 + 16);
                            v53 = *(_BYTE *)(v50 + v60 + 9);
                          }
                        }
                      }
                      else
                      {
                        v46 = v60 + 40;
                        if ( v60 + 40 <= v59 )
                        {
                          if ( *(_BYTE *)(v50 + v60 + 10) )
                            v57 = (char *)(v60 + v50 + 24);
                          v52 = *(_BYTE **)(v50 + v60 + 16);
LABEL_133:
                          v53 = *(_BYTE *)(v50 + v60 + 9);
                          v51 = *(_BYTE *)(v50 + v60 + 8);
LABEL_134:
                          if ( v57 )
                          {
                            v62 = *v57;
                            v55 = 0;
LABEL_137:
                            LOBYTE(v46) = v62 - 8;
                            if ( (v46 & 0x5D) == 0 )
                            {
                              v63 = *(_BYTE *)(v50 + 3);
                              if ( v63 == 1 || !v52 || !v53 )
                                goto LABEL_156;
                              LOBYTE(v50) = 0;
                              v46 = (unsigned __int64)&v52[v53];
                              v64 = v52 + 8;
                              if ( (unsigned __int8)((*v52 & 0x7F) - 114) <= 1u )
                              {
                                if ( (unsigned __int64)v64 <= v46 )
                                {
                                  LOBYTE(v50) = 1;
                                  v55 = v52[2];
                                  v54 = v52[1] & 0xF;
                                  v56 = v52[3];
                                }
                              }
                              else
                              {
                                if ( (unsigned __int64)v64 <= v46 )
                                {
                                  v54 = v52[2] & 0xF;
                                  v65 = v53;
                                  if ( (unsigned int)(unsigned __int8)v52[7] + 8 <= v53 )
                                    v65 = (unsigned __int8)v52[7] + 8;
                                  v46 = (unsigned __int64)(v52 + 13);
                                  v50 = (unsigned __int64)&v52[v65];
                                  if ( (unsigned __int64)(v52 + 13) > v50 )
                                    v180 = 0;
                                  else
                                    v180 = v52[12];
                                  if ( (unsigned __int64)(v52 + 14) <= v50 )
                                    v56 = *(_BYTE *)v46;
                                  LOBYTE(v50) = 1;
                                }
                                v55 = v180;
                              }
                              if ( (_BYTE)v50 )
                              {
                                LOBYTE(v5) = v55;
                                v66 = v56;
                              }
                              else
                              {
LABEL_156:
                                v54 = 0;
                                v66 = 0;
                              }
                              sub_140052E64(v46, v50, &v203, a2, *(_DWORD *)(a2 + 48), v63, v51, v54, v5, v66, a2);
                            }
                          }
                          goto LABEL_161;
                        }
                      }
                      if ( v186 )
                        goto LABEL_134;
                    }
                  }
                  if ( ++v58 >= v195 )
                    goto LABEL_134;
                }
              case 0x1B:
                if ( *(_BYTE *)(v47 + 1) == 7 && !*(_DWORD *)(v47 + 8) )
                {
                  if ( (byte_1401694F2 & 0x40) != 0 )
                  {
                    v48 = *(int **)(a2 + 56);
                    if ( v48 )
                      v5 = *v48;
                    sub_140056AB0(v46, v47, &v203, a2, v5, *(_DWORD *)(a2 + 48));
                  }
                  goto LABEL_161;
                }
                if ( (byte_1401694F2 & 0x20) == 0 )
                {
LABEL_161:
                  v32 = -1073741637;
                  goto LABEL_365;
                }
                v49 = &stru_140149FE8;
                break;
              default:
                goto LABEL_161;
            }
            sub_140052F3C(v46, v49, &v203, a2, *(_DWORD *)(a2 + 48));
            goto LABEL_161;
          }
          return (unsigned int)sub_1401A2614(a1, a2);
        }
        v45 = v44 - 3;
        if ( !v45 )
          return (unsigned int)sub_14019B62C(a1, a2);
        if ( v45 != 2 )
        {
LABEL_94:
          ++*(_BYTE *)(a2 + 67);
          *(_QWORD *)(a2 + 184) += 72LL;
          return (unsigned int)IofCallDriver(
                                 *(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL),
                                 (PIRP)a2);
        }
        goto LABEL_297;
      }
      if ( !v9 )
        return (unsigned int)sub_1401A0D00(a1, a2);
      v10 = byte_140168DAA == 0;
      v32 = -1073741637;
      *(_DWORD *)(a2 + 48) = -1073741637;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      if ( v10 )
        goto LABEL_365;
      v204 = 0LL;
      IoGetActivityIdIrp(a2, &v204);
      v68 = *(_QWORD *)(a2 + 184);
      switch ( *(_BYTE *)v68 )
      {
        case 0xE:
          if ( (byte_1401694F2 & 8) == 0 )
            goto LABEL_365;
          v71 = &stru_140148B18;
          break;
        case 0xF:
          if ( byte_1401694F1 >= 0 )
            goto LABEL_365;
          v72 = *(_QWORD *)(v68 + 8);
          v73 = 0;
          v74 = 0LL;
          v181 = 0;
          v75 = 0;
          v76 = 0;
          v77 = 0;
          v78 = 0;
          if ( *(_BYTE *)(v72 + 2) == 40 )
          {
            v79 = 0LL;
            v187 = 0;
            if ( *(_DWORD *)(v72 + 20) )
              goto LABEL_365;
            v80 = 0;
            v196 = *(_DWORD *)(v72 + 56);
            if ( !v196 )
              goto LABEL_202;
            while ( 1 )
            {
              v67 = *(unsigned int *)(v72 + 4LL * v80 + 120);
              if ( (unsigned int)v67 >= 0x80 )
              {
                v81 = *(unsigned int *)(v72 + 16);
                if ( (unsigned int)v67 < (unsigned int)v81 )
                {
                  v82 = (unsigned int)v67;
                  v83 = *(_DWORD *)(v72 + v67) - 64;
                  if ( v83 )
                  {
                    v67 = (unsigned int)(v83 - 1);
                    if ( (_DWORD)v67 )
                    {
                      if ( (_DWORD)v67 == 1 )
                      {
                        v67 = v82 + 40;
                        if ( v82 + 40 <= v81 )
                        {
                          if ( *(_DWORD *)(v72 + v82 + 12) )
                            v79 = (char *)(v82 + v72 + 32);
                          v74 = *(_BYTE **)(v72 + v82 + 24);
LABEL_200:
                          v75 = *(_BYTE *)(v72 + v82 + 9);
                          v73 = *(_BYTE *)(v72 + v82 + 8);
LABEL_201:
                          v32 = -1073741637;
LABEL_202:
                          if ( !v79 )
                            goto LABEL_365;
                          v84 = *v79;
                          v77 = 0;
LABEL_205:
                          LOBYTE(v67) = v84 - 8;
                          if ( (v67 & 0x5D) != 0 )
                            goto LABEL_365;
                          v85 = *(_BYTE *)(v72 + 3);
                          if ( v85 == 1 || !v74 || !v75 )
                            goto LABEL_224;
                          LOBYTE(v72) = 0;
                          v67 = (unsigned __int64)&v74[v75];
                          v86 = v74 + 8;
                          if ( (unsigned __int8)((*v74 & 0x7F) - 114) <= 1u )
                          {
                            if ( (unsigned __int64)v86 <= v67 )
                            {
                              LOBYTE(v72) = 1;
                              v77 = v74[2];
                              v76 = v74[1] & 0xF;
                              v78 = v74[3];
                            }
                          }
                          else
                          {
                            if ( (unsigned __int64)v86 <= v67 )
                            {
                              v76 = v74[2] & 0xF;
                              v87 = v75;
                              if ( (unsigned int)(unsigned __int8)v74[7] + 8 <= v75 )
                                v87 = (unsigned __int8)v74[7] + 8;
                              v67 = (unsigned __int64)(v74 + 13);
                              v72 = (unsigned __int64)&v74[v87];
                              if ( (unsigned __int64)(v74 + 13) > v72 )
                                v181 = 0;
                              else
                                v181 = v74[12];
                              if ( (unsigned __int64)(v74 + 14) <= v72 )
                                v78 = *(_BYTE *)v67;
                              LOBYTE(v72) = 1;
                            }
                            v77 = v181;
                          }
                          if ( (_BYTE)v72 )
                          {
                            LOBYTE(v5) = v77;
                            v88 = v78;
                          }
                          else
                          {
LABEL_224:
                            v76 = 0;
                            v88 = 0;
                          }
                          v178 = a2;
                          v177 = v88;
                          v176 = v5;
                          v175 = v76;
                          v174 = v73;
                          v173 = v85;
                          v89 = &v204;
                          goto LABEL_361;
                        }
                      }
                    }
                    else
                    {
                      v67 = v82 + 56;
                      if ( v82 + 56 <= v81 )
                      {
                        v187 = 1;
                        if ( *(_BYTE *)(v72 + v82 + 10) )
                          v79 = (char *)(v82 + v72 + 24);
                        v73 = *(_BYTE *)(v72 + v82 + 8);
                        v74 = *(_BYTE **)(v72 + v82 + 16);
                        v75 = *(_BYTE *)(v72 + v82 + 9);
                      }
                    }
                  }
                  else
                  {
                    v67 = v82 + 40;
                    if ( v82 + 40 <= v81 )
                    {
                      if ( *(_BYTE *)(v72 + v82 + 10) )
                        v79 = (char *)(v82 + v72 + 24);
                      v74 = *(_BYTE **)(v72 + v82 + 16);
                      goto LABEL_200;
                    }
                  }
                  if ( v187 )
                    goto LABEL_201;
                }
              }
              if ( ++v80 >= v196 )
                goto LABEL_201;
            }
          }
          v84 = *(_BYTE *)(v72 + 72);
          v74 = *(_BYTE **)(v72 + 32);
          v75 = *(_BYTE *)(v72 + 11);
          v73 = *(_BYTE *)(v72 + 4);
          if ( *(_BYTE *)(v72 + 2) )
            goto LABEL_365;
          goto LABEL_205;
        case 0x1B:
          if ( *(_BYTE *)(v68 + 1) == 7 && !*(_DWORD *)(v68 + 8) )
          {
            if ( (byte_1401694F2 & 0x40) == 0 )
              goto LABEL_365;
            v69 = *(int **)(a2 + 56);
            if ( v69 )
              v5 = *v69;
            v70 = &v204;
LABEL_308:
            sub_140056AB0(v67, v68, v70, a2, v5, *(_DWORD *)(a2 + 48));
            goto LABEL_365;
          }
          if ( (byte_1401694F2 & 0x20) == 0 )
            goto LABEL_365;
          v71 = &stru_140149FE8;
          break;
        default:
          goto LABEL_365;
      }
      sub_140052F3C(v67, v71, &v204, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_365;
    }
    if ( !v9 )
      return (unsigned int)sub_1401A35CC(a1, a2);
    v10 = byte_140168DAA == 0;
    v32 = -1073741637;
    *(_DWORD *)(a2 + 48) = -1073741637;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v10 )
      goto LABEL_365;
    v205 = 0LL;
    IoGetActivityIdIrp(a2, &v205);
    v68 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v68 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_365;
        v91 = &stru_140148B18;
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_365;
        v72 = *(_QWORD *)(v68 + 8);
        v92 = 0;
        v93 = 0LL;
        v182 = 0;
        v94 = 0;
        v95 = 0;
        v96 = 0;
        v97 = 0;
        if ( *(_BYTE *)(v72 + 2) == 40 )
        {
          v98 = 0LL;
          v188 = 0;
          if ( *(_DWORD *)(v72 + 20) )
            goto LABEL_365;
          v99 = 0;
          v197 = *(_DWORD *)(v72 + 56);
          if ( !v197 )
            goto LABEL_269;
          while ( 1 )
          {
            v67 = *(unsigned int *)(v72 + 4LL * v99 + 120);
            if ( (unsigned int)v67 >= 0x80 )
            {
              v100 = *(unsigned int *)(v72 + 16);
              if ( (unsigned int)v67 < (unsigned int)v100 )
              {
                v101 = (unsigned int)v67;
                v102 = *(_DWORD *)(v67 + v72) - 64;
                if ( v102 )
                {
                  v67 = (unsigned int)(v102 - 1);
                  if ( (_DWORD)v67 )
                  {
                    if ( (_DWORD)v67 == 1 )
                    {
                      v67 = v101 + 40;
                      if ( v101 + 40 <= v100 )
                      {
                        if ( *(_DWORD *)(v101 + v72 + 12) )
                          v98 = (char *)(v101 + v72 + 32);
                        v93 = *(_BYTE **)(v101 + v72 + 24);
LABEL_267:
                        v94 = *(_BYTE *)(v101 + v72 + 9);
                        v92 = *(_BYTE *)(v101 + v72 + 8);
LABEL_268:
                        v32 = -1073741637;
LABEL_269:
                        if ( !v98 )
                          goto LABEL_365;
                        v103 = *v98;
                        v96 = 0;
LABEL_272:
                        LOBYTE(v67) = v103 - 8;
                        if ( (v67 & 0x5D) != 0 )
                          goto LABEL_365;
                        v104 = *(_BYTE *)(v72 + 3);
                        if ( v104 == 1 || !v93 || !v94 )
                          goto LABEL_291;
                        LOBYTE(v72) = 0;
                        v67 = (unsigned __int64)&v93[v94];
                        v105 = v93 + 8;
                        if ( (unsigned __int8)((*v93 & 0x7F) - 114) <= 1u )
                        {
                          if ( (unsigned __int64)v105 <= v67 )
                          {
                            LOBYTE(v72) = 1;
                            v96 = v93[2];
                            v95 = v93[1] & 0xF;
                            v97 = v93[3];
                          }
                        }
                        else
                        {
                          if ( (unsigned __int64)v105 <= v67 )
                          {
                            v95 = v93[2] & 0xF;
                            v106 = v94;
                            if ( (unsigned int)(unsigned __int8)v93[7] + 8 <= v94 )
                              v106 = (unsigned __int8)v93[7] + 8;
                            v67 = (unsigned __int64)(v93 + 13);
                            v72 = (unsigned __int64)&v93[v106];
                            if ( (unsigned __int64)(v93 + 13) > v72 )
                              v182 = 0;
                            else
                              v182 = v93[12];
                            if ( (unsigned __int64)(v93 + 14) <= v72 )
                              v97 = *(_BYTE *)v67;
                            LOBYTE(v72) = 1;
                          }
                          v96 = v182;
                        }
                        if ( (_BYTE)v72 )
                        {
                          LOBYTE(v5) = v96;
                          v107 = v97;
                        }
                        else
                        {
LABEL_291:
                          v95 = 0;
                          v107 = 0;
                        }
                        v178 = a2;
                        v177 = v107;
                        v176 = v5;
                        v175 = v95;
                        v174 = v92;
                        v173 = v104;
                        v89 = &v205;
                        goto LABEL_361;
                      }
                    }
                  }
                  else
                  {
                    v67 = v101 + 56;
                    if ( v101 + 56 <= v100 )
                    {
                      v188 = 1;
                      if ( *(_BYTE *)(v101 + v72 + 10) )
                        v98 = (char *)(v101 + v72 + 24);
                      v92 = *(_BYTE *)(v101 + v72 + 8);
                      v93 = *(_BYTE **)(v101 + v72 + 16);
                      v94 = *(_BYTE *)(v101 + v72 + 9);
                    }
                  }
                }
                else
                {
                  v67 = v101 + 40;
                  if ( v101 + 40 <= v100 )
                  {
                    if ( *(_BYTE *)(v101 + v72 + 10) )
                      v98 = (char *)(v101 + v72 + 24);
                    v93 = *(_BYTE **)(v101 + v72 + 16);
                    goto LABEL_267;
                  }
                }
                if ( v188 )
                  goto LABEL_268;
              }
            }
            if ( ++v99 >= v197 )
              goto LABEL_268;
          }
        }
        v103 = *(_BYTE *)(v72 + 72);
        v93 = *(_BYTE **)(v72 + 32);
        v94 = *(_BYTE *)(v72 + 11);
        v92 = *(_BYTE *)(v72 + 4);
        if ( *(_BYTE *)(v72 + 2) )
          goto LABEL_365;
        goto LABEL_272;
      case 0x1B:
        if ( *(_BYTE *)(v68 + 1) == 7 && !*(_DWORD *)(v68 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) == 0 )
            goto LABEL_365;
          v90 = *(int **)(a2 + 56);
          if ( v90 )
            v5 = *v90;
          v70 = &v205;
          goto LABEL_308;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_365;
        v91 = &stru_140149FE8;
        break;
      default:
        goto LABEL_365;
    }
    sub_140052F3C(v67, v91, &v205, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_365;
  }
  v10 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741300;
  if ( v10 )
    goto LABEL_69;
  v202 = 0LL;
  IoGetActivityIdIrp(a2, &v202);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_69;
    v14 = &stru_140148B18;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v5 = *v13;
        sub_140056AB0(v11, v12, &v202, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_69;
    v14 = &stru_140149FE8;
LABEL_68:
    sub_140052F3C(v11, v14, &v202, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_69;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v179 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v22 = 0LL;
  v185 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_69;
  v23 = 0;
  v194 = *(_DWORD *)(v15 + 56);
  if ( !v194 )
    goto LABEL_42;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v15 + 4LL * v23 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v24 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v11 < (unsigned int)v24 )
        break;
    }
LABEL_36:
    if ( ++v23 >= v194 )
      goto LABEL_42;
  }
  v25 = (unsigned int)v11;
  v26 = *(_DWORD *)(v15 + v11) - 64;
  if ( v26 )
  {
    v11 = (unsigned int)(v26 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v25 + 40;
        if ( v25 + 40 <= v24 )
        {
          if ( *(_DWORD *)(v15 + v25 + 12) )
            v22 = (char *)(v25 + v15 + 32);
          v17 = *(_BYTE **)(v15 + v25 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      v11 = v25 + 56;
      if ( v25 + 56 <= v24 )
      {
        v185 = 1;
        if ( *(_BYTE *)(v15 + v25 + 10) )
          v22 = (char *)(v25 + v15 + 24);
        v16 = *(_BYTE *)(v15 + v25 + 8);
        v17 = *(_BYTE **)(v15 + v25 + 16);
        v18 = *(_BYTE *)(v15 + v25 + 9);
      }
    }
    goto LABEL_35;
  }
  v11 = v25 + 40;
  if ( v25 + 40 > v24 )
  {
LABEL_35:
    if ( v185 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v15 + v25 + 10) )
    v22 = (char *)(v25 + v15 + 24);
  v17 = *(_BYTE **)(v15 + v25 + 16);
LABEL_41:
  v18 = *(_BYTE *)(v15 + v25 + 9);
  v16 = *(_BYTE *)(v15 + v25 + 8);
LABEL_42:
  if ( v22 )
  {
    v27 = *v22;
    v20 = 0;
LABEL_45:
    LOBYTE(v11) = v27 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v15 + 3);
      if ( v28 == 1 || !v17 || !v18 )
        goto LABEL_64;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v29 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v30 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v30 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v30];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v179 = 0;
          else
            v179 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v179;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v5) = v20;
        v31 = v21;
      }
      else
      {
LABEL_64:
        v19 = 0;
        v31 = 0;
      }
      sub_140052E64(v11, v15, &v202, a2, *(_DWORD *)(a2 + 48), v28, v16, v19, v5, v31, a2);
    }
  }
LABEL_69:
  v32 = -1073741300;
LABEL_365:
  IofCompleteRequest((PIRP)a2, 0);
  return v32;
}
