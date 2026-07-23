/*
 * XREFs of sub_140C7A754 @ 0x140C7A754
 * Callers:
 *     sub_140C7A754 @ 0x140C7A754 (sub_140C7A754.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     sub_140553D6C @ 0x140553D6C (sub_140553D6C.c)
 *     sub_140C7A754 @ 0x140C7A754 (sub_140C7A754.c)
 *     sub_140C7CE10 @ 0x140C7CE10 (sub_140C7CE10.c)
 *     sub_140C7E7A8 @ 0x140C7E7A8 (sub_140C7E7A8.c)
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     sub_140C7F9D0 @ 0x140C7F9D0 (sub_140C7F9D0.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 *     sub_140C8713C @ 0x140C8713C (sub_140C8713C.c)
 */

__int64 __fastcall sub_140C7A754(__int64 *a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // r12
  _BYTE *v6; // r8
  __int64 result; // rax
  int v8; // ecx
  int *v9; // rax
  _BYTE *v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // r14d
  int v13; // r13d
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // esi
  unsigned int v17; // r11d
  _BYTE *v18; // r10
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r14d
  __int64 v24; // rax
  ULONG_PTR v25; // r15
  unsigned int **v26; // r8
  unsigned int v27; // r12d
  int v28; // ecx
  int v29; // ecx
  int *v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // esi
  __int64 v33; // r9
  int v34; // ecx
  int v35; // edi
  unsigned int v36; // r11d
  _BYTE *v37; // r10
  __int64 v38; // rdi
  __int64 v39; // rax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdi
  char **v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  char *v48; // rdx
  __int64 v49; // r9
  ULONG_PTR v50; // rax
  __int64 v51; // rdx
  __int64 *v52; // rsi
  __int64 (__fastcall *v53)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned int v56; // ecx
  __int64 (__fastcall *v57)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rax
  unsigned int v61; // ecx
  __int64 (__fastcall *v62)(ULONG_PTR); // rax
  __int64 v63; // rdi
  int v64; // ecx
  __int64 v65; // rcx
  __int64 v66; // r10
  __int64 v67; // r8
  _QWORD *v68; // rdx
  unsigned __int64 v69; // r9
  int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // r8
  unsigned int v75; // eax
  _BYTE *v76; // rdi
  int v77; // ecx
  unsigned int v78; // eax
  __int64 v79; // r8
  int v80; // edx
  unsigned __int64 v81; // rcx
  int v82; // ebx
  _DWORD *v83; // r15
  unsigned int *v84; // r14
  _QWORD *v85; // r13
  __int64 v86; // r12
  _QWORD *v87; // rax
  _QWORD *v88; // rbx
  int v89; // ecx
  __int64 v90; // rdx
  _QWORD *v91; // r9
  const char *v92; // rax
  int v93; // r11d
  unsigned __int64 v94; // r8
  unsigned int v95; // r10d
  __int64 v96; // rax
  __int64 v97; // r8
  unsigned __int64 v98; // rcx
  unsigned int v99; // edx
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int64 i; // rax
  _DWORD *v103; // r14
  ULONG_PTR v104; // rsi
  _BYTE *v105; // rbx
  int v106; // ecx
  unsigned __int64 v107; // r14
  unsigned int v108; // r9d
  _QWORD *v109; // rdi
  _DWORD *v110; // r12
  unsigned __int128 v111; // rax
  _QWORD *v112; // r10
  const char *v113; // rax
  int v114; // r11d
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // r8
  unsigned int v117; // esi
  __int64 v118; // rax
  __int64 v119; // r8
  unsigned __int64 v120; // r9
  unsigned __int64 v121; // rax
  __int64 v122; // rax
  bool v123; // zf
  unsigned __int64 j; // rax
  unsigned __int64 v125; // rsi
  __int64 v126; // rsi
  unsigned int v127; // eax
  int v128; // ecx
  unsigned int v129; // eax
  __int64 v130; // r8
  int v131; // edx
  unsigned __int64 v132; // rcx
  int v133; // ebx
  __int64 v134; // rdx
  int v135; // ecx
  _QWORD *v136; // rax
  __int64 v137; // r12
  __int64 v138; // r15
  int v139; // r10d
  const char *v140; // rax
  unsigned int v141; // r11d
  __int64 v142; // rax
  __int64 v143; // r8
  unsigned __int128 v144; // rax
  unsigned __int64 k; // rax
  unsigned __int64 v146; // r15
  __int64 v147; // rbx
  __int64 v148; // rax
  int v149; // ecx
  _QWORD *v150; // rax
  __int64 v151; // rax
  unsigned __int16 v152; // r10
  int v153; // ecx
  __int64 v154; // rcx
  __int64 v155; // r10
  __int64 v156; // r8
  _QWORD *v157; // rdx
  unsigned __int64 v158; // r9
  int v159; // ecx
  __int64 v160; // rax
  __int64 v161; // rcx
  _BYTE *v162; // rbx
  unsigned int *v163; // r12
  _DWORD *v164; // r13
  unsigned int v165; // ecx
  unsigned int *v166; // rsi
  _DWORD *v167; // r9
  __int64 v168; // rdx
  unsigned int v169; // r8d
  unsigned int v170; // r13d
  unsigned int v171; // eax
  unsigned int v172; // r13d
  unsigned int v173; // eax
  __int64 v174; // rax
  unsigned int v175; // esi
  unsigned int v176; // r15d
  unsigned int v177; // esi
  unsigned int *v178; // rax
  unsigned int *v179; // r14
  ULONG_PTR v180; // r8
  unsigned int v181; // eax
  int v182; // ecx
  __int64 v183; // rcx
  __int64 v184; // r10
  __int64 v185; // r8
  _QWORD *v186; // rdx
  unsigned __int64 v187; // r9
  int v188; // ecx
  __int64 v189; // rax
  unsigned int *v190; // rax
  unsigned int v191; // eax
  int v192; // ecx
  __int64 v193; // rcx
  __int64 v194; // r10
  __int64 v195; // r8
  _QWORD *v196; // rdx
  unsigned __int64 v197; // r9
  int v198; // ecx
  __int64 v199; // rax
  int v200; // r9d
  __int64 v201; // r14
  int v202; // ecx
  __int64 v203; // rcx
  __int64 v204; // r10
  _QWORD *v205; // rdx
  unsigned __int64 v206; // r9
  __int64 v207; // rax
  int v208; // edx
  __int64 v209; // rcx
  __int64 v210; // rax
  int v211; // ecx
  __int64 v212; // rcx
  __int64 v213; // r10
  _QWORD *v214; // rdx
  unsigned __int64 v215; // r9
  __int64 v216; // rax
  int v217; // ecx
  int v218; // ecx
  __int64 v219; // rcx
  __int64 v220; // r11
  _QWORD *v221; // r9
  unsigned __int64 v222; // r10
  int v223; // ecx
  __int64 v224; // rax
  int v225; // edx
  __int64 v226; // rsi
  unsigned int v227; // ecx
  int v228; // ecx
  unsigned int v229; // eax
  __int64 v230; // r8
  int v231; // edx
  unsigned __int64 v232; // rcx
  int v233; // ebx
  _QWORD *v234; // rax
  __int64 v235; // rcx
  __int64 v236; // rdx
  int v237; // r8d
  unsigned __int64 v238; // rdx
  unsigned __int64 m; // rax
  char *v240; // rcx
  char *v241; // r12
  unsigned int *v242; // r14
  __int64 v243; // rdx
  unsigned int *v244; // rax
  __int64 v245; // rbx
  _DWORD *v246; // rax
  __int64 v247; // rcx
  _DWORD *v248; // r10
  int v249; // r15d
  int v250; // ecx
  __int16 *v251; // rax
  char *v252; // rdx
  char *v253; // r9
  __int64 v254; // r8
  char *v255; // r10
  int v256; // r11d
  char *v257; // rsi
  char v258; // cl
  char v259; // al
  int v260; // ecx
  __int16 v261; // cx
  unsigned int v262; // edx
  char *v263; // r8
  __int64 v264; // rcx
  __int64 v265; // rax
  char v266; // cl
  char v267; // al
  int v268; // r8d
  __int64 v269; // rdx
  char v270; // cl
  char v271; // al
  int v272; // r8d
  __int64 v273; // rdx
  char v274; // cl
  char v275; // al
  unsigned int v276; // esi
  __int64 v277; // rdx
  unsigned int *v278; // r11
  unsigned int v279; // esi
  unsigned int v280; // r13d
  unsigned int v281; // eax
  unsigned int v282; // ecx
  unsigned int v283; // r14d
  bool v284; // cf
  _QWORD *v285; // r11
  unsigned int v286; // r9d
  __int64 v287; // r10
  int v288; // edx
  char *v289; // r10
  unsigned __int64 v290; // r8
  _QWORD *v291; // r10
  int v292; // r15d
  const char *v293; // rax
  unsigned __int64 v294; // rcx
  unsigned __int64 v295; // r8
  unsigned int v296; // esi
  __int64 v297; // rax
  __int64 v298; // r8
  unsigned __int64 v299; // rcx
  unsigned int v300; // r9d
  unsigned __int64 v301; // rax
  __int64 v302; // rax
  unsigned __int64 ii; // rax
  unsigned int *v304; // rcx
  unsigned int *v305; // r14
  unsigned int v306; // r12d
  char *v307; // rax
  char v308; // r8
  __int64 v309; // rsi
  int v310; // ecx
  __int64 v311; // rcx
  __int64 v312; // r11
  __int64 v313; // r8
  _QWORD *v314; // r9
  unsigned __int64 v315; // r10
  __int64 v316; // rax
  int v317; // ecx
  _QWORD *v318; // r11
  unsigned int v319; // r9d
  unsigned int jj; // edx
  ULONG_PTR v321; // r8
  _QWORD *v322; // r10
  int v323; // r14d
  const char *v324; // rax
  unsigned __int64 v325; // rcx
  unsigned __int64 v326; // r8
  unsigned int v327; // esi
  __int64 v328; // rax
  __int64 v329; // r8
  unsigned __int128 v330; // rax
  unsigned int v331; // r9d
  unsigned __int64 v332; // rax
  __int64 v333; // rax
  unsigned __int64 kk; // rax
  _DWORD *v335; // r12
  ULONG_PTR v336; // r11
  unsigned int v337; // r9d
  ULONG_PTR v338; // r10
  _QWORD *v339; // r10
  int v340; // r14d
  const char *v341; // rax
  ULONG_PTR v342; // rcx
  unsigned int v343; // esi
  unsigned __int64 v344; // r8
  __int64 v345; // rax
  __int64 v346; // r8
  unsigned __int128 v347; // rax
  unsigned int v348; // r9d
  unsigned __int64 v349; // rax
  __int64 v350; // rax
  unsigned __int64 mm; // rax
  unsigned __int64 v352; // r8
  char *v353; // rax
  __int64 v354; // r15
  __int64 v355; // rax
  __int64 v356; // rcx
  __int64 v357; // rax
  __int64 v358; // rdi
  __int64 nn; // rbx
  __int64 v360; // rax
  __int64 v361; // rdx
  unsigned int v362; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v363; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v364; // [rsp+50h] [rbp-B0h] BYREF
  char *v365; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v366; // [rsp+60h] [rbp-A0h]
  _DWORD *n; // [rsp+68h] [rbp-98h]
  ULONG_PTR v368; // [rsp+70h] [rbp-90h]
  unsigned __int64 v369; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v370; // [rsp+80h] [rbp-80h]
  unsigned int *v371; // [rsp+88h] [rbp-78h]
  _DWORD *v372; // [rsp+90h] [rbp-70h]
  __int64 v373; // [rsp+98h] [rbp-68h]
  int v374; // [rsp+A0h] [rbp-60h]
  __int64 v375; // [rsp+A8h] [rbp-58h]
  unsigned int v376; // [rsp+B0h] [rbp-50h] BYREF
  char *v377; // [rsp+B8h] [rbp-48h]
  int v378; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v379[6]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v380; // [rsp+E0h] [rbp-20h]
  int v381; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v382[6]; // [rsp+F0h] [rbp-10h] BYREF
  char v383[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v384; // [rsp+128h] [rbp+28h]
  int v385; // [rsp+134h] [rbp+34h]
  char v386[8]; // [rsp+138h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+140h] [rbp+40h]
  unsigned int v388; // [rsp+14Ch] [rbp+4Ch]
  __int64 v392; // [rsp+1B8h] [rbp+B8h]
  unsigned int v393; // [rsp+1B8h] [rbp+B8h]
  unsigned __int16 v394; // [rsp+1B8h] [rbp+B8h]
  int v395; // [rsp+1B8h] [rbp+B8h]

  v3 = a2;
  v4 = a1;
  v363 = (_BYTE *)*a1;
  v5 = (*((__int64 (__fastcall **)(ULONG_PTR, char *))v363 + 66))(a2, v383);
  v392 = v5;
  v6 = 0LL;
  v380 = v384;
  if ( !v384 )
  {
    if ( (*((_DWORD *)v363 + 630) & 0x100000) == 0 )
      KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v3, 5uLL, 0LL);
    return 3221225595LL;
  }
  v8 = 4;
  v377 = 0LL;
  v9 = &v378;
  do
  {
    *(_BYTE *)v9 = 0;
    v9 = (int *)((char *)v9 + 1);
    --v8;
  }
  while ( v8 );
  v10 = v363;
  v11 = 0LL;
  v12 = *((_DWORD *)v363 + 523);
  if ( !v12 )
    goto LABEL_46;
  v13 = v385;
  v14 = v378;
  v15 = HIDWORD(v377);
  v16 = (int)v377;
  while ( 1 )
  {
    v17 = 0;
    v18 = v363;
    if ( *((_QWORD *)v363 + 344) )
      v18 = (_BYTE *)*((_QWORD *)v363 + 344);
    v6 = &v18[*((unsigned int *)v18 + 522)];
    if ( v16 && v15 <= (unsigned int)v11 )
    {
      v17 = v15;
      v6 = &v18[v14];
    }
    if ( v17 != (_DWORD)v11 )
    {
      v19 = (unsigned int)v11 - v17;
      v17 = v11;
      while ( 1 )
      {
        if ( *(_DWORD *)v6 == 1 )
        {
LABEL_31:
          v20 = 4 * (*((_DWORD *)v6 + 4) / 0xCu) + 48;
          goto LABEL_32;
        }
        if ( *(_DWORD *)v6 == 7 )
        {
          v20 = (unsigned int)(24 * (*((_DWORD *)v6 + 6) + 2));
          goto LABEL_32;
        }
        if ( *(_DWORD *)v6 == 8 )
          break;
        switch ( *(_DWORD *)v6 )
        {
          case 0xA:
            v20 = (unsigned int)(16 * (*((_DWORD *)v6 + 7) + 3));
            break;
          case 0x1C:
            v21 = *((unsigned __int16 *)v6 + 20);
LABEL_29:
            v20 = (v21 + 55) & 0xFFFFFFF8;
            break;
          case 0x1E:
            v20 = (((*((_DWORD *)v6 + 9) != 0 ? *((_DWORD *)v6 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                + 24 * (*((unsigned __int16 *)v6 + 20) + 2);
            break;
          case 0x21:
            v20 = 20
                * (unsigned int)(((*((_DWORD *)v6 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v6 + 10) + 4095) >> 12)
                + 48;
            break;
          case 0x2B:
            goto LABEL_31;
          default:
            v20 = 48LL;
            break;
        }
LABEL_32:
        v6 += v20;
        if ( !--v19 )
        {
          v3 = a2;
          v5 = v392;
          v13 = v385;
          goto LABEL_34;
        }
      }
      v21 = *((unsigned __int16 *)v6 + 16);
      goto LABEL_29;
    }
LABEL_34:
    v22 = *(_DWORD *)v6;
    v14 = (_DWORD)v6 - (_DWORD)v18;
    v16 = 1;
    v15 = v17;
    if ( (*(_DWORD *)v6 == 1 || v22 == 12 || v22 == 43) && *((_QWORD *)v6 + 1) == v5 && *((_DWORD *)v6 + 4) == v13 )
      break;
    if ( (unsigned int)(v22 - 33) <= 1 && *((_QWORD *)v6 + 4) == v380 )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v12 )
      goto LABEL_45;
  }
  if ( v6 )
    return 3221225742LL;
LABEL_45:
  v4 = a1;
LABEL_46:
  v23 = a3;
  v393 = a3;
  v24 = (*((__int64 (__fastcall **)(ULONG_PTR, char *, _BYTE *, __int64))v363 + 66))(v3, v386, v6, v11);
  v25 = BugCheckParameter2;
  v26 = 0LL;
  v27 = v388;
  v371 = (unsigned int *)v24;
  v366 = v388;
  v364 = v388;
  v368 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
  {
    if ( (*((_DWORD *)v363 + 630) & 0x100000) == 0 )
      KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v3, 5uLL, 0LL);
    v28 = -1073741701;
    goto LABEL_255;
  }
  v29 = 4;
  v377 = 0LL;
  v30 = &v378;
  v31 = 1LL;
  do
  {
    *(_BYTE *)v30 = 0;
    v30 = (int *)((char *)v30 + 1);
    --v29;
  }
  while ( v29 );
  v32 = *((_DWORD *)v10 + 523);
  v33 = 0LL;
  if ( v32 )
  {
    v34 = v378;
    LODWORD(v31) = HIDWORD(v377);
    v35 = (int)v377;
    while ( 1 )
    {
      v36 = 0;
      v37 = v10;
      if ( *((_QWORD *)v10 + 344) )
        v37 = (_BYTE *)*((_QWORD *)v10 + 344);
      v26 = (unsigned int **)&v37[*((unsigned int *)v37 + 522)];
      if ( v35 && (unsigned int)v31 <= (unsigned int)v33 )
      {
        v36 = v31;
        v26 = (unsigned int **)&v37[v34];
      }
      if ( v36 != (_DWORD)v33 )
        break;
LABEL_79:
      v41 = *(_DWORD *)v26;
      v34 = (_DWORD)v26 - (_DWORD)v37;
      v35 = 1;
      v31 = v36;
      if ( (*(_DWORD *)v26 == 1 || v41 == 12 || v41 == 43) && v26[1] == v371 && *((_DWORD *)v26 + 4) == v27
        || (unsigned int)(v41 - 33) <= 1 && v26[4] == (unsigned int *)v25 )
      {
        if ( !v26 )
        {
          v23 = a3;
          goto LABEL_91;
        }
LABEL_101:
        v44 = (__int64)v363;
LABEL_567:
        v52 = a1;
        *a1 = v44;
        goto LABEL_568;
      }
      v33 = (unsigned int)(v33 + 1);
      if ( (unsigned int)v33 >= v32 )
      {
        v23 = a3;
        goto LABEL_91;
      }
    }
    v38 = (unsigned int)v33 - v36;
    v36 = v33;
    while ( 2 )
    {
      if ( *(_DWORD *)v26 == 1 )
        goto LABEL_76;
      if ( *(_DWORD *)v26 != 7 )
      {
        switch ( *(_DWORD *)v26 )
        {
          case 8:
            v40 = *((unsigned __int16 *)v26 + 16);
            break;
          case 0xA:
            v39 = (unsigned int)(16 * (*((_DWORD *)v26 + 7) + 3));
            goto LABEL_77;
          case 0x1C:
            v40 = *((unsigned __int16 *)v26 + 20);
            break;
          default:
            switch ( *(_DWORD *)v26 )
            {
              case 0x1E:
                v39 = (((*((_DWORD *)v26 + 9) != 0 ? *((_DWORD *)v26 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                    + 24 * (*((unsigned __int16 *)v26 + 20) + 2);
                break;
              case 0x21:
                v39 = 20
                    * (unsigned int)((((_DWORD)v26[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v26 + 10) + 4095) >> 12)
                    + 48;
                break;
              case 0x2B:
LABEL_76:
                v39 = 4 * (*((_DWORD *)v26 + 4) / 0xCu) + 48;
                break;
              default:
                v39 = 48LL;
                break;
            }
LABEL_77:
            v26 = (unsigned int **)((char *)v26 + v39);
            if ( !--v38 )
            {
              v25 = v368;
              v27 = v366;
              goto LABEL_79;
            }
            continue;
        }
        v39 = (v40 + 55) & 0xFFFFFFF8;
        goto LABEL_77;
      }
      break;
    }
    v39 = (unsigned int)(24 * (*((_DWORD *)v26 + 6) + 2));
    goto LABEL_77;
  }
LABEL_91:
  if ( (a3 & 0x10) != 0 && (*((_DWORD *)v10 + 631) & 0x400) == 0 )
  {
    v23 = a3 & 0xFFFFFFEF;
    v393 = a3 & 0xFFFFFFEF;
  }
  if ( (v23 & 0x10) != 0 && !(unsigned int)sub_140C7F9D0(v10, v25, v26, v33) )
  {
    v23 &= ~0x10u;
    v393 = v23;
  }
  if ( (v23 & 2) != 0 )
  {
    (*((void (__fastcall **)(ULONG_PTR, __int64))v10 + 65))(v25, v31);
    LOBYTE(v42) = 1;
    v43 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, unsigned int *))v10 + 64))(v25, v42, 0LL, &v362);
    if ( !v43
      || v362 < 0x28
      || (*((unsigned int (__fastcall **)(ULONG_PTR, _BYTE *, __int64))v10 + 28))(
           v25 + *(unsigned int *)(v43 + 12),
           v10 + 2416,
           5LL) )
    {
      goto LABEL_101;
    }
  }
  v45 = (char **)*((_QWORD *)v10 + 165);
  v374 = v23 & 1;
  _disable();
  v46 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v10 + 203));
  _enable();
  (*((void (__fastcall **)(__int64))v10 + 47))(v46);
  LOBYTE(v47) = 1;
  (*((void (__fastcall **)(_QWORD, __int64))v10 + 31))(*((_QWORD *)v10 + 166), v47);
  v48 = *v45;
  if ( *v45 != (char *)v45 )
  {
    v49 = *((_QWORD *)v10 + 235);
    while ( 1 )
    {
      v50 = *(_QWORD *)&v48[*((_QWORD *)v10 + 236) - v49];
      if ( v25 >= v50 && v25 < v50 + *(unsigned int *)&v48[*((_QWORD *)v10 + 237) - v49] )
        break;
      v48 = *(char **)v48;
      if ( v48 == (char *)v45 )
        goto LABEL_109;
    }
    (*((void (__fastcall **)(char *, _QWORD))v10 + 29))(&v48[-v49], (unsigned int)!(v23 & 1) + 1);
  }
LABEL_109:
  (*((void (__fastcall **)(_QWORD))v10 + 37))(*((_QWORD *)v10 + 166));
  (*((void (**)(void))v10 + 48))();
  if ( (*((_DWORD *)v10 + 630) & 0x20000000) != 0 )
  {
    v52 = a1;
    v28 = sub_140C8713C(&v363, v25, v23);
    v44 = (__int64)v363;
    *a1 = (__int64)v363;
    if ( v28 < 0 )
      goto LABEL_371;
    goto LABEL_568;
  }
  v53 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, unsigned int *))*((_QWORD *)v10 + 64);
  v382[4] = 0LL;
  LOBYTE(v51) = 1;
  v379[4] = 0;
  v54 = v53(v25, v51, 0LL, &v364);
  if ( v54 )
  {
    v56 = v364;
  }
  else
  {
    v56 = 0;
    v364 = 0;
  }
  v382[1] = v54;
  v57 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v10 + 64);
  v379[1] = v56;
  LOBYTE(v55) = 1;
  v373 = v57(v25, v55, 12LL, &v364);
  if ( v373 )
  {
    v59 = v364;
  }
  else
  {
    v59 = 0;
    v364 = 0;
  }
  v362 = v59;
  v382[2] = v373;
  v379[2] = v59;
  LOBYTE(v58) = 1;
  v60 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))v10 + 64))(v25, v58, 10LL, &v364);
  if ( v60 )
  {
    v61 = v364;
  }
  else
  {
    v61 = 0;
    v364 = 0;
  }
  v382[3] = v60;
  v62 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v10 + 65);
  v379[3] = v61;
  v63 = v62(v25);
  if ( !v63 )
  {
    v64 = *((_DWORD *)v10 + 630);
    if ( (v64 & 0x100000) == 0 )
      KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v25, 7uLL, 0LL);
    if ( !*((_DWORD *)v10 + 582) )
    {
      *((_QWORD *)v10 + 293) = 0LL;
      *((_QWORD *)v10 + 294) = 271LL;
      *((_QWORD *)v10 + 292) = v10 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v10 + 295) = v25;
      *((_DWORD *)v10 + 582) = 1;
      if ( (v64 & 0x20000000) == 0 && (*((_DWORD *)v10 + 631) & 0x200000) != 0 && (v64 & 1) != 0 )
      {
        v65 = *((unsigned int *)v10 + 669);
        v66 = *((_QWORD *)v10 + 263);
        v67 = *((_QWORD *)v10 + 335);
        v68 = &v10[v65];
        v69 = (unsigned __int64)&v10[8 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v10 + 513) - v65) >> 3) + v65];
        while ( v68 != (_QWORD *)v69 )
        {
          *v68 ^= v67;
          v67 = ((v66 ^ *v68++) + __ROR8__(v67, v67 & 0x3F)) ^ 0xF05;
        }
        *((_DWORD *)v10 + 631) &= ~0x200000u;
        if ( v67 != *((_QWORD *)v10 + 336) )
        {
          v70 = *((_DWORD *)v10 + 513);
          v71 = *((_QWORD *)v10 + 177);
          *(_QWORD *)v71 = v10;
          *(_DWORD *)(v71 + 16) = v70;
          if ( !*((_DWORD *)v10 + 582) )
            *(_QWORD *)(*((_QWORD *)v10 + 177) + 24LL) = v67 ^ *((_QWORD *)v10 + 336);
          sub_140C7F03C(v10, 0LL, v67, 256LL);
        }
      }
    }
    v28 = -1073741701;
    goto LABEL_254;
  }
  v72 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v10 + 147))(v25, &v381);
  v73 = *((unsigned int *)v10 + 513);
  v74 = *((unsigned int *)v10 + 593);
  v382[5] = v72;
  v379[5] = v381;
  v379[0] = *(_DWORD *)(v63 + 84);
  v75 = v73 + 288;
  v382[0] = v25;
  if ( (unsigned int)(v73 + 288) <= *((_DWORD *)v10 + 665) )
  {
    v76 = v10;
    v375 = (__int64)v10;
    *((_DWORD *)v10 + 513) = v75;
    goto LABEL_152;
  }
  v375 = sub_140C7E7A8(v10, v75, v74);
  v76 = (_BYTE *)v375;
  if ( !v375 )
    goto LABEL_253;
  v77 = *((_DWORD *)v10 + 630);
  if ( (v77 & 2) == 0 )
  {
    v78 = *((_DWORD *)v10 + 513);
    v79 = *((_QWORD *)v10 + 253);
    v80 = (v77 & 0x10000000) != 0 ? *((_DWORD *)v10 + 593) : 0;
    if ( v78 >= 8 )
    {
      v81 = (unsigned __int64)v78 >> 3;
      do
      {
        *(_QWORD *)v10 = 0LL;
        v78 -= 8;
        v10 += 8;
        --v81;
      }
      while ( v81 );
    }
    for ( ; v78; --v78 )
      *v10++ = 0;
    v82 = *((_DWORD *)v76 + 593);
    *((_DWORD *)v76 + 593) = v80;
    if ( v80 == 3 )
    {
      (*((void (__fastcall **)(__int64))v76 + 110))(v79);
    }
    else if ( (*((_DWORD *)v76 + 630) & 0x8000000) != 0 || !v80 )
    {
      (*((void (__fastcall **)(__int64))v76 + 33))(v79);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v76 + 71))(v79 - 8, *(_QWORD *)(v79 - 8));
    }
    *((_DWORD *)v76 + 593) = v82;
  }
  *((_DWORD *)v76 + 630) &= ~2u;
