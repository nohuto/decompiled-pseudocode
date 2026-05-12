/*
 * XREFs of sub_140005A20 @ 0x140005A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D0C @ 0x140003D0C (sub_140003D0C.c)
 *     sub_140004004 @ 0x140004004 (sub_140004004.c)
 *     sub_140004290 @ 0x140004290 (sub_140004290.c)
 *     sub_140004540 @ 0x140004540 (sub_140004540.c)
 *     sub_140004554 @ 0x140004554 (sub_140004554.c)
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_1400067A0 @ 0x1400067A0 (sub_1400067A0.c)
 *     sub_140007810 @ 0x140007810 (sub_140007810.c)
 *     sub_1400078A0 @ 0x1400078A0 (sub_1400078A0.c)
 *     sub_140007B40 @ 0x140007B40 (sub_140007B40.c)
 *     sub_140007BD8 @ 0x140007BD8 (sub_140007BD8.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400537EC @ 0x1400537EC (sub_1400537EC.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_140092210 @ 0x140092210 (sub_140092210.c)
 *     sub_1400930B8 @ 0x1400930B8 (sub_1400930B8.c)
 *     sub_1400957B4 @ 0x1400957B4 (sub_1400957B4.c)
 *     sub_140095B74 @ 0x140095B74 (sub_140095B74.c)
 *     sub_140096368 @ 0x140096368 (sub_140096368.c)
 *     sub_14010A138 @ 0x14010A138 (sub_14010A138.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140179C98 @ 0x140179C98 (sub_140179C98.c)
 *     sub_1401826BC @ 0x1401826BC (sub_1401826BC.c)
 */

