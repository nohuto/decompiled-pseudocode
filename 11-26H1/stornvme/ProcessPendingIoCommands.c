/*
 * XREFs of ProcessPendingIoCommands @ 0x14002C2D0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 *     IoTimeoutCallback @ 0x140023190 (IoTimeoutCallback.c)
 *     ProcessForwardIoControl @ 0x14002B318 (ProcessForwardIoControl.c)
 *     ProcessIrpCommand @ 0x14002B710 (ProcessIrpCommand.c)
 *     ResumeIrpCommands @ 0x14002DC2C (ResumeIrpCommands.c)
 * Callees:
 *     ProcessCommandTrace @ 0x14000F260 (ProcessCommandTrace.c)
 *     GetStreamId @ 0x14000F2D0 (GetStreamId.c)
 *     AssignCommandId @ 0x14000F600 (AssignCommandId.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall ProcessPendingIoCommands(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v9; // r15d
  unsigned __int8 v10; // al
  __int64 v11; // r8
  __int64 v12; // r12
  __int64 v13; // rcx
  unsigned int v14; // r15d
  __int64 v15; // rcx
  int v16; // r9d
  _QWORD *v17; // r8
  int v18; // eax
  int v19; // edx
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // r10
  unsigned int v26; // edx
  unsigned int v27; // edi
  __int64 v28; // r11
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // r13d
  unsigned int v32; // ecx
  __int64 v33; // r9
  __int64 *v34; // r13
  __m128i *v35; // r12
  unsigned int v36; // r15d
  __int64 v37; // rcx
  int v38; // edi
  __int64 v39; // r9
  unsigned int v40; // ecx
  __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // eax
  _QWORD *v44; // rcx
  size_t v45; // r8
  __m128i **v46; // rax
  __int64 v47; // r15
  unsigned int v48; // r8d
  unsigned int v49; // edx
  __m128i *v50; // r11
  __int64 v51; // r9
  unsigned int v52; // edi
  __int64 v53; // r10
  __m128i *v54; // r8
  unsigned int v55; // r9d
  __int64 v56; // r10
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 PhysicalAddress; // rax
  bool v61; // zf
  int v62; // r12d
  __int64 *v63; // r13
  __m128i *v64; // r12
  int v65; // edx
  unsigned int v66; // r15d
  __int64 v67; // rcx
  __int64 v68; // r13
  __int64 v69; // rdi
  __int64 v70; // r15
  __int64 v71; // r9
  __int64 v72; // rcx
  unsigned int v73; // eax
  unsigned int v74; // eax
  _QWORD *v75; // rcx
  size_t v76; // r8
  __m128i **v77; // rax
  __int64 v78; // r15
  __int64 v79; // rax
  unsigned int v80; // edx
  __m128i *v81; // r11
  unsigned int v82; // r8d
  unsigned int v83; // edi
  __int64 v84; // r9
  unsigned int v85; // r10d
  __m128i *v86; // r8
  unsigned int v87; // r9d
  __int64 v88; // rdx
  unsigned int v89; // edx
  __int64 v90; // r10
  __int64 v91; // rax
  __m128i v92; // xmm0
  __int64 v93; // rax
  __int64 v94; // rax
  int v95; // r9d
  __int16 StreamId; // ax
  unsigned int v97; // ecx
  __int64 v98; // rax
  unsigned int v99; // ecx
  int v100; // ecx
  unsigned __int16 v101; // di
  unsigned int v102; // r8d
  __int64 v103; // rax
  __int64 v104; // rcx
  __m128i *v105; // r12
  unsigned __int16 v106; // ax
  __int64 v107; // r9
  int v108; // r8d
  unsigned int v109; // r15d
  __int64 v110; // rdx
  __int64 v111; // rdi
  int v112; // ebx
  __int64 v113; // r8
  unsigned int v114; // ecx
  __int64 v115; // r9
  __int64 v116; // r11
  __m128i *v117; // rdx
  unsigned int v118; // eax
  __int128 v119; // rtt
  __int64 v120; // r10
  __int64 v121; // r15
  __int64 *v122; // r13
  unsigned int v123; // edi
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // r9
  __m128i *v127; // rcx
  unsigned int v128; // eax
  unsigned int v129; // eax
  void *v130; // rcx
  size_t v131; // r8
  __m128i *v132; // rax
  __int64 v133; // rax
  unsigned int v134; // edx
  unsigned __int64 v135; // r11
  unsigned int v136; // r10d
  unsigned int v137; // r15d
  unsigned int v138; // edi
  int v139; // eax
  __int64 v140; // r10
  __int64 v141; // r8
  __m128i *v142; // r10
  unsigned int v143; // r9d
  __int64 v144; // r8
  __int64 v145; // rax
  __m128i v146; // xmm0
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // r12
  __int64 v150; // r15
  __int64 v151; // rdi
  int v152; // r9d
  __int16 v153; // ax
  unsigned int v154; // ecx
  unsigned int v155; // ecx
  int v156; // ecx
  unsigned int v157; // r8d
  __int64 v158; // rax
  __int64 v159; // rcx
  unsigned int v160; // r8d
  __int16 v161; // ax
  unsigned int v162; // edx
  __int16 v163; // ax
  int v164; // edx
  __int64 v165; // r9
  __int64 v166; // rcx
  __int64 v167; // rax
  unsigned __int64 v168; // rdx
  unsigned __int64 v169; // rax
  __int64 v170; // r9
  __int64 v171; // r8
  signed __int32 v172[8]; // [rsp+0h] [rbp-100h] BYREF
  __m128i **v173; // [rsp+20h] [rbp-E0h]
  __int64 v174; // [rsp+28h] [rbp-D8h]
  __int64 v175; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v176; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v177; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v178; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v179; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v180; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v181[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v182; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int16 v183; // [rsp+68h] [rbp-98h] BYREF
  __int64 v184; // [rsp+70h] [rbp-90h] BYREF
  __m128i *v185; // [rsp+78h] [rbp-88h] BYREF
  __m128i *v186; // [rsp+80h] [rbp-80h] BYREF
  __m128i *v187; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 v188; // [rsp+90h] [rbp-70h]
  __int64 v189; // [rsp+98h] [rbp-68h]
  unsigned int v190; // [rsp+A0h] [rbp-60h]
  int v191; // [rsp+A4h] [rbp-5Ch]
  int v192; // [rsp+A8h] [rbp-58h]
  __int64 v193; // [rsp+B0h] [rbp-50h]
  __int64 v194; // [rsp+B8h] [rbp-48h] BYREF
  int v195; // [rsp+C0h] [rbp-40h]
  __int64 v196; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v197; // [rsp+D0h] [rbp-30h]
  _OWORD v198[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v199; // [rsp+F8h] [rbp-8h]
  __int64 *v200; // [rsp+100h] [rbp+0h]
  __int64 v201; // [rsp+108h] [rbp+8h]
  _QWORD v202[8]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v203; // [rsp+150h] [rbp+50h] BYREF

  result = *(unsigned __int16 *)(a2 + 58);
  memset(v198, 0, sizeof(v198));
  v5 = a3;
  v199 = a4;
  v6 = *(_QWORD *)(a1 + 944) + 392 * result;
  v201 = a3;
  v196 = v6;
  v9 = 0;
  v194 = 0LL;
  v181[0] = 0;
  v183 = 0;
  v192 = 0;
  v176 = 0;
  v188 = 0;
  if ( a3 )
  {
    v173 = (__m128i **)v198;
    StorPortExtendedFunction(93LL, a1, 1LL, a2 + 64);
    if ( (*(_DWORD *)(a1 + 24) & 0x10) != 0 )
    {
      v10 = *(_BYTE *)(v5 + 2);
      if ( v10 >= 4u )
      {
        StorPortNotification(4100LL, a1, v198);
        result = StorPortNotification(0x2000LL, a1, v5);
      }
      else
      {
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_BYTE *)(v5 + 2) = v10 + 1;
        *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 4284);
        if ( *(_QWORD *)(a2 + 160) )
          *(_QWORD *)(*(_QWORD *)(a2 + 168) + 8LL) = v5;
        else
          *(_QWORD *)(a2 + 160) = v5;
        *(_QWORD *)(a2 + 168) = v5;
        result = StorPortNotification(4100LL, a1, v198);
      }
      goto LABEL_12;
    }
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 4284);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v5 + 3) + 1672) + 20LL) & 0x200) != 0 )
    {
      if ( *(_QWORD *)(a2 + 176) )
        *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v5;
      else
        *(_QWORD *)(a2 + 176) = v5;
      *(_QWORD *)(a2 + 184) = v5;
    }
    else
    {
      if ( *(_QWORD *)(a2 + 144) )
        *(_QWORD *)(*(_QWORD *)(a2 + 152) + 8LL) = v5;
      else
        *(_QWORD *)(a2 + 144) = v5;
      *(_QWORD *)(a2 + 152) = v5;
    }
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 144)
      || *(unsigned __int16 *)(a2 + 54) == *(unsigned __int16 *)(a2 + 52) + 1
      || (*(_DWORD *)(a1 + 24) & 0x110) != 0 )
    {
      goto LABEL_12;
    }
    v173 = (__m128i **)v198;
    StorPortExtendedFunction(93LL, a1, 1LL, a2 + 64);
  }
  if ( !*(_QWORD *)(a2 + 144) )
  {
LABEL_267:
    result = StorPortNotification(4100LL, a1, v198);
    if ( v9 )
      goto LABEL_268;
LABEL_12:
    if ( *(_QWORD *)(a2 + 144) || *(_QWORD *)(a2 + 160) || *(_QWORD *)(a2 + 176) )
      goto LABEL_15;
    return result;
  }
  while ( (*(_DWORD *)(a1 + 24) & 0x100) == 0 && AssignCommandId(a1, *(_WORD *)(a2 + 48), v181, &v183) )
  {
    v193 = *(_QWORD *)(a2 + 144);
    v12 = v193;
    memset(v202, 0, sizeof(v202));
    v203 = 0LL;
    v13 = *(unsigned __int8 *)(v193 + 3);
    v190 = 0;
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v13 + 1672) + 52LL);
    if ( (unsigned int)v13 < *(_DWORD *)(a1 + 224) && (_mm_lfence(), (v15 = *(_QWORD *)(a1 + 8 * v13 + 1672)) != 0) )
      v191 = *(_DWORD *)(v15 + 16);
    else
      v191 = 0;
    v16 = *(_DWORD *)(a1 + 4284);
    *(_QWORD *)(a2 + 144) = *(_QWORD *)(v193 + 8);
    v195 = v16;
    if ( !*(_QWORD *)(a2 + 144) )
      *(_QWORD *)(a2 + 152) = 0LL;
    *(_DWORD *)(v12 + 16) = 1;
    if ( v12 == v5 && v199 )
    {
      v17 = v199;
      v180 = v199;
    }
    else
    {
      LOWORD(v203) = 1;
      DWORD1(v203) = 4;
      BYTE10(v203) = *(_BYTE *)(v12 + 3);
      v202[0] = &v203;
      StorPortNotification(8193LL, a1, v12);
      v16 = v195;
      v17 = v202;
      v180 = v202;
    }
    v18 = *(_DWORD *)(a1 + 120);
    if ( v18 && v17[1] )
    {
      *((_DWORD *)v17 + 11) += v18;
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v12 + 3) + 1672) + 52LL);
      *((_DWORD *)v17 + 4) -= -v19 & (v19 + *(_DWORD *)(a1 + 120) - 1);
    }
    v20 = v181[0];
    v21 = v183;
    v22 = 2LL * v181[0];
    v23 = 32LL * v183;
    *(_QWORD *)(v23 + *(_QWORD *)(a2 + 32) + 16) = v12;
    *(_WORD *)(v23 + *(_QWORD *)(a2 + 32) + 24) = v20;
    *(_DWORD *)(v23 + *(_QWORD *)(a2 + 32) + 4) = v16;
    v24 = (*(unsigned __int8 *)(v12 + 3) << 8) | 0x48;
    memset(*(void **)(*(_QWORD *)(a2 + 24) + 8 * v22), 0, 0x40uLL);
    v25 = (__int64)v180;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v22) + 2LL) = v21;
    v26 = *(_DWORD *)(v12 + 4);
    v27 = *(_DWORD *)(a1 + 208);
    v28 = *(_QWORD *)(v25 + 8) + *(_DWORD *)(v25 + 16) - v26;
    v184 = v28;
    if ( v26 > 0x200000 )
      v26 = 0x200000;
    v29 = *(_DWORD *)(a1 + 32);
    if ( v26 <= v27 )
      v27 = v26;
    v178 = v27;
    if ( v29 )
    {
      if ( v27 > v29 )
        v27 = v29;
      v178 = v27;
    }
    v30 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v12 + 3) + 1672) + 92LL);
    if ( (_WORD)v30 )
    {
      v31 = v14 * v30;
    }
    else
    {
      v32 = *(_DWORD *)(a1 + 52);
      if ( v32 < v14 || v32 % v14 )
        goto LABEL_61;
      v31 = *(_DWORD *)(a1 + 52);
    }
    v190 = v31;
    if ( v31 )
    {
      v33 = v28 % v31;
      if ( v28 / v31 != (v28 + v27) / v31 )
      {
        v27 = v31 - v33;
        v178 = v31 - v33;
      }
    }
LABEL_61:
    *(_QWORD *)(v12 + 8) = 0LL;
    v34 = 0LL;
    v179 = 0LL;
    v185 = 0LL;
    if ( !*(_QWORD *)(v25 + 32) || !*(_DWORD *)(v25 + 40) || !v27 )
      goto LABEL_252;
    v35 = 0LL;
    v36 = (v27 >> 12)
        + (((((_WORD)v28 + *(_WORD *)(v25 + 44) - *(_WORD *)(v25 + 8)) & 0xFFF) + 4095 + (v27 & 0xFFF)) >> 12);
    if ( v36 <= 2 )
      goto LABEL_81;
    v37 = *(_QWORD *)(a2 + 192);
    if ( v37 )
      goto LABEL_68;
    if ( *(_QWORD *)(a2 + 200) )
    {
      v37 = _InterlockedExchange64((volatile __int64 *)(a2 + 200), 0LL);
LABEL_68:
      v179 = v37;
      *(_QWORD *)(a2 + 192) = *(_QWORD *)(v37 + 24);
      *(_QWORD *)(v37 + 24) = 0LL;
      goto LABEL_74;
    }
    v173 = &v185;
    v38 = StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL);
    if ( v38 )
    {
      v25 = (__int64)v180;
      goto LABEL_109;
    }
    v173 = (__m128i **)&v179;
    v38 = StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL);
    if ( v38 )
    {
      StorPortExtendedFunction(1LL, a1, v185, v39);
      v25 = (__int64)v180;
      v40 = v178;
      goto LABEL_110;
    }
    v25 = (__int64)v180;
    LOWORD(v27) = v178;
    LODWORD(v28) = v184;
    *(_QWORD *)v179 = v185;
    *(_QWORD *)(v179 + 8) = 0LL;
    *(_DWORD *)(v179 + 16) = 512;
    *(_QWORD *)(v179 + 24) = 0LL;
LABEL_74:
    v41 = v179;
    v42 = *(_DWORD *)(v179 + 16);
    if ( !v42 || v42 >= 0x200 )
    {
      v44 = *(_QWORD **)v179;
      v45 = 4096LL;
      goto LABEL_79;
    }
    v43 = (8 * v42) >> 2;
    if ( v43 )
    {
      v44 = *(_QWORD **)v179;
      v45 = 4LL * v43;
LABEL_79:
      memset(v44, 0, v45);
      LODWORD(v28) = v184;
      v25 = (__int64)v180;
      v41 = v179;
    }
    *(_DWORD *)(v41 + 16) = v36 - 1;
    v46 = (__m128i **)v179;
    v34 = (__int64 *)(v179 + 8);
    *(_QWORD *)(v193 + 8) = v179;
    v35 = *v46;
    v185 = *v46;
LABEL_81:
    v47 = 0LL;
    v48 = *(_DWORD *)(v25 + 40);
    v49 = v28 + *(_DWORD *)(v25 + 44) - *(_DWORD *)(v25 + 8);
    v50 = *(__m128i **)(v25 + 32);
    v51 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL * v181[0]);
    v187 = v50;
    v189 = v51;
    v40 = v178;
    v52 = (v178 >> 12) + (((v49 & 0xFFF) + 4095 + (v27 & 0xFFF)) >> 12);
    if ( v49 >= 0x1000 )
    {
      v47 = v49 >> 12;
      v49 += -4096 * v47;
    }
    if ( !v52 )
    {
      v38 = -1056964607;
      goto LABEL_110;
    }
    if ( (unsigned int)v47 + v52 > v48 )
    {
      v38 = -1056964607;
      goto LABEL_110;
    }
    *(_QWORD *)(v51 + 24) = v49 + (v50->m128i_i64[v47] << 12);
    if ( v52 != 1 )
    {
      if ( v52 == 2 )
      {
        *(_QWORD *)(v51 + 32) = v50->m128i_i64[(unsigned int)(v47 + 1)] << 12;
        if ( v35 )
        {
          if ( !v34 )
          {
            memset(v35, 0, 0x1000uLL);
            v25 = (__int64)v180;
            v51 = v189;
          }
          v35->m128i_i64[0] = *(_QWORD *)(v51 + 32);
        }
      }
      else
      {
        v177 = 0;
        if ( !v34 )
        {
          memset(v35, 0, 0x1000uLL);
          v50 = v187;
        }
        v53 = v52 - 1;
        v54 = v35;
        v55 = 1;
        if ( (unsigned int)v53 < 8 )
          goto LABEL_277;
        v186 = (__m128i *)((char *)v35 + 8 * v53);
        v187 = (__m128i *)((char *)v50 + 8 * (unsigned int)(v47 + 1));
        if ( &v35->m128i_u64[1] <= (unsigned __int64 *)((char *)v50 + 8 * (unsigned int)(v47 + v53)) && v186 >= v187 )
          goto LABEL_277;
        v56 = (unsigned int)(v47 + 5);
        do
        {
          v55 += 8;
          *v54 = _mm_slli_epi64(_mm_loadu_si128((__m128i *)((char *)v50 + 8 * (unsigned int)(v56 - 4))), 0xCu);
          v57 = (unsigned int)(v56 + 2);
          v54[1] = _mm_slli_epi64(_mm_loadu_si128((__m128i *)((char *)v50 + 8 * (unsigned int)(v56 - 2))), 0xCu);
          v58 = _mm_loadu_si128((__m128i *)((char *)v50 + 8 * v56));
          v56 = (unsigned int)(v56 + 8);
          v54[2] = _mm_slli_epi64(v58, 0xCu);
          v54[3] = _mm_slli_epi64(_mm_loadu_si128((__m128i *)((char *)v50 + 8 * v57)), 0xCu);
          v54 += 4;
        }
        while ( v55 < v52 - (((_BYTE)v52 - 1) & 7) );
        if ( v55 < v52 )
        {
LABEL_277:
          do
          {
            v59 = v55 + (unsigned int)v47;
            ++v55;
            v54 = (__m128i *)((char *)v54 + 8);
            v54[-1].m128i_i64[1] = v50->m128i_i64[v59] << 12;
          }
          while ( v55 < v52 );
        }
        if ( !v34 || (PhysicalAddress = *v34) == 0 )
        {
          PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v35, &v177);
          if ( v34 )
            *v34 = PhysicalAddress;
        }
        v25 = (__int64)v180;
        *(_QWORD *)(v189 + 32) = PhysicalAddress;
      }
    }
    v38 = 0;
LABEL_109:
    v40 = v178;
LABEL_110:
    if ( v38 != -1056964605 )
      goto LABEL_121;
    if ( v40 > 0x1000 )
    {
      v61 = *(_QWORD *)(v25 + 32) == 0LL;
      v62 = 4096;
      v178 = 4096;
      v63 = 0LL;
      v179 = 0LL;
      v185 = 0LL;
      if ( v61 || !*(_DWORD *)(v25 + 40) )
      {
        v38 = -1056964607;
      }
      else
      {
        v64 = 0LL;
        v65 = v184;
        v66 = (((((_WORD)v184 + *(_WORD *)(v25 + 44) - *(_WORD *)(v25 + 8)) & 0xFFFu) + 4095) >> 12) + 1;
        if ( v66 <= 2 )
          goto LABEL_135;
        v67 = *(_QWORD *)(a2 + 192);
        if ( v67 )
          goto LABEL_118;
        if ( *(_QWORD *)(a2 + 200) )
        {
          v67 = _InterlockedExchange64((volatile __int64 *)(a2 + 200), 0LL);
LABEL_118:
          v179 = v67;
          *(_QWORD *)(a2 + 192) = *(_QWORD *)(v67 + 24);
          *(_QWORD *)(v67 + 24) = 0LL;
LABEL_128:
          v72 = v179;
          v73 = *(_DWORD *)(v179 + 16);
          if ( v73 && v73 < 0x200 )
          {
            v74 = (8 * v73) >> 2;
            if ( v74 )
            {
              v75 = *(_QWORD **)v179;
              v76 = 4LL * v74;
              goto LABEL_133;
            }
          }
          else
          {
            v75 = *(_QWORD **)v179;
            v76 = 4096LL;
LABEL_133:
            memset(v75, 0, v76);
            v65 = v184;
            v25 = (__int64)v180;
            v72 = v179;
          }
          *(_DWORD *)(v72 + 16) = v66 - 1;
          v77 = (__m128i **)v179;
          v63 = (__int64 *)(v179 + 8);
          *(_QWORD *)(v193 + 8) = v179;
          v64 = *v77;
          v185 = *v77;
LABEL_135:
          v78 = 0LL;
          v79 = *(_QWORD *)(a2 + 24);
          v80 = *(_DWORD *)(v25 + 44) - *(_DWORD *)(v25 + 8) + v65;
          v81 = *(__m128i **)(v25 + 32);
          v82 = *(_DWORD *)(v25 + 40);
          v83 = (((v80 & 0xFFF) + 4095) >> 12) + 1;
          v187 = v81;
          v84 = *(_QWORD *)(v79 + 16LL * v181[0]);
          v189 = v84;
          if ( v80 >= 0x1000 )
          {
            v78 = v80 >> 12;
            v80 += -4096 * v78;
          }
          if ( (unsigned int)v78 + v83 <= v82 )
          {
            *(_QWORD *)(v84 + 24) = v80 + (v81->m128i_i64[v78] << 12);
            if ( v83 != 1 )
            {
              if ( v83 == 2 )
              {
                *(_QWORD *)(v84 + 32) = v81->m128i_i64[(unsigned int)(v78 + 1)] << 12;
                if ( v64 )
                {
                  if ( !v63 )
                  {
                    memset(v64, 0, 0x1000uLL);
                    v25 = (__int64)v180;
                    v84 = v189;
                  }
                  v64->m128i_i64[0] = *(_QWORD *)(v84 + 32);
                }
              }
              else
              {
                v177 = 0;
                if ( !v63 )
                {
                  memset(v64, 0, 0x1000uLL);
                  v81 = v187;
                }
                v85 = v83 - 1;
                v86 = v64;
                v87 = 1;
                if ( v83 > 1 )
                {
                  if ( v85 < 8 )
                    goto LABEL_278;
                  v88 = v83 - 1;
                  v186 = (__m128i *)((char *)v64 + 8 * v88);
                  v187 = (__m128i *)((char *)v81 + 8 * (unsigned int)(v78 + 1));
                  if ( &v64->m128i_u64[1] <= (unsigned __int64 *)((char *)v81 + 8 * (unsigned int)(v88 + v78))
                    && v186 >= v187 )
                  {
                    goto LABEL_278;
                  }
                  v89 = v83 - (v85 & 7);
                  v90 = (unsigned int)(v78 + 5);
                  do
                  {
                    v87 += 8;
                    *v86 = _mm_slli_epi64(_mm_loadu_si128((__m128i *)((char *)v81 + 8 * (unsigned int)(v90 - 4))), 0xCu);
                    v91 = (unsigned int)(v90 + 2);
                    v86[1] = _mm_slli_epi64(
                               _mm_loadu_si128((__m128i *)((char *)v81 + 8 * (unsigned int)(v90 - 2))),
                               0xCu);
                    v92 = _mm_loadu_si128((__m128i *)((char *)v81 + 8 * v90));
                    v90 = (unsigned int)(v90 + 8);
                    v86[2] = _mm_slli_epi64(v92, 0xCu);
                    v86[3] = _mm_slli_epi64(_mm_loadu_si128((__m128i *)((char *)v81 + 8 * v91)), 0xCu);
                    v86 += 4;
                  }
                  while ( v87 < v89 );
                  if ( v87 < v83 )
                  {
LABEL_278:
                    do
                    {
                      v93 = v87 + (unsigned int)v78;
                      ++v87;
                      v86 = (__m128i *)((char *)v86 + 8);
                      v86[-1].m128i_i64[1] = v81->m128i_i64[v93] << 12;
                    }
                    while ( v87 < v83 );
                  }
                }
                if ( !v63 || (v94 = *v63) == 0 )
                {
                  v94 = StorPortGetPhysicalAddress(a1, 0LL, v64, &v177);
                  if ( v63 )
                    *v63 = v94;
                }
                v25 = (__int64)v180;
                *(_QWORD *)(v189 + 32) = v94;
              }
            }
            v38 = 0;
          }
          else
          {
            v38 = -1056964607;
          }
        }
        else
        {
          v173 = &v185;
          v38 = StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL);
          if ( v38 )
          {
            v25 = (__int64)v180;
          }
          else
          {
            v173 = (__m128i **)&v179;
            v38 = StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL);
            if ( !v38 )
            {
              v25 = (__int64)v180;
              v65 = v184;
              *(_QWORD *)v179 = v185;
              *(_QWORD *)(v179 + 8) = 0LL;
              *(_DWORD *)(v179 + 16) = 512;
              *(_QWORD *)(v179 + 24) = 0LL;
              goto LABEL_128;
            }
            StorPortExtendedFunction(1LL, a1, v185, v71);
            v25 = (__int64)v180;
          }
        }
LABEL_121:
        v62 = v178;
      }
      if ( !v38 )
      {
        v68 = v193;
        v69 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL * v181[0]);
        v70 = *(unsigned __int8 *)(v193 + 3);
        if ( (*(_DWORD *)(v25 + 56) & 0xF) != 0 )
        {
          v95 = *(unsigned __int8 *)(v193 + 3);
          *(_BYTE *)v69 = 1;
          StreamId = GetStreamId(a1, 0LL, v25, v95);
          v25 = (__int64)v180;
          if ( StreamId )
          {
            v97 = *(_DWORD *)(v69 + 48) & 0xFF1FFFFF;
            *(_WORD *)(v69 + 54) = StreamId;
            *(_DWORD *)(v69 + 48) = v97 | 0x100000;
          }
        }
        else
        {
          *(_BYTE *)v69 = 2;
        }
        *(_DWORD *)v69 &= 0xFFFFFCFF;
        *(_DWORD *)(v69 + 4) = v191;
        v98 = v184;
        *(_QWORD *)(v69 + 16) = 0LL;
        v99 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v70 + 1672) + 52LL);
        *(_QWORD *)(v69 + 40) = v98 / v99;
        *(_WORD *)(v69 + 48) = (v62 + v99 - 1) / v99 - 1;
        *(_DWORD *)(v69 + 48) &= 0xC3FFFFFF;
        LODWORD(v98) = *(_DWORD *)(v69 + 48);
        v100 = *(_DWORD *)(v25 + 56) & 0x20;
        *(_BYTE *)(v69 + 52) = 0;
        *(_QWORD *)(v69 + 56) = 0LL;
        *(_DWORD *)(v69 + 48) = v98 & 0x3FFFFFFF | (v100 << 25);
        *(_DWORD *)(v68 + 4) -= v62;
        v101 = v181[0];
        ProcessCommandTrace(a1, 0LL, *(_DWORD **)(*(_QWORD *)(a2 + 24) + 16LL * v181[0]));
        if ( (*(_BYTE *)(a1 + 21) & 0x10) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0 )
        {
          StorPortExtendedFunction(47LL, a1, 0LL, &v194);
          v102 = v183;
          *(_QWORD *)(32LL * v183 + *(_QWORD *)(a2 + 32) + 8) = v194;
          v103 = *(_QWORD *)(a2 + 40);
          if ( v103 )
          {
            v104 = 2LL * v102;
            v105 = 0LL;
            *(_QWORD *)(v103 + 8 * v104) = 0LL;
            *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * v104 + 8) = 0LL;
          }
          else
          {
            v105 = 0LL;
          }
          v24 |= 0x20u;
        }
        else
        {
          LOWORD(v102) = v183;
          v105 = 0LL;
        }
        *(_DWORD *)(32LL * (unsigned __int16)v102 + *(_QWORD *)(a2 + 32)) = v24;
        _InterlockedIncrement16((volatile signed __int16 *)(a2 + 136));
        ++v192;
        v106 = v101;
        v188 = v102;
        while ( 1 )
        {
          v61 = *(_DWORD *)(v68 + 4) == 0;
          v176 = v106;
          if ( v61 )
            goto LABEL_257;
          v184 = 0LL;
          v173 = (__m128i **)&v184;
          LOWORD(v178) = 0;
          v182 = 0;
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 24LL, 1131247182LL) )
            goto LABEL_256;
          if ( !AssignCommandId(a1, *(_WORD *)(a2 + 48), &v178, &v182) )
          {
            StorPortExtendedFunction(1LL, a1, v184, v107);
            goto LABEL_256;
          }
          v108 = v195;
          v109 = v182;
          *(_BYTE *)(v184 + 3) = *(_BYTE *)(v68 + 3);
          v110 = 32LL * v109;
          *(_WORD *)v184 = 0;
          *(_BYTE *)(v184 + 2) = 0;
          *(_DWORD *)(v184 + 4) = 0;
          *(_QWORD *)(v184 + 8) = 0LL;
          *(_QWORD *)(v184 + 16) = v68;
          *(_QWORD *)(v110 + *(_QWORD *)(a2 + 32) + 16) = v184;
          v111 = 2LL * (unsigned __int16)v178;
          *(_WORD *)(v110 + *(_QWORD *)(a2 + 32) + 24) = v178;
          *(_DWORD *)(v110 + *(_QWORD *)(a2 + 32) + 4) = v108;
          v112 = (*(unsigned __int8 *)(v68 + 3) << 8) | 0xC8;
          memset(*(void **)(*(_QWORD *)(a2 + 24) + 8 * v111), 0, 0x40uLL);
          v113 = (__int64)v180;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v111) + 2LL) = v109;
          v114 = *(_DWORD *)(v68 + 4);
          v115 = *(unsigned int *)(a1 + 208);
          v116 = *(_QWORD *)(v113 + 8);
          v117 = (__m128i *)(v116 + *(_DWORD *)(v113 + 16) - v114);
          v185 = v117;
          if ( v114 > 0x200000 )
            v114 = 0x200000;
          v118 = *(_DWORD *)(a1 + 32);
          if ( v114 <= (unsigned int)v115 )
            v115 = v114;
          v177 = v115;
          if ( v118 )
          {
            if ( (unsigned int)v115 > v118 )
              v115 = v118;
            v177 = v115;
          }
          if ( v190 )
          {
            v119 = (__int64)v117;
            v120 = (__int64)v117 % v190;
            LODWORD(v117) = (_DWORD)v185;
            if ( (unsigned __int64)(v119 / v190) != ((__int64)v185->m128i_i64 + (unsigned int)v115) / v190 )
            {
              v115 = v190 - (unsigned int)v120;
              v177 = v190 - v120;
            }
          }
          v121 = v184;
          v122 = 0LL;
          v186 = 0LL;
          v187 = 0LL;
          if ( !v184 || !*(_QWORD *)(v113 + 32) || !*(_DWORD *)(v113 + 40) || !(_DWORD)v115 )
            goto LABEL_247;
          v123 = ((unsigned int)v115 >> 12)
               + (((((_WORD)v117 + (unsigned __int16)*(_DWORD *)(v113 + 44) - (_WORD)v116) & 0xFFF)
                 + (unsigned int)(v115 & 0xFFF)
                 + 4095) >> 12);
          if ( v123 > 2 )
            break;
LABEL_206:
          v133 = *(_QWORD *)(a2 + 24);
          v134 = *(_DWORD *)(v113 + 44) - *(_DWORD *)(v113 + 8) + (_DWORD)v117;
          v135 = *(_QWORD *)(v113 + 32);
          v136 = *(_DWORD *)(v113 + 40);
          v197 = v135;
          v189 = *(_QWORD *)(v133 + 16LL * (unsigned __int16)v178);
          v137 = 0;
          v138 = ((unsigned int)v115 >> 12) + ((unsigned __int64)((v134 & 0xFFF) + (v115 & 0xFFF) + 4095) >> 12);
          if ( v134 >= 0x1000 )
          {
            v137 = v134 >> 12;
            v134 += -4096 * (v134 >> 12);
          }
          if ( v138 )
          {
            if ( v137 + v138 <= v136 )
            {
              v140 = v189;
              *(_QWORD *)(v189 + 24) = v134 + (*(_QWORD *)(v135 + 8LL * v137) << 12);
              if ( v138 != 1 )
              {
                if ( v138 == 2 )
                {
                  *(_QWORD *)(v140 + 32) = *(_QWORD *)(v135 + 8LL * (v137 + 1)) << 12;
                  if ( v105 )
                  {
                    if ( !v122 )
                    {
                      memset(v105, 0, 0x1000uLL);
                      v115 = v177;
                      v113 = (__int64)v180;
                      v140 = v189;
                    }
                    v105->m128i_i64[0] = *(_QWORD *)(v140 + 32);
                  }
                }
                else
                {
                  LODWORD(v179) = 0;
                  if ( !v122 )
                  {
                    memset(v105, 0, 0x1000uLL);
                    v135 = v197;
                  }
                  v141 = v138 - 1;
                  v142 = v105;
                  v143 = 1;
                  if ( (unsigned int)v141 < 8 )
                    goto LABEL_279;
                  v200 = &v105->m128i_i64[v141];
                  v197 = v135 + 8LL * (v137 + 1);
                  if ( (unsigned __int64)&v105->m128i_u64[1] <= v135 + 8LL * (v137 + (unsigned int)v141)
                    && (unsigned __int64)v200 >= v197 )
                  {
                    goto LABEL_279;
                  }
                  v144 = v137 + 5;
                  do
                  {
                    v143 += 8;
                    *v142 = _mm_slli_epi64(
                              _mm_loadu_si128((const __m128i *)(v135 + 8LL * (unsigned int)(v144 - 4))),
                              0xCu);
                    v145 = (unsigned int)(v144 + 2);
                    v142[1] = _mm_slli_epi64(
                                _mm_loadu_si128((const __m128i *)(v135 + 8LL * (unsigned int)(v144 - 2))),
                                0xCu);
                    v146 = _mm_loadu_si128((const __m128i *)(v135 + 8 * v144));
                    v144 = (unsigned int)(v144 + 8);
                    v142[2] = _mm_slli_epi64(v146, 0xCu);
                    v142[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v135 + 8 * v145)), 0xCu);
                    v142 += 4;
                  }
                  while ( v143 < v138 - (((_BYTE)v138 - 1) & 7) );
                  if ( v143 < v138 )
                  {
LABEL_279:
                    do
                    {
                      v147 = v143 + v137;
                      ++v143;
                      v142 = (__m128i *)((char *)v142 + 8);
                      v142[-1].m128i_i64[1] = *(_QWORD *)(v135 + 8 * v147) << 12;
                    }
                    while ( v143 < v138 );
                  }
                  if ( !v122 || (v148 = *v122) == 0 )
                  {
                    v148 = StorPortGetPhysicalAddress(a1, 0LL, v105, &v179);
                    if ( v122 )
                      *v122 = v148;
                  }
                  v115 = v177;
                  v113 = (__int64)v180;
                  *(_QWORD *)(v189 + 32) = v148;
                }
              }
              v139 = 0;
            }
            else
            {
              v139 = -1056964607;
            }
          }
          else
          {
            v139 = -1056964607;
          }
          if ( v139 )
            goto LABEL_247;
          v149 = (unsigned __int16)v178;
          v68 = v193;
          v150 = *(unsigned __int8 *)(v193 + 3);
          v151 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL * (unsigned __int16)v178);
          if ( (*(_DWORD *)(v113 + 56) & 0xF) != 0 )
          {
            v152 = *(unsigned __int8 *)(v193 + 3);
            *(_BYTE *)v151 = 1;
            v153 = GetStreamId(a1, 0LL, v113, v152);
            LODWORD(v115) = v177;
            v113 = (__int64)v180;
            if ( v153 )
            {
              v154 = *(_DWORD *)(v151 + 48) & 0xFF1FFFFF;
              *(_WORD *)(v151 + 54) = v153;
              *(_DWORD *)(v151 + 48) = v154 | 0x100000;
            }
          }
          else
          {
            *(_BYTE *)v151 = 2;
          }
          *(_DWORD *)v151 &= 0xFFFFFCFF;
          *(_DWORD *)(v151 + 4) = v191;
          *(_QWORD *)(v151 + 16) = 0LL;
          v155 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v150 + 1672) + 52LL);
          *(_QWORD *)(v151 + 40) = (__int64)v185 / v155;
          *(_WORD *)(v151 + 48) = ((unsigned int)v115 + v155 - 1) / v155 - 1;
          *(_DWORD *)(v151 + 48) &= 0xC3FFFFFF;
          v156 = *(_DWORD *)(v151 + 48) & 0x3FFFFFFF | ((*(_DWORD *)(v113 + 56) & 0x20) << 25);
          *(_BYTE *)(v151 + 52) = 0;
          *(_DWORD *)(v151 + 48) = v156;
          *(_QWORD *)(v151 + 56) = 0LL;
          ProcessCommandTrace(a1, 0LL, *(_DWORD **)(*(_QWORD *)(a2 + 24) + 16 * v149));
          if ( (*(_BYTE *)(a1 + 21) & 0x10) != 0 || (*(_DWORD *)(a1 + 108) & 2) != 0 )
          {
            StorPortExtendedFunction(47LL, a1, 0LL, &v194);
            v157 = v182;
            *(_QWORD *)(32LL * v182 + *(_QWORD *)(a2 + 32) + 8) = v194;
            v158 = *(_QWORD *)(a2 + 40);
            if ( v158 )
            {
              v159 = 2LL * v157;
              *(_QWORD *)(v158 + 8 * v159) = 0LL;
              *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * v159 + 8) = 0LL;
            }
            v112 |= 0x20u;
          }
          else
          {
            LOWORD(v157) = v182;
          }
          *(_DWORD *)(v68 + 4) -= v177;
          ++*(_WORD *)v68;
          *(_DWORD *)(32LL * (unsigned __int16)v157 + *(_QWORD *)(a2 + 32)) = v112;
          _InterlockedIncrement16((volatile signed __int16 *)(a2 + 136));
          v106 = v149;
          v105 = 0LL;
        }
        v124 = *(_QWORD *)(a2 + 192);
        if ( v124 )
        {
          v186 = *(__m128i **)(a2 + 192);
          *(_QWORD *)(a2 + 192) = *(_QWORD *)(v124 + 24);
          *(_QWORD *)(v124 + 24) = 0LL;
        }
        else if ( *(_QWORD *)(a2 + 200) )
        {
          v125 = _InterlockedExchange64((volatile __int64 *)(a2 + 200), 0LL);
          v186 = (__m128i *)v125;
          *(_QWORD *)(a2 + 192) = *(_QWORD *)(v125 + 24);
          *(_QWORD *)(v125 + 24) = 0LL;
        }
        else
        {
          v173 = &v187;
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 4096LL, 1349350990LL) )
            goto LABEL_247;
          v173 = &v186;
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1349350990LL) )
          {
            StorPortExtendedFunction(1LL, a1, v187, v126);
LABEL_247:
            v160 = v182;
            *(_DWORD *)(32LL * v182 + *(_QWORD *)(a2 + 32)) = 0;
            *(_QWORD *)(32LL * v160 + *(_QWORD *)(a2 + 32) + 16) = 0LL;
            v161 = *(_WORD *)(a2 + 52);
            *(_WORD *)(a2 + 56) = v160;
            if ( !v161 )
              v161 = *(_WORD *)(a1 + 326);
            *(_WORD *)(a2 + 52) = v161 - 1;
            StorPortExtendedFunction(1LL, a1, v184, v115);
            goto LABEL_256;
          }
          v115 = v177;
          v113 = (__int64)v180;
          LODWORD(v117) = (_DWORD)v185;
          v186->m128i_i64[0] = (__int64)v187;
          v186->m128i_i64[1] = 0LL;
          v186[1].m128i_i32[0] = 512;
          v186[1].m128i_i64[1] = 0LL;
        }
        v127 = v186;
        v128 = v186[1].m128i_u32[0];
        if ( v128 && v128 < 0x200 )
        {
          v129 = (8 * v128) >> 2;
          if ( v129 )
          {
            v130 = (void *)v186->m128i_i64[0];
            v131 = 4LL * v129;
            goto LABEL_204;
          }
        }
        else
        {
          v130 = (void *)v186->m128i_i64[0];
          v131 = 4096LL;
LABEL_204:
          memset(v130, 0, v131);
          LODWORD(v117) = (_DWORD)v185;
          v113 = (__int64)v180;
          v115 = v177;
          v127 = v186;
        }
        v127[1].m128i_i32[0] = v123 - 1;
        v132 = v186;
        *(_QWORD *)(v121 + 8) = v186;
        v105 = (__m128i *)v132->m128i_i64[0];
        v122 = &v132->m128i_i64[1];
        v187 = (__m128i *)v132->m128i_i64[0];
        goto LABEL_206;
      }
    }
    v12 = v193;
LABEL_252:
    v162 = v183;
    *(_DWORD *)(32LL * v183 + *(_QWORD *)(a2 + 32)) = 0;
    *(_QWORD *)(32LL * v162 + *(_QWORD *)(a2 + 32) + 16) = 0LL;
    v163 = *(_WORD *)(a2 + 52);
    *(_WORD *)(a2 + 56) = v162;
    if ( !v163 )
      v163 = *(_WORD *)(a1 + 326);
    *(_WORD *)(a2 + 52) = v163 - 1;
    StorPortNotification(4100LL, a1, v198);
    StorPortNotification(0x2000LL, a1, v12);
    v173 = (__m128i **)v198;
    StorPortExtendedFunction(93LL, a1, 1LL, a2 + 64);
LABEL_256:
    v106 = v176;
LABEL_257:
    v5 = v201;
    v9 = v192;
    if ( !*(_QWORD *)(a2 + 144) )
      goto LABEL_260;
  }
  v106 = v176;
LABEL_260:
  if ( !v9 )
    goto LABEL_266;
  v164 = 0;
  if ( (unsigned __int16)(v106 + 1) != *(unsigned __int16 *)(a1 + 326) )
    v164 = (unsigned __int16)(v106 + 1);
  **(_DWORD **)(a2 + 16) = v164;
  _InterlockedOr(v172, 0);
  if ( (*(_DWORD *)(a1 + 108) & 2) == 0 || !*(_QWORD *)(a2 + 40) )
  {
LABEL_266:
    v6 = v196;
    goto LABEL_267;
  }
  StorPortExtendedFunction(47LL, a1, 0LL, &v194);
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL * v188) = v194;
  result = StorPortNotification(4100LL, a1, v198);
  v6 = v196;
LABEL_268:
  if ( *(_BYTE *)(v6 - 144) )
  {
    v177 = 0;
    StorPortExtendedFunction(92LL, a1, &v177, v165);
    v166 = *(_QWORD *)(v6 - 136);
    if ( v166 )
    {
      v170 = -10LL * *(unsigned int *)(v6 - 140);
      LOBYTE(v176) = 0;
      v171 = *(_QWORD *)(v166 + 8LL * v177);
      v175 = (__int64)&v176;
      v174 = 0LL;
      v173 = 0LL;
      result = StorPortExtendedFunction(89LL, a1, v171, v170);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3764) & 0x10) != 0 )
      {
        v167 = *(_QWORD *)(a1 + 264);
        v168 = *(_QWORD *)(v167 + 72LL * v177 + 8);
        if ( v168 )
        {
          LODWORD(v179) = 0;
          LOWORD(v179) = *(_WORD *)(v167 + 72LL * v177 + 16);
          _BitScanForward64(&v169, v168);
          *(_DWORD *)((char *)&v179 + 2) = v169;
          StorPortNotification(4107LL, a1, v6 - 128);
        }
      }
      v174 = (__int64)&v179;
      v173 = 0LL;
      LODWORD(v179) = 0;
      result = StorPortNotification(4098LL, a1, v6 - 128);
    }
  }
LABEL_15:
  if ( *(_QWORD *)(a1 + 4272) )
  {
    result = *(unsigned int *)(a1 + 4280);
    if ( !(_DWORD)result && !_InterlockedExchange((volatile __int32 *)(a1 + 4280), 1) )
    {
      v11 = *(_QWORD *)(a1 + 4272);
      v175 = 250000LL;
      v174 = 1000000LL;
      v173 = 0LL;
      return StorPortExtendedFunction(33LL, a1, v11, IoTimeoutCallback);
    }
  }
  return result;
}