LABEL_152:
  *((_DWORD *)v76 + 523) += 6;
  n = &v76[v73];
  if ( !v76 )
    goto LABEL_253;
  v83 = &v76[v73 + 16];
  v369 = 6LL;
  v84 = v379;
  v85 = v382;
  do
  {
    v86 = *v84;
    v87 = v83 - 4;
    v88 = (_QWORD *)*v85;
    v89 = 48;
    v90 = 6LL;
    do
    {
      *v87 = 0LL;
      v89 -= 8;
      ++v87;
      --v90;
    }
    while ( v90 );
    for ( ; v89; --v89 )
    {
      *(_BYTE *)v87 = 0;
      v87 = (_QWORD *)((char *)v87 + 1);
    }
    *(v83 - 4) = 0;
    *((_QWORD *)v83 - 1) = v88;
    v91 = v88;
    *v83 = v86;
    v92 = (const char *)v88;
    *((_DWORD *)v76 + 530) += v86;
    v93 = *((_DWORD *)v76 + 525);
    if ( v88 < (_QWORD *)((char *)v88 + v86) )
    {
      do
      {
        _mm_prefetch(v92, 0);
        v92 += 64;
      }
      while ( v92 < (const char *)v88 + v86 );
    }
    v94 = *((_QWORD *)v76 + 263);
    v95 = (unsigned int)v86 >> 7;
    if ( (unsigned int)v86 >> 7 )
    {
      do
      {
        v96 = 8LL;
        do
        {
          v97 = v91[1] ^ __ROL8__(*v91 ^ v94, v93);
          v91 += 2;
          v94 = __ROL8__(v97, v93);
          --v96;
        }
        while ( v96 );
        v98 = __ROL8__(*((_QWORD *)v76 + 263) ^ ((char *)v91 - (char *)v88), 17) ^ *((_QWORD *)v76 + 263) ^ ((char *)v91 - (char *)v88);
        v93 = ((unsigned __int8)((v98 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v98 ^ v93)) & 0x3F;
        if ( !v93 )
          LOBYTE(v93) = 1;
        --v95;
      }
      while ( v95 );
      v76 = (_BYTE *)v375;
    }
    v99 = v86 & 0x7F;
    if ( v99 >= 8 )
    {
      v100 = (unsigned __int64)(v86 & 0x7F) >> 3;
      do
      {
        v94 = __ROL8__(*v91++ ^ v94, v93);
        v99 -= 8;
        --v100;
      }
      while ( v100 );
    }
    for ( ; v99; --v99 )
    {
      v101 = *(unsigned __int8 *)v91;
      v91 = (_QWORD *)((char *)v91 + 1);
      v94 = __ROL8__(v101 ^ v94, v93);
    }
    for ( i = v94; ; v94 = (unsigned int)i ^ (unsigned int)v94 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    LODWORD(v94) = v94 & 0x7FFFFFFF;
    ++v84;
    v83[1] = v94;
    ++v85;
    *((_DWORD *)v76 + 530) += v86;
    v83 += 12;
    --v369;
  }
  while ( v369 );
  v103 = n;
  v104 = v368;
  *n = 44;
  *((_QWORD *)v103 + 3) = v104;
  if ( (*((_DWORD *)v76 + 630) & 0x8100000) == 0 && (*((_DWORD *)v76 + 631) & 0x8000) != 0 )
  {
    v103[8] |= 1u;
    if ( (unsigned int)sub_140C7F9D0(v76, v104, v94, v91) )
      v103[8] |= 4u;
  }
  v369 = (unsigned __int64)v76;
  v363 = v76;
  v28 = sub_140C7CE10((unsigned int)&v369, (_DWORD)v371, v366, v104, v393, (__int64)&v365, (__int64)&v376);
  if ( v28 < 0 )
    goto LABEL_370;
  v105 = (_BYTE *)v369;
  v106 = 48;
  v107 = v369 + (char *)v103 - v363;
  v108 = v376 - (_DWORD)v365;
  *((_QWORD *)&v111 + 1) = 6LL;
  v109 = (_QWORD *)(v104 + (unsigned int)v365);
  v110 = (_DWORD *)(v107 + 192);
  *(_QWORD *)&v111 = v107 + 192;
  do
  {
    *(_QWORD *)v111 = 0LL;
    v106 -= 8;
    *(_QWORD *)&v111 = v111 + 8;
    --*((_QWORD *)&v111 + 1);
  }
  while ( *((_QWORD *)&v111 + 1) );
  for ( ; v106; --v106 )
  {
    *(_BYTE *)v111 = 0;
    *(_QWORD *)&v111 = v111 + 1;
  }
  *v110 = 0;
  v112 = v109;
  *(_QWORD *)(v107 + 200) = v109;
  v113 = (const char *)v109;
  *(_DWORD *)(v107 + 208) = v108;
  *((_DWORD *)v105 + 530) += v108;
  v114 = *((_DWORD *)v105 + 525);
  v115 = (unsigned __int64)v109 + v108;
  if ( (unsigned __int64)v109 < v115 )
  {
    do
    {
      _mm_prefetch(v113, 0);
      v113 += 64;
    }
    while ( (unsigned __int64)v113 < v115 );
  }
  v116 = *((_QWORD *)v105 + 263);
  v117 = v108 >> 7;
  if ( v108 >> 7 )
  {
    do
    {
      v118 = 8LL;
      do
      {
        v119 = v112[1] ^ __ROL8__(*v112 ^ v116, v114);
        v112 += 2;
        v116 = __ROL8__(v119, v114);
        --v118;
      }
      while ( v118 );
      v111 = (__ROL8__(*((_QWORD *)v105 + 263) ^ ((char *)v112 - (char *)v109), 17) ^ *((_QWORD *)v105 + 263) ^ (unsigned __int64)((char *)v112 - (char *)v109))
           * (unsigned __int128)0x7010008004002001uLL;
      v114 = (BYTE8(v111) ^ (unsigned __int8)(v111 ^ v114)) & 0x3F;
      if ( !v114 )
        LOBYTE(v114) = 1;
      --v117;
    }
    while ( v117 );
    v105 = (_BYTE *)v369;
    v110 = (_DWORD *)(v107 + 192);
  }
  v120 = v108 & 0x7F;
  if ( (unsigned int)v120 >= 8 )
  {
    v121 = (unsigned __int64)(unsigned int)v120 >> 3;
    do
    {
      v116 = __ROL8__(*v112++ ^ v116, v114);
      v120 = (unsigned int)(v120 - 8);
      --v121;
    }
    while ( v121 );
  }
  if ( (_DWORD)v120 )
  {
    do
    {
      v122 = *(unsigned __int8 *)v112;
      v112 = (_QWORD *)((char *)v112 + 1);
      v116 = __ROL8__(v122 ^ v116, v114);
      v123 = (_DWORD)v120 == 1;
      v120 = (unsigned int)(v120 - 1);
    }
    while ( !v123 );
  }
  for ( j = v116 >> 31; j; j >>= 31 )
    v116 = (unsigned int)j ^ (unsigned int)v116;
  LODWORD(v116) = v116 & 0x7FFFFFFF;
  v125 = v107 + 96;
  v110[5] = v116;
  *(_DWORD *)(v107 + 240) = 48;
  v363 = v105;
  if ( v107 != -96LL )
  {
    LODWORD(v138) = v362;
    v44 = (__int64)v105;
    v137 = v373;
    *(_DWORD *)v125 = 13;
    goto LABEL_245;
  }
  v126 = *((unsigned int *)v105 + 513);
  v127 = v126 + 48;
  if ( (unsigned int)(v126 + 48) <= *((_DWORD *)v105 + 665) )
  {
    v44 = (__int64)v105;
    *((_DWORD *)v105 + 513) = v127;
    goto LABEL_220;
  }
  v44 = sub_140C7E7A8(v105, v127, *((unsigned int *)v105 + 593));
  if ( !v44 )
    goto LABEL_253;
  v128 = *((_DWORD *)v105 + 630);
  if ( (v128 & 2) == 0 )
  {
    v129 = *((_DWORD *)v105 + 513);
    v130 = *((_QWORD *)v105 + 253);
    v131 = (v128 & 0x10000000) != 0 ? *((_DWORD *)v105 + 593) : 0;
    if ( v129 >= 8 )
    {
      v132 = (unsigned __int64)v129 >> 3;
      do
      {
        *(_QWORD *)v105 = 0LL;
        v129 -= 8;
        v105 += 8;
        --v132;
      }
      while ( v132 );
    }
    for ( ; v129; --v129 )
      *v105++ = 0;
    v133 = *(_DWORD *)(v44 + 2372);
    *(_DWORD *)(v44 + 2372) = v131;
    if ( v131 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v44 + 880))(v130);
    }
    else if ( (*(_DWORD *)(v44 + 2520) & 0x8000000) != 0 || !v131 )
    {
      (*(void (__fastcall **)(__int64))(v44 + 264))(v130);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v44 + 568))(v130 - 8, *(_QWORD *)(v130 - 8));
    }
    *(_DWORD *)(v44 + 2372) = v133;
  }
  *(_DWORD *)(v44 + 2520) &= ~2u;