__int64 __fastcall sub_140005A20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // r14d
  _DWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  int v16; // r14d
  _BYTE *v17; // r14
  unsigned int v18; // r11d
  unsigned int *v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // r10d
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  char *v27; // rdx
  char *v28; // rcx
  char v29; // al
  unsigned int v30; // eax
  bool v31; // bl
  unsigned __int64 v32; // r8
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  int v35; // r10d
  int v36; // edx
  char *v37; // rcx
  char v38; // al
  unsigned __int64 v39; // r8
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  char v42; // al
  char v43; // al
  unsigned __int64 v44; // rdx
  unsigned __int8 v45; // r8
  char v46; // r10
  char v47; // r11
  char v48; // di
  unsigned __int8 *v49; // r9
  unsigned int *v50; // r15
  unsigned int v51; // ecx
  unsigned __int64 v52; // r8
  signed __int32 v53; // eax
  signed __int32 v54; // ett
  char v55; // al
  int v56; // eax
  unsigned __int8 *v57; // r9
  unsigned int *v58; // r15
  unsigned int v59; // ecx
  bool v60; // zf
  __int64 v61; // rcx
  unsigned __int64 v62; // r8
  signed __int32 v63; // eax
  _DWORD *v64; // rax
  _DWORD *v65; // rax
  _DWORD *v66; // rax
  int *v67; // rax
  int v68; // ecx
  unsigned __int8 *v69; // r9
  unsigned int *v70; // r15
  unsigned int v71; // ecx
  unsigned __int64 v72; // r8
  signed __int32 v73; // eax
  __int64 v74; // r8
  char v75; // r15
  unsigned __int8 v76; // r10
  char v77; // r14
  char v78; // bl
  char v79; // r11
  _BYTE *v80; // rdx
  unsigned __int8 *v81; // r9
  unsigned int *v82; // r15
  unsigned int v83; // ecx
  char v84; // cl
  char v85; // al
  __int128 *v86; // r8
  _BYTE *v87; // r12
  unsigned __int8 v88; // r8
  unsigned __int8 *v89; // r9
  unsigned int *v90; // r15
  unsigned int v91; // ecx
  __int64 v92; // rax
  unsigned __int64 v93; // r11
  int v94; // ecx
  int v95; // ecx
  char *v96; // rcx
  char v97; // r9
  char *v98; // rax
  unsigned int v99; // eax
  char v100; // di
  char v101; // r15
  char v102; // r10
  __int64 v103; // rax
  unsigned __int64 v104; // r11
  int v105; // ecx
  int v106; // ecx
  unsigned __int64 v107; // rax
  unsigned int v108; // eax
  __int64 v109; // rax
  unsigned __int64 v110; // r11
  int v111; // ecx
  int v112; // ecx
  __int64 v113; // rax
  unsigned __int64 v114; // r11
  int v115; // ecx
  int v116; // ecx
  signed __int32 v117; // ett
  char v118; // al
  unsigned int *v119; // r15
  unsigned int v120; // ecx
  __int64 v121; // rax
  unsigned __int64 v122; // r11
  int v123; // ecx
  int v124; // ecx
  signed __int32 v125; // ett
  char v126; // al
  _DWORD *v127; // rax
  __int64 v128; // rdx
  char v129; // r11
  unsigned __int8 v130; // r8
  unsigned __int8 *v131; // r9
  unsigned int v132; // ecx
  unsigned int *v133; // rax
  unsigned int v134; // r11d
  __int64 v135; // rax
  unsigned __int64 v136; // r11
  int v137; // ecx
  int v138; // ecx
  char *v139; // rcx
  char v140; // r9
  unsigned __int64 v141; // rax
  unsigned int v142; // eax
  unsigned __int64 v143; // r8
  __int64 v144; // rax
  unsigned __int64 v145; // r11
  int v146; // ecx
  int v147; // ecx
  char *v148; // rcx
  char v149; // r9
  char *v150; // rax
  unsigned int v151; // eax
  unsigned __int64 v152; // r9
  int v153; // edx
  char *v154; // rcx
  char v155; // al
  int *v156; // rax
  int v157; // ecx
  __int64 v158; // r10
  char v159; // r15
  unsigned __int8 v160; // r9
  char v161; // r11
  char v162; // bl
  _BYTE *v163; // rdx
  unsigned __int8 *v164; // r8
  unsigned int *v165; // r15
  unsigned int v166; // ecx
  __int64 v167; // rax
  unsigned __int64 v168; // r11
  int v169; // ecx
  int v170; // ecx
  char *v171; // rcx
  char v172; // r8
  char *v173; // rax
  unsigned int v174; // eax
  unsigned __int64 v175; // r8
  char v176; // r9
  unsigned __int64 v177; // r8
  signed __int32 v178; // eax
  signed __int32 v179; // ett
  PDEVICE_OBJECT v180; // rcx
  __int64 v181; // rdx
  unsigned __int64 v182; // r8
  signed __int32 v183; // eax
  signed __int32 v184; // ett
  char v185; // al
  _DWORD *v186; // rax
  char v187; // r15
  unsigned __int8 v188; // r8
  char v189; // r10
  char v190; // r11
  char v191; // di
  unsigned __int8 *v192; // r9
  unsigned int *v193; // r15
  unsigned int v194; // ecx
  __int64 v195; // rax
  unsigned __int64 v196; // r11
  int v197; // ecx
  int v198; // ecx
  char v199; // r9
  unsigned __int64 v200; // rax
  unsigned int v201; // eax
  unsigned __int64 v202; // r8
  unsigned __int8 *v203; // rdx
  char *v204; // rcx
  char v205; // al
  _DWORD *v206; // rax
  __int64 v207; // r8
  char v208; // bl
  unsigned __int8 v209; // r9
  char v210; // r15
  char v211; // r11
  char v212; // r10
  unsigned int *v213; // rbx
  unsigned int v214; // ecx
  __int64 v215; // rax
  unsigned __int64 v216; // r10
  int v217; // ecx
  int v218; // ecx
  char *v219; // rcx
  unsigned __int64 v220; // rax
  unsigned int v221; // eax
  char v222; // [rsp+38h] [rbp-69h]
  char v223; // [rsp+40h] [rbp-61h]
  char v224; // [rsp+48h] [rbp-59h]
  char v225; // [rsp+50h] [rbp-51h]
  char v226; // [rsp+58h] [rbp-49h]
  int v227; // [rsp+68h] [rbp-39h]
  int v228; // [rsp+68h] [rbp-39h]
  int v229; // [rsp+68h] [rbp-39h]
  int v230; // [rsp+68h] [rbp-39h]
  int v231; // [rsp+68h] [rbp-39h]
  int v232; // [rsp+68h] [rbp-39h]
  unsigned int v233; // [rsp+68h] [rbp-39h]
  int v234; // [rsp+6Ch] [rbp-35h]
  int v235; // [rsp+6Ch] [rbp-35h]
  unsigned int v236; // [rsp+6Ch] [rbp-35h]
  int v237; // [rsp+6Ch] [rbp-35h]
  int v238; // [rsp+6Ch] [rbp-35h]
  int v239; // [rsp+6Ch] [rbp-35h]
  __int128 v240; // [rsp+70h] [rbp-31h] BYREF
  __int128 v241; // [rsp+80h] [rbp-21h] BYREF
  __int128 v242; // [rsp+90h] [rbp-11h] BYREF
  __int128 v243; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v244; // [rsp+B0h] [rbp+Fh] BYREF

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 18LL, &unk_140148948, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 != 1431193940 )
  {
    if ( v6 == 1094997074 )
    {
      v12 = sub_140179C98(v5, a2);
      goto LABEL_42;
    }
    if ( v6 != 1314275652 )
    {
      if ( v6 == 1314278989 )
        v12 = sub_14010A138(v5, a2);
      else
        v12 = -1073741823;
      goto LABEL_42;
    }
    v60 = byte_140168DAA == 0;
    v12 = -1073741823;
    *(_DWORD *)(a2 + 48) = -1073741823;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v60 )
      goto LABEL_54;
    v240 = 0LL;
    IoGetActivityIdIrp(a2, &v240);
    v27 = *(char **)(a2 + 184);
    v85 = *v27;
    if ( *v27 != 15 )
    {
      if ( v85 != 14 )
      {
        if ( v85 != 27 )
          goto LABEL_54;
        if ( v27[1] != 7 || *((_DWORD *)v27 + 2) )
          goto LABEL_112;
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_54;
        v8 = *(_QWORD *)(a2 + 56);
        if ( v8 )
          LODWORD(v8) = *(_DWORD *)v8;
        goto LABEL_209;
      }
      goto LABEL_96;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_54;
    v44 = *((_QWORD *)v27 + 1);
    LOBYTE(v9) = 0;
    v87 = 0LL;
    v88 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    if ( *(_BYTE *)(v44 + 2) == 40 )
    {
      v89 = 0LL;
      if ( *(_DWORD *)(v44 + 20) )
        goto LABEL_54;
      v231 = 0;
      if ( *(_DWORD *)(v44 + 56) )
      {
        v90 = (unsigned int *)(v44 + 120);
        v91 = *(_DWORD *)(v44 + 56);
        while ( 1 )
        {
          v92 = *v90;
          if ( (unsigned int)v92 >= 0x80 )
          {
            v93 = *(unsigned int *)(v44 + 16);
            if ( (unsigned int)v92 < (unsigned int)v93 )
            {
              v94 = *(_DWORD *)(v92 + v44);
              if ( v94 == 64 )
              {
                if ( v92 + 40 <= v93 )
                {
LABEL_226:
                  if ( *(_BYTE *)(v92 + v44 + 10) )
                    v89 = (unsigned __int8 *)(v92 + v44 + 24);
                  LOBYTE(v9) = *(_BYTE *)(v92 + v44 + 8);
                  v47 = 0;
                  v87 = *(_BYTE **)(v92 + v44 + 16);
                  v88 = *(_BYTE *)(v92 + v44 + 9);
                  break;
                }
              }
              else
              {
                v95 = v94 - 65;
                if ( v95 )
                {
                  if ( v95 == 1 && v92 + 40 <= v93 )
                  {
                    if ( *(_DWORD *)(v92 + v44 + 12) )
                      v89 = (unsigned __int8 *)(v92 + v44 + 32);
                    LOBYTE(v9) = *(_BYTE *)(v92 + v44 + 8);
                    v47 = 0;
                    v87 = *(_BYTE **)(v92 + v44 + 24);
                    v88 = *(_BYTE *)(v92 + v44 + 9);
                    break;
                  }
                }
                else if ( v92 + 56 <= v93 )
                {
                  goto LABEL_226;
                }
              }
              v91 = *(_DWORD *)(v44 + 56);
            }
          }
          ++v90;
          if ( ++v231 >= v91 )
          {
            v47 = 0;
            LOBYTE(v9) = 0;
            break;
          }
        }
      }
      if ( !v89 )
        goto LABEL_54;
      LODWORD(v96) = *v89;
    }
    else
    {
      LODWORD(v96) = *(unsigned __int8 *)(v44 + 72);
      v87 = *(_BYTE **)(v44 + 32);
      v88 = *(_BYTE *)(v44 + 11);
      LOBYTE(v9) = *(_BYTE *)(v44 + 4);
      if ( *(_BYTE *)(v44 + 2) )
        goto LABEL_54;
    }
    LOBYTE(v96) = (_BYTE)v96 - 8;
    if ( ((unsigned __int8)v96 & 0x5D) != 0 )
      goto LABEL_54;
    v97 = *(_BYTE *)(v44 + 3);
    if ( v97 == 1 || !v87 || !v88 )
      goto LABEL_253;
    LOBYTE(v44) = 0;
    v96 = &v87[v88];
    v98 = v87 + 8;
    if ( (unsigned __int8)((*v87 & 0x7F) - 114) <= 1u )
    {
      if ( v98 > v96 )
        goto LABEL_252;
      v47 = v87[2];
      v46 = v87[1] & 0xF;
      v48 = v87[3];
    }
    else
    {
      if ( v98 > v96 )
        goto LABEL_252;
      v46 = v87[2] & 0xF;
      v99 = v88;
      if ( (unsigned int)(unsigned __int8)v87[7] + 8 <= v88 )
        v99 = (unsigned __int8)v87[7] + 8;
      v96 = v87 + 13;
      v44 = (unsigned __int64)&v87[v99];
      if ( (unsigned __int64)(v87 + 13) > v44 )
        v47 = 0;
      else
        v47 = v87[12];
      if ( (unsigned __int64)(v87 + 14) <= v44 )
        v48 = *v96;
    }
    LOBYTE(v44) = 1;
LABEL_252:
    if ( (_BYTE)v44 )
    {
LABEL_254:
      sub_140052E64((_DWORD)v96, v44, (unsigned int)&v240, a2, *(_DWORD *)(a2 + 48), v97, v9, v46, v47, v48, a2);
      goto LABEL_54;
    }
    goto LABEL_253;
  }
  v7 = *(_QWORD *)(a2 + 184);
  v8 = 0LL;
  v9 = 0LL;
  v244 = 0LL;
  v10 = *(_QWORD *)(v7 + 8);
  if ( !v10 )
  {
    v60 = byte_140168DAA == 0;
    v12 = -1073741811;
    *(_DWORD *)(a2 + 48) = -1073741811;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v60 )
      goto LABEL_54;
    v240 = 0LL;
    IoGetActivityIdIrp(a2, &v240);
    v28 = *(char **)(a2 + 184);
    v29 = *v28;
    if ( *v28 != 15 )
    {
      if ( v29 != 14 )
      {
        if ( v29 != 27 )
          goto LABEL_54;
        if ( v28[1] != 7 )
          goto LABEL_112;
        v60 = *((_DWORD *)v28 + 2) == 0;
        goto LABEL_111;
      }
LABEL_96:
      if ( (byte_1401694F2 & 8) != 0 )
        sub_140052F3C(v28, &unk_140148B18, &v240, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_54;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_54;
    v44 = *((_QWORD *)v28 + 1);
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    if ( *(_BYTE *)(v44 + 2) == 40 )
    {
      v69 = 0LL;
      if ( *(_DWORD *)(v44 + 20) )
        goto LABEL_54;
      v230 = 0;
      if ( *(_DWORD *)(v44 + 56) )
      {
        v70 = (unsigned int *)(v44 + 120);
        v71 = *(_DWORD *)(v44 + 56);
        while ( 1 )
        {
          v103 = *v70;
          if ( (unsigned int)v103 >= 0x80 )
          {
            v104 = *(unsigned int *)(v44 + 16);
            if ( (unsigned int)v103 < (unsigned int)v104 )
            {
              v105 = *(_DWORD *)(v103 + v44);
              if ( v105 == 64 )
              {
                if ( v103 + 40 <= v104 )
                {
LABEL_269:
                  if ( *(_BYTE *)(v103 + v44 + 10) )
                    v69 = (unsigned __int8 *)(v103 + v44 + 24);
                  LOBYTE(v9) = *(_BYTE *)(v103 + v44 + 8);
                  v47 = 0;
                  v8 = *(_QWORD *)(v103 + v44 + 16);
                  v45 = *(_BYTE *)(v103 + v44 + 9);
                  break;
                }
              }
              else
              {
                v106 = v105 - 65;
                if ( v106 )
                {
                  if ( v106 == 1 && v103 + 40 <= v104 )
                  {
                    if ( *(_DWORD *)(v103 + v44 + 12) )
                      v69 = (unsigned __int8 *)(v103 + v44 + 32);
                    LOBYTE(v9) = *(_BYTE *)(v103 + v44 + 8);
                    v47 = 0;
                    v8 = *(_QWORD *)(v103 + v44 + 24);
                    v45 = *(_BYTE *)(v103 + v44 + 9);
                    break;
                  }
                }
                else if ( v103 + 56 <= v104 )
                {
                  goto LABEL_269;
                }
              }
              v71 = *(_DWORD *)(v44 + 56);
            }
          }
          ++v70;
          if ( ++v230 >= v71 )
          {
            v47 = 0;
            LOBYTE(v9) = 0;
            break;
          }
        }
      }
      if ( !v69 )
        goto LABEL_54;
      LODWORD(v96) = *v69;
    }
    else
    {
      LODWORD(v96) = *(unsigned __int8 *)(v44 + 72);
      v8 = *(_QWORD *)(v44 + 32);
      v45 = *(_BYTE *)(v44 + 11);
      LOBYTE(v9) = *(_BYTE *)(v44 + 4);
      if ( *(_BYTE *)(v44 + 2) )
        goto LABEL_54;
    }
    LOBYTE(v96) = (_BYTE)v96 - 8;
    if ( ((unsigned __int8)v96 & 0x5D) != 0 )
      goto LABEL_54;
    v97 = *(_BYTE *)(v44 + 3);
    if ( v97 != 1 && v8 && v45 )
    {
      LOBYTE(v44) = 0;
      v96 = (char *)(v8 + v45);
      v107 = v8 + 8;
      if ( (unsigned __int8)((*(_BYTE *)v8 & 0x7F) - 114) > 1u )
        goto LABEL_289;
      if ( v107 > (unsigned __int64)v96 )
        goto LABEL_287;
LABEL_285:
      v47 = *(_BYTE *)(v8 + 2);
      v46 = *(_BYTE *)(v8 + 1) & 0xF;
      v48 = *(_BYTE *)(v8 + 3);
LABEL_286:
      LOBYTE(v44) = 1;
      goto LABEL_287;
    }
    goto LABEL_253;
  }
  LOBYTE(a3) = 1;
  v11 = sub_1400066C0(v5, a2, a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    v42 = sub_140007B40((unsigned int)v11);
    v60 = byte_140168DAA == 0;
    *(_BYTE *)(v10 + 3) = v42;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v12;
    if ( v60 )
      goto LABEL_54;
    v240 = 0LL;
    IoGetActivityIdIrp(a2, &v240);
    v28 = *(char **)(a2 + 184);
    v43 = *v28;
    if ( *v28 != 15 )
    {
      if ( v43 != 14 )
      {
        if ( v43 != 27 )
          goto LABEL_54;
        if ( v28[1] != 7 || *((_DWORD *)v28 + 2) )
          goto LABEL_112;
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_54;
        v64 = *(_DWORD **)(a2 + 56);
        if ( v64 )
          LODWORD(v8) = *v64;
        goto LABEL_209;
      }
      goto LABEL_96;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_54;
    v44 = *((_QWORD *)v28 + 1);
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    if ( *(_BYTE *)(v44 + 2) == 40 )
    {
      v49 = 0LL;
      if ( *(_DWORD *)(v44 + 20) )
        goto LABEL_54;
      v228 = 0;
      if ( *(_DWORD *)(v44 + 56) )
      {
        v50 = (unsigned int *)(v44 + 120);
        v51 = *(_DWORD *)(v44 + 56);
        while ( 1 )
        {
          v109 = *v50;
          if ( (unsigned int)v109 >= 0x80 )
          {
            v110 = *(unsigned int *)(v44 + 16);
            if ( (unsigned int)v109 < (unsigned int)v110 )
            {
              v111 = *(_DWORD *)(v44 + v109);
              if ( v111 == 64 )
              {
                if ( v109 + 40 <= v110 )
                {
LABEL_307:
                  if ( *(_BYTE *)(v44 + v109 + 10) )
                    v49 = (unsigned __int8 *)(v109 + v44 + 24);
                  LOBYTE(v9) = *(_BYTE *)(v44 + v109 + 8);
                  v47 = 0;
                  v8 = *(_QWORD *)(v44 + v109 + 16);
                  v45 = *(_BYTE *)(v44 + v109 + 9);
                  break;
                }
              }
              else
              {
                v112 = v111 - 65;
                if ( v112 )
                {
                  if ( v112 == 1 && v109 + 40 <= v110 )
                  {
                    if ( *(_DWORD *)(v44 + v109 + 12) )
                      v49 = (unsigned __int8 *)(v109 + v44 + 32);
                    LOBYTE(v9) = *(_BYTE *)(v44 + v109 + 8);
                    v47 = 0;
                    v8 = *(_QWORD *)(v44 + v109 + 24);
                    v45 = *(_BYTE *)(v44 + v109 + 9);
                    break;
                  }
                }
                else if ( v109 + 56 <= v110 )
                {
                  goto LABEL_307;
                }
              }
              v51 = *(_DWORD *)(v44 + 56);
            }
          }
          ++v50;
          if ( ++v228 >= v51 )
          {
            v47 = 0;
            LOBYTE(v9) = 0;
            break;
          }
        }
      }
      if ( !v49 )
        goto LABEL_54;
      LODWORD(v96) = *v49;
    }
    else
    {
      LODWORD(v96) = *(unsigned __int8 *)(v44 + 72);
      v8 = *(_QWORD *)(v44 + 32);
      v45 = *(_BYTE *)(v44 + 11);
      LOBYTE(v9) = *(_BYTE *)(v44 + 4);
      if ( *(_BYTE *)(v44 + 2) )
        goto LABEL_54;
    }
    LOBYTE(v96) = (_BYTE)v96 - 8;
    if ( ((unsigned __int8)v96 & 0x5D) != 0 )
      goto LABEL_54;
    v97 = *(_BYTE *)(v44 + 3);
    if ( v97 != 1 && v8 && v45 )
    {
      LOBYTE(v44) = 0;
      v96 = (char *)(v8 + v45);
      v107 = v8 + 8;
      if ( (unsigned __int8)((*(_BYTE *)v8 & 0x7F) - 114) > 1u )
        goto LABEL_289;
LABEL_322:
      if ( v107 > (unsigned __int64)v96 )
        goto LABEL_287;
      goto LABEL_285;
    }
LABEL_253:
    v48 = 0;
    v47 = 0;
    v46 = 0;
    goto LABEL_254;
  }
  v13 = *(_DWORD **)(v5 + 24);
  if ( *v13 == 1314275652 )
  {
    v14 = (__int64)v13 + 274;
  }
  else if ( *v13 == 1094997074 )
  {
    v14 = (__int64)v13 + 482;
  }
  else
  {
    v14 = 98LL;
  }
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v15 = *(_DWORD *)(v10 + 12);
    v16 = *(unsigned __int8 *)(v10 + 2);
    v227 = v15;
    goto LABEL_14;
  }
  if ( *(_BYTE *)v14 != 1 )
  {
    *(_BYTE *)(v10 + 3) = 6;
    *(_QWORD *)(a2 + 56) = 0LL;
    v52 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v53 = *(_DWORD *)(v52 + *(_QWORD *)(v5 + 40));
    while ( (v53 & 1) == 0 )
    {
      v54 = v53;
      v53 = _InterlockedCompareExchange((volatile signed __int32 *)(v52 + *(_QWORD *)(v5 + 40)), v53 - 2, v53);
      if ( v54 == v53 )
        goto LABEL_101;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_101:
    v60 = byte_140168DAA == 0;
    v12 = -1073741637;
    *(_DWORD *)(a2 + 48) = -1073741637;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v60 )
      goto LABEL_54;
    v240 = 0LL;
    IoGetActivityIdIrp(a2, &v240);
    v28 = *(char **)(a2 + 184);
    v55 = *v28;
    if ( *v28 != 15 )
    {
      if ( v55 != 14 )
      {
        if ( v55 != 27 )
          goto LABEL_54;
        if ( v28[1] != 7 || *((_DWORD *)v28 + 2) )
          goto LABEL_112;
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_54;
        v65 = *(_DWORD **)(a2 + 56);
        if ( v65 )
          LODWORD(v8) = *v65;
        goto LABEL_209;
      }
      goto LABEL_96;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_54;
    v44 = *((_QWORD *)v28 + 1);
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v56 = *(unsigned __int8 *)(v44 + 2);
    if ( (_BYTE)v56 == 40 )
    {
      v57 = 0LL;
      if ( *(_DWORD *)(v44 + 20) )
        goto LABEL_54;
      v229 = 0;
      if ( *(_DWORD *)(v44 + 56) )
      {
        v58 = (unsigned int *)(v44 + 120);
        v59 = *(_DWORD *)(v44 + 56);
        while ( 1 )
        {
          v113 = *v58;
          if ( (unsigned int)v113 >= 0x80 )
          {
            v114 = *(unsigned int *)(v44 + 16);
            if ( (unsigned int)v113 < (unsigned int)v114 )
            {
              v115 = *(_DWORD *)(v44 + v113);
              if ( v115 == 64 )
              {
                if ( v113 + 40 <= v114 )
                {
LABEL_334:
                  if ( *(_BYTE *)(v44 + v113 + 10) )
                    v57 = (unsigned __int8 *)(v113 + v44 + 24);
                  LOBYTE(v9) = *(_BYTE *)(v44 + v113 + 8);
                  v47 = 0;
                  v8 = *(_QWORD *)(v44 + v113 + 16);
                  v45 = *(_BYTE *)(v44 + v113 + 9);
                  goto LABEL_342;
                }
              }
              else
              {
                v116 = v115 - 65;
                if ( v116 )
                {
                  if ( v116 == 1 && v113 + 40 <= v114 )
                  {
                    if ( *(_DWORD *)(v44 + v113 + 12) )
                      v57 = (unsigned __int8 *)(v113 + v44 + 32);
                    LOBYTE(v9) = *(_BYTE *)(v44 + v113 + 8);
                    v47 = 0;
                    v8 = *(_QWORD *)(v44 + v113 + 24);
                    v45 = *(_BYTE *)(v44 + v113 + 9);
                    goto LABEL_342;
                  }
                }
                else if ( v113 + 56 <= v114 )
                {
                  goto LABEL_334;
                }
              }
              v59 = *(_DWORD *)(v44 + 56);
            }
          }
          ++v58;
          if ( ++v229 >= v59 )
          {
LABEL_340:
            v47 = 0;
            LOBYTE(v9) = 0;
            goto LABEL_342;
          }
        }
      }
      goto LABEL_342;
    }
LABEL_344:
    LODWORD(v96) = *(unsigned __int8 *)(v44 + 72);
    v8 = *(_QWORD *)(v44 + 32);
    v45 = *(_BYTE *)(v44 + 11);
    LOBYTE(v9) = *(_BYTE *)(v44 + 4);
    if ( v56 )
      goto LABEL_54;
LABEL_345:
    LOBYTE(v96) = (_BYTE)v96 - 8;
    if ( ((unsigned __int8)v96 & 0x5D) != 0 )
      goto LABEL_54;
    v97 = *(_BYTE *)(v44 + 3);
    if ( v97 != 1 && v8 && v45 )
    {
      LOBYTE(v44) = 0;
      v96 = (char *)(v8 + v45);
      v107 = v8 + 8;
      if ( (unsigned __int8)((*(_BYTE *)v8 & 0x7F) - 114) > 1u )
      {
LABEL_289:
        if ( v107 <= (unsigned __int64)v96 )
        {
          v46 = *(_BYTE *)(v8 + 2) & 0xF;
          v108 = v45;
          if ( (unsigned int)*(unsigned __int8 *)(v8 + 7) + 8 <= v45 )
            v108 = *(unsigned __int8 *)(v8 + 7) + 8;
          v96 = (char *)(v8 + 13);
          v44 = v8 + v108;
          if ( v8 + 13 > v44 )
            v47 = 0;
          else
            v47 = *(_BYTE *)(v8 + 12);
          if ( v8 + 14 <= v44 )
            v48 = *v96;
          goto LABEL_286;
        }
LABEL_287:
        if ( (_BYTE)v44 )
          goto LABEL_254;
        goto LABEL_253;
      }
      goto LABEL_322;
    }
    goto LABEL_253;
  }
  v9 = v10;
  v15 = *(_DWORD *)(v10 + 24);
  v16 = *(_DWORD *)(v10 + 20);
  v227 = v15;
  if ( *(_DWORD *)(v10 + 8) != 1397899864 || *(_DWORD *)(v10 + 48) || *(_QWORD *)(v10 + 72) )
  {
    *(_BYTE *)(v10 + 3) = 6;
    *(_QWORD *)(a2 + 56) = 0LL;
    v72 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v73 = *(_DWORD *)(v72 + *(_QWORD *)(v5 + 40));
    while ( (v73 & 1) == 0 )
    {
      v117 = v73;
      v73 = _InterlockedCompareExchange((volatile signed __int32 *)(v72 + *(_QWORD *)(v5 + 40)), v73 - 2, v73);
      if ( v117 == v73 )
        goto LABEL_356;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_356:
    v60 = byte_140168DAA == 0;
    v12 = -1073741811;
    *(_DWORD *)(a2 + 48) = -1073741811;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v60 )
      goto LABEL_54;
    v240 = 0LL;
    IoGetActivityIdIrp(a2, &v240);
    v27 = *(char **)(a2 + 184);
    v118 = *v27;
    if ( *v27 != 15 )
    {
      if ( v118 != 14 )
      {
        if ( v118 != 27 )
          goto LABEL_54;
        if ( v27[1] != 7 )
          goto LABEL_112;
        v60 = *((_DWORD *)v27 + 2) == 0;
LABEL_111:
        if ( !v60 )
        {
LABEL_112:
          if ( (byte_1401694F2 & 0x20) != 0 )
            sub_140052F3C(v28, &unk_140149FE8, &v240, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_54;
        }
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_54;
        v66 = *(_DWORD **)(a2 + 56);
        if ( v66 )
          LODWORD(v8) = *v66;
LABEL_209:
        v86 = &v240;
LABEL_210:
        sub_140056AB0((_DWORD)v28, (_DWORD)v27, (_DWORD)v86, a2, v8, *(_DWORD *)(a2 + 48));
        goto LABEL_54;
      }
      goto LABEL_96;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_54;
    v44 = *((_QWORD *)v27 + 1);
    LOBYTE(v9) = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v56 = *(unsigned __int8 *)(v44 + 2);
    if ( (_BYTE)v56 == 40 )
    {
      v57 = 0LL;
      if ( *(_DWORD *)(v44 + 20) )
        goto LABEL_54;
      v232 = 0;
      if ( *(_DWORD *)(v44 + 56) )
      {
        v119 = (unsigned int *)(v44 + 120);
        v120 = *(_DWORD *)(v44 + 56);
        while ( 1 )
        {
          v121 = *v119;
          if ( (unsigned int)v121 >= 0x80 )
          {
            v122 = *(unsigned int *)(v44 + 16);
            if ( (unsigned int)v121 < (unsigned int)v122 )
            {
              v123 = *(_DWORD *)(v121 + v44);
              if ( v123 == 64 )
              {
                if ( v121 + 40 <= v122 )
                {
LABEL_377:
                  if ( *(_BYTE *)(v121 + v44 + 10) )
                    v57 = (unsigned __int8 *)(v121 + v44 + 24);
                  LOBYTE(v9) = *(_BYTE *)(v121 + v44 + 8);
                  v47 = 0;
                  v8 = *(_QWORD *)(v121 + v44 + 16);
                  v45 = *(_BYTE *)(v121 + v44 + 9);
                  break;
                }
              }
              else
              {
                v124 = v123 - 65;
                if ( v124 )
                {
                  if ( v124 == 1 && v121 + 40 <= v122 )
                  {
                    if ( *(_DWORD *)(v121 + v44 + 12) )
                      v57 = (unsigned __int8 *)(v121 + v44 + 32);
                    LOBYTE(v9) = *(_BYTE *)(v121 + v44 + 8);
                    v47 = 0;
                    v8 = *(_QWORD *)(v121 + v44 + 24);
                    v45 = *(_BYTE *)(v121 + v44 + 9);
                    break;
                  }
                }
                else if ( v121 + 56 <= v122 )
                {
                  goto LABEL_377;
                }
              }
              v120 = *(_DWORD *)(v44 + 56);
            }
          }
          ++v119;
          if ( ++v232 >= v120 )
            goto LABEL_340;
        }
      }
LABEL_342:
      if ( !v57 )
        goto LABEL_54;
      LODWORD(v96) = *v57;
      goto LABEL_345;
    }
    goto LABEL_344;
  }
LABEL_14:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 15LL, &unk_14014D880, v5, a2, v16);
    v15 = v227;
  }
  if ( (v15 & 0x100000) == 0
    || (!sub_140004540(*(_QWORD *)(v5 + 24)) || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 4960LL) + 20LL) & 1) != 0)
    && (v61 = *(_QWORD *)(v5 + 24), (*(_BYTE *)(v61 + 107) & 4) == 0)
    && *(_DWORD *)(v61 + 348) == 1 )
  {
    switch ( v16 )
    {
      case 0:
        if ( *(_BYTE *)(v10 + 2) != 40 )
        {
          v17 = (_BYTE *)(v10 + 72);
          goto LABEL_31;
        }
        v17 = 0LL;
        if ( *(_BYTE *)(v9 + 2) == 40 && !*(_DWORD *)(v9 + 20) )
        {
          v18 = *(_DWORD *)(v9 + 56);
          v234 = 0;
          if ( v18 )
          {
            v19 = (unsigned int *)(v9 + 120);
            while ( 1 )
            {
              v20 = *v19;
              if ( (unsigned int)v20 < 0x80 )
                goto LABEL_28;
              v21 = *(unsigned int *)(v9 + 16);
              if ( (unsigned int)v20 >= (unsigned int)v21 )
                goto LABEL_28;
              v22 = *(_DWORD *)(v20 + v9);
              v23 = v20 + v9;
              if ( v22 == 64 )
                break;
              v35 = v22 - 65;
              if ( !v35 )
              {
                v24 = (unsigned int)v20 + 56LL;
LABEL_27:
                if ( v24 <= v21 )
                {
                  if ( *(_BYTE *)(v23 + 10) )
                    v17 = (_BYTE *)(v23 + 24);
                  goto LABEL_31;
                }
                goto LABEL_28;
              }
              if ( v35 == 1 && (unsigned __int64)(unsigned int)v20 + 40 <= v21 )
              {
                if ( *(_DWORD *)(v23 + 12) )
                  v17 = (_BYTE *)(v23 + 32);
                goto LABEL_31;
              }
LABEL_28:
              ++v19;
              if ( ++v234 >= v18 )
                goto LABEL_31;
            }
            v24 = (unsigned int)v20 + 40LL;
            goto LABEL_27;
          }
        }
LABEL_31:
        if ( !v17 )
          goto LABEL_35;
        if ( *v17 == 27 && (v17[4] & 1) == 0 && (unsigned __int8)sub_140007810(v5) )
        {
          v60 = byte_140168DAA == 0;
          *(_BYTE *)(v10 + 3) = 1;
          *(_QWORD *)(a2 + 56) = 0LL;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v60 )
            goto LABEL_76;
          v242 = 0LL;
          IoGetActivityIdIrp(a2, &v242);
          v37 = *(char **)(a2 + 184);
          v38 = *v37;
          if ( *v37 != 15 )
          {
            if ( v38 == 14 )
            {
              if ( (byte_1401694F2 & 8) != 0 )
                sub_140052F3C(v37, &unk_140148B18, &v242, a2, *(_DWORD *)(a2 + 48));
            }
            else if ( v38 == 27 )
            {
              if ( v37[1] == 7 && !*((_DWORD *)v37 + 2) )
              {
                if ( (byte_1401694F2 & 0x40) != 0 )
                {
                  v67 = *(int **)(a2 + 56);
                  if ( v67 )
                    v68 = *v67;
                  else
                    v68 = 0;
                  sub_140056AB0(v68, v36, (unsigned int)&v242, a2, v68, *(_DWORD *)(a2 + 48));
                }
              }
              else if ( (byte_1401694F2 & 0x20) != 0 )
              {
                sub_140052F3C(v37, &unk_140149FE8, &v242, a2, *(_DWORD *)(a2 + 48));
              }
            }
            goto LABEL_76;
          }
          if ( byte_1401694F1 >= 0 )
          {
LABEL_76:
            IofCompleteRequest((PIRP)a2, 0);
            v39 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
            v40 = *(_DWORD *)(v39 + *(_QWORD *)(v5 + 40));
            while ( (v40 & 1) == 0 )
            {
              v41 = v40;
              v40 = _InterlockedCompareExchange((volatile signed __int32 *)(v39 + *(_QWORD *)(v5 + 40)), v40 - 2, v40);
              if ( v41 == v40 )
                goto LABEL_79;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_79:
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
              && (HIDWORD(off_140168120->Timer) & 8) != 0
              && BYTE1(off_140168120->Timer) >= 4u )
            {
              sub_1400680F0(off_140168120->AttachedDevice, 16LL, &unk_14014D880, v5, a2);
            }
            v12 = 0;
            goto LABEL_42;
          }
          v74 = *((_QWORD *)v37 + 1);
          v75 = 0;
          v76 = 0;
          v77 = 0;
          v78 = 0;
          v79 = 0;
          v80 = 0LL;
          if ( *(_BYTE *)(v74 + 2) == 40 )
          {
            v81 = 0LL;
            if ( *(_DWORD *)(v74 + 20) )
              goto LABEL_76;
            v235 = 0;
            if ( !*(_DWORD *)(v74 + 56) )
              goto LABEL_460;
            v82 = (unsigned int *)(v74 + 120);
            v83 = *(_DWORD *)(v74 + 56);
            while ( 1 )
            {
              v144 = *v82;
              if ( (unsigned int)v144 >= 0x80 )
              {
                v145 = *(unsigned int *)(v74 + 16);
                if ( (unsigned int)v144 < (unsigned int)v145 )
                {
                  v146 = *(_DWORD *)(v144 + v74);
                  if ( v146 == 64 )
                  {
                    if ( v144 + 40 <= v145 )
                    {
LABEL_457:
                      if ( *(_BYTE *)(v144 + v74 + 10) )
                        v81 = (unsigned __int8 *)(v144 + v74 + 24);
                      v75 = *(_BYTE *)(v144 + v74 + 8);
                      v79 = 0;
                      v80 = *(_BYTE **)(v144 + v74 + 16);
                      v76 = *(_BYTE *)(v144 + v74 + 9);
LABEL_460:
                      if ( v81 )
                      {
                        LODWORD(v148) = *v81;
                        goto LABEL_467;
                      }
                      goto LABEL_76;
                    }
                  }
                  else
                  {
                    v147 = v146 - 65;
                    if ( v147 )
                    {
                      if ( v147 == 1 && v144 + 40 <= v145 )
                      {
                        if ( *(_DWORD *)(v144 + v74 + 12) )
                          v81 = (unsigned __int8 *)(v144 + v74 + 32);
                        v75 = *(_BYTE *)(v144 + v74 + 8);
                        v79 = 0;
                        v80 = *(_BYTE **)(v144 + v74 + 24);
                        v76 = *(_BYTE *)(v144 + v74 + 9);
                        goto LABEL_460;
                      }
                    }
                    else if ( v144 + 56 <= v145 )
                    {
                      goto LABEL_457;
                    }
                  }
                  v83 = *(_DWORD *)(v74 + 56);
                }
              }
              ++v82;
              if ( ++v235 >= v83 )
              {
                v79 = 0;
                v75 = 0;
                goto LABEL_460;
              }
            }
          }
          LODWORD(v148) = *(unsigned __int8 *)(v74 + 72);
          v80 = *(_BYTE **)(v74 + 32);
          v76 = *(_BYTE *)(v74 + 11);
          v75 = *(_BYTE *)(v74 + 4);
          if ( *(_BYTE *)(v74 + 2) )
            goto LABEL_76;
LABEL_467:
          LOBYTE(v148) = (_BYTE)v148 - 8;
          if ( ((unsigned __int8)v148 & 0x5D) != 0 )
            goto LABEL_76;
          if ( *(_BYTE *)(v74 + 3) == 1 || !v80 || !v76 )
            goto LABEL_485;
          v149 = 0;
          v148 = &v80[v76];
          v150 = v80 + 8;
          if ( (unsigned __int8)((*v80 & 0x7F) - 114) <= 1u )
          {
            if ( v150 > v148 )
              goto LABEL_484;
            v78 = v80[2];
            v77 = v80[1] & 0xF;
            v79 = v80[3];
          }
          else
          {
            if ( v150 > v148 )
              goto LABEL_484;
            v77 = v80[2] & 0xF;
            v151 = v76;
            if ( (unsigned int)(unsigned __int8)v80[7] + 8 <= v76 )
              v151 = (unsigned __int8)v80[7] + 8;
            v148 = v80 + 13;
            v152 = (unsigned __int64)&v80[v151];
            if ( (unsigned __int64)(v80 + 13) > v152 )
              v78 = 0;
            else
              v78 = v80[12];
            if ( (unsigned __int64)(v80 + 14) > v152 )
              v79 = 0;
            else
              v79 = *v148;
          }
          v149 = 1;
LABEL_484:
          if ( v149 )
          {
LABEL_486:
            sub_140052E64(
              (_DWORD)v148,
              (_DWORD)v80,
              (unsigned int)&v242,
              a2,
              *(_DWORD *)(a2 + 48),
              *(_BYTE *)(v74 + 3),
              v75,
              v77,
              v78,
              v79,
              a2);
            goto LABEL_76;
          }
LABEL_485:
          v79 = 0;
          v78 = 0;
          v77 = 0;
          goto LABEL_486;
        }
        v25 = *(_QWORD *)(v5 + 24);
        if ( (*(_DWORD *)(v25 + 128) & 4) == 0 && !*(_DWORD *)(v25 + 328) )
        {
LABEL_35:
          if ( !byte_1401688B4 || !v17 )
            goto LABEL_36;
          if ( *v17 == 0xA2 )
          {
            if ( v17[1] != 0xEE )
            {
LABEL_36:
              if ( byte_140168DAA && (byte_1401694F1 & 0x1E) != 0 && ((*v17 - 8) & 0x5D) == 0 )
              {
                IoGetActivityIdIrp(a2, &v244);
                sub_140004554(a2);
              }
              v12 = sub_1400067A0(v5, a2);
              if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                && (HIDWORD(off_140168120->Timer) & 8) != 0
                && BYTE1(off_140168120->Timer) >= 4u )
              {
                sub_1400556F8(off_140168120->AttachedDevice, 19LL, &unk_14014D880, v5, a2, v12);
              }
              goto LABEL_42;
            }
          }
          else if ( *v17 != 0xB5 || v17[1] != 0xEE )
          {
            goto LABEL_36;
          }
          *(_BYTE *)(v10 + 3) = 4;
          *(_QWORD *)(a2 + 56) = 0LL;
          v182 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v183 = *(_DWORD *)(v182 + *(_QWORD *)(v5 + 40));
          while ( (v183 & 1) == 0 )
          {
            v184 = v183;
            v183 = _InterlockedCompareExchange((volatile signed __int32 *)(v182 + *(_QWORD *)(v5 + 40)), v183 - 2, v183);
            if ( v184 == v183 )
              goto LABEL_579;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_579:
          v60 = byte_140168DAA == 0;
          v12 = -1073741637;
          *(_DWORD *)(a2 + 48) = -1073741637;
          *(_BYTE *)(a2 + 141) = -84;
          if ( v60 )
            goto LABEL_54;
          v241 = 0LL;
          IoGetActivityIdIrp(a2, &v241);
          v27 = *(char **)(a2 + 184);
          v185 = *v27;
          if ( *v27 != 15 )
          {
            if ( v185 != 14 )
            {
              if ( v185 != 27 )
                goto LABEL_54;
              if ( v27[1] == 7 && !*((_DWORD *)v27 + 2) )
              {
                if ( (byte_1401694F2 & 0x40) == 0 )
                  goto LABEL_54;
                v186 = *(_DWORD **)(a2 + 56);
                if ( v186 )
                {
                  LODWORD(v8) = *v186;
                  v86 = &v241;
                  goto LABEL_210;
                }
                goto LABEL_397;
              }
LABEL_398:
              if ( (byte_1401694F2 & 0x20) != 0 )
                sub_140052F3C(v28, &unk_140149FE8, &v241, a2, *(_DWORD *)(a2 + 48));
              goto LABEL_54;
            }
LABEL_400:
            if ( (byte_1401694F2 & 8) != 0 )
              sub_140052F3C(v28, &unk_140148B18, &v241, a2, *(_DWORD *)(a2 + 48));
            goto LABEL_54;
          }
          if ( byte_1401694F1 >= 0 )
            goto LABEL_54;
          v128 = *((_QWORD *)v27 + 1);
          v187 = 0;
          v188 = 0;
          v189 = 0;
          v190 = 0;
          v191 = 0;
          if ( *(_BYTE *)(v128 + 2) == 40 )
          {
            v192 = 0LL;
            if ( *(_DWORD *)(v128 + 20) )
              goto LABEL_54;
            v238 = 0;
            if ( *(_DWORD *)(v128 + 56) )
            {
              v193 = (unsigned int *)(v128 + 120);
              v194 = *(_DWORD *)(v128 + 56);
              while ( 1 )
              {
                v195 = *v193;
                if ( (unsigned int)v195 >= 0x80 )
                {
                  v196 = *(unsigned int *)(v128 + 16);
                  if ( (unsigned int)v195 < (unsigned int)v196 )
                  {
                    v197 = *(_DWORD *)(v195 + v128);
                    if ( v197 == 64 )
                    {
                      if ( v195 + 40 <= v196 )
                      {
LABEL_603:
                        if ( *(_BYTE *)(v195 + v128 + 10) )
                          v192 = (unsigned __int8 *)(v195 + v128 + 24);
                        v187 = *(_BYTE *)(v195 + v128 + 8);
                        v190 = 0;
                        v8 = *(_QWORD *)(v195 + v128 + 16);
                        v188 = *(_BYTE *)(v195 + v128 + 9);
                        break;
                      }
                    }
                    else
                    {
                      v198 = v197 - 65;
                      if ( v198 )
                      {
                        if ( v198 == 1 && v195 + 40 <= v196 )
                        {
                          if ( *(_DWORD *)(v195 + v128 + 12) )
                            v192 = (unsigned __int8 *)(v195 + v128 + 32);
                          v187 = *(_BYTE *)(v195 + v128 + 8);
                          v190 = 0;
                          v8 = *(_QWORD *)(v195 + v128 + 24);
                          v188 = *(_BYTE *)(v195 + v128 + 9);
                          break;
                        }
                      }
                      else if ( v195 + 56 <= v196 )
                      {
                        goto LABEL_603;
                      }
                    }
                    v194 = *(_DWORD *)(v128 + 56);
                  }
                }
                ++v193;
                if ( ++v238 >= v194 )
                {
                  v190 = 0;
                  v187 = 0;
                  break;
                }
              }
            }
            if ( !v192 )
              goto LABEL_54;
            LODWORD(v139) = *v192;
          }
          else
          {
            LODWORD(v139) = *(unsigned __int8 *)(v128 + 72);
            v8 = *(_QWORD *)(v128 + 32);
            v188 = *(_BYTE *)(v128 + 11);
            v187 = *(_BYTE *)(v128 + 4);
            if ( *(_BYTE *)(v128 + 2) )
              goto LABEL_54;
          }
          LOBYTE(v139) = (_BYTE)v139 - 8;
          if ( ((unsigned __int8)v139 & 0x5D) != 0 )
            goto LABEL_54;
          if ( *(_BYTE *)(v128 + 3) == 1 || !v8 || !v188 )
            goto LABEL_630;
          v199 = 0;
          v139 = (char *)(v8 + v188);
          v200 = v8 + 8;
          if ( (unsigned __int8)((*(_BYTE *)v8 & 0x7F) - 114) <= 1u )
          {
            if ( v200 > (unsigned __int64)v139 )
              goto LABEL_629;
            v190 = *(_BYTE *)(v8 + 2);
            v189 = *(_BYTE *)(v8 + 1) & 0xF;
            v191 = *(_BYTE *)(v8 + 3);
          }
          else
          {
            if ( v200 > (unsigned __int64)v139 )
              goto LABEL_629;
            v201 = v188;
            v189 = *(_BYTE *)(v8 + 2) & 0xF;
            if ( (unsigned int)*(unsigned __int8 *)(v8 + 7) + 8 <= v188 )
              v201 = *(unsigned __int8 *)(v8 + 7) + 8;
            v139 = (char *)(v8 + 13);
            v202 = v8 + v201;
            if ( v8 + 13 > v202 )
              v190 = 0;
            else
              v190 = *(_BYTE *)(v8 + 12);
            if ( v8 + 14 <= v202 )
              v191 = *v139;
          }
          v199 = 1;
LABEL_629:
          if ( v199 )
          {
LABEL_631:
            v226 = a2;
            v225 = v191;
            v224 = v190;
            v223 = v189;
            v222 = v187;
            goto LABEL_257;
          }
LABEL_630:
          v191 = 0;
          v190 = 0;
          v189 = 0;
          goto LABEL_631;
        }
        v84 = 0;
        if ( (v227 & 0x800) != 0 && (*(_DWORD *)(v5 + 512) & 0x40) != 0 )
        {
          if ( *v17 != 53 )
          {
            if ( *v17 != 27 )
              goto LABEL_35;
            if ( (v17[4] & 1) != 0 )
              goto LABEL_490;
          }
          v84 = 1;
        }
        if ( *v17 != 27 || (v17[4] & 1) == 0 )
        {
LABEL_491:
          if ( !v84 )
            goto LABEL_35;
LABEL_492:
          v60 = byte_140168DAA == 0;
          *(_BYTE *)(v10 + 3) = 1;
          *(_QWORD *)(a2 + 56) = 0LL;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( !v60 )
          {
            v243 = 0LL;
            IoGetActivityIdIrp(a2, &v243);
            v154 = *(char **)(a2 + 184);
            v155 = *v154;
            if ( *v154 != 15 )
            {
              if ( v155 == 14 )
              {
                if ( (byte_1401694F2 & 8) != 0 )
                  sub_140052F3C(v154, &unk_140148B18, &v243, a2, *(_DWORD *)(a2 + 48));
              }
              else if ( v155 == 27 )
              {
                if ( v154[1] != 7 || *((_DWORD *)v154 + 2) )
                {
                  if ( (byte_1401694F2 & 0x20) != 0 )
                    sub_140052F3C(v154, &unk_140149FE8, &v243, a2, *(_DWORD *)(a2 + 48));
                }
                else if ( (byte_1401694F2 & 0x40) != 0 )
                {
                  v156 = *(int **)(a2 + 56);
                  if ( v156 )
                    v157 = *v156;
                  else
                    v157 = 0;
                  sub_140056AB0(v157, v153, (unsigned int)&v243, a2, v157, *(_DWORD *)(a2 + 48));
                }
              }
              goto LABEL_553;
            }
            if ( byte_1401694F1 < 0 )
            {
              v158 = *((_QWORD *)v154 + 1);
              v159 = 0;
              v160 = 0;
              v161 = 0;
              v162 = 0;
              v163 = 0LL;
              if ( *(_BYTE *)(v158 + 2) == 40 )
              {
                v164 = 0LL;
                if ( *(_DWORD *)(v158 + 20) )
                  goto LABEL_553;
                v237 = 0;
                if ( !*(_DWORD *)(v158 + 56) )
                  goto LABEL_525;
                v165 = (unsigned int *)(v158 + 120);
                v166 = *(_DWORD *)(v158 + 56);
                while ( 1 )
                {
                  v167 = *v165;
                  if ( (unsigned int)v167 >= 0x80 )
                  {
                    v168 = *(unsigned int *)(v158 + 16);
                    if ( (unsigned int)v167 < (unsigned int)v168 )
                    {
                      v169 = *(_DWORD *)(v167 + v158);
                      if ( v169 == 64 )
                      {
                        if ( v167 + 40 <= v168 )
                        {
LABEL_522:
                          if ( *(_BYTE *)(v167 + v158 + 10) )
                            v164 = (unsigned __int8 *)(v167 + v158 + 24);
                          v159 = *(_BYTE *)(v167 + v158 + 8);
                          v161 = 0;
                          v163 = *(_BYTE **)(v167 + v158 + 16);
                          v160 = *(_BYTE *)(v167 + v158 + 9);
LABEL_525:
                          if ( v164 )
                          {
                            LODWORD(v171) = *v164;
                            goto LABEL_532;
                          }
                          goto LABEL_553;
                        }
                      }
                      else
                      {
                        v170 = v169 - 65;
                        if ( v170 )
                        {
                          if ( v170 == 1 && v167 + 40 <= v168 )
                          {
                            if ( *(_DWORD *)(v167 + v158 + 12) )
                              v164 = (unsigned __int8 *)(v167 + v158 + 32);
                            v159 = *(_BYTE *)(v167 + v158 + 8);
                            v161 = 0;
                            v163 = *(_BYTE **)(v167 + v158 + 24);
                            v160 = *(_BYTE *)(v167 + v158 + 9);
                            goto LABEL_525;
                          }
                        }
                        else if ( v167 + 56 <= v168 )
                        {
                          goto LABEL_522;
                        }
                      }
                      v166 = *(_DWORD *)(v158 + 56);
                    }
                  }
                  ++v165;
                  if ( ++v237 >= v166 )
                  {
                    v161 = 0;
                    v159 = 0;
                    goto LABEL_525;
                  }
                }
              }
              LODWORD(v171) = *(unsigned __int8 *)(v158 + 72);
              v163 = *(_BYTE **)(v158 + 32);
              v160 = *(_BYTE *)(v158 + 11);
              v159 = *(_BYTE *)(v158 + 4);
              if ( *(_BYTE *)(v158 + 2) )
                goto LABEL_553;
LABEL_532:
              LOBYTE(v171) = (_BYTE)v171 - 8;
              if ( ((unsigned __int8)v171 & 0x5D) != 0 )
                goto LABEL_553;
              if ( *(_BYTE *)(v158 + 3) == 1 || !v163 || !v160 )
                goto LABEL_551;
              v172 = 0;
              v171 = &v163[v160];
              v173 = v163 + 8;
              if ( (unsigned __int8)((*v163 & 0x7F) - 114) <= 1u )
              {
                if ( v173 <= v171 )
                {
                  v176 = v163[2];
                  v161 = v163[1] & 0xF;
                  v162 = v163[3];
LABEL_548:
                  v172 = 1;
                  goto LABEL_550;
                }
              }
              else if ( v173 <= v171 )
              {
                v161 = v163[2] & 0xF;
                v174 = v160;
                if ( (unsigned int)(unsigned __int8)v163[7] + 8 <= v160 )
                  v174 = (unsigned __int8)v163[7] + 8;
                v171 = v163 + 13;
                v175 = (unsigned __int64)&v163[v174];
                if ( (unsigned __int64)(v163 + 13) > v175 )
                  v176 = 0;
                else
                  v176 = v163[12];
                if ( (unsigned __int64)(v163 + 14) > v175 )
                  v162 = 0;
                else
                  v162 = *v171;
                goto LABEL_548;
              }
              v176 = 0;
LABEL_550:
              if ( v172 )
              {
LABEL_552:
                sub_140052E64(
                  (_DWORD)v171,
                  (_DWORD)v163,
                  (unsigned int)&v243,
                  a2,
                  *(_DWORD *)(a2 + 48),
                  *(_BYTE *)(v158 + 3),
                  v159,
                  v161,
                  v176,
                  v162,
                  a2);
                goto LABEL_553;
              }
LABEL_551:
              v162 = 0;
              v176 = 0;
              v161 = 0;
              goto LABEL_552;
            }
          }
LABEL_553:
          IofCompleteRequest((PIRP)a2, 0);
          v177 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v178 = *(_DWORD *)(v177 + *(_QWORD *)(v5 + 40));
          while ( (v178 & 1) == 0 )
          {
            v179 = v178;
            v178 = _InterlockedCompareExchange((volatile signed __int32 *)(v177 + *(_QWORD *)(v5 + 40)), v178 - 2, v178);
            if ( v179 == v178 )
              goto LABEL_559;
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_559:
          if ( *v17 == 53 )
          {
            v180 = off_140168120;
            if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
              || (HIDWORD(off_140168120->Timer) & 8) == 0
              || BYTE1(off_140168120->Timer) < 4u )
            {
              goto LABEL_570;
            }
            v181 = 17LL;
          }
          else
          {
            if ( *v17 != 27 )
              goto LABEL_570;
            v180 = off_140168120;
            if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
              || (HIDWORD(off_140168120->Timer) & 8) == 0
              || BYTE1(off_140168120->Timer) < 4u )
            {
              goto LABEL_570;
            }
            v181 = 18LL;
          }
          sub_1400680F0(v180->AttachedDevice, v181, &unk_14014D880, v5, a2);
LABEL_570:
          v12 = 0;
          goto LABEL_42;
        }
