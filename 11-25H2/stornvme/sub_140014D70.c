/*
 * XREFs of sub_140014D70 @ 0x140014D70
 * Callers:
 *     sub_140011F70 @ 0x140011F70 (sub_140011F70.c)
 *     sub_1400130E0 @ 0x1400130E0 (sub_1400130E0.c)
 *     sub_1400146F0 @ 0x1400146F0 (sub_1400146F0.c)
 *     sub_140014B80 @ 0x140014B80 (sub_140014B80.c)
 *     sub_14002EB94 @ 0x14002EB94 (sub_14002EB94.c)
 * Callees:
 *     sub_14000B210 @ 0x14000B210 (sub_14000B210.c)
 *     sub_14000BEE0 @ 0x14000BEE0 (sub_14000BEE0.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140014D70(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v8; // r13
  int v9; // r12d
  unsigned __int8 v10; // al
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int16 v13; // r11
  _WORD *v14; // rdi
  unsigned __int16 v15; // r8
  unsigned __int16 *v16; // r10
  __int64 *v17; // rbx
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // edx
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // dx
  unsigned __int16 v25; // dx
  __int64 v26; // rbx
  unsigned __int16 v27; // cx
  int v28; // r13d
  bool v29; // zf
  __int64 v30; // r12
  __int64 v31; // rcx
  unsigned int v32; // edi
  __int64 v33; // rcx
  int v34; // r9d
  _OWORD *v35; // r8
  int v36; // eax
  int v37; // edx
  __int64 v38; // rcx
  int v39; // ebx
  _OWORD *v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // r11d
  __int64 v43; // r10
  unsigned int v44; // eax
  int v45; // eax
  unsigned int v46; // esi
  unsigned int v47; // ecx
  __int64 v48; // r9
  __int64 *v49; // r13
  __m128i *v50; // r12
  unsigned int v51; // esi
  __int64 v52; // rcx
  int v53; // edi
  __int64 v54; // r9
  __int64 v55; // rcx
  int v56; // edx
  unsigned int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  __m128i **v60; // rax
  __int64 v61; // rax
  unsigned int v62; // r9d
  unsigned int v63; // edx
  __int64 v64; // rsi
  unsigned int v65; // r8d
  __int64 v66; // r14
  unsigned int v67; // edi
  __int64 *v68; // r10
  unsigned int v69; // edi
  __int64 v70; // r10
  __m128i *v71; // r8
  unsigned int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // rax
  __m128i v75; // xmm0
  __int64 v76; // rax
  __int64 PhysicalAddress; // rax
  _OWORD *v78; // r9
  __int64 *v79; // r13
  __m128i *v80; // r12
  int v81; // esi
  unsigned int v82; // edi
  __int64 v83; // rcx
  __int64 v84; // r9
  __int64 v85; // rcx
  int v86; // edx
  unsigned int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // r8
  __m128i **v90; // rax
  __int64 v91; // rax
  unsigned int v92; // r8d
  unsigned int v93; // edx
  __int64 v94; // rsi
  unsigned int v95; // r9d
  __int64 v96; // r14
  __int64 *v97; // r10
  unsigned int v98; // edi
  unsigned int v99; // r10d
  __m128i *v100; // r8
  unsigned int v101; // r9d
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rax
  __m128i v105; // xmm0
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned __int16 v108; // di
  _OWORD *v109; // r12
  __int64 v110; // r13
  __int64 v111; // r8
  __int64 v112; // r9
  unsigned int v113; // ecx
  unsigned int v114; // edx
  unsigned int v115; // ecx
  unsigned int v116; // r10d
  __int64 v117; // rax
  __int64 v118; // r8
  int v119; // ecx
  unsigned __int16 v120; // r8
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int16 v123; // si
  __int64 v124; // rax
  unsigned __int16 v125; // bx
  _WORD *v126; // rdi
  __int64 v127; // r9
  unsigned __int16 *v128; // r11
  __int64 *v129; // r10
  unsigned __int16 *v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rsi
  int v134; // edx
  unsigned __int16 v135; // cx
  unsigned __int16 v136; // dx
  unsigned __int16 v137; // dx
  __int64 v138; // r10
  unsigned __int16 v139; // cx
  __int16 v140; // bx
  unsigned int v141; // r8d
  bool v142; // zf
  __int64 v143; // rdx
  int v144; // ecx
  int v145; // ebx
  _OWORD *v146; // rcx
  unsigned int v147; // ecx
  unsigned int v148; // r13d
  __int64 v149; // r10
  __int64 *v150; // r11
  unsigned int v151; // eax
  __int64 v152; // r9
  __int64 v153; // rsi
  unsigned __int64 v154; // r9
  int v155; // ecx
  __m128i *v156; // r12
  unsigned int v157; // edi
  __int64 v158; // rcx
  __int64 v159; // r9
  __int64 v160; // rcx
  int v161; // edx
  unsigned int v162; // eax
  __int64 v163; // rcx
  __int64 v164; // r8
  _QWORD **v165; // rax
  unsigned int v166; // edx
  unsigned int v167; // r10d
  __int64 v168; // r14
  unsigned int v169; // r8d
  __int64 v170; // r11
  unsigned int v171; // edi
  __int64 v172; // rsi
  unsigned int v173; // edi
  int v174; // eax
  __int64 v175; // r10
  __m128i *v176; // r8
  __int64 v177; // rdx
  __int64 v178; // rax
  __m128i v179; // xmm0
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rsi
  __int64 v183; // r8
  __int64 v184; // r9
  unsigned int v185; // ecx
  unsigned int v186; // edx
  unsigned int v187; // ecx
  __int64 *v188; // rax
  __int64 v189; // r8
  unsigned int v190; // ecx
  unsigned __int16 v191; // r8
  __int64 v192; // rax
  __int64 v193; // rcx
  unsigned __int16 v194; // r8
  __int16 v195; // ax
  unsigned __int16 v196; // r8
  __int16 v197; // ax
  __int64 v198; // rax
  unsigned __int16 v199; // r8
  unsigned __int16 *v200; // r10
  __int64 *v201; // rbx
  unsigned __int16 *v202; // rax
  __int64 v203; // rcx
  __int64 v204; // rax
  __int64 v205; // rsi
  int v206; // edx
  unsigned __int16 v207; // cx
  unsigned __int16 v208; // dx
  unsigned __int16 v209; // dx
  __int64 v210; // rbx
  unsigned __int16 v211; // cx
  int v212; // r13d
  bool v213; // zf
  __int64 v214; // r12
  __int64 v215; // rcx
  unsigned int v216; // edi
  __int64 v217; // rcx
  int v218; // r9d
  __int64 v219; // rax
  _OWORD *v220; // r8
  int v221; // eax
  int v222; // edx
  __int64 v223; // rcx
  int v224; // ebx
  _OWORD *v225; // rcx
  unsigned int v226; // edx
  unsigned int v227; // r11d
  __int64 v228; // r10
  unsigned int v229; // eax
  int v230; // eax
  unsigned int v231; // esi
  unsigned int v232; // ecx
  __int64 v233; // r9
  __int64 *v234; // r13
  __m128i *v235; // r12
  unsigned int v236; // esi
  __int64 v237; // rcx
  int v238; // edi
  __int64 v239; // r9
  __int64 v240; // rcx
  int v241; // edx
  unsigned int v242; // eax
  __int64 v243; // rcx
  __int64 v244; // r8
  __m128i **v245; // rax
  unsigned int v246; // edx
  unsigned int v247; // r9d
  __int64 v248; // rsi
  unsigned int v249; // r8d
  unsigned int v250; // edi
  __int64 *v251; // r10
  __int64 v252; // r14
  unsigned int v253; // edi
  __int64 v254; // r10
  __m128i *v255; // r8
  unsigned int v256; // r9d
  __int64 v257; // rdx
  __int64 v258; // rax
  __m128i v259; // xmm0
  __int64 v260; // rax
  __int64 v261; // rax
  _OWORD *v262; // r9
  __int64 *v263; // r13
  __m128i *v264; // r12
  int v265; // esi
  unsigned int v266; // edi
  __int64 v267; // rcx
  __int64 v268; // r9
  __int64 v269; // rcx
  int v270; // edx
  unsigned int v271; // eax
  __int64 v272; // rcx
  __int64 v273; // r8
  __m128i **v274; // rax
  unsigned int v275; // edx
  unsigned int v276; // r8d
  __int64 v277; // rsi
  unsigned int v278; // r9d
  __int64 *v279; // r10
  unsigned int v280; // edi
  __int64 v281; // r14
  unsigned int v282; // r10d
  __m128i *v283; // r8
  unsigned int v284; // r9d
  __int64 v285; // rdx
  __int64 v286; // rdx
  __int64 v287; // rax
  __m128i v288; // xmm0
  __int64 v289; // rax
  __int64 v290; // rax
  __int64 v291; // r12
  __int64 v292; // r13
  __int64 v293; // r8
  __int64 v294; // r9
  unsigned int v295; // ecx
  unsigned int v296; // edx
  unsigned int v297; // ecx
  unsigned int v298; // r10d
  __int64 v299; // rax
  __int64 v300; // r8
  int v301; // ecx
  unsigned __int16 v302; // r8
  __int64 v303; // rax
  __int64 v304; // rcx
  __int64 v305; // rax
  unsigned __int16 v306; // bx
  _WORD *v307; // rdi
  __int64 v308; // r9
  unsigned __int16 *v309; // r11
  __int64 *v310; // r10
  unsigned __int16 *v311; // rax
  __int64 v312; // rcx
  __int64 v313; // rax
  __int64 v314; // rsi
  int v315; // edx
  unsigned __int16 v316; // cx
  unsigned __int16 v317; // dx
  unsigned __int16 v318; // dx
  __int64 v319; // r10
  unsigned __int16 v320; // cx
  __int16 v321; // bx
  int v322; // r8d
  bool v323; // zf
  __int64 v324; // rdx
  int v325; // ecx
  int v326; // ebx
  _OWORD *v327; // rcx
  unsigned int v328; // ecx
  unsigned int v329; // r13d
  __int64 v330; // r10
  __int64 v331; // r11
  unsigned int v332; // eax
  __int64 v333; // r9
  __int64 v334; // rsi
  unsigned __int64 v335; // r9
  int v336; // ecx
  __m128i *v337; // r12
  unsigned int v338; // edi
  __int64 v339; // rcx
  __int64 v340; // r9
  __int64 v341; // rcx
  int v342; // edx
  unsigned int v343; // eax
  __int64 v344; // rcx
  __int64 v345; // r8
  _QWORD **v346; // rax
  unsigned int v347; // edx
  unsigned int v348; // r10d
  __int64 v349; // r14
  unsigned int v350; // r8d
  __int64 *v351; // r11
  unsigned int v352; // edi
  __int64 v353; // rsi
  unsigned int v354; // edi
  int v355; // eax
  __int64 v356; // r10
  __m128i *v357; // rax
  __int64 v358; // r8
  __int64 v359; // rcx
  __m128i v360; // xmm0
  __int64 v361; // rcx
  __int64 v362; // rax
  __int64 v363; // rsi
  __int64 v364; // rdi
  int v365; // r9d
  __int16 v366; // ax
  unsigned int v367; // ecx
  unsigned int v368; // r8d
  unsigned int v369; // ecx
  unsigned int v370; // eax
  unsigned __int16 v371; // r8
  __int64 v372; // rax
  __int64 v373; // rcx
  __int64 v374; // rax
  unsigned __int16 v375; // r8
  __int16 v376; // ax
  unsigned __int16 v377; // r8
  __int16 v378; // ax
  int v379; // edx
  __int64 v380; // r9
  __int64 v381; // rcx
  __int64 v382; // rax
  unsigned __int64 v383; // rdx
  unsigned __int64 v384; // rax
  __int64 v385; // r9
  __int64 v386; // r8
  bool v387; // zf
  __int64 v388; // r8
  signed __int32 v389[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 *v390; // [rsp+28h] [rbp-E0h]
  __int64 v391; // [rsp+30h] [rbp-D8h]
  __int64 v392; // [rsp+38h] [rbp-D0h]
  int v393; // [rsp+48h] [rbp-C0h]
  unsigned int v394; // [rsp+4Ch] [rbp-BCh]
  __int64 v395; // [rsp+50h] [rbp-B8h]
  __int64 v396; // [rsp+58h] [rbp-B0h]
  unsigned int v397; // [rsp+60h] [rbp-A8h]
  unsigned int v398; // [rsp+64h] [rbp-A4h]
  _OWORD *v399; // [rsp+68h] [rbp-A0h]
  __int64 v400; // [rsp+70h] [rbp-98h]
  __int64 *v401; // [rsp+78h] [rbp-90h]
  char v402; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v403; // [rsp+84h] [rbp-84h]
  __int64 *v404; // [rsp+88h] [rbp-80h]
  __int64 v405; // [rsp+90h] [rbp-78h]
  int v406; // [rsp+98h] [rbp-70h]
  __int64 v407; // [rsp+A0h] [rbp-68h] BYREF
  int v408; // [rsp+A8h] [rbp-60h]
  __int64 v409; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v410; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v411; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v412; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v413; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v414; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v415; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v416; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v417; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v418; // [rsp+F8h] [rbp-10h] BYREF
  __m128i *v419; // [rsp+100h] [rbp-8h] BYREF
  __m128i *v420; // [rsp+108h] [rbp+0h] BYREF
  __m128i *v421; // [rsp+110h] [rbp+8h] BYREF
  __m128i *v422; // [rsp+118h] [rbp+10h] BYREF
  __m128i *v423; // [rsp+120h] [rbp+18h] BYREF
  __m128i *v424; // [rsp+128h] [rbp+20h] BYREF
  int v425; // [rsp+130h] [rbp+28h] BYREF
  int v426; // [rsp+134h] [rbp+2Ch] BYREF
  int v427; // [rsp+138h] [rbp+30h] BYREF
  int v428; // [rsp+13Ch] [rbp+34h] BYREF
  int v429; // [rsp+140h] [rbp+38h] BYREF
  int v430; // [rsp+144h] [rbp+3Ch] BYREF
  _OWORD *v431; // [rsp+148h] [rbp+40h]
  _OWORD v432[2]; // [rsp+150h] [rbp+48h] BYREF
  _OWORD v433[4]; // [rsp+178h] [rbp+70h] BYREF
  _OWORD v434[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v435; // [rsp+1F8h] [rbp+F0h] BYREF
  __int128 v436; // [rsp+208h] [rbp+100h] BYREF

  result = *(unsigned __int16 *)(a2 + 58);
  memset(v432, 0, sizeof(v432));
  v6 = a2;
  v8 = 392 * result - 392 + *(_QWORD *)(a1 + 944);
  v431 = a4;
  v417 = a3;
  v400 = a2;
  v9 = 0;
  v418 = v8;
  v416 = 0LL;
  v406 = 0;
  v393 = 0;
  if ( a3 )
  {
    v390 = (__int64 *)v432;
    StorPortExtendedFunction(93LL, a1, 1LL, a2 + 64);
    if ( (*(_DWORD *)(a1 + 24) & 0x10) != 0 )
    {
      v10 = *(_BYTE *)(a3 + 2);
      if ( v10 >= 4u )
      {
        StorPortNotification(4100LL, a1, v432);
        result = StorPortNotification(0x2000LL, a1, a3);
      }
      else
      {
        *(_BYTE *)(a3 + 2) = v10 + 1;
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 4276);
        if ( *(_QWORD *)(v6 + 160) )
          *(_QWORD *)(*(_QWORD *)(v6 + 168) + 8LL) = a3;
        else
          *(_QWORD *)(v6 + 160) = a3;
        *(_QWORD *)(v6 + 168) = a3;
        result = StorPortNotification(4100LL, a1, v432);
      }
      goto LABEL_590;
    }
    *(_QWORD *)(a3 + 8) = 0LL;
    v11 = byte_140042130 == 0;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 4276);
    if ( v11 )
    {
      v11 = *(_QWORD *)(v6 + 144) == 0LL;
    }
    else
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 3) + 1672) + 20LL) & 0x200) != 0 )
      {
        if ( *(_QWORD *)(v6 + 176) )
          *(_QWORD *)(*(_QWORD *)(v6 + 184) + 8LL) = a3;
        else
          *(_QWORD *)(v6 + 176) = a3;
        *(_QWORD *)(v6 + 184) = a3;
        goto LABEL_25;
      }
      v11 = *(_QWORD *)(v6 + 144) == 0LL;
    }
    if ( v11 )
      *(_QWORD *)(v6 + 144) = a3;
    else
      *(_QWORD *)(*(_QWORD *)(v6 + 152) + 8LL) = a3;
    *(_QWORD *)(v6 + 152) = a3;
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 144)
      || *(unsigned __int16 *)(a2 + 54) == *(unsigned __int16 *)(a2 + 52) + 1
      || (*(_DWORD *)(a1 + 24) & 0x110) != 0 )
    {
      goto LABEL_590;
    }
    v390 = (__int64 *)v432;
    StorPortExtendedFunction(93LL, a1, 1LL, a2 + 64);
  }
LABEL_25:
  if ( !*(_QWORD *)(v6 + 144) )
    goto LABEL_582;
  if ( byte_140042130 )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x100) != 0 )
        goto LABEL_574;
      v12 = *(unsigned __int16 *)(v6 + 48);
      if ( (_WORD)v12 )
      {
        v13 = *(_WORD *)(a1 + 326);
        v15 = *(_WORD *)(a1 + 328);
        v19 = 208 * v12;
        v20 = *(_QWORD *)(a1 + 936);
        v14 = (_WORD *)(v19 + v20 - 156);
        v16 = (unsigned __int16 *)(v19 + v20 - 152);
        v17 = (__int64 *)(v19 + v20 - 176);
        v18 = (unsigned __int16 *)(v19 + v20 - 154);
      }
      else
      {
        v13 = *(_WORD *)(a1 + 324);
        v14 = (_WORD *)(a1 + 388);
        v15 = v13;
        v16 = (unsigned __int16 *)(a1 + 392);
        v17 = (__int64 *)(a1 + 368);
        v18 = (unsigned __int16 *)(a1 + 390);
      }
      v21 = (unsigned __int16)*v14;
      v22 = *v18;
      v397 = v21;
      if ( v22 == (_DWORD)v21 + 1 || !(_WORD)v22 && (_DWORD)v21 == v13 - 1 )
        goto LABEL_574;
      *v14 = v21 + 1;
      if ( (_WORD)v21 + 1 == v13 )
        *v14 = 0;
      v23 = *v16;
      if ( *v16 >= v15 )
      {
LABEL_39:
        v25 = 0;
        if ( !*v16 )
          goto LABEL_43;
        v26 = *v17;
        while ( 1 )
        {
          v27 = v25 + 1;
          if ( !*(_QWORD *)(32LL * v25 + v26 + 16) )
            break;
          ++v25;
          if ( v27 >= *v16 )
            goto LABEL_43;
        }
        v28 = v25;
        v29 = v27 == v15;
        *v16 = v27;
      }
      else
      {
        while ( 1 )
        {
          v24 = v23 + 1;
          if ( !*(_QWORD *)(32LL * v23 + *v17 + 16) )
            break;
          ++v23;
          if ( v24 >= v15 )
            goto LABEL_39;
        }
        v28 = v23;
        v29 = v24 == v15;
        *v16 = v24;
      }
      LODWORD(v395) = v28;
      if ( v29 )
        *v16 = 0;
      v30 = *(_QWORD *)(v6 + 144);
      memset(v433, 0, sizeof(v433));
      v396 = v30;
      v403 = 0;
      v435 = 0LL;
      v31 = *(unsigned __int8 *)(v30 + 3);
      v32 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v31 + 1672) + 52LL);
      if ( (unsigned int)v31 < *(_DWORD *)(a1 + 224) && (_mm_lfence(), (v33 = *(_QWORD *)(a1 + 8 * v31 + 1672)) != 0) )
        v398 = *(_DWORD *)(v33 + 16);
      else
        v398 = 0;
      v34 = *(_DWORD *)(a1 + 4276);
      *(_QWORD *)(v6 + 144) = *(_QWORD *)(v30 + 8);
      v408 = v34;
      if ( !*(_QWORD *)(v6 + 144) )
        *(_QWORD *)(v6 + 152) = 0LL;
      *(_DWORD *)(v30 + 16) = 1;
      if ( v30 == v417 && v431 )
      {
        v35 = v431;
        v399 = v431;
      }
      else
      {
        LOWORD(v435) = 1;
        DWORD1(v435) = 4;
        BYTE10(v435) = *(_BYTE *)(v30 + 3);
        *(_QWORD *)&v433[0] = &v435;
        StorPortNotification(8193LL, a1, v30);
        v34 = v408;
        v35 = v433;
        v399 = v433;
      }
      v36 = *(_DWORD *)(a1 + 120);
      if ( v36 && *((_QWORD *)v35 + 1) )
      {
        *((_DWORD *)v35 + 11) += v36;
        v37 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v30 + 3) + 1672) + 52LL);
        *((_DWORD *)v35 + 4) -= -v37 & (v37 + *(_DWORD *)(a1 + 120) - 1);
      }
      v38 = 32LL * (unsigned __int16)v28;
      *(_QWORD *)(v38 + *(_QWORD *)(v6 + 32) + 16) = v30;
      *(_WORD *)(v38 + *(_QWORD *)(v6 + 32) + 24) = v21;
      *(_DWORD *)(v38 + *(_QWORD *)(v6 + 32) + 4) = v34;
      v39 = (*(unsigned __int8 *)(v30 + 3) << 8) | 0x48;
      v40 = *(_OWORD **)(*(_QWORD *)(v6 + 24) + 16 * v21);
      *v40 = 0LL;
      v40[1] = 0LL;
      v40[2] = 0LL;
      v40[3] = 0LL;
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 16 * v21) + 2LL) = v28;
      v41 = *(_DWORD *)(v30 + 4);
      v42 = *(_DWORD *)(a1 + 208);
      v43 = *((_QWORD *)v35 + 1) + *((_DWORD *)v35 + 4) - v41;
      v405 = v43;
      if ( v41 > 0x200000 )
        v41 = 0x200000;
      v44 = *(_DWORD *)(a1 + 32);
      if ( v41 <= v42 )
        v42 = v41;
      v394 = v42;
      if ( v44 )
      {
        if ( v42 > v44 )
          v42 = v44;
        v394 = v42;
      }
      v45 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v30 + 3) + 1672) + 92LL);
      if ( (_WORD)v45 )
      {
        v46 = v32 * v45;
      }
      else
      {
        v47 = *(_DWORD *)(a1 + 52);
        if ( v47 < v32 || v47 % v32 )
          goto LABEL_78;
        v46 = *(_DWORD *)(a1 + 52);
      }
      v403 = v46;
      if ( v46 )
      {
        v48 = v43 % v46;
        v35 = v399;
        if ( v43 / v46 != (v43 + v42) / v46 )
        {
          v42 = v46 - v48;
          v394 = v46 - v48;
        }
      }
LABEL_78:
      *(_QWORD *)(v30 + 8) = 0LL;
      v49 = 0LL;
      v412 = 0LL;
      v419 = 0LL;
      if ( !*((_QWORD *)v35 + 4) || !*((_DWORD *)v35 + 10) || !v42 )
        goto LABEL_294;
      v50 = 0LL;
      v51 = (v42 >> 12)
          + (((((_WORD)v43 + *((_WORD *)v35 + 22) - *((_WORD *)v35 + 4)) & 0xFFF) + (v42 & 0xFFF) + 4095) >> 12);
      if ( v51 <= 2 )
        goto LABEL_96;
      v52 = *(_QWORD *)(v6 + 192);
      if ( v52 )
        goto LABEL_85;
      if ( *(_QWORD *)(v6 + 200) )
      {
        v52 = _InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
LABEL_85:
        v412 = v52;
        *(_QWORD *)(v6 + 192) = *(_QWORD *)(v52 + 24);
        *(_QWORD *)(v52 + 24) = 0LL;
        goto LABEL_90;
      }
      v390 = (__int64 *)&v419;
      v53 = StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL);
      if ( v53 )
        goto LABEL_124;
      v390 = &v412;
      v53 = StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL);
      if ( v53 )
      {
        StorPortExtendedFunction(1LL, a1, v419, v54);
        goto LABEL_124;
      }
      *(_QWORD *)v412 = v419;
      *(_QWORD *)(v412 + 8) = 0LL;
      *(_DWORD *)(v412 + 16) = 512;
      *(_QWORD *)(v412 + 24) = 0LL;
LABEL_90:
      v55 = v412;
      v56 = *(_DWORD *)(v412 + 16);
      if ( (unsigned int)(v56 - 1) > 0x1FE )
      {
        v58 = *(_QWORD *)v412;
        v59 = 4096LL;
        goto LABEL_94;
      }
      v57 = (unsigned int)(8 * v56) >> 2;
      if ( v57 )
      {
        v58 = *(_QWORD *)v412;
        v59 = 4LL * v57;
LABEL_94:
        sub_140032C80(v58, 0LL, v59);
        v55 = v412;
      }
      v42 = v394;
      LODWORD(v43) = v405;
      v35 = v399;
      *(_DWORD *)(v55 + 16) = v51 - 1;
      v60 = (__m128i **)v412;
      v49 = (__int64 *)(v412 + 8);
      *(_QWORD *)(v396 + 8) = v412;
      v50 = *v60;
      v419 = *v60;
LABEL_96:
      v61 = *(_QWORD *)(v6 + 24);
      v62 = *((_DWORD *)v35 + 10);
      v63 = v43 + *((_DWORD *)v35 + 11) - *((_DWORD *)v35 + 2);
      v64 = *((_QWORD *)v35 + 4);
      v65 = ((_WORD)v43 + *((_WORD *)v35 + 22) - *((_WORD *)v35 + 4)) & 0xFFF;
      v66 = v63 >> 12;
      v67 = (v65 + (v42 & 0xFFF) + 4095) >> 12;
      v68 = *(__int64 **)(v61 + 16LL * (unsigned __int16)v397);
      v401 = v68;
      if ( v63 < 0x1000 )
      {
        v66 = 0LL;
        v65 = v63;
      }
      v69 = (v42 >> 12) + v67;
      if ( v69 )
      {
        if ( v69 + (unsigned int)v66 <= v62 )
        {
          v68[3] = v65 + (*(_QWORD *)(v64 + 8 * v66) << 12);
          if ( v69 != 1 )
          {
            if ( v69 == 2 )
            {
              v68[4] = *(_QWORD *)(v64 + 8LL * (unsigned int)(v66 + 1)) << 12;
              if ( v50 )
              {
                if ( !v49 )
                {
                  sub_140032C80(v50, 0LL, 4096LL);
                  v68 = v401;
                }
                v50->m128i_i64[0] = v68[4];
              }
            }
            else
            {
              v425 = 0;
              if ( !v49 )
                sub_140032C80(v50, 0LL, 4096LL);
              v70 = v69 - 1;
              v71 = v50;
              v72 = 1;
              if ( (unsigned int)v70 < 8 )
                goto LABEL_607;
              v404 = (__int64 *)(v64 + 8LL * (unsigned int)(v66 + 1));
              if ( (unsigned __int64)&v50->m128i_u64[1] <= v64 + 8 * (unsigned __int64)(unsigned int)(v66 + v70)
                && (char *)v50 + 8 * v70 >= (char *)v404 )
              {
                goto LABEL_607;
              }
              v73 = (unsigned int)(v66 + 5);
              do
              {
                v72 += 8;
                *v71 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v64 + 8LL * (unsigned int)(v73 - 4))), 0xCu);
                v74 = (unsigned int)(v73 + 2);
                v71[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v64 + 8LL * (unsigned int)(v73 - 2))), 0xCu);
                v75 = _mm_loadu_si128((const __m128i *)(v64 + 8 * v73));
                v73 = (unsigned int)(v73 + 8);
                v71[2] = _mm_slli_epi64(v75, 0xCu);
                v71[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v64 + 8 * v74)), 0xCu);
                v71 += 4;
              }
              while ( v72 < v69 - (((_BYTE)v69 - 1) & 7) );
              if ( v72 < v69 )
              {
LABEL_607:
                do
                {
                  v76 = v72 + (unsigned int)v66;
                  ++v72;
                  v71 = (__m128i *)((char *)v71 + 8);
                  v71[-1].m128i_i64[1] = *(_QWORD *)(v64 + 8 * v76) << 12;
                }
                while ( v72 < v69 );
              }
              if ( !v49 || (PhysicalAddress = *v49) == 0 )
              {
                PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v50, &v425);
                if ( v49 )
                  *v49 = PhysicalAddress;
              }
              v401[4] = PhysicalAddress;
            }
          }
          v53 = 0;
        }
        else
        {
          v53 = -1056964607;
        }
      }
      else
      {
        v53 = -1056964607;
      }
      v6 = v400;
LABEL_124:
      if ( v53 != -1056964605 )
        goto LABEL_169;
      if ( v394 <= 0x1000
        || (v78 = v399, v79 = 0LL, v394 = 4096, v413 = 0LL, v420 = 0LL, !*((_QWORD *)v399 + 4))
        || !*((_DWORD *)v399 + 10) )
      {
LABEL_293:
        v30 = v396;
        goto LABEL_294;
      }
      v80 = 0LL;
      v81 = v405;
      v82 = (((((_WORD)v405 + *((_WORD *)v399 + 22) - *((_WORD *)v399 + 4)) & 0xFFFu) + 4095) >> 12) + 1;
      if ( v82 > 2 )
      {
        v83 = *(_QWORD *)(v6 + 192);
        if ( v83 )
          goto LABEL_132;
        if ( *(_QWORD *)(v6 + 200) )
        {
          v83 = _InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
LABEL_132:
          v413 = v83;
          *(_QWORD *)(v6 + 192) = *(_QWORD *)(v83 + 24);
          *(_QWORD *)(v83 + 24) = 0LL;
        }
        else
        {
          v390 = (__int64 *)&v420;
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL) )
            goto LABEL_293;
          v390 = &v413;
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL) )
          {
            StorPortExtendedFunction(1LL, a1, v420, v84);
            v30 = v396;
LABEL_294:
            v196 = v395;
            *(_DWORD *)(32LL * (unsigned __int16)v395 + *(_QWORD *)(v6 + 32)) = 0;
            *(_QWORD *)(32LL * v196 + *(_QWORD *)(v6 + 32) + 16) = 0LL;
            v197 = *(_WORD *)(v6 + 52);
            *(_WORD *)(v6 + 56) = v196;
            if ( !v197 )
              v197 = *(_WORD *)(a1 + 326);
            *(_WORD *)(v6 + 52) = v197 - 1;
            StorPortNotification(4100LL, a1, v432);
            StorPortNotification(0x2000LL, a1, v30);
            v390 = (__int64 *)v432;
            StorPortExtendedFunction(93LL, a1, 1LL, v6 + 64);
            v108 = v393;
            v123 = HIWORD(v393);
            goto LABEL_299;
          }
          *(_QWORD *)v413 = v420;
          *(_QWORD *)(v413 + 8) = 0LL;
          *(_DWORD *)(v413 + 16) = 512;
          *(_QWORD *)(v413 + 24) = 0LL;
        }
        v85 = v413;
        v86 = *(_DWORD *)(v413 + 16);
        if ( (unsigned int)(v86 - 1) > 0x1FE )
        {
          v88 = *(_QWORD *)v413;
          v89 = 4096LL;
LABEL_141:
          sub_140032C80(v88, 0LL, v89);
          v85 = v413;
        }
        else
        {
          v87 = (unsigned int)(8 * v86) >> 2;
          if ( v87 )
          {
            v88 = *(_QWORD *)v413;
            v89 = 4LL * v87;
            goto LABEL_141;
          }
        }
        v78 = v399;
        *(_DWORD *)(v85 + 16) = v82 - 1;
        v90 = (__m128i **)v413;
        v79 = (__int64 *)(v413 + 8);
        *(_QWORD *)(v396 + 8) = v413;
        v80 = *v90;
        v420 = *v90;
      }
      v91 = *(_QWORD *)(v6 + 24);
      v92 = *((_DWORD *)v78 + 10);
      v93 = v81 + *((_DWORD *)v78 + 11) - *((_DWORD *)v78 + 2);
      v94 = *((_QWORD *)v78 + 4);
      v95 = v93 & 0xFFF;
      v96 = v93 >> 12;
      v97 = *(__int64 **)(v91 + 16LL * (unsigned __int16)v397);
      v98 = ((v95 + 4095) >> 12) + 1;
      v401 = v97;
      if ( v93 < 0x1000 )
      {
        v96 = 0LL;
        v95 = v93;
      }
      if ( v98 + (unsigned int)v96 <= v92 )
      {
        v97[3] = v95 + (*(_QWORD *)(v94 + 8 * v96) << 12);
        if ( v98 != 1 )
        {
          if ( v98 == 2 )
          {
            v97[4] = *(_QWORD *)(v94 + 8LL * (unsigned int)(v96 + 1)) << 12;
            if ( v80 )
            {
              if ( !v79 )
              {
                sub_140032C80(v80, 0LL, 4096LL);
                v97 = v401;
              }
              v80->m128i_i64[0] = v97[4];
            }
          }
          else
          {
            v426 = 0;
            if ( !v79 )
              sub_140032C80(v80, 0LL, 4096LL);
            v99 = v98 - 1;
            v100 = v80;
            v101 = 1;
            if ( v98 > 1 )
            {
              if ( v99 < 8 )
                goto LABEL_608;
              v102 = v98 - 1;
              v404 = (__int64 *)(v94 + 8LL * (unsigned int)(v96 + 1));
              if ( (unsigned __int64)&v80->m128i_u64[1] <= v94 + 8 * (unsigned __int64)(unsigned int)(v96 + v102)
                && (char *)v80 + 8 * v102 >= (char *)v404 )
              {
                goto LABEL_608;
              }
              v103 = (unsigned int)(v96 + 5);
              do
              {
                v101 += 8;
                *v100 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v94 + 8LL * (unsigned int)(v103 - 4))), 0xCu);
                v104 = (unsigned int)(v103 + 2);
                v100[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v94 + 8LL * (unsigned int)(v103 - 2))), 0xCu);
                v105 = _mm_loadu_si128((const __m128i *)(v94 + 8 * v103));
                v103 = (unsigned int)(v103 + 8);
                v100[2] = _mm_slli_epi64(v105, 0xCu);
                v100[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v94 + 8 * v104)), 0xCu);
                v100 += 4;
              }
              while ( v101 < v98 - (v99 & 7) );
              if ( v101 < v98 )
              {
LABEL_608:
                do
                {
                  v106 = v101 + (unsigned int)v96;
                  ++v101;
                  v100 = (__m128i *)((char *)v100 + 8);
                  v100[-1].m128i_i64[1] = *(_QWORD *)(v94 + 8 * v106) << 12;
                }
                while ( v101 < v98 );
              }
            }
            if ( !v79 || (v107 = *v79) == 0 )
            {
              v107 = StorPortGetPhysicalAddress(a1, 0LL, v80, &v426);
              if ( v79 )
                *v79 = v107;
            }
            v401[4] = v107;
          }
        }
        v53 = 0;
      }
      else
      {
        v53 = -1056964607;
      }
LABEL_169:
      v6 = v400;
      if ( v53 )
        goto LABEL_293;
      v108 = v397;
      v109 = v399;
      v110 = v396;
      v111 = *(unsigned __int8 *)(v396 + 3);
      v112 = *(_QWORD *)(*(_QWORD *)(v400 + 24) + 16LL * (unsigned __int16)v397);
      if ( (*((_DWORD *)v399 + 14) & 0xF) != 0 )
      {
        *(_BYTE *)v112 = 1;
        if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 && *(_BYTE *)(a1 + 3729) == (_BYTE)v111 )
        {
          v113 = *(unsigned __int16 *)(a1 + 3732);
          if ( (_WORD)v113 )
          {
            if ( (*((_DWORD *)v109 + 14) & 0x80u) != 0 )
            {
              v114 = *((_DWORD *)v109 + 5);
              if ( v114 - 1 <= 0xFFFE && v114 <= v113 && (_WORD)v114 )
              {
                v115 = *(_DWORD *)(v112 + 48) & 0xFF1FFFFF;
                *(_WORD *)(v112 + 54) = v114;
                *(_DWORD *)(v112 + 48) = v115 | 0x100000;
              }
            }
          }
        }
      }
      else
      {
        *(_BYTE *)v112 = 2;
      }
      *(_DWORD *)v112 &= 0xFFFFFCFF;
      v116 = v394;
      *(_DWORD *)(v112 + 4) = v398;
      v117 = v405;
      *(_QWORD *)(v112 + 16) = 0LL;
      v118 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v111 + 1672) + 52LL);
      *(_QWORD *)(v112 + 40) = v117 / v118;
      *(_WORD *)(v112 + 48) = ((unsigned int)v118 + v116 - 1) / (unsigned int)v118 - 1;
      *(_DWORD *)(v112 + 48) &= 0xC3FFFFFF;
      v119 = *((_DWORD *)v109 + 14) & 0x20;
      LODWORD(v117) = *(_DWORD *)(v112 + 48) & 0x3FFFFFFF;
      *(_BYTE *)(v112 + 52) = 0;
      *(_QWORD *)(v112 + 56) = 0LL;
      *(_DWORD *)(v112 + 48) = v117 | (v119 << 25);
      *(_DWORD *)(v110 + 4) -= v116;
      sub_14000B210(a1, 0LL, *(_DWORD **)(*(_QWORD *)(v6 + 24) + 16LL * v108));
      if ( (*(_BYTE *)(a1 + 21) & 0x10) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0 )
      {
        StorPortExtendedFunction(47LL, a1, 0LL, &v416);
        v120 = v395;
        *(_QWORD *)(32LL * (unsigned __int16)v395 + *(_QWORD *)(v6 + 32) + 8) = v416;
        v121 = *(_QWORD *)(v6 + 40);
        if ( v121 )
        {
          v122 = 2LL * v120;
          *(_QWORD *)(v121 + 8 * v122) = 0LL;
          *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8 * v122 + 8) = 0LL;
        }
        v39 |= 0x20u;
      }
      else
      {
        v120 = v395;
      }
      *(_DWORD *)(32LL * v120 + *(_QWORD *)(v6 + 32)) = v39;
      _InterlockedIncrement16((volatile signed __int16 *)(v6 + 136));
      ++v406;
      v123 = v120;
      v11 = *(_DWORD *)(v110 + 4) == 0;
      LOWORD(v393) = v108;
      HIWORD(v393) = v120;
      if ( !v11 )
      {
        while ( 1 )
        {
          v415 = 0LL;
          v390 = &v415;
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 24LL, 1131247182LL) )
          {
            v108 = v393;
LABEL_298:
            v123 = HIWORD(v393);
            goto LABEL_299;
          }
          v124 = *(unsigned __int16 *)(v6 + 48);
          if ( (_WORD)v124 )
          {
            v125 = *(_WORD *)(a1 + 326);
            v127 = *(unsigned __int16 *)(a1 + 328);
            v131 = 208 * v124;
            v132 = *(_QWORD *)(a1 + 936);
            v126 = (_WORD *)(v131 + v132 - 156);
            v128 = (unsigned __int16 *)(v131 + v132 - 152);
            v129 = (__int64 *)(v131 + v132 - 176);
            v130 = (unsigned __int16 *)(v131 + v132 - 154);
          }
          else
          {
            v125 = *(_WORD *)(a1 + 324);
            v126 = (_WORD *)(a1 + 388);
            v127 = v125;
            v128 = (unsigned __int16 *)(a1 + 392);
            v129 = (__int64 *)(a1 + 368);
            v130 = (unsigned __int16 *)(a1 + 390);
          }
          v133 = (unsigned __int16)*v126;
          v134 = *v130;
          LODWORD(v395) = v133;
          if ( v134 == (_DWORD)v133 + 1 || !(_WORD)v134 && (_DWORD)v133 == v125 - 1 )
            goto LABEL_292;
          *v126 = v133 + 1;
          if ( (_WORD)v133 + 1 == v125 )
            *v126 = 0;
          v135 = *v128;
          if ( *v128 >= (unsigned __int16)v127 )
          {
LABEL_199:
            v137 = 0;
            if ( !*v128 )
            {
LABEL_203:
              if ( *v126 )
                v140 = *v126 - 1;
              else
                v140 = v125 - 1;
              *v126 = v140;
LABEL_292:
              StorPortExtendedFunction(1LL, a1, v415, v127);
              v108 = v393;
              v123 = HIWORD(v393);
              goto LABEL_299;
            }
            v138 = *v129;
            while ( 1 )
            {
              v139 = v137 + 1;
              if ( !*(_QWORD *)(32LL * v137 + v138 + 16) )
                break;
              ++v137;
              if ( v139 >= *v128 )
                goto LABEL_203;
            }
            v141 = v137;
            v142 = v139 == (unsigned __int16)v127;
            *v128 = v139;
          }
          else
          {
            while ( 1 )
            {
              v136 = v135 + 1;
              if ( !*(_QWORD *)(32LL * v135 + *v129 + 16) )
                break;
              ++v135;
              if ( v136 >= (unsigned __int16)v127 )
                goto LABEL_199;
            }
            v141 = v135;
            v142 = v136 == (unsigned __int16)v127;
            *v128 = v136;
          }
          v394 = v141;
          if ( v142 )
            *v128 = 0;
          v143 = 32LL * (unsigned __int16)v141;
          *(_BYTE *)(v415 + 3) = *(_BYTE *)(v110 + 3);
          *(_WORD *)v415 = 0;
          *(_BYTE *)(v415 + 2) = 0;
          *(_DWORD *)(v415 + 4) = 0;
          *(_QWORD *)(v415 + 8) = 0LL;
          *(_QWORD *)(v415 + 16) = v110;
          *(_QWORD *)(v143 + *(_QWORD *)(v6 + 32) + 16) = v415;
          v144 = v408;
          *(_WORD *)(v143 + *(_QWORD *)(v6 + 32) + 24) = v133;
          *(_DWORD *)(v143 + *(_QWORD *)(v6 + 32) + 4) = v144;
          v145 = (*(unsigned __int8 *)(v110 + 3) << 8) | 0xC8;
          v146 = *(_OWORD **)(*(_QWORD *)(v6 + 24) + 16 * v133);
          *v146 = 0LL;
          v146[1] = 0LL;
          v146[2] = 0LL;
          v146[3] = 0LL;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 16 * v133) + 2LL) = v141;
          v147 = *(_DWORD *)(v110 + 4);
          v148 = *(_DWORD *)(a1 + 208);
          v149 = *((_QWORD *)v109 + 1);
          v150 = (__int64 *)(v149 + *((_DWORD *)v109 + 4) - v147);
          v404 = v150;
          if ( v147 > 0x200000 )
            v147 = 0x200000;
          v151 = *(_DWORD *)(a1 + 32);
          if ( v147 <= v148 )
            v148 = v147;
          v397 = v148;
          if ( v151 )
          {
            if ( v148 > v151 )
              v148 = v151;
            v397 = v148;
          }
          if ( v403 )
          {
            v152 = (__int64)v150 % v403;
            if ( (__int64)v150 / v403 != ((__int64)v150 + v148) / v403 )
            {
              v148 = v403 - v152;
              v397 = v403 - v152;
            }
          }
          v153 = v415;
          v411 = 0LL;
          v154 = 0LL;
          v421 = 0LL;
          v401 = 0LL;
          if ( !v415 || !*((_QWORD *)v109 + 4) || !*((_DWORD *)v109 + 10) || !v148 )
          {
LABEL_287:
            v194 = v394;
            *(_DWORD *)(32LL * (unsigned __int16)v394 + *(_QWORD *)(v6 + 32)) = 0;
            *(_QWORD *)(32LL * v194 + *(_QWORD *)(v6 + 32) + 16) = 0LL;
            v195 = *(_WORD *)(v6 + 52);
            *(_WORD *)(v6 + 56) = v194;
            if ( !v195 )
              v195 = *(_WORD *)(a1 + 326);
            *(_WORD *)(v6 + 52) = v195 - 1;
            StorPortExtendedFunction(1LL, a1, v415, v154);
            v108 = v393;
            v123 = HIWORD(v393);
            goto LABEL_299;
          }
          v155 = ((_WORD)v150 + (unsigned __int16)*((_DWORD *)v109 + 11) - (_WORD)v149) & 0xFFF;
          v156 = 0LL;
          v157 = (v148 >> 12) + ((v155 + (v148 & 0xFFF) + 4095) >> 12);
          if ( v157 > 2 )
            break;
LABEL_238:
          v166 = (_DWORD)v150 + *((_DWORD *)v399 + 11) - *((_DWORD *)v399 + 2);
          v167 = *((_DWORD *)v399 + 10);
          v168 = *((_QWORD *)v399 + 4);
          v169 = ((_WORD)v150 + *((_WORD *)v399 + 22) - *((_WORD *)v399 + 4)) & 0xFFF;
          v170 = *(_QWORD *)(*(_QWORD *)(v400 + 24) + 16LL * (unsigned __int16)v395);
          v171 = (v169 + (v148 & 0xFFF) + 4095) >> 12;
          v405 = v170;
          if ( v166 < 0x1000 )
            v169 = v166;
          v172 = v166 >> 12;
          if ( v166 < 0x1000 )
            v172 = 0LL;
          v173 = (v148 >> 12) + v171;
          if ( v173 )
          {
            if ( v173 + (unsigned int)v172 <= v167 )
            {
              *(_QWORD *)(v170 + 24) = v169 + (*(_QWORD *)(v168 + 8 * v172) << 12);
              if ( v173 != 1 )
              {
                if ( v173 == 2 )
                {
                  *(_QWORD *)(v170 + 32) = *(_QWORD *)(v168 + 8LL * (unsigned int)(v172 + 1)) << 12;
                  if ( v156 )
                  {
                    if ( !v154 )
                    {
                      sub_140032C80(v156, 0LL, 4096LL);
                      v170 = v405;
                    }
                    v156->m128i_i64[0] = *(_QWORD *)(v170 + 32);
                  }
                }
                else
                {
                  v430 = 0;
                  if ( !v154 )
                    sub_140032C80(v156, 0LL, 4096LL);
                  v175 = v173 - 1;
                  v176 = v156;
                  LODWORD(v154) = 1;
                  if ( (unsigned int)v175 < 8
                    || (unsigned __int64)&v156->m128i_u64[1] <= v168 + 8 * (unsigned __int64)(unsigned int)(v172 + v175)
                    && (unsigned __int64)v156 + 8 * v175 >= v168 + 8 * (unsigned __int64)(unsigned int)(v172 + 1) )
                  {
                    goto LABEL_609;
                  }
                  v177 = (unsigned int)(v172 + 5);
                  do
                  {
                    v154 = (unsigned int)(v154 + 8);
                    *v176 = _mm_slli_epi64(
                              _mm_loadu_si128((const __m128i *)(v168 + 8LL * (unsigned int)(v177 - 4))),
                              0xCu);
                    v178 = (unsigned int)(v177 + 2);
                    v176[1] = _mm_slli_epi64(
                                _mm_loadu_si128((const __m128i *)(v168 + 8LL * (unsigned int)(v177 - 2))),
                                0xCu);
                    v179 = _mm_loadu_si128((const __m128i *)(v168 + 8 * v177));
                    v177 = (unsigned int)(v177 + 8);
                    v176[2] = _mm_slli_epi64(v179, 0xCu);
                    v176[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v168 + 8 * v178)), 0xCu);
                    v176 += 4;
                  }
                  while ( (unsigned int)v154 < v173 - (((_BYTE)v173 - 1) & 7) );
                  if ( (unsigned int)v154 < v173 )
                  {
LABEL_609:
                    do
                    {
                      v180 = (unsigned int)(v154 + v172);
                      v154 = (unsigned int)(v154 + 1);
                      v176 = (__m128i *)((char *)v176 + 8);
                      v176[-1].m128i_i64[1] = *(_QWORD *)(v168 + 8 * v180) << 12;
                    }
                    while ( (unsigned int)v154 < v173 );
                  }
                  if ( !v401 || (v181 = *v401) == 0 )
                  {
                    v181 = StorPortGetPhysicalAddress(a1, 0LL, v156, &v430);
                    if ( v401 )
                      *v401 = v181;
                  }
                  v148 = v397;
                  *(_QWORD *)(v405 + 32) = v181;
                }
              }
              v174 = 0;
            }
            else
            {
              v174 = -1056964607;
            }
          }
          else
          {
            v174 = -1056964607;
          }
          v6 = v400;
          if ( v174 )
            goto LABEL_287;
          v108 = v395;
          v109 = v399;
          v182 = v396;
          v183 = *(unsigned __int8 *)(v396 + 3);
          v184 = *(_QWORD *)(*(_QWORD *)(v400 + 24) + 16LL * (unsigned __int16)v395);
          if ( (*((_DWORD *)v399 + 14) & 0xF) != 0 )
          {
            *(_BYTE *)v184 = 1;
            if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 && *(_BYTE *)(a1 + 3729) == (_BYTE)v183 )
            {
              v185 = *(unsigned __int16 *)(a1 + 3732);
              if ( (_WORD)v185 )
              {
                if ( (*((_DWORD *)v109 + 14) & 0x80u) != 0 )
                {
                  v186 = *((_DWORD *)v109 + 5);
                  if ( v186 - 1 <= 0xFFFE && v186 <= v185 && (_WORD)v186 )
                  {
                    v187 = *(_DWORD *)(v184 + 48) & 0xFF1FFFFF;
                    *(_WORD *)(v184 + 54) = v186;
                    *(_DWORD *)(v184 + 48) = v187 | 0x100000;
                  }
                }
              }
            }
          }
          else
          {
            *(_BYTE *)v184 = 2;
          }
          *(_DWORD *)v184 &= 0xFFFFFCFF;
          *(_DWORD *)(v184 + 4) = v398;
          v188 = v404;
          *(_QWORD *)(v184 + 16) = 0LL;
          v189 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v183 + 1672) + 52LL);
          *(_QWORD *)(v184 + 40) = (__int64)v188 / v189;
          *(_WORD *)(v184 + 48) = (v148 + (_DWORD)v189 - 1) / (unsigned int)v189 - 1;
          v190 = *(_DWORD *)(v184 + 48) & 0xC3FFFFFF;
          *(_DWORD *)(v184 + 48) = v190;
          LODWORD(v188) = *((_DWORD *)v109 + 14) & 0xFFFFFFE0;
          *(_BYTE *)(v184 + 52) = 0;
          *(_QWORD *)(v184 + 56) = 0LL;
          *(_DWORD *)(v184 + 48) = (v190 & 0x3FFFFFFF ^ ((_DWORD)v188 << 25)) & 0x7FFFFFFF;
          sub_14000B210(a1, 0LL, *(_DWORD **)(*(_QWORD *)(v6 + 24) + 16LL * v108));
          if ( (*(_BYTE *)(a1 + 21) & 0x10) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0 )
          {
            StorPortExtendedFunction(47LL, a1, 0LL, &v416);
            v191 = v394;
            *(_QWORD *)(32LL * (unsigned __int16)v394 + *(_QWORD *)(v6 + 32) + 8) = v416;
            v192 = *(_QWORD *)(v6 + 40);
            if ( v192 )
            {
              v193 = 2LL * v191;
              *(_QWORD *)(v192 + 8 * v193) = 0LL;
              *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8 * v193 + 8) = 0LL;
            }
            v145 |= 0x20u;
          }
          else
          {
            v191 = v394;
          }
          *(_DWORD *)(v182 + 4) -= v148;
          v110 = v182;
          ++*(_WORD *)v182;
          *(_DWORD *)(32LL * v191 + *(_QWORD *)(v6 + 32)) = v145;
          _InterlockedIncrement16((volatile signed __int16 *)(v6 + 136));
          v11 = *(_DWORD *)(v182 + 4) == 0;
          LOWORD(v393) = v108;
          if ( v11 )
            goto LABEL_298;
        }
        v158 = *(_QWORD *)(v6 + 192);
        if ( v158 )
        {
LABEL_228:
          v411 = v158;
          *(_QWORD *)(v6 + 192) = *(_QWORD *)(v158 + 24);
          *(_QWORD *)(v158 + 24) = 0LL;
        }
        else
        {
          if ( *(_QWORD *)(v6 + 200) )
          {
            v158 = _InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
            goto LABEL_228;
          }
          v390 = (__int64 *)&v421;
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL) )
            goto LABEL_287;
          v390 = &v411;
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL) )
          {
            StorPortExtendedFunction(1LL, a1, v421, v159);
            goto LABEL_287;
          }
          *(_QWORD *)v411 = v421;
          *(_QWORD *)(v411 + 8) = 0LL;
          *(_DWORD *)(v411 + 16) = 512;
          *(_QWORD *)(v411 + 24) = 0LL;
        }
        v160 = v411;
        v161 = *(_DWORD *)(v411 + 16);
        if ( (unsigned int)(v161 - 1) > 0x1FE )
        {
          v163 = *(_QWORD *)v411;
          v164 = 4096LL;
LABEL_236:
          sub_140032C80(v163, 0LL, v164);
          v160 = v411;
        }
        else
        {
          v162 = (unsigned int)(8 * v161) >> 2;
          if ( v162 )
          {
            v163 = *(_QWORD *)v411;
            v164 = 4LL * v162;
            goto LABEL_236;
          }
        }
        LODWORD(v150) = (_DWORD)v404;
        *(_DWORD *)(v160 + 16) = v157 - 1;
        v165 = (_QWORD **)v411;
        *(_QWORD *)(v153 + 8) = v411;
        v156 = (__m128i *)*v165;
        v154 = (unsigned __int64)(v165 + 1);
        v421 = (__m128i *)*v165;
        v401 = (__int64 *)(v165 + 1);
        goto LABEL_238;
      }
LABEL_299:
      if ( !*(_QWORD *)(v6 + 144) )
        goto LABEL_575;
    }
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x100) != 0 || (*(_DWORD *)(a1 + 4056) & 0x200) != 0 )
      goto LABEL_574;
    v198 = *(unsigned __int16 *)(v6 + 48);
    if ( (_WORD)v198 )
    {
      v13 = *(_WORD *)(a1 + 326);
      v199 = *(_WORD *)(a1 + 328);
      v203 = 208 * v198;
      v204 = *(_QWORD *)(a1 + 936);
      v14 = (_WORD *)(v203 + v204 - 156);
      v200 = (unsigned __int16 *)(v203 + v204 - 152);
      v201 = (__int64 *)(v203 + v204 - 176);
      v202 = (unsigned __int16 *)(v203 + v204 - 154);
    }
    else
    {
      v13 = *(_WORD *)(a1 + 324);
      v14 = (_WORD *)(a1 + 388);
      v199 = v13;
      v200 = (unsigned __int16 *)(a1 + 392);
      v201 = (__int64 *)(a1 + 368);
      v202 = (unsigned __int16 *)(a1 + 390);
    }
    v205 = (unsigned __int16)*v14;
    v206 = *v202;
    v398 = v205;
    if ( v206 == (_DWORD)v205 + 1 || !(_WORD)v206 && (_DWORD)v205 == v13 - 1 )
      goto LABEL_574;
    *v14 = v205 + 1;
    if ( (_WORD)v205 + 1 == v13 )
      *v14 = 0;
    v207 = *v200;
    if ( *v200 >= v199 )
      break;
    while ( 1 )
    {
      v208 = v207 + 1;
      if ( !*(_QWORD *)(32LL * v207 + *v201 + 16) )
        break;
      ++v207;
      if ( v208 >= v199 )
        goto LABEL_315;
    }
    v212 = v207;
    v213 = v208 == v199;
    *v200 = v208;
LABEL_322:
    LODWORD(v395) = v212;
    if ( v213 )
      *v200 = 0;
    v214 = *(_QWORD *)(v6 + 144);
    memset(v434, 0, sizeof(v434));
    v396 = v214;
    v403 = 0;
    v436 = 0LL;
    v215 = *(unsigned __int8 *)(v214 + 3);
    v216 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v215 + 1672) + 52LL);
    if ( (unsigned int)v215 < *(_DWORD *)(a1 + 224) && (_mm_lfence(), (v217 = *(_QWORD *)(a1 + 8 * v215 + 1672)) != 0) )
      v397 = *(_DWORD *)(v217 + 16);
    else
      v397 = 0;
    v218 = *(_DWORD *)(a1 + 4276);
    v219 = *(_QWORD *)(v214 + 8);
    v408 = v218;
    *(_QWORD *)(v6 + 144) = v219;
    if ( !v219 )
      *(_QWORD *)(v6 + 152) = 0LL;
    *(_DWORD *)(v214 + 16) = 1;
    if ( v214 == v417 && v431 )
    {
      v220 = v431;
      v399 = v431;
    }
    else
    {
      LOWORD(v436) = 1;
      DWORD1(v436) = 4;
      BYTE10(v436) = *(_BYTE *)(v214 + 3);
      *(_QWORD *)&v434[0] = &v436;
      StorPortNotification(8193LL, a1, v214);
      v218 = v408;
      v220 = v434;
      v399 = v434;
    }
    v221 = *(_DWORD *)(a1 + 120);
    if ( v221 && *((_QWORD *)v220 + 1) )
    {
      *((_DWORD *)v220 + 11) += v221;
      v222 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v214 + 3) + 1672) + 52LL);
      *((_DWORD *)v220 + 4) -= -v222 & (v222 + *(_DWORD *)(a1 + 120) - 1);
    }
    v223 = 32LL * (unsigned __int16)v212;
    *(_QWORD *)(v223 + *(_QWORD *)(v6 + 32) + 16) = v214;
    *(_WORD *)(v223 + *(_QWORD *)(v6 + 32) + 24) = v205;
    *(_DWORD *)(v223 + *(_QWORD *)(v6 + 32) + 4) = v218;
    v224 = (*(unsigned __int8 *)(v214 + 3) << 8) | 0x48;
    v225 = *(_OWORD **)(*(_QWORD *)(v6 + 24) + 16 * v205);
    *v225 = 0LL;
    v225[1] = 0LL;
    v225[2] = 0LL;
    v225[3] = 0LL;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 16 * v205) + 2LL) = v212;
    v226 = *(_DWORD *)(v214 + 4);
    v227 = *(_DWORD *)(a1 + 208);
    v228 = *((_QWORD *)v220 + 1) + *((_DWORD *)v220 + 4) - v226;
    v405 = v228;
    if ( v226 > 0x200000 )
      v226 = 0x200000;
    v229 = *(_DWORD *)(a1 + 32);
    if ( v226 <= v227 )
      v227 = v226;
    v394 = v227;
    if ( v229 )
    {
      if ( v227 > v229 )
        v227 = v229;
      v394 = v227;
    }
    v230 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v214 + 3) + 1672) + 92LL);
    if ( (_WORD)v230 )
    {
      v231 = v216 * v230;
    }
    else
    {
      v232 = *(_DWORD *)(a1 + 52);
      if ( v232 < v216 || v232 % v216 )
        goto LABEL_353;
      v231 = *(_DWORD *)(a1 + 52);
    }
    v403 = v231;
    if ( v231 )
    {
      v233 = v228 % v231;
      v220 = v399;
      if ( v228 / v231 != (v228 + v227) / v231 )
      {
        v227 = v231 - v233;
        v394 = v231 - v233;
      }
    }
LABEL_353:
    *(_QWORD *)(v214 + 8) = 0LL;
    v234 = 0LL;
    v407 = 0LL;
    v422 = 0LL;
    if ( !*((_QWORD *)v220 + 4) || !*((_DWORD *)v220 + 10) || !v227 )
      goto LABEL_567;
    v235 = 0LL;
    v236 = (v227 >> 12)
         + (((((_WORD)v228 + *((_WORD *)v220 + 22) - *((_WORD *)v220 + 4)) & 0xFFF) + (v227 & 0xFFF) + 4095) >> 12);
    if ( v236 <= 2 )
      goto LABEL_371;
    v237 = *(_QWORD *)(v6 + 192);
    if ( v237 )
      goto LABEL_360;
    if ( *(_QWORD *)(v6 + 200) )
    {
      v237 = _InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
LABEL_360:
      v407 = v237;
      *(_QWORD *)(v6 + 192) = *(_QWORD *)(v237 + 24);
      *(_QWORD *)(v237 + 24) = 0LL;
      goto LABEL_365;
    }
    v390 = (__int64 *)&v422;
    v238 = StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL);
    if ( v238 )
      goto LABEL_401;
    v390 = &v407;
    v238 = StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL);
    if ( v238 )
    {
      StorPortExtendedFunction(1LL, a1, v422, v239);
      goto LABEL_401;
    }
    *(_QWORD *)v407 = v422;
    *(_QWORD *)(v407 + 8) = 0LL;
    *(_DWORD *)(v407 + 16) = 512;
    *(_QWORD *)(v407 + 24) = 0LL;
LABEL_365:
    v240 = v407;
    v241 = *(_DWORD *)(v407 + 16);
    if ( (unsigned int)(v241 - 1) > 0x1FE )
    {
      v243 = *(_QWORD *)v407;
      v244 = 4096LL;
      goto LABEL_369;
    }
    v242 = (unsigned int)(8 * v241) >> 2;
    if ( v242 )
    {
      v243 = *(_QWORD *)v407;
      v244 = 4LL * v242;
LABEL_369:
      sub_140032C80(v243, 0LL, v244);
      v240 = v407;
    }
    v227 = v394;
    LODWORD(v228) = v405;
    v220 = v399;
    *(_DWORD *)(v240 + 16) = v236 - 1;
    v245 = (__m128i **)v407;
    v234 = (__int64 *)(v407 + 8);
    *(_QWORD *)(v396 + 8) = v407;
    v235 = *v245;
    v422 = *v245;
LABEL_371:
    v246 = v228 + *((_DWORD *)v220 + 11) - *((_DWORD *)v220 + 2);
    v247 = *((_DWORD *)v220 + 10);
    v248 = *((_QWORD *)v220 + 4);
    v249 = ((_WORD)v228 + *((_WORD *)v220 + 22) - *((_WORD *)v220 + 4)) & 0xFFF;
    v250 = (v249 + (v227 & 0xFFF) + 4095) >> 12;
    v251 = *(__int64 **)(*(_QWORD *)(v6 + 24) + 16LL * (unsigned __int16)v398);
    v404 = v251;
    if ( v246 < 0x1000 )
      v249 = v246;
    v252 = v246 >> 12;
    if ( v246 < 0x1000 )
      v252 = 0LL;
    v253 = (v227 >> 12) + v250;
    if ( v253 )
    {
      if ( v253 + (unsigned int)v252 <= v247 )
      {
        v251[3] = v249 + (*(_QWORD *)(v248 + 8 * v252) << 12);
        if ( v253 != 1 )
        {
          if ( v253 == 2 )
          {
            v251[4] = *(_QWORD *)(v248 + 8LL * (unsigned int)(v252 + 1)) << 12;
            if ( v235 )
            {
              if ( !v234 )
              {
                sub_140032C80(v235, 0LL, 4096LL);
                v251 = v404;
              }
              v235->m128i_i64[0] = v251[4];
            }
          }
          else
          {
            v429 = 0;
            if ( !v234 )
              sub_140032C80(v235, 0LL, 4096LL);
            v254 = v253 - 1;
            v255 = v235;
            v256 = 1;
            if ( (unsigned int)v254 < 8 )
              goto LABEL_610;
            v401 = (__int64 *)(v248 + 8LL * (unsigned int)(v252 + 1));
            if ( (unsigned __int64)&v235->m128i_u64[1] <= v248 + 8 * (unsigned __int64)(unsigned int)(v252 + v254)
              && (char *)v235 + 8 * v254 >= (char *)v401 )
            {
              goto LABEL_610;
            }
            v257 = (unsigned int)(v252 + 5);
            do
            {
              v256 += 8;
              *v255 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v248 + 8LL * (unsigned int)(v257 - 4))), 0xCu);
              v258 = (unsigned int)(v257 + 2);
              v255[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v248 + 8LL * (unsigned int)(v257 - 2))), 0xCu);
              v259 = _mm_loadu_si128((const __m128i *)(v248 + 8 * v257));
              v257 = (unsigned int)(v257 + 8);
              v255[2] = _mm_slli_epi64(v259, 0xCu);
              v255[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v248 + 8 * v258)), 0xCu);
              v255 += 4;
            }
            while ( v256 < v253 - (((_BYTE)v253 - 1) & 7) );
            if ( v256 < v253 )
            {
LABEL_610:
              do
              {
                v260 = v256 + (unsigned int)v252;
                ++v256;
                v255 = (__m128i *)((char *)v255 + 8);
                v255[-1].m128i_i64[1] = *(_QWORD *)(v248 + 8 * v260) << 12;
              }
              while ( v256 < v253 );
            }
            if ( !v234 || (v261 = *v234) == 0 )
            {
              v261 = StorPortGetPhysicalAddress(a1, 0LL, v235, &v429);
              if ( v234 )
                *v234 = v261;
            }
            v404[4] = v261;
          }
        }
        v238 = 0;
      }
      else
      {
        v238 = -1056964607;
      }
    }
    else
    {
      v238 = -1056964607;
    }
    v6 = v400;
LABEL_401:
    if ( v238 != -1056964605 )
      goto LABEL_448;
    if ( v394 <= 0x1000
      || (v262 = v399, v263 = 0LL, v394 = 4096, v409 = 0LL, v423 = 0LL, !*((_QWORD *)v399 + 4))
      || !*((_DWORD *)v399 + 10) )
    {
LABEL_566:
      v214 = v396;
      goto LABEL_567;
    }
    v264 = 0LL;
    v265 = v405;
    v266 = (((((_WORD)v405 + *((_WORD *)v399 + 22) - *((_WORD *)v399 + 4)) & 0xFFFu) + 4095) >> 12) + 1;
    if ( v266 > 2 )
    {
      v267 = *(_QWORD *)(v6 + 192);
      if ( v267 )
        goto LABEL_409;
      if ( *(_QWORD *)(v6 + 200) )
      {
        v267 = _InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
LABEL_409:
        v409 = v267;
        *(_QWORD *)(v6 + 192) = *(_QWORD *)(v267 + 24);
        *(_QWORD *)(v267 + 24) = 0LL;
      }
      else
      {
        v390 = (__int64 *)&v423;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL) )
          goto LABEL_566;
        v390 = &v409;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL) )
        {
          StorPortExtendedFunction(1LL, a1, v423, v268);
          v214 = v396;
LABEL_567:
          v377 = v395;
          *(_DWORD *)(32LL * (unsigned __int16)v395 + *(_QWORD *)(v6 + 32)) = 0;
          *(_QWORD *)(32LL * v377 + *(_QWORD *)(v6 + 32) + 16) = 0LL;
          v378 = *(_WORD *)(v6 + 52);
          *(_WORD *)(v6 + 56) = v377;
          if ( !v378 )
            v378 = *(_WORD *)(a1 + 326);
          *(_WORD *)(v6 + 52) = v378 - 1;
          StorPortNotification(4100LL, a1, v432);
          StorPortNotification(0x2000LL, a1, v214);
          v390 = (__int64 *)v432;
          StorPortExtendedFunction(93LL, a1, 1LL, v6 + 64);
          v108 = v393;
          v123 = HIWORD(v393);
          goto LABEL_572;
        }
        *(_QWORD *)v409 = v423;
        *(_QWORD *)(v409 + 8) = 0LL;
        *(_DWORD *)(v409 + 16) = 512;
        *(_QWORD *)(v409 + 24) = 0LL;
      }
      v269 = v409;
      v270 = *(_DWORD *)(v409 + 16);
      if ( (unsigned int)(v270 - 1) > 0x1FE )
      {
        v272 = *(_QWORD *)v409;
        v273 = 4096LL;
LABEL_418:
        sub_140032C80(v272, 0LL, v273);
        v269 = v409;
      }
      else
      {
        v271 = (unsigned int)(8 * v270) >> 2;
        if ( v271 )
        {
          v272 = *(_QWORD *)v409;
          v273 = 4LL * v271;
          goto LABEL_418;
        }
      }
      v262 = v399;
      *(_DWORD *)(v269 + 16) = v266 - 1;
      v274 = (__m128i **)v409;
      v263 = (__int64 *)(v409 + 8);
      *(_QWORD *)(v396 + 8) = v409;
      v264 = *v274;
      v423 = *v274;
    }
    v275 = v265 + *((_DWORD *)v262 + 11) - *((_DWORD *)v262 + 2);
    v276 = *((_DWORD *)v262 + 10);
    v277 = *((_QWORD *)v262 + 4);
    v278 = v275 & 0xFFF;
    v279 = *(__int64 **)(*(_QWORD *)(v6 + 24) + 16LL * (unsigned __int16)v398);
    v280 = ((v278 + 4095) >> 12) + 1;
    v404 = v279;
    if ( v275 < 0x1000 )
      v278 = v275;
    v281 = v275 >> 12;
    if ( v275 < 0x1000 )
      v281 = 0LL;
    if ( (unsigned int)v281 + v280 <= v276 )
    {
      v279[3] = v278 + (*(_QWORD *)(v277 + 8 * v281) << 12);
      if ( v280 != 1 )
      {
        if ( v280 == 2 )
        {
          v279[4] = *(_QWORD *)(v277 + 8LL * (unsigned int)(v281 + 1)) << 12;
          if ( v264 )
          {
            if ( !v263 )
            {
              sub_140032C80(v264, 0LL, 4096LL);
              v279 = v404;
            }
            v264->m128i_i64[0] = v279[4];
          }
        }
        else
        {
          v428 = 0;
          if ( !v263 )
            sub_140032C80(v264, 0LL, 4096LL);
          v282 = v280 - 1;
          v283 = v264;
          v284 = 1;
          if ( v280 > 1 )
          {
            if ( v282 < 8 )
              goto LABEL_611;
            v285 = v280 - 1;
            v401 = (__int64 *)(v277 + 8LL * (unsigned int)(v281 + 1));
            if ( (unsigned __int64)&v264->m128i_u64[1] <= v277 + 8 * (unsigned __int64)(unsigned int)(v285 + v281)
              && (char *)v264 + 8 * v285 >= (char *)v401 )
            {
              goto LABEL_611;
            }
            v286 = (unsigned int)(v281 + 5);
            do
            {
              v284 += 8;
              *v283 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v277 + 8LL * (unsigned int)(v286 - 4))), 0xCu);
              v287 = (unsigned int)(v286 + 2);
              v283[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v277 + 8LL * (unsigned int)(v286 - 2))), 0xCu);
              v288 = _mm_loadu_si128((const __m128i *)(v277 + 8 * v286));
              v286 = (unsigned int)(v286 + 8);
              v283[2] = _mm_slli_epi64(v288, 0xCu);
              v283[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v277 + 8 * v287)), 0xCu);
              v283 += 4;
            }
            while ( v284 < v280 - (v282 & 7) );
            if ( v284 < v280 )
            {
LABEL_611:
              do
              {
                v289 = (unsigned int)v281 + v284++;
                v283 = (__m128i *)((char *)v283 + 8);
                v283[-1].m128i_i64[1] = *(_QWORD *)(v277 + 8 * v289) << 12;
              }
              while ( v284 < v280 );
            }
          }
          if ( !v263 || (v290 = *v263) == 0 )
          {
            v290 = StorPortGetPhysicalAddress(a1, 0LL, v264, &v428);
            if ( v263 )
              *v263 = v290;
          }
          v404[4] = v290;
        }
      }
      v238 = 0;
    }
    else
    {
      v238 = -1056964607;
    }
LABEL_448:
    v6 = v400;
    if ( v238 )
      goto LABEL_566;
    v108 = v398;
    v291 = (__int64)v399;
    v292 = v396;
    v293 = *(unsigned __int8 *)(v396 + 3);
    v294 = *(_QWORD *)(*(_QWORD *)(v400 + 24) + 16LL * (unsigned __int16)v398);
    if ( (*((_DWORD *)v399 + 14) & 0xF) != 0 )
    {
      *(_BYTE *)v294 = 1;
      if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 && *(_BYTE *)(a1 + 3729) == (_BYTE)v293 )
      {
        v295 = *(unsigned __int16 *)(a1 + 3732);
        if ( (_WORD)v295 )
        {
          if ( (*(_DWORD *)(v291 + 56) & 0x80u) != 0 )
          {
            v296 = *(_DWORD *)(v291 + 20);
            if ( v296 - 1 <= 0xFFFE && v296 <= v295 && (_WORD)v296 )
            {
              v297 = *(_DWORD *)(v294 + 48) & 0xFF1FFFFF;
              *(_WORD *)(v294 + 54) = v296;
              *(_DWORD *)(v294 + 48) = v297 | 0x100000;
            }
          }
        }
      }
    }
    else
    {
      *(_BYTE *)v294 = 2;
    }
    *(_DWORD *)v294 &= 0xFFFFFCFF;
    v298 = v394;
    *(_DWORD *)(v294 + 4) = v397;
    v299 = v405;
    *(_QWORD *)(v294 + 16) = 0LL;
    v300 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v293 + 1672) + 52LL);
    *(_QWORD *)(v294 + 40) = v299 / v300;
    *(_WORD *)(v294 + 48) = ((unsigned int)v300 + v298 - 1) / (unsigned int)v300 - 1;
    *(_DWORD *)(v294 + 48) &= 0xC3FFFFFF;
    v301 = *(_DWORD *)(v291 + 56) & 0x20;
    LODWORD(v299) = *(_DWORD *)(v294 + 48) & 0x3FFFFFFF;
    *(_BYTE *)(v294 + 52) = 0;
    *(_QWORD *)(v294 + 56) = 0LL;
    *(_DWORD *)(v294 + 48) = v299 | (v301 << 25);
    *(_DWORD *)(v292 + 4) -= v298;
    sub_14000B210(a1, 0LL, *(_DWORD **)(*(_QWORD *)(v6 + 24) + 16LL * v108));
    if ( (*(_BYTE *)(a1 + 21) & 0x10) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0 )
    {
      StorPortExtendedFunction(47LL, a1, 0LL, &v416);
      v302 = v395;
      *(_QWORD *)(32LL * (unsigned __int16)v395 + *(_QWORD *)(v6 + 32) + 8) = v416;
      v303 = *(_QWORD *)(v6 + 40);
      if ( v303 )
      {
        v304 = 2LL * v302;
        *(_QWORD *)(v303 + 8 * v304) = 0LL;
        *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8 * v304 + 8) = 0LL;
      }
      v224 |= 0x20u;
    }
    else
    {
      v302 = v395;
    }
    *(_DWORD *)(32LL * v302 + *(_QWORD *)(v6 + 32)) = v224;
    _InterlockedIncrement16((volatile signed __int16 *)(v6 + 136));
    ++v406;
    v123 = v302;
    v11 = *(_DWORD *)(v292 + 4) == 0;
    LOWORD(v393) = v108;
    HIWORD(v393) = v302;
    if ( !v11 )
    {
      while ( 1 )
      {
        v414 = 0LL;
        v390 = &v414;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 24LL, 1131247182LL) )
        {
          v108 = v393;
LABEL_571:
          v123 = HIWORD(v393);
          goto LABEL_572;
        }
        v305 = *(unsigned __int16 *)(v6 + 48);
        if ( (_WORD)v305 )
        {
          v306 = *(_WORD *)(a1 + 326);
          v308 = *(unsigned __int16 *)(a1 + 328);
          v312 = 208 * v305;
          v313 = *(_QWORD *)(a1 + 936);
          v307 = (_WORD *)(v312 + v313 - 156);
          v309 = (unsigned __int16 *)(v312 + v313 - 152);
          v310 = (__int64 *)(v312 + v313 - 176);
          v311 = (unsigned __int16 *)(v312 + v313 - 154);
        }
        else
        {
          v306 = *(_WORD *)(a1 + 324);
          v307 = (_WORD *)(a1 + 388);
          v308 = v306;
          v309 = (unsigned __int16 *)(a1 + 392);
          v310 = (__int64 *)(a1 + 368);
          v311 = (unsigned __int16 *)(a1 + 390);
        }
        v314 = (unsigned __int16)*v307;
        v315 = *v311;
        v394 = v314;
        if ( v315 == (_DWORD)v314 + 1 || !(_WORD)v315 && (_DWORD)v314 == v306 - 1 )
          goto LABEL_565;
        *v307 = v314 + 1;
        if ( (_WORD)v314 + 1 == v306 )
          *v307 = 0;
        v316 = *v309;
        if ( *v309 >= (unsigned __int16)v308 )
        {
LABEL_478:
          v318 = 0;
          if ( !*v309 )
          {
LABEL_482:
            if ( *v307 )
              v321 = *v307 - 1;
            else
              v321 = v306 - 1;
            *v307 = v321;
LABEL_565:
            StorPortExtendedFunction(1LL, a1, v414, v308);
            v108 = v393;
            v123 = HIWORD(v393);
            goto LABEL_572;
          }
          v319 = *v310;
          while ( 1 )
          {
            v320 = v318 + 1;
            if ( !*(_QWORD *)(32LL * v318 + v319 + 16) )
              break;
            ++v318;
            if ( v320 >= *v309 )
              goto LABEL_482;
          }
          v322 = v318;
          v323 = v320 == (unsigned __int16)v308;
          *v309 = v320;
        }
        else
        {
          while ( 1 )
          {
            v317 = v316 + 1;
            if ( !*(_QWORD *)(32LL * v316 + *v310 + 16) )
              break;
            ++v316;
            if ( v317 >= (unsigned __int16)v308 )
              goto LABEL_478;
          }
          v322 = v316;
          v323 = v317 == (unsigned __int16)v308;
          *v309 = v317;
        }
        LODWORD(v395) = v322;
        if ( v323 )
          *v309 = 0;
        v324 = 32LL * (unsigned __int16)v322;
        *(_BYTE *)(v414 + 3) = *(_BYTE *)(v292 + 3);
        *(_WORD *)v414 = 0;
        *(_BYTE *)(v414 + 2) = 0;
        *(_DWORD *)(v414 + 4) = 0;
        *(_QWORD *)(v414 + 8) = 0LL;
        *(_QWORD *)(v414 + 16) = v292;
        *(_QWORD *)(v324 + *(_QWORD *)(v6 + 32) + 16) = v414;
        v325 = v408;
        *(_WORD *)(v324 + *(_QWORD *)(v6 + 32) + 24) = v314;
        *(_DWORD *)(v324 + *(_QWORD *)(v6 + 32) + 4) = v325;
        v326 = (*(unsigned __int8 *)(v292 + 3) << 8) | 0xC8;
        v327 = *(_OWORD **)(*(_QWORD *)(v6 + 24) + 16 * v314);
        *v327 = 0LL;
        v327[1] = 0LL;
        v327[2] = 0LL;
        v327[3] = 0LL;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 16 * v314) + 2LL) = v322;
        v328 = *(_DWORD *)(v292 + 4);
        v329 = *(_DWORD *)(a1 + 208);
        v330 = *(_QWORD *)(v291 + 8);
        v331 = v330 + *(_DWORD *)(v291 + 16) - v328;
        v405 = v331;
        if ( v328 > 0x200000 )
          v328 = 0x200000;
        v332 = *(_DWORD *)(a1 + 32);
        if ( v328 <= v329 )
          v329 = v328;
        v398 = v329;
        if ( v332 )
        {
          if ( v329 > v332 )
            v329 = v332;
          v398 = v329;
        }
        if ( v403 )
        {
          v333 = v331 % v403;
          if ( v331 / v403 != (v331 + v329) / v403 )
          {
            v329 = v403 - v333;
            v398 = v403 - v333;
          }
        }
        v334 = v414;
        v410 = 0LL;
        v335 = 0LL;
        v424 = 0LL;
        v404 = 0LL;
        if ( !v414 || !*(_QWORD *)(v291 + 32) || !*(_DWORD *)(v291 + 40) || !v329 )
        {
LABEL_560:
          v375 = v395;
          *(_DWORD *)(32LL * (unsigned __int16)v395 + *(_QWORD *)(v6 + 32)) = 0;
          *(_QWORD *)(32LL * v375 + *(_QWORD *)(v6 + 32) + 16) = 0LL;
          v376 = *(_WORD *)(v6 + 52);
          *(_WORD *)(v6 + 56) = v375;
          if ( !v376 )
            v376 = *(_WORD *)(a1 + 326);
          *(_WORD *)(v6 + 52) = v376 - 1;
          StorPortExtendedFunction(1LL, a1, v414, v335);
          v108 = v393;
          v123 = HIWORD(v393);
          goto LABEL_572;
        }
        v336 = ((_WORD)v331 + (unsigned __int16)*(_DWORD *)(v291 + 44) - (_WORD)v330) & 0xFFF;
        v337 = 0LL;
        v338 = (v329 >> 12) + ((v336 + (v329 & 0xFFF) + 4095) >> 12);
        if ( v338 > 2 )
          break;
LABEL_517:
        v347 = v331 + *((_DWORD *)v399 + 11) - *((_DWORD *)v399 + 2);
        v348 = *((_DWORD *)v399 + 10);
        v349 = *((_QWORD *)v399 + 4);
        v350 = ((_WORD)v331 + *((_WORD *)v399 + 22) - *((_WORD *)v399 + 4)) & 0xFFF;
        v351 = *(__int64 **)(*(_QWORD *)(v400 + 24) + 16LL * (unsigned __int16)v394);
        v352 = (v350 + (v329 & 0xFFF) + 4095) >> 12;
        v401 = v351;
        if ( v347 < 0x1000 )
          v350 = v347;
        v353 = v347 >> 12;
        if ( v347 < 0x1000 )
          v353 = 0LL;
        v354 = (v329 >> 12) + v352;
        if ( v354 )
        {
          if ( (unsigned int)v353 + v354 <= v348 )
          {
            v351[3] = v350 + (*(_QWORD *)(v349 + 8 * v353) << 12);
            if ( v354 != 1 )
            {
              if ( v354 == 2 )
              {
                v351[4] = *(_QWORD *)(v349 + 8LL * (unsigned int)(v353 + 1)) << 12;
                if ( v337 )
                {
                  if ( !v335 )
                  {
                    sub_140032C80(v337, 0LL, 4096LL);
                    v351 = v401;
                  }
                  v337->m128i_i64[0] = v351[4];
                }
              }
              else
              {
                v427 = 0;
                if ( !v335 )
                  sub_140032C80(v337, 0LL, 4096LL);
                v356 = v354 - 1;
                v357 = v337;
                LODWORD(v335) = 1;
                if ( (unsigned int)v356 < 8
                  || (unsigned __int64)&v337->m128i_u64[1] <= v349 + 8 * (unsigned __int64)(unsigned int)(v353 + v356)
                  && (unsigned __int64)v337 + 8 * v356 >= v349 + 8 * (unsigned __int64)(unsigned int)(v353 + 1) )
                {
                  goto LABEL_612;
                }
                v358 = (unsigned int)(v353 + 5);
                do
                {
                  v335 = (unsigned int)(v335 + 8);
                  *v357 = _mm_slli_epi64(
                            _mm_loadu_si128((const __m128i *)(v349 + 8LL * (unsigned int)(v358 - 4))),
                            0xCu);
                  v359 = (unsigned int)(v358 + 2);
                  v357[1] = _mm_slli_epi64(
                              _mm_loadu_si128((const __m128i *)(v349 + 8LL * (unsigned int)(v358 - 2))),
                              0xCu);
                  v360 = _mm_loadu_si128((const __m128i *)(v349 + 8 * v358));
                  v358 = (unsigned int)(v358 + 8);
                  v357[2] = _mm_slli_epi64(v360, 0xCu);
                  v357[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v349 + 8 * v359)), 0xCu);
                  v357 += 4;
                }
                while ( (unsigned int)v335 < v354 - (((_BYTE)v354 - 1) & 7) );
                if ( (unsigned int)v335 < v354 )
                {
LABEL_612:
                  do
                  {
                    v361 = (unsigned int)(v353 + v335);
                    v335 = (unsigned int)(v335 + 1);
                    v357 = (__m128i *)((char *)v357 + 8);
                    v357[-1].m128i_i64[1] = *(_QWORD *)(v349 + 8 * v361) << 12;
                  }
                  while ( (unsigned int)v335 < v354 );
                }
                if ( !v404 || (v362 = *v404) == 0 )
                {
                  v362 = StorPortGetPhysicalAddress(a1, 0LL, v337, &v427);
                  if ( v404 )
                    *v404 = v362;
                }
                v329 = v398;
                v401[4] = v362;
              }
            }
            v355 = 0;
          }
          else
          {
            v355 = -1056964607;
          }
        }
        else
        {
          v355 = -1056964607;
        }
        v6 = v400;
        if ( v355 )
          goto LABEL_560;
        v291 = (__int64)v399;
        v363 = *(unsigned __int8 *)(v396 + 3);
        v364 = *(_QWORD *)(*(_QWORD *)(v400 + 24) + 16LL * (unsigned __int16)v394);
        if ( (*((_DWORD *)v399 + 14) & 0xF) != 0 )
        {
          v365 = *(unsigned __int8 *)(v396 + 3);
          *(_BYTE *)v364 = 1;
          v366 = sub_14000BEE0(a1, 0LL, v291, v365);
          if ( v366 )
          {
            v367 = *(_DWORD *)(v364 + 48) & 0xFF1FFFFF;
            *(_WORD *)(v364 + 54) = v366;
            *(_DWORD *)(v364 + 48) = v367 | 0x100000;
          }
        }
        else
        {
          *(_BYTE *)v364 = 2;
        }
        *(_DWORD *)v364 &= 0xFFFFFCFF;
        *(_DWORD *)(v364 + 4) = v397;
        *(_QWORD *)(v364 + 16) = 0LL;
        v368 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v363 + 1672) + 52LL);
        *(_QWORD *)(v364 + 40) = v405 / v368;
        *(_WORD *)(v364 + 48) = (v329 + v368 - 1) / v368 - 1;
        v369 = *(_DWORD *)(v364 + 48) & 0xC3FFFFFF;
        *(_DWORD *)(v364 + 48) = v369;
        v370 = *(_DWORD *)(v291 + 56) & 0xFFFFFFE0;
        *(_BYTE *)(v364 + 52) = 0;
        *(_QWORD *)(v364 + 56) = 0LL;
        *(_DWORD *)(v364 + 48) = (v369 & 0x3FFFFFFF ^ (v370 << 25)) & 0x7FFFFFFF;
        v108 = v394;
        sub_14000B210(a1, 0LL, *(_DWORD **)(*(_QWORD *)(v6 + 24) + 16LL * (unsigned __int16)v394));
        if ( (*(_BYTE *)(a1 + 21) & 0x10) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0 )
        {
          StorPortExtendedFunction(47LL, a1, 0LL, &v416);
          v371 = v395;
          *(_QWORD *)(32LL * (unsigned __int16)v395 + *(_QWORD *)(v6 + 32) + 8) = v416;
          v372 = *(_QWORD *)(v6 + 40);
          if ( v372 )
          {
            v373 = 2LL * v371;
            *(_QWORD *)(v372 + 8 * v373) = 0LL;
            *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8 * v373 + 8) = 0LL;
          }
          v326 |= 0x20u;
        }
        else
        {
          v371 = v395;
        }
        v374 = v396;
        *(_DWORD *)(v396 + 4) -= v329;
        v292 = v374;
        ++*(_WORD *)v374;
        *(_DWORD *)(32LL * v371 + *(_QWORD *)(v6 + 32)) = v326;
        _InterlockedIncrement16((volatile signed __int16 *)(v6 + 136));
        LOWORD(v393) = v108;
        if ( !*(_DWORD *)(v374 + 4) )
          goto LABEL_571;
      }
      v339 = *(_QWORD *)(v6 + 192);
      if ( v339 )
      {
LABEL_507:
        v410 = v339;
        *(_QWORD *)(v6 + 192) = *(_QWORD *)(v339 + 24);
        *(_QWORD *)(v339 + 24) = 0LL;
      }
      else
      {
        if ( *(_QWORD *)(v6 + 200) )
        {
          v339 = _InterlockedExchange64((volatile __int64 *)(v6 + 200), 0LL);
          goto LABEL_507;
        }
        v390 = (__int64 *)&v424;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL) )
          goto LABEL_560;
        v390 = &v410;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL) )
        {
          StorPortExtendedFunction(1LL, a1, v424, v340);
          goto LABEL_560;
        }
        *(_QWORD *)v410 = v424;
        *(_QWORD *)(v410 + 8) = 0LL;
        *(_DWORD *)(v410 + 16) = 512;
        *(_QWORD *)(v410 + 24) = 0LL;
      }
      v341 = v410;
      v342 = *(_DWORD *)(v410 + 16);
      if ( (unsigned int)(v342 - 1) > 0x1FE )
      {
        v344 = *(_QWORD *)v410;
        v345 = 4096LL;
LABEL_515:
        sub_140032C80(v344, 0LL, v345);
        v341 = v410;
      }
      else
      {
        v343 = (unsigned int)(8 * v342) >> 2;
        if ( v343 )
        {
          v344 = *(_QWORD *)v410;
          v345 = 4LL * v343;
          goto LABEL_515;
        }
      }
      LODWORD(v331) = v405;
      *(_DWORD *)(v341 + 16) = v338 - 1;
      v346 = (_QWORD **)v410;
      *(_QWORD *)(v334 + 8) = v410;
      v337 = (__m128i *)*v346;
      v335 = (unsigned __int64)(v346 + 1);
      v424 = (__m128i *)*v346;
      v404 = (__int64 *)(v346 + 1);
      goto LABEL_517;
    }
LABEL_572:
    if ( !*(_QWORD *)(v6 + 144) )
      goto LABEL_575;
  }
LABEL_315:
  v209 = 0;
  if ( *v200 )
  {
    v210 = *v201;
    while ( 1 )
    {
      v211 = v209 + 1;
      if ( !*(_QWORD *)(32LL * v209 + v210 + 16) )
        break;
      ++v209;
      if ( v211 >= *v200 )
        goto LABEL_43;
    }
    v212 = v209;
    v213 = v211 == v199;
    *v200 = v211;
    goto LABEL_322;
  }
LABEL_43:
  if ( *v14 )
    --*v14;
  else
    *v14 = v13 - 1;
LABEL_574:
  v108 = v393;
  v123 = HIWORD(v393);
LABEL_575:
  v9 = v406;
  if ( !v406 )
    goto LABEL_581;
  v379 = 0;
  if ( (unsigned __int16)(v108 + 1) != *(unsigned __int16 *)(a1 + 326) )
    v379 = (unsigned __int16)(v108 + 1);
  **(_DWORD **)(v6 + 16) = v379;
  _InterlockedOr(v389, 0);
  if ( (*(_DWORD *)(a1 + 108) & 2) == 0 || !*(_QWORD *)(v6 + 40) )
  {
LABEL_581:
    v8 = v418;
LABEL_582:
    result = StorPortNotification(4100LL, a1, v432);
    if ( v9 )
      goto LABEL_583;
    goto LABEL_590;
  }
  StorPortExtendedFunction(47LL, a1, 0LL, &v416);
  *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL * v123) = v416;
  result = StorPortNotification(4100LL, a1, v432);
  v8 = v418;
LABEL_583:
  if ( *(_BYTE *)(v8 + 248) )
  {
    LODWORD(v417) = 0;
    StorPortExtendedFunction(92LL, a1, &v417, v380);
    v381 = *(_QWORD *)(v8 + 256);
    if ( v381 )
    {
      v385 = -10LL * *(unsigned int *)(v8 + 252);
      v402 = 0;
      v386 = *(_QWORD *)(v381 + 8LL * (unsigned int)v417);
      v392 = (__int64)&v402;
      v391 = 0LL;
      v390 = 0LL;
      result = StorPortExtendedFunction(89LL, a1, v386, v385);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3764) & 0x10) != 0 )
      {
        v382 = *(_QWORD *)(a1 + 264);
        v383 = *(_QWORD *)(v382 + 72LL * (unsigned int)v417 + 8);
        if ( v383 )
        {
          LODWORD(v400) = 0;
          LOWORD(v400) = *(_WORD *)(v382 + 72LL * (unsigned int)v417 + 16);
          _BitScanForward64(&v384, v383);
          *(_DWORD *)((char *)&v400 + 2) = v384;
          StorPortNotification(4107LL, a1, v8 + 264);
        }
      }
      v391 = (__int64)&v418;
      v390 = 0LL;
      LODWORD(v418) = 0;
      result = StorPortNotification(4098LL, a1, v8 + 264);
    }
  }
LABEL_590:
  if ( byte_140042130 )
  {
    if ( (v9 || *(_QWORD *)(v6 + 144) || *(_QWORD *)(v6 + 160) || *(_QWORD *)(v6 + 176)) && *(_QWORD *)(a1 + 4264) )
    {
      result = *(unsigned int *)(a1 + 4272);
      v387 = (_DWORD)result == 0;
LABEL_602:
      if ( v387 && !_InterlockedExchange((volatile __int32 *)(a1 + 4272), 1) )
      {
        v388 = *(_QWORD *)(a1 + 4264);
        v392 = 250000LL;
        v391 = 1000000LL;
        v390 = 0LL;
        return StorPortExtendedFunction(33LL, a1, v388, sub_140011F70);
      }
    }
  }
  else if ( (v9 || *(_QWORD *)(v6 + 144) || *(_QWORD *)(v6 + 160)) && *(_QWORD *)(a1 + 4264) )
  {
    v387 = *(_DWORD *)(a1 + 4272) == 0;
    goto LABEL_602;
  }
  return result;
}