LABEL_220:
  ++*(_DWORD *)(v44 + 2092);
  v125 = v44 + v126;
  if ( !v44 )
    goto LABEL_253;
  v134 = 6LL;
  v135 = 48;
  v136 = (_QWORD *)v125;
  do
  {
    *v136 = 0LL;
    v135 -= 8;
    ++v136;
    --v134;
  }
  while ( v134 );
  for ( ; v135; --v135 )
  {
    *(_BYTE *)v136 = 0;
    v136 = (_QWORD *)((char *)v136 + 1);
  }
  v137 = v373;
  v138 = v362;
  v120 = v373;
  *(_DWORD *)v125 = 13;
  *(_QWORD *)(v125 + 8) = v120;
  *(_DWORD *)(v125 + 16) = v138;
  *(_DWORD *)(v44 + 2120) += v138;
  v139 = *(_DWORD *)(v44 + 2100);
  if ( v120 < v120 + v138 )
  {
    v140 = (const char *)v137;
    do
    {
      _mm_prefetch(v140, 0);
      v140 += 64;
    }
    while ( (unsigned __int64)v140 < v120 + v138 );
  }
  v116 = *(_QWORD *)(v44 + 2104);
  v141 = (unsigned int)v138 >> 7;
  if ( (unsigned int)v138 >> 7 )
  {
    do
    {
      v142 = 8LL;
      do
      {
        v143 = *(_QWORD *)(v120 + 8) ^ __ROL8__(*(_QWORD *)v120 ^ v116, v139);
        v120 += 16LL;
        v116 = __ROL8__(v143, v139);
        --v142;
      }
      while ( v142 );
      v144 = (__ROL8__(*(_QWORD *)(v44 + 2104) ^ (v120 - v137), 17) ^ *(_QWORD *)(v44 + 2104) ^ (v120 - v137))
           * (unsigned __int128)0x7010008004002001uLL;
      v139 = (BYTE8(v144) ^ (unsigned __int8)(v144 ^ v139)) & 0x3F;
      if ( !v139 )
        LOBYTE(v139) = 1;
      --v141;
    }
    while ( v141 );
    LODWORD(v138) = v362;
  }
  *((_QWORD *)&v111 + 1) = v138 & 0x7F;
  if ( DWORD2(v111) >= 8 )
  {
    *(_QWORD *)&v111 = (unsigned __int64)(v138 & 0x7F) >> 3;
    do
    {
      v116 = __ROL8__(*(_QWORD *)v120 ^ v116, v139);
      v120 += 8LL;
      *((_QWORD *)&v111 + 1) = (unsigned int)(DWORD2(v111) - 8);
      *(_QWORD *)&v111 = v111 - 1;
    }
    while ( (_QWORD)v111 );
  }
  if ( DWORD2(v111) )
  {
    do
    {
      *(_QWORD *)&v111 = *(unsigned __int8 *)v120++;
      v116 = __ROL8__(v111 ^ v116, v139);
      v123 = DWORD2(v111) == 1;
      *((_QWORD *)&v111 + 1) = (unsigned int)(DWORD2(v111) - 1);
    }
    while ( !v123 );
  }
  for ( k = v116; ; v116 = (unsigned int)k ^ (unsigned int)v116 )
  {
    k >>= 31;
    if ( !k )
      break;
  }
  LODWORD(v116) = v116 & 0x7FFFFFFF;
  *(_DWORD *)(v125 + 20) = v116;
  *(_DWORD *)(v44 + 2120) += v138;