LABEL_490:
        if ( (*(_DWORD *)(v5 + 512) & 0x20) != 0 )
          goto LABEL_492;
        goto LABEL_491;
      case 10:
        v12 = sub_1400537EC(v5, a2);
        goto LABEL_42;
      case 7:
LABEL_58:
        v30 = sub_1400067A0(v5, a2);
        v31 = 0;
LABEL_59:
        v12 = v30;
        goto LABEL_60;
      case 8:
        v30 = sub_1400078A0(v5, a2);
        v31 = v30 != 259;
        goto LABEL_59;
    }
    switch ( v16 )
    {
      case 1:
        v30 = sub_140092210(v5, a2);
        v31 = 1;
        goto LABEL_59;
      case 2:
      case 9:
        goto LABEL_58;
      case 4:
        v30 = sub_140095B74(v5, a2);
        v31 = 1;
        goto LABEL_59;
      case 6:
        v30 = sub_1400957B4(v5, a2);
        v31 = 1;
        goto LABEL_59;
      case 16:
      case 19:
      case 32:
        v30 = sub_140007BD8(v5, a2);
        v31 = 1;
        goto LABEL_59;
      case 18:
        v30 = sub_140096368(v5, a2);
        v31 = 1;
        goto LABEL_59;
      case 21:
        v30 = sub_1400930B8(v5, a2);
        v31 = 1;
        goto LABEL_59;
      case 23:
        v60 = byte_140168DAA == 0;
        v12 = -1073741808;
        *(_DWORD *)(a2 + 48) = -1073741808;
        *(_BYTE *)(a2 + 141) = -84;
        if ( v60 )
          goto LABEL_691;
        v241 = 0LL;
        IoGetActivityIdIrp(a2, &v241);
        v204 = *(char **)(a2 + 184);
        v205 = *v204;
        if ( *v204 != 15 )
        {
          if ( v205 == 14 )
          {
            if ( (byte_1401694F2 & 8) != 0 )
              sub_140052F3C(v204, &unk_140148B18, &v241, a2, *(_DWORD *)(a2 + 48));
          }
          else if ( v205 == 27 )
          {
            if ( v204[1] != 7 || *((_DWORD *)v204 + 2) )
            {
              if ( (byte_1401694F2 & 0x20) != 0 )
                sub_140052F3C(v204, &unk_140149FE8, &v241, a2, *(_DWORD *)(a2 + 48));
            }
            else if ( (byte_1401694F2 & 0x40) != 0 )
            {
              v206 = *(_DWORD **)(a2 + 56);
              if ( v206 )
                LODWORD(v8) = *v206;
              sub_140056AB0((_DWORD)v204, (_DWORD)v203, (unsigned int)&v241, a2, v8, *(_DWORD *)(a2 + 48));
            }
          }
LABEL_691:
          IofCompleteRequest((PIRP)a2, 0);
          v31 = 1;
LABEL_60:
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
            && (HIDWORD(off_140168120->Timer) & 8) != 0
            && BYTE1(off_140168120->Timer) >= 4u )
          {
            sub_1400556F8(off_140168120->AttachedDevice, 20LL, &unk_14014D880, v5, a2, v12);
          }
          if ( v31 )
          {
            v32 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
            v33 = *(_DWORD *)(v32 + *(_QWORD *)(v5 + 40));
            while ( (v33 & 1) == 0 )
            {
              v34 = v33;
              v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v32 + *(_QWORD *)(v5 + 40)), v33 - 2, v33);
              if ( v34 == v33 )
                goto LABEL_42;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
          }
          goto LABEL_42;
        }
        if ( byte_1401694F1 >= 0 )
          goto LABEL_691;
        v207 = *((_QWORD *)v204 + 1);
        v208 = 0;
        v209 = 0;
        v210 = 0;
        v211 = 0;
        v212 = 0;
        if ( *(_BYTE *)(v207 + 2) == 40 )
        {
          v203 = 0LL;
          if ( *(_DWORD *)(v207 + 20) )
            goto LABEL_691;
          v239 = 0;
          if ( *(_DWORD *)(v207 + 56) )
          {
            v213 = (unsigned int *)(v207 + 120);
            v214 = *(_DWORD *)(v207 + 56);
            while ( 1 )
            {
              v215 = *v213;
              if ( (unsigned int)v215 >= 0x80 )
              {
                v216 = *(unsigned int *)(v207 + 16);
                if ( (unsigned int)v215 < (unsigned int)v216 )
                {
                  v217 = *(_DWORD *)(v215 + v207);
                  if ( v217 == 64 )
                  {
                    if ( v215 + 40 <= v216 )
                    {
LABEL_661:
                      if ( *(_BYTE *)(v215 + v207 + 10) )
                        v203 = (unsigned __int8 *)(v215 + v207 + 24);
                      v208 = *(_BYTE *)(v215 + v207 + 8);
                      v212 = 0;
                      v8 = *(_QWORD *)(v215 + v207 + 16);
                      v209 = *(_BYTE *)(v215 + v207 + 9);
                      break;
                    }
                  }
                  else
                  {
                    v218 = v217 - 65;
                    if ( v218 )
                    {
                      if ( v218 == 1 && v215 + 40 <= v216 )
                      {
                        if ( *(_DWORD *)(v215 + v207 + 12) )
                          v203 = (unsigned __int8 *)(v215 + v207 + 32);
                        v208 = *(_BYTE *)(v215 + v207 + 8);
                        v212 = 0;
                        v8 = *(_QWORD *)(v215 + v207 + 24);
                        v209 = *(_BYTE *)(v215 + v207 + 9);
                        break;
                      }
                    }
                    else if ( v215 + 56 <= v216 )
                    {
                      goto LABEL_661;
                    }
                  }
                  v214 = *(_DWORD *)(v207 + 56);
                }
              }
              ++v213;
              if ( ++v239 >= v214 )
              {
                v212 = 0;
                v208 = 0;
                break;
              }
            }
          }
          if ( !v203 )
            goto LABEL_691;
          LODWORD(v219) = *v203;
        }
        else
        {
          LODWORD(v219) = *(unsigned __int8 *)(v207 + 72);
          v8 = *(_QWORD *)(v207 + 32);
          v209 = *(_BYTE *)(v207 + 11);
          v208 = *(_BYTE *)(v207 + 4);
          if ( *(_BYTE *)(v207 + 2) )
            goto LABEL_691;
        }
        LOBYTE(v219) = (_BYTE)v219 - 8;
        if ( ((unsigned __int8)v219 & 0x5D) != 0 )
          goto LABEL_691;
        if ( *(_BYTE *)(v207 + 3) == 1 || !v8 || !v209 )
          goto LABEL_689;
        LOBYTE(v203) = 0;
        v219 = (char *)(v8 + v209);
        v220 = v8 + 8;
        if ( (unsigned __int8)((*(_BYTE *)v8 & 0x7F) - 114) <= 1u )
        {
          if ( v220 > (unsigned __int64)v219 )
            goto LABEL_688;
          v211 = *(_BYTE *)(v8 + 2);
          v210 = *(_BYTE *)(v8 + 1) & 0xF;
          v212 = *(_BYTE *)(v8 + 3);
        }
        else
        {
          if ( v220 > (unsigned __int64)v219 )
            goto LABEL_688;
          v210 = *(_BYTE *)(v8 + 2) & 0xF;
          v221 = v209;
          if ( (unsigned int)*(unsigned __int8 *)(v8 + 7) + 8 <= v209 )
            v221 = *(unsigned __int8 *)(v8 + 7) + 8;
          v219 = (char *)(v8 + 13);
          v203 = (unsigned __int8 *)(v8 + v221);
          if ( v8 + 13 > (unsigned __int64)v203 )
            v211 = 0;
          else
            v211 = *(_BYTE *)(v8 + 12);
          if ( v8 + 14 > (unsigned __int64)v203 )
            v212 = 0;
          else
            v212 = *v219;
        }
        LOBYTE(v203) = 1;
LABEL_688:
        if ( !(_BYTE)v203 )
        {
LABEL_689:
          v212 = 0;
          v211 = 0;
          v210 = 0;
        }
        sub_140052E64(
          (_DWORD)v219,
          (_DWORD)v203,
          (unsigned int)&v241,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v207 + 3),
          v208,
          v210,
          v211,
          v212,
          a2);
        goto LABEL_691;
      case 24:
        v30 = sub_140004290(v5, a2);
        v31 = 1;
        goto LABEL_59;
      case 25:
        v30 = sub_140004004(v5, a2);
        v31 = 1;
        goto LABEL_59;
      case 26:
        v30 = sub_140003D0C(v5, a2);
        v31 = v30 != 259;
        goto LABEL_59;
      default:
        v30 = sub_1401826BC(v5, a2);
        v31 = 1;
        goto LABEL_59;
    }
  }
  *(_BYTE *)(v10 + 3) = 36;
  *(_QWORD *)(a2 + 56) = 0LL;
  v62 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v63 = *(_DWORD *)(v62 + *(_QWORD *)(v5 + 40));
  while ( (v63 & 1) == 0 )
  {
    v125 = v63;
    v63 = _InterlockedCompareExchange((volatile signed __int32 *)(v62 + *(_QWORD *)(v5 + 40)), v63 - 2, v63);
    if ( v125 == v63 )
      goto LABEL_388;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_388:
  v60 = byte_140168DAA == 0;
  v12 = -1073741823;
  *(_DWORD *)(a2 + 48) = -1073741823;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v60 )
    goto LABEL_54;
  v241 = 0LL;
  IoGetActivityIdIrp(a2, &v241);
  v27 = *(char **)(a2 + 184);
  v126 = *v27;
  if ( *v27 != 15 )
  {
    if ( v126 != 14 )
    {
      if ( v126 != 27 )
        goto LABEL_54;
      if ( v27[1] == 7 && !*((_DWORD *)v27 + 2) )
      {
        if ( (byte_1401694F2 & 0x40) == 0 )
          goto LABEL_54;
        v127 = *(_DWORD **)(a2 + 56);
        if ( v127 )
          LODWORD(v8) = *v127;
LABEL_397:
        v86 = &v241;
        goto LABEL_210;
      }
      goto LABEL_398;
    }
    goto LABEL_400;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_54;
  v128 = *((_QWORD *)v27 + 1);
  v129 = 0;
  v130 = 0;
  v102 = 0;
  v101 = 0;
  v100 = 0;
  if ( *(_BYTE *)(v128 + 2) == 40 )
  {
    v131 = 0LL;
    if ( *(_DWORD *)(v128 + 20) )
      goto LABEL_54;
    v236 = 0;
    v233 = *(_DWORD *)(v128 + 56);
    if ( !v233 )
      goto LABEL_420;
    v132 = *(_DWORD *)(v128 + 56);
    v133 = (unsigned int *)(v128 + 120);
    *(_QWORD *)&v240 = v128 + 120;
    v134 = 0;
    while ( 1 )
    {
      v135 = *v133;
      if ( (unsigned int)v135 >= 0x80 )
      {
        v136 = *(unsigned int *)(v128 + 16);
        if ( (unsigned int)v135 < (unsigned int)v136 )
        {
          v137 = *(_DWORD *)(v135 + v128);
          if ( v137 == 64 )
          {
            if ( v135 + 40 <= v136 )
            {
LABEL_417:
              if ( *(_BYTE *)(v135 + v128 + 10) )
                v131 = (unsigned __int8 *)(v135 + v128 + 24);
              v129 = *(_BYTE *)(v135 + v128 + 8);
              v8 = *(_QWORD *)(v135 + v128 + 16);
              v130 = *(_BYTE *)(v135 + v128 + 9);
LABEL_420:
              if ( v131 )
              {
                LODWORD(v139) = *v131;
                goto LABEL_428;
              }
              goto LABEL_54;
            }
          }
          else
          {
            v138 = v137 - 65;
            if ( v138 )
            {
              if ( v138 == 1 && v135 + 40 <= v136 )
              {
                if ( *(_DWORD *)(v135 + v128 + 12) )
                  v131 = (unsigned __int8 *)(v135 + v128 + 32);
                v129 = *(_BYTE *)(v135 + v128 + 8);
                v8 = *(_QWORD *)(v135 + v128 + 24);
                v130 = *(_BYTE *)(v135 + v128 + 9);
                goto LABEL_420;
              }
            }
            else if ( v135 + 56 <= v136 )
            {
              goto LABEL_417;
            }
          }
          v132 = v233;
        }
        v134 = v236;
      }
      ++v134;
      v133 = (unsigned int *)(v240 + 4);
      v236 = v134;
      *(_QWORD *)&v240 = v240 + 4;
      if ( v134 >= v132 )
      {
        v129 = 0;
        goto LABEL_420;
      }
    }
  }
  LODWORD(v139) = *(unsigned __int8 *)(v128 + 72);
  v8 = *(_QWORD *)(v128 + 32);
  v130 = *(_BYTE *)(v128 + 11);
  v129 = *(_BYTE *)(v128 + 4);
  if ( *(_BYTE *)(v128 + 2) )
    goto LABEL_54;
LABEL_428:
  LOBYTE(v139) = (_BYTE)v139 - 8;
  if ( ((unsigned __int8)v139 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v128 + 3) == 1 || !v8 || !v130 )
    {
LABEL_255:
      v100 = 0;
      v101 = 0;
      v102 = 0;
LABEL_256:
      v226 = a2;
      v225 = v100;
      v224 = v101;
      v223 = v102;
      v222 = v129;
LABEL_257:
      sub_140052E64(
        (_DWORD)v139,
        v128,
        (unsigned int)&v241,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v128 + 3),
        v222,
        v223,
        v224,
        v225,
        v226);
      goto LABEL_54;
    }
    v140 = 0;
    v139 = (char *)(v8 + v130);
    v141 = v8 + 8;
    if ( (unsigned __int8)((*(_BYTE *)v8 & 0x7F) - 114) <= 1u )
    {
      if ( v141 > (unsigned __int64)v139 )
        goto LABEL_443;
      v101 = *(_BYTE *)(v8 + 2);
      v102 = *(_BYTE *)(v8 + 1) & 0xF;
      v100 = *(_BYTE *)(v8 + 3);
    }
    else
    {
      if ( v141 > (unsigned __int64)v139 )
        goto LABEL_443;
      v142 = v130;
      v102 = *(_BYTE *)(v8 + 2) & 0xF;
      if ( (unsigned int)*(unsigned __int8 *)(v8 + 7) + 8 <= v130 )
        v142 = *(unsigned __int8 *)(v8 + 7) + 8;
      v139 = (char *)(v8 + 13);
      v143 = v8 + v142;
      if ( v8 + 13 <= v143 )
        v101 = *(_BYTE *)(v8 + 12);
      if ( v8 + 14 <= v143 )
        v100 = *v139;
    }
    v140 = 1;
LABEL_443:
    if ( v140 )
      goto LABEL_256;
    goto LABEL_255;
  }
LABEL_54:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_42:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 19LL, &unk_140148948, a1, a2, v12);
  }
  return v12;
}