LABEL_245:
  if ( (*(_DWORD *)(v44 + 2520) & 0x20000000) != 0 && (_DWORD)v138 )
    sub_140553D6C(v44, v137, v138, v125 + 28);
  *(_DWORD *)(v125 + 24) = 0;
  if ( v374 )
    *(_DWORD *)(v125 + 24) = 1;
  if ( !v44 )
  {
LABEL_253:
    v28 = -1073741670;
LABEL_254:
    v4 = a1;
LABEL_255:
    *v4 = (__int64)v363;
    return (unsigned int)v28;
  }
  v146 = v368;
  v363 = (_BYTE *)v44;
  v284 = *(_DWORD *)(v107 + 160) < 0x94u;
  *(_DWORD *)(v107 + 144) = 35;
  if ( !v284 )
  {
    v147 = *(_QWORD *)(v107 + 152);
    v148 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v44 + 520))(
             v146,
             *((_QWORD *)&v111 + 1),
             v116,
             v120);
    if ( !v148 )
      goto LABEL_253;
    v116 = v146 + *(unsigned int *)(v148 + 80);
    *((_QWORD *)&v111 + 1) = *(_DWORD *)(v107 + 184) | 2u;
    *(_DWORD *)(v107 + 184) = DWORD2(v111);
    v149 = DWORD2(v111);
    *(_QWORD *)&v111 = *(_QWORD *)(v147 + 112);
    if ( (unsigned __int64)v111 >= v146 && (unsigned __int64)v111 < v116 )
    {
      v149 = DWORD2(v111) | 4;
      *(_QWORD *)(v107 + 168) = *(_QWORD *)v111;
      *(_DWORD *)(v107 + 184) = DWORD2(v111) | 4;
    }
    v150 = *(_QWORD **)(v147 + 120);
    if ( (unsigned __int64)v150 >= v146 && (unsigned __int64)v150 < v116 )
    {
      *(_QWORD *)(v107 + 176) = *v150;
      *(_DWORD *)(v107 + 184) = v149 | 8;
    }
  }
  v363 = (_BYTE *)v44;
  if ( (*(_DWORD *)(v44 + 2520) & 0x200000) == 0 )
    goto LABEL_566;
  v151 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v44 + 520))(
           v146,
           *((_QWORD *)&v111 + 1),
           v116,
           v120);
  v375 = v151;
  if ( !v151 )
    goto LABEL_264;
  v152 = *(_WORD *)(v151 + 6);
  v394 = v152;
  v369 = v366 / 0xCuLL;
  if ( !v152 )
  {
    v153 = *(_DWORD *)(v44 + 2520);
    if ( (v153 & 0x100000) == 0 )
      KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v146, 0LL, 0LL);
    if ( *(_DWORD *)(v44 + 2328) )
      goto LABEL_264;
    *(_QWORD *)(v44 + 2344) = 0LL;
    *(_QWORD *)(v44 + 2352) = 271LL;
    *(_QWORD *)(v44 + 2336) = v44 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(v44 + 2360) = v146;
    *(_DWORD *)(v44 + 2328) = 1;
    if ( (v153 & 0x20000000) != 0 )
      goto LABEL_264;
    if ( (*(_DWORD *)(v44 + 2524) & 0x200000) == 0 )
      goto LABEL_264;
    if ( (v153 & 1) == 0 )
      goto LABEL_264;
    v154 = *(unsigned int *)(v44 + 2676);
    v155 = *(_QWORD *)(v44 + 2104);
    v156 = *(_QWORD *)(v44 + 2680);
    v157 = (_QWORD *)(v154 + v44);
    v158 = v154 + v44 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v44 + 2052) - v154) >> 3);
    while ( v157 != (_QWORD *)v158 )
    {
      *v157 ^= v156;
      v156 = ((v155 ^ *v157++) + __ROR8__(v156, v156 & 0x3F)) ^ 0xF05;
    }
    *(_DWORD *)(v44 + 2524) &= ~0x200000u;
    if ( v156 == *(_QWORD *)(v44 + 2688) )
      goto LABEL_264;
    v159 = *(_DWORD *)(v44 + 2052);
    v160 = *(_QWORD *)(v44 + 1416);
    *(_QWORD *)v160 = v44;
    *(_DWORD *)(v160 + 16) = v159;
    if ( !*(_DWORD *)(v44 + 2328) )
      *(_QWORD *)(*(_QWORD *)(v44 + 1416) + 24LL) = v156 ^ *(_QWORD *)(v44 + 2688);
    v161 = v44;
    goto LABEL_278;
  }
  v162 = (_BYTE *)v44;
  v163 = v371;
  v164 = (_DWORD *)(v151 + *(unsigned __int16 *)(v151 + 20) + 24LL);
  v372 = v164;
  v370 = &v371[3 * (v366 / 0xC)];
  v165 = 0;
  v362 = 0;
  v166 = v370;
  while ( 2 )
  {
    v167 = v372;
    v168 = 5LL * v165;
    v169 = v164[10 * v165 + 3];
    v170 = v164[10 * v165 + 4];
    v171 = v372[10 * v165 + 2];
    n = (_DWORD *)v168;
    if ( v170 <= v171 )
      v170 = v171;
    LODWORD(v365) = v169;
    v172 = v169 + v170;
    if ( v165 )
    {
      if ( v172 < v372[10 * v165 - 7] )
      {
        v202 = *(_DWORD *)(v44 + 2520);
        if ( (v202 & 0x100000) == 0 )
          KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v146, 1uLL, 0LL);
        if ( !*(_DWORD *)(v44 + 2328) )
        {
          *(_QWORD *)(v44 + 2344) = 0LL;
          *(_QWORD *)(v44 + 2336) = v44 - 0x5C5FC0A76E374B18LL;
          *(_DWORD *)(v44 + 2328) = 1;
          *(_QWORD *)(v44 + 2352) = 271LL;
          *(_QWORD *)(v44 + 2360) = v146;
          if ( (v202 & 0x20000000) == 0 && (*(_DWORD *)(v44 + 2524) & 0x200000) != 0 && (v202 & 1) != 0 )
          {
            v203 = *(unsigned int *)(v44 + 2676);
            v204 = *(_QWORD *)(v44 + 2104);
            v156 = *(_QWORD *)(v44 + 2680);
            v205 = (_QWORD *)(v203 + v44);
            v206 = v203 + v44 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v44 + 2052) - v203) >> 3);
            while ( v205 != (_QWORD *)v206 )
            {
              *v205 ^= v156;
              v156 = ((v204 ^ *v205++) + __ROR8__(v156, v156 & 0x3F)) ^ 0xF05;
            }
            *(_DWORD *)(v44 + 2524) &= ~0x200000u;
            if ( v156 != *(_QWORD *)(v44 + 2688) )
            {
              v207 = *(_QWORD *)(v44 + 1416);
              v208 = *(_DWORD *)(v44 + 2052);
              *(_QWORD *)v207 = v44;
              *(_DWORD *)(v207 + 16) = v208;
              goto LABEL_338;
            }
          }
        }
        goto LABEL_264;
      }
      v165 = v362;
    }
    if ( v163 == v166 )
    {
LABEL_326:
      v164 = v372;
      v362 = ++v165;
      if ( v165 < v152 )
        continue;
      v200 = v369;
      v201 = v375;
      if ( v163 != v370 )
      {
        v218 = *(_DWORD *)(v44 + 2520);
        if ( (v218 & 0x100000) == 0 )
          KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v146, 3uLL, 0LL);
        if ( *(_DWORD *)(v44 + 2328) )
          goto LABEL_264;
        *(_QWORD *)(v44 + 2344) = 0LL;
        *(_QWORD *)(v44 + 2336) = v44 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v44 + 2352) = 271LL;
        *(_QWORD *)(v44 + 2360) = v146;
        *(_DWORD *)(v44 + 2328) = 1;
        if ( (v218 & 0x20000000) != 0 )
          goto LABEL_264;
        if ( (*(_DWORD *)(v44 + 2524) & 0x200000) == 0 )
          goto LABEL_264;
        if ( (v218 & 1) == 0 )
          goto LABEL_264;
        v219 = *(unsigned int *)(v44 + 2676);
        v220 = *(_QWORD *)(v44 + 2104);
        v156 = *(_QWORD *)(v44 + 2680);
        v221 = (_QWORD *)(v219 + v44);
        v222 = v219 + v44 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v44 + 2052) - v219) >> 3);
        while ( v221 != (_QWORD *)v222 )
        {
          *v221 ^= v156;
          v156 = ((*v221++ ^ v220) + __ROR8__(v156, v156 & 0x3F)) ^ 0xF05;
        }
        *(_DWORD *)(v44 + 2524) &= ~0x200000u;
        if ( v156 == *(_QWORD *)(v44 + 2688) )
          goto LABEL_264;
        v223 = *(_DWORD *)(v44 + 2052);
        v224 = *(_QWORD *)(v44 + 1416);
        *(_QWORD *)v224 = v44;
        *(_DWORD *)(v224 + 16) = v223;
        v209 = *(_QWORD *)(v44 + 2688);
        if ( !*(_DWORD *)(v44 + 2328) )
        {
          v210 = *(_QWORD *)(v44 + 1416);
LABEL_340:
          *(_QWORD *)(v210 + 24) = v156 ^ v209;
        }
LABEL_341:
        v161 = v44;
LABEL_278:
        sub_140C7F03C(v161, 0LL, v156, 256LL);
        goto LABEL_264;
      }
      if ( (_DWORD)v369 )
        v225 = (v369 + 6) & 0xFFFFFFF8;
      else
        v225 = 0;
      v226 = *(unsigned int *)(v44 + 2052);
      v227 = v226 + v225 + 24 * (v152 + 2);
      if ( v227 <= *(_DWORD *)(v44 + 2660) )
      {
        v375 = v44;
        *(_DWORD *)(v44 + 2052) = v227;
      }
      else
      {
        v375 = sub_140C7E7A8(v44, v227, *(unsigned int *)(v44 + 2372));
        v44 = v375;
        if ( !v375 )
        {
          v28 = -1073741670;
          goto LABEL_370;
        }
        v228 = *((_DWORD *)v162 + 630);
        if ( (v228 & 2) == 0 )
        {
          v229 = *((_DWORD *)v162 + 513);
          v230 = *((_QWORD *)v162 + 253);
          v231 = (v228 & 0x10000000) != 0 ? *((_DWORD *)v162 + 593) : 0;
          if ( v229 >= 8 )
          {
            v232 = (unsigned __int64)v229 >> 3;
            do
            {
              *(_QWORD *)v162 = 0LL;
              v229 -= 8;
              v162 += 8;
              --v232;
            }
            while ( v232 );
          }
          for ( ; v229; --v229 )
            *v162++ = 0;
          v233 = *(_DWORD *)(v44 + 2372);
          *(_DWORD *)(v44 + 2372) = v231;
          if ( v231 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v44 + 880))(v230);
          }
          else if ( (*(_DWORD *)(v44 + 2520) & 0x8000000) != 0 || !v231 )
          {
            (*(void (__fastcall **)(__int64))(v44 + 264))(v230);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v44 + 568))(v230 - 8, *(_QWORD *)(v230 - 8));
          }
          *(_DWORD *)(v44 + 2372) = v233;
        }
        *(_DWORD *)(v44 + 2520) &= ~2u;
        v200 = v369;
        v152 = v394;
      }
      v234 = (_QWORD *)(v44 + v226);
      ++*(_DWORD *)(v44 + 2092);
      v235 = v44 + v226;
      v236 = 6LL;
      v237 = 48;
      do
      {
        *v234 = 0LL;
        v237 -= 8;
        ++v234;
        --v236;
      }
      while ( v236 );
      for ( ; v237; --v237 )
      {
        *(_BYTE *)v234 = 0;
        v234 = (_QWORD *)((char *)v234 + 1);
      }
      *(_QWORD *)(v235 + 8) = v371;
      *(_DWORD *)v235 = 30;
      *(_DWORD *)(v235 + 16) = 0;
      v238 = *(_QWORD *)(v44 + 2104);
      for ( m = v238; ; LODWORD(v238) = m ^ v238 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      *(_DWORD *)(v235 + 20) = v238 & 0x7FFFFFFF;
      *(_QWORD *)(v235 + 24) = v146;
      *(_DWORD *)(v235 + 32) = *(_DWORD *)(v201 + 80);
      *(_DWORD *)(v235 + 36) = v366;
      *(_WORD *)(v235 + 40) = v152;
      v240 = (char *)(v235 + 48);
      v365 = v240;
      if ( v200 )
        v241 = &v240[((unsigned int)(v200 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
      else
        v241 = v240;
      v242 = v371;
      LODWORD(v243) = 0;
      v373 = (__int64)v241;
      v377 = &v241[24 * v152];
      v244 = v371 + 3;
      if ( !v200 )
        v244 = v370;
      v369 = (unsigned __int64)v244;
      v245 = v44;
      if ( v152 )
      {
        v246 = v241 + 8;
        v243 = v152;
        do
        {
          v247 = 2LL;
          do
          {
            *((_QWORD *)v246 - 1) = 0LL;
            *v246 = 0x80000000;
            v246 += 3;
            --v247;
          }
          while ( v247 );
          --v243;
        }
        while ( v243 );
      }
      if ( v241 != &v241[24 * v152] )
      {
        v248 = (_DWORD *)(v44 + 2524);
        for ( n = (_DWORD *)(v44 + 2524); ; v248 = n )
        {
          v249 = v243;
          v395 = v243;
          if ( (v164[9] & 0x2000000) != 0 )
          {
LABEL_423:
            v249 = 1;
            v395 = 1;
            goto LABEL_417;
          }
          v250 = *v164;
          v251 = (__int16 *)(v164 + 1);
          if ( *v164 == 1414090313 )
            break;
          if ( v250 != 1162297680 )
            goto LABEL_410;
          v261 = *v251;
          if ( *v251 == 30839 || v261 == 29303 || v261 == 30583 )
            goto LABEL_423;
LABEL_412:
          v252 = *(char **)(v245 + 2384);
          v253 = *(char **)(v245 + 2392);
          v254 = (char *)v164 - v252;
          v255 = *(char **)(v245 + 2400);
          v256 = 7;
          v257 = *(char **)(v245 + 2408);
          while ( 1 )
          {
            v258 = v252[v254];
            v259 = *v252++;
            if ( v258 != v259 )
              break;
            if ( !--v256 )
            {
LABEL_415:
              v249 = 1;
              v395 = 1;
              goto LABEL_416;
            }
          }
          v262 = 8;
          v263 = (char *)v164;
          while ( 1 )
          {
            v264 = *(_QWORD *)v263;
            v263 += 8;
            v265 = *(_QWORD *)v253;
            v253 += 8;
            if ( v264 != v265 )
              break;
            v262 -= 8;
            if ( v262 < 8 )
            {
              if ( !v262 )
                goto LABEL_415;
              while ( 1 )
              {
                v266 = *v263++;
                v267 = *v253++;
                if ( v266 != v267 )
                  goto LABEL_431;
                if ( !--v262 )
                  goto LABEL_415;
              }
            }
          }
LABEL_431:
          v268 = 4;
          v269 = (char *)v164 - v255;
          while ( 1 )
          {
            v270 = v255[v269];
            v271 = *v255++;
            if ( v270 != v271 )
              break;
            if ( !--v268 )
              goto LABEL_415;
          }
          v272 = 6;
          v273 = (char *)v164 - v257;
          while ( 1 )
          {
            v274 = v257[v273];
            v275 = *v257++;
            if ( v274 != v275 )
              break;
            if ( !--v272 )
              goto LABEL_415;
          }
LABEL_416:
          v248 = n;
          LODWORD(v243) = 0;
LABEL_417:
          v260 = v164[9];
          if ( v260 >= 0 )
          {
            if ( !v249 )
              goto LABEL_445;
          }
          else
          {
            v249 = 1;
            v395 = 1;
          }
          if ( *v164 == 1414090313 && v164[1] == 1195525195 )
          {
            v248 = (_DWORD *)(v245 + 2524);
            v123 = (*(_DWORD *)(v245 + 2524) & 0x2000) == 0;
            n = (_DWORD *)(v245 + 2524);
            if ( !v123 )
              v249 = v243;
            v395 = v249;
          }
LABEL_445:
          if ( (*v248 & 0x4000) != 0
            && (v260 & 0x20000000) != 0
            && (v368 == *(_QWORD *)(v245 + 1504) || v368 == *(_QWORD *)(v245 + 1512)) )
          {
            v249 = 1;
            v395 = 1;
          }
          v276 = v164[4];
          v277 = (unsigned int)v164[3];
          v278 = v370;
          if ( v276 <= v164[2] )
            v276 = v164[2];
          v279 = v277 + v276;
          v376 = v164[3];
          v366 = v279;
          v280 = v277;
          if ( v242 == v370 )
          {
            v283 = 0;
            v284 = (_DWORD)v277 != 0;
LABEL_483:
            if ( v284 )
              goto LABEL_533;
LABEL_479:
            if ( v283 > v279 )
              goto LABEL_533;
            v304 = v371;
            if ( v371 == v278 )
              goto LABEL_533;
            goto LABEL_486;
          }
          v281 = *v242;
          v282 = v242[1];
          v283 = v282;
          v284 = v281 < (unsigned int)v277;
          if ( v281 <= (unsigned int)v277 )
            goto LABEL_483;
          if ( v282 > v279 )
            goto LABEL_479;
          if ( !v249 )
          {
            v285 = (_QWORD *)(v368 + v277);
            *(_DWORD *)v241 = v277;
            *((_DWORD *)v241 + 1) = v281;
            v286 = v281 - v277;
            v280 = v281;
            v287 = v281 - (unsigned int)v277;
            v288 = 0;
            v289 = (char *)v285 + v287;
            v374 = v286;
            v283 = v282;
            while ( 1 )
            {
              v290 = v382[v288];
              if ( (unsigned __int64)v285 < v290 + (unsigned int)v379[v288] && (unsigned __int64)v289 > v290 )
                break;
              if ( (unsigned int)++v288 >= 6 )
              {
                *(_DWORD *)(v245 + 2120) += v286;
                v291 = v285;
                v292 = *(_DWORD *)(v245 + 2100);
                v293 = (const char *)v285;
                v294 = (unsigned __int64)v285 + v286;
                if ( (unsigned __int64)v285 < v294 )
                {
                  do
                  {
                    _mm_prefetch(v293, 0);
                    v293 += 64;
                  }
                  while ( (unsigned __int64)v293 < v294 );
                }
                v295 = *(_QWORD *)(v245 + 2104);
                v296 = v286 >> 7;
                if ( v286 >> 7 )
                {
                  do
                  {
                    v297 = 8LL;
                    do
                    {
                      v298 = v291[1] ^ __ROL8__(*v291 ^ v295, v292);
                      v291 += 2;
                      v295 = __ROL8__(v298, v292);
                      --v297;
                    }
                    while ( v297 );
                    v299 = __ROL8__(*(_QWORD *)(v245 + 2104) ^ ((char *)v291 - (char *)v285), 17) ^ *(_QWORD *)(v245 + 2104) ^ ((char *)v291 - (char *)v285);
                    v292 = ((unsigned __int8)(v299 ^ ((v299 * (unsigned __int128)0x7010008004002001uLL) >> 64)) ^ (unsigned __int8)v292) & 0x3F;
                    if ( !v292 )
                      LOBYTE(v292) = 1;
                    --v296;
                  }
                  while ( v296 );
                  v44 = v375;
                  LOBYTE(v286) = v374;
                }
                v300 = v286 & 0x7F;
                if ( v300 >= 8 )
                {
                  v301 = (unsigned __int64)v300 >> 3;
                  do
                  {
                    v295 = __ROL8__(*v291++ ^ v295, v292);
                    v300 -= 8;
                    --v301;
                  }
                  while ( v301 );
                }
                for ( ; v300; --v300 )
                {
                  v302 = *(unsigned __int8 *)v291;
                  v291 = (_QWORD *)((char *)v291 + 1);
                  v295 = __ROL8__(v302 ^ v295, v292);
                }
                for ( ii = v295; ; LODWORD(v295) = ii ^ v295 )
                {
                  ii >>= 31;
                  if ( !ii )
                    break;
                }
                v249 = v395;
                v279 = v366;
                *(_DWORD *)(v373 + 8) = v295 & 0x7FFFFFFF;
                break;
              }
            }
            v278 = v370;
            v248 = n;
            goto LABEL_479;
          }
          v304 = v371;
LABEL_486:
          v305 = (unsigned int *)v369;
          if ( (unsigned int *)v369 != v278 )
          {
            v306 = *(_DWORD *)(v369 + 4);
            v362 = v306;
            if ( v306 <= v279 )
            {
              v307 = v365;
              do
              {
                if ( v305 == v278 )
                  break;
                if ( v249 )
                {
                  v308 = 0x80;
                }
                else
                {
                  v309 = v304[1];
                  v280 = *v305;
                  if ( *v305 < (unsigned int)v309 )
                  {
                    v310 = *(_DWORD *)(v245 + 2520);
                    if ( (v310 & 0x100000) == 0 )
                      KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v368, 6uLL, 0LL);
                    if ( !*(_DWORD *)(v245 + 2328) )
                    {
                      *(_QWORD *)(v245 + 2360) = v368;
                      *(_QWORD *)(v245 + 2336) = v245 - 0x5C5FC0A76E374B18LL;
                      *(_DWORD *)(v245 + 2328) = 1;
                      *(_QWORD *)(v245 + 2344) = 0LL;
                      *(_QWORD *)(v245 + 2352) = 271LL;
                      if ( (v310 & 0x20000000) == 0 && (*v248 & 0x200000) != 0 && (v310 & 1) != 0 )
                      {
                        v311 = *(unsigned int *)(v245 + 2676);
                        v312 = *(_QWORD *)(v245 + 2104);
                        v313 = *(_QWORD *)(v245 + 2680);
                        v314 = (_QWORD *)(v311 + v245);
                        v315 = v311
                             + v245
                             + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v245 + 2052) - v311) >> 3);
                        while ( v314 != (_QWORD *)v315 )
                        {
                          *v314 ^= v313;
                          v313 = ((*v314++ ^ v312) + __ROR8__(v313, v313 & 0x3F)) ^ 0xF05;
                        }
                        *n &= ~0x200000u;
                        if ( v313 != *(_QWORD *)(v245 + 2688) )
                        {
                          v316 = *(_QWORD *)(v245 + 1416);
                          v317 = *(_DWORD *)(v245 + 2052);
                          *(_QWORD *)v316 = v245;
                          *(_DWORD *)(v316 + 16) = v317;
                          if ( !*(_DWORD *)(v245 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v245 + 1416) + 24LL) = v313 ^ *(_QWORD *)(v245 + 2688);
                          sub_140C7F03C(v245, 0LL, v313, 256LL);
                        }
                      }
                    }
                  }
                  v318 = (_QWORD *)(v368 + v309);
                  v319 = v280 - v309;
                  for ( jj = 0; jj < 6; ++jj )
                  {
                    v321 = v382[jj];
                    if ( (unsigned __int64)v318 < v321 + (unsigned int)v379[jj]
                      && v368 + v309 + v280 - (unsigned int)v309 > v321 )
                    {
                      goto LABEL_528;
                    }
                  }
                  if ( v319 < 4 )
                  {
LABEL_528:
                    v308 = 0x80;
                    goto LABEL_529;
                  }
                  *(_DWORD *)(v245 + 2120) += v319;
                  v322 = v318;
                  v323 = *(_DWORD *)(v245 + 2100);
                  v324 = (const char *)v318;
                  v325 = (unsigned __int64)v318 + v319;
                  if ( (unsigned __int64)v318 < v325 )
                  {
                    do
                    {
                      _mm_prefetch(v324, 0);
                      v324 += 64;
                    }
                    while ( (unsigned __int64)v324 < v325 );
                  }
                  v326 = *(_QWORD *)(v245 + 2104);
                  v327 = v319 >> 7;
                  if ( v319 >> 7 )
                  {
                    do
                    {
                      v328 = 8LL;
                      do
                      {
                        v329 = v322[1] ^ __ROL8__(*v322 ^ v326, v323);
                        v322 += 2;
                        v326 = __ROL8__(v329, v323);
                        --v328;
                      }
                      while ( v328 );
                      v330 = (__ROL8__(*(_QWORD *)(v245 + 2104) ^ ((char *)v322 - (char *)v318), 17) ^ *(_QWORD *)(v245 + 2104) ^ (unsigned __int64)((char *)v322 - (char *)v318))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v323 = (BYTE8(v330) ^ (unsigned __int8)(v330 ^ v323)) & 0x3F;
                      if ( !v323 )
                        LOBYTE(v323) = 1;
                      --v327;
                    }
                    while ( v327 );
                    v44 = v375;
                    v306 = v362;
                  }
                  v331 = v319 & 0x7F;
                  if ( v331 >= 8 )
                  {
                    v332 = (unsigned __int64)v331 >> 3;
                    do
                    {
                      v326 = __ROL8__(*v322++ ^ v326, v323);
                      v331 -= 8;
                      --v332;
                    }
                    while ( v332 );
                  }
                  for ( ; v331; --v331 )
                  {
                    v333 = *(unsigned __int8 *)v322;
                    v322 = (_QWORD *)((char *)v322 + 1);
                    v326 = __ROL8__(v333 ^ v326, v323);
                  }
                  for ( kk = v326; ; LOBYTE(v326) = kk ^ v326 )
                  {
                    kk >>= 7;
                    if ( !kk )
                      break;
                  }
                  v249 = v395;
                  v308 = v326 & 0x7F;
                  v305 = (unsigned int *)v369;
LABEL_529:
                  v307 = v365;
                  v304 = v371;
                  v278 = v370;
                  v279 = v366;
                }
                *v307 = v308;
                v304 += 3;
                v305 += 3;
                v307 = v365 + 1;
                v371 = v304;
                ++v365;
                v369 = (unsigned __int64)v305;
                if ( v305 != v278 )
                {
                  v306 = v305[1];
                  v362 = v306;
                }
                v248 = n;
              }
              while ( v306 <= v279 );
            }
          }
LABEL_533:
          v335 = (_DWORD *)v373;
          LODWORD(v243) = 0;
          if ( !v249 && v280 != v279 )
          {
            v336 = v368 + v280;
            v337 = v279 - v280;
            *(_DWORD *)(v373 + 12) = v280;
            v335[4] = v279;
            do
            {
              v338 = v382[(unsigned int)v243];
              if ( v336 < v338 + (unsigned int)v379[(unsigned int)v243] && v336 + v279 - v280 > v338 )
              {
                LODWORD(v243) = 0;
                goto LABEL_558;
              }
              LODWORD(v243) = v243 + 1;
            }
            while ( (unsigned int)v243 < 6 );
            *(_DWORD *)(v245 + 2120) += v337;
            v339 = (_QWORD *)v336;
            v340 = *(_DWORD *)(v245 + 2100);
            v341 = (const char *)v336;
            v342 = v336 + v337;
            if ( v336 < v342 )
            {
              do
              {
                _mm_prefetch(v341, 0);
                v341 += 64;
              }
              while ( (unsigned __int64)v341 < v342 );
            }
            LODWORD(v243) = 0;
            v343 = v337 >> 7;
            v344 = *(_QWORD *)(v245 + 2104);
            if ( v337 >> 7 )
            {
              do
              {
                v345 = 8LL;
                do
                {
                  v346 = v339[1] ^ __ROL8__(*v339 ^ v344, v340);
                  v339 += 2;
                  v344 = __ROL8__(v346, v340);
                  --v345;
                }
                while ( v345 );
                v347 = (__ROL8__(*(_QWORD *)(v245 + 2104) ^ ((unsigned __int64)v339 - v336), 17) ^ *(_QWORD *)(v245 + 2104) ^ ((unsigned __int64)v339 - v336))
                     * (unsigned __int128)0x7010008004002001uLL;
                v340 = (BYTE8(v347) ^ (unsigned __int8)(v347 ^ v340)) & 0x3F;
                if ( !v340 )
                  LOBYTE(v340) = 1;
                --v343;
              }
              while ( v343 );
              v335 = (_DWORD *)v373;
              LODWORD(v243) = 0;
            }
            v348 = v337 & 0x7F;
            if ( v348 >= 8 )
            {
              v349 = (unsigned __int64)v348 >> 3;
              do
              {
                v344 = __ROL8__(*v339++ ^ v344, v340);
                v348 -= 8;
                --v349;
              }
              while ( v349 );
            }
            for ( ; v348; --v348 )
            {
              v350 = *(unsigned __int8 *)v339;
              v339 = (_QWORD *)((char *)v339 + 1);
              v344 = __ROL8__(v350 ^ v344, v340);
            }
            for ( mm = v344; ; LODWORD(v344) = mm ^ v344 )
            {
              mm >>= 31;
              if ( !mm )
                break;
            }
            v279 = v366;
            v335[5] = v344 & 0x7FFFFFFF;
          }
LABEL_558:
          v242 = v371;
          if ( v371 != v370 && *v371 >= v376 && v371[1] <= v279 )
          {
            v352 = v369;
            if ( (unsigned int *)v369 != v370 )
            {
              v353 = v365;
              *v365 = 0x80;
              v365 = v353 + 1;
              v369 = v352 + 12;
            }
            v242 += 3;
            v371 = v242;
          }
          v241 = (char *)(v335 + 6);
          v164 = v372 + 10;
          v373 = (__int64)v241;
          v372 += 10;
          if ( v241 == v377 )
            goto LABEL_566;
        }
        if ( *(_DWORD *)v251 == 1195525195 )
          goto LABEL_423;
LABEL_410:
        if ( v250 == 1095914053 && *v251 == 16724 )
          goto LABEL_423;
        goto LABEL_412;
      }
LABEL_566:
      v363 = (_BYTE *)v44;
      goto LABEL_567;
    }
    break;
  }
  while ( 2 )
  {
    v173 = v163[1];
    if ( *v163 >= v172 || v173 <= v169 )
    {
LABEL_325:
      v165 = v362;
      v152 = v394;
      v166 = v370;
      goto LABEL_326;
    }
    if ( *v163 >= v169 && v173 <= v172 )
    {
      v174 = v163[2];
      if ( (v174 & 1) != 0 || (*(_BYTE *)(v174 + v146) & 0x20) != 0 )
      {
        v175 = v167[2 * v168 + 4];
        v176 = v167[2 * v168 + 3];
        if ( v175 <= v167[2 * v168 + 2] )
          v175 = v167[2 * v168 + 2];
        v177 = v176 + v175;
        v178 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR))(v44 + 1056))(v163, v368);
        v179 = v178;
        if ( *v178 < v176 || v178[1] > v177 )
        {
          v180 = v368;
          v181 = ((_DWORD)v178 - v368) | 0x80000000;
          v182 = *(_DWORD *)(v44 + 2520);
          if ( (v182 & 0x100000) == 0 )
            KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v368, v181, 0LL);
          if ( !*(_DWORD *)(v44 + 2328) )
          {
            *(_QWORD *)(v44 + 2344) = 0LL;
            *(_QWORD *)(v44 + 2352) = 271LL;
            *(_QWORD *)(v44 + 2336) = v44 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v44 + 2360) = v180;
            *(_DWORD *)(v44 + 2328) = 1;
            if ( (v182 & 0x20000000) == 0 && (*(_DWORD *)(v44 + 2524) & 0x200000) != 0 && (v182 & 1) != 0 )
            {
              v183 = *(unsigned int *)(v44 + 2676);
              v184 = *(_QWORD *)(v44 + 2104);
              v185 = *(_QWORD *)(v44 + 2680);
              v186 = (_QWORD *)(v183 + v44);
              v187 = v183 + v44 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v44 + 2052) - v183) >> 3);
              while ( v186 != (_QWORD *)v187 )
              {
                *v186 ^= v185;
                v185 = ((v184 ^ *v186++) + __ROR8__(v185, v185 & 0x3F)) ^ 0xF05;
              }
              *(_DWORD *)(v44 + 2524) &= ~0x200000u;
              if ( v185 != *(_QWORD *)(v44 + 2688) )
              {
                v188 = *(_DWORD *)(v44 + 2052);
                v189 = *(_QWORD *)(v44 + 1416);
                *(_QWORD *)v189 = v44;
                *(_DWORD *)(v189 + 16) = v188;
                if ( !*(_DWORD *)(v44 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v44 + 1416) + 24LL) = v185 ^ *(_QWORD *)(v44 + 2688);
                sub_140C7F03C(v44, 0LL, v185, 256LL);
              }
            }
          }
        }
        v190 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))(v44 + 1064))(
                                 v179,
                                 v368,
                                 v368 + *v179);
        if ( *v190 >= v176 && v190[1] <= v177 )
        {
          v146 = v368;
        }
        else
        {
          v146 = v368;
          v191 = ((_DWORD)v190 - v368) | 0x80000000;
          v192 = *(_DWORD *)(v44 + 2520);
          if ( (v192 & 0x100000) == 0 )
            KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v368, v191, 0LL);
          if ( !*(_DWORD *)(v44 + 2328) )
          {
            *(_QWORD *)(v44 + 2344) = 0LL;
            *(_QWORD *)(v44 + 2336) = v44 - 0x5C5FC0A76E374B18LL;
            *(_DWORD *)(v44 + 2328) = 1;
            *(_QWORD *)(v44 + 2352) = 271LL;
            *(_QWORD *)(v44 + 2360) = v146;
            if ( (v192 & 0x20000000) == 0 && (*(_DWORD *)(v44 + 2524) & 0x200000) != 0 && (v192 & 1) != 0 )
            {
              v193 = *(unsigned int *)(v44 + 2676);
              v194 = *(_QWORD *)(v44 + 2104);
              v195 = *(_QWORD *)(v44 + 2680);
              v196 = (_QWORD *)(v193 + v44);
              v197 = v193 + v44 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v44 + 2052) - v193) >> 3);
              while ( v196 != (_QWORD *)v197 )
              {
                *v196 ^= v195;
                v195 = ((v194 ^ *v196++) + __ROR8__(v195, v195 & 0x3F)) ^ 0xF05;
              }
              *(_DWORD *)(v44 + 2524) &= ~0x200000u;
              if ( v195 != *(_QWORD *)(v44 + 2688) )
              {
                v198 = *(_DWORD *)(v44 + 2052);
                v199 = *(_QWORD *)(v44 + 1416);
                *(_QWORD *)v199 = v44;
                *(_DWORD *)(v199 + 16) = v198;
                if ( !*(_DWORD *)(v44 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v44 + 1416) + 24LL) = v195 ^ *(_QWORD *)(v44 + 2688);
                sub_140C7F03C(v44, 0LL, v195, 256LL);
              }
            }
          }
        }
        v168 = (__int64)n;
        v169 = (unsigned int)v365;
        v167 = v372;
      }
      v163 += 3;
      if ( v163 == v370 )
        goto LABEL_325;
      continue;
    }
    break;
  }
  v211 = *(_DWORD *)(v44 + 2520);
  if ( (v211 & 0x100000) == 0 )
    KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, v146, 2uLL, 0LL);
  if ( !*(_DWORD *)(v44 + 2328) )
  {
    *(_QWORD *)(v44 + 2344) = 0LL;
    *(_QWORD *)(v44 + 2336) = v44 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(v44 + 2328) = 1;
    *(_QWORD *)(v44 + 2352) = 271LL;
    *(_QWORD *)(v44 + 2360) = v146;
    if ( (v211 & 0x20000000) == 0 && (*(_DWORD *)(v44 + 2524) & 0x200000) != 0 && (v211 & 1) != 0 )
    {
      v212 = *(unsigned int *)(v44 + 2676);
      v213 = *(_QWORD *)(v44 + 2104);
      v156 = *(_QWORD *)(v44 + 2680);
      v214 = (_QWORD *)(v212 + v44);
      v215 = v212 + v44 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v44 + 2052) - v212) >> 3);
      while ( v214 != (_QWORD *)v215 )
      {
        *v214 ^= v156;
        v156 = ((v213 ^ *v214++) + __ROR8__(v156, v156 & 0x3F)) ^ 0xF05;
      }
      *(_DWORD *)(v44 + 2524) &= ~0x200000u;
      if ( v156 != *(_QWORD *)(v44 + 2688) )
      {
        v216 = *(_QWORD *)(v44 + 1416);
        v217 = *(_DWORD *)(v44 + 2052);
        *(_QWORD *)v216 = v44;
        *(_DWORD *)(v216 + 16) = v217;
LABEL_338:
        v209 = *(_QWORD *)(v44 + 2688);
        if ( !*(_DWORD *)(v44 + 2328) )
        {
          v210 = *(_QWORD *)(v44 + 1416);
          goto LABEL_340;
        }
        goto LABEL_341;
      }
    }
  }
LABEL_264:
  v28 = -1073741701;
LABEL_370:
  v52 = a1;
  v44 = (__int64)v363;
  *a1 = (__int64)v363;
LABEL_371:
  if ( v28 != -1073741554 )
    return (unsigned int)v28;
LABEL_568:
  if ( (a3 & 0x80000004) != 0x80000004 )
  {
    v354 = v380;
    v355 = (*(__int64 (__fastcall **)(__int64))(v44 + 520))(v380);
    v356 = *(unsigned int *)(v355 + 148);
    if ( (unsigned int)v356 >= 0x14 )
    {
      v357 = *(unsigned int *)(v355 + 144);
      v358 = v354 + v357 + v356;
      for ( nn = v357 + v354; nn != v358; nn += 20LL )
      {
        if ( !*(_DWORD *)(nn + 12) )
          break;
        v360 = *(unsigned int *)(nn + 16);
        if ( !(_DWORD)v360 )
          break;
        v361 = *(_QWORD *)(v360 + v354);
        if ( v361 )
        {
          result = sub_140C7A754(&v363, v361, a3 & 0x7FFFFFEF | 0x80000000);
          *v52 = (__int64)v363;
          if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741554 )
            return result;
        }
      }
    }
  }
  return 0LL;
}
