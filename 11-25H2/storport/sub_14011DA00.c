/*
 * XREFs of sub_14011DA00 @ 0x14011DA00
 * Callers:
 *     sub_1401172A0 @ 0x1401172A0 (sub_1401172A0.c)
 *     sub_140117A50 @ 0x140117A50 (sub_140117A50.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 *     sub_14011EBD0 @ 0x14011EBD0 (sub_14011EBD0.c)
 * Callees:
 *     sub_1401147F0 @ 0x1401147F0 (sub_1401147F0.c)
 *     sub_1401154D0 @ 0x1401154D0 (sub_1401154D0.c)
 *     sub_140118560 @ 0x140118560 (sub_140118560.c)
 *     sub_14011D8D0 @ 0x14011D8D0 (sub_14011D8D0.c)
 *     sub_14011F440 @ 0x14011F440 (sub_14011F440.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14011DA00(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        bool *a5,
        __int64 *a6,
        int *a7,
        __int16 *a8,
        char a9)
{
  __int64 v10; // r9
  __int64 v12; // r12
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  char *v18; // r13
  bool v19; // zf
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  signed __int32 v22; // ecx
  __int64 v23; // rdi
  __int64 v24; // r8
  char v25; // bl
  unsigned int v26; // ebx
  int v27; // esi
  int v28; // edx
  unsigned __int16 Next_high; // r14
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rax
  const wchar_t *v33; // rdx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rax
  const wchar_t *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r8d
  const wchar_t *v41; // rax
  const int *v42; // r8
  const int *v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  const int *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rdx
  int v52; // esi
  PSLIST_ENTRY v53; // r8
  signed __int16 v54; // dx
  __int64 v55; // r13
  unsigned int v56; // ecx
  unsigned int v57; // eax
  unsigned int v58; // r14d
  __int64 v59; // rbx
  unsigned int v60; // r15d
  __int64 v61; // rdx
  __int64 v62; // r15
  __int64 v63; // r10
  unsigned __int64 v64; // rbx
  __int16 v65; // dx
  __int64 v66; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  unsigned int v68; // ecx
  unsigned int v69; // edx
  __int64 v70; // rdx
  signed __int32 v71; // eax
  unsigned int v72; // esi
  __int64 v73; // rbx
  char v74; // si
  __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // rax
  _OWORD *v78; // rcx
  int v79; // r8d
  __int64 v80; // rcx
  int v81; // r10d
  __int64 v82; // rdx
  unsigned int v83; // r9d
  unsigned __int16 v84; // r9
  unsigned int v85; // eax
  __int64 v86; // r11
  __int64 v87; // r10
  __int64 v88; // rdx
  unsigned int v89; // r9d
  __int64 v90; // r14
  __m128i *v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rax
  __m128i v94; // xmm0
  __int64 v95; // rax
  __int64 v96; // rcx
  unsigned int v97; // eax
  unsigned int v98; // r11d
  _QWORD *v99; // r15
  unsigned int v100; // r12d
  unsigned int v101; // ebx
  _DWORD *v102; // rcx
  _QWORD *v103; // r8
  _QWORD *v104; // r14
  _QWORD *v105; // r13
  int v106; // edi
  _DWORD *v107; // rsi
  __int64 v108; // r9
  __int64 v109; // r10
  unsigned int v110; // eax
  int v111; // ecx
  __int64 v112; // r15
  __int16 v113; // cx
  __int64 v114; // rcx
  signed __int16 v115; // ax
  char v116; // dl
  __int64 v117; // r12
  __int64 v118; // rax
  __int64 v119; // r8
  __int64 v120; // rcx
  __int64 v121; // rax
  void (__fastcall *v122)(__int64, _QWORD, bool); // rax
  unsigned int v123; // eax
  __int16 v124; // cx
  __int64 v125; // rax
  __int64 v126; // rcx
  void (__fastcall *v127)(__int64, _QWORD, __int64); // rax
  __int64 v128; // rsi
  __int64 v129; // rdx
  unsigned int v130; // r8d
  __int64 v131; // rcx
  unsigned int v132; // edx
  __int64 v133; // rbx
  _QWORD *v134; // rcx
  __int128 v135; // xmm1
  _BYTE **v136; // rcx
  signed __int32 v138[8]; // [rsp+0h] [rbp-100h] BYREF
  LPCGUID ActivityId; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v140; // [rsp+40h] [rbp-C0h]
  bool v141; // [rsp+42h] [rbp-BEh]
  KIRQL v142; // [rsp+43h] [rbp-BDh]
  ULONG v143; // [rsp+44h] [rbp-BCh]
  __int64 v144; // [rsp+48h] [rbp-B8h]
  char v145; // [rsp+50h] [rbp-B0h]
  char v146; // [rsp+51h] [rbp-AFh]
  unsigned __int16 v147; // [rsp+52h] [rbp-AEh]
  unsigned int v148; // [rsp+54h] [rbp-ACh]
  int v149; // [rsp+58h] [rbp-A8h]
  __int64 v150; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v151; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v152; // [rsp+6Ch] [rbp-94h]
  __int64 v153; // [rsp+70h] [rbp-90h] BYREF
  __int64 v154; // [rsp+78h] [rbp-88h]
  __int64 v155; // [rsp+80h] [rbp-80h]
  __int64 v156; // [rsp+88h] [rbp-78h]
  __int64 *v157; // [rsp+90h] [rbp-70h]
  _QWORD *v158; // [rsp+98h] [rbp-68h]
  __int64 v159; // [rsp+A0h] [rbp-60h]
  __int64 v160; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v161; // [rsp+B8h] [rbp-48h] BYREF
  __int16 *v162; // [rsp+C0h] [rbp-40h]
  int *v163; // [rsp+C8h] [rbp-38h]
  char *v164; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 DepthSList; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v166; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v167; // [rsp+E8h] [rbp-18h]
  __int64 v168; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v169; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v170; // [rsp+108h] [rbp+8h]
  __int128 v171; // [rsp+110h] [rbp+10h]
  __int128 v172; // [rsp+120h] [rbp+20h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+130h] [rbp+30h] BYREF
  GUID v174; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  __int64 v176; // [rsp+160h] [rbp+60h]
  __int64 v177; // [rsp+168h] [rbp+68h]
  const wchar_t *v178; // [rsp+170h] [rbp+70h]
  int v179; // [rsp+178h] [rbp+78h]
  int v180; // [rsp+17Ch] [rbp+7Ch]
  const int *v181; // [rsp+180h] [rbp+80h]
  int v182; // [rsp+188h] [rbp+88h]
  int v183; // [rsp+18Ch] [rbp+8Ch]
  __int64 v184; // [rsp+190h] [rbp+90h]
  __int64 v185; // [rsp+198h] [rbp+98h]
  __int64 v186; // [rsp+1A0h] [rbp+A0h]
  __int64 v187; // [rsp+1A8h] [rbp+A8h]
  const int *v188; // [rsp+1B0h] [rbp+B0h]
  int v189; // [rsp+1B8h] [rbp+B8h]
  int v190; // [rsp+1BCh] [rbp+BCh]
  __int64 v191; // [rsp+1C0h] [rbp+C0h]
  int v192; // [rsp+1C8h] [rbp+C8h]
  int v193; // [rsp+1CCh] [rbp+CCh]
  __int64 v194; // [rsp+1D0h] [rbp+D0h]
  int v195; // [rsp+1D8h] [rbp+D8h]
  int v196; // [rsp+1DCh] [rbp+DCh]
  const wchar_t *v197; // [rsp+1E0h] [rbp+E0h]
  __int64 v198; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v199; // [rsp+1F0h] [rbp+F0h]
  __int64 v200; // [rsp+1F8h] [rbp+F8h]
  __int64 *v201; // [rsp+200h] [rbp+100h]
  __int64 v202; // [rsp+208h] [rbp+108h]
  const wchar_t *v203; // [rsp+210h] [rbp+110h]
  __int64 v204; // [rsp+218h] [rbp+118h]
  __int64 *v205; // [rsp+220h] [rbp+120h]
  __int64 v206; // [rsp+228h] [rbp+128h]
  const wchar_t *v207; // [rsp+230h] [rbp+130h]
  __int64 v208; // [rsp+238h] [rbp+138h]
  __int64 *v209; // [rsp+240h] [rbp+140h]
  __int64 v210; // [rsp+248h] [rbp+148h]
  const wchar_t *v211; // [rsp+250h] [rbp+150h]
  __int64 v212; // [rsp+258h] [rbp+158h]
  __int64 *v213; // [rsp+260h] [rbp+160h]
  __int64 v214; // [rsp+268h] [rbp+168h]
  const wchar_t *v215; // [rsp+270h] [rbp+170h]
  __int64 v216; // [rsp+278h] [rbp+178h]
  __int64 *v217; // [rsp+280h] [rbp+180h]
  __int64 v218; // [rsp+288h] [rbp+188h]
  const wchar_t *v219; // [rsp+290h] [rbp+190h]
  __int64 v220; // [rsp+298h] [rbp+198h]
  __int64 *v221; // [rsp+2A0h] [rbp+1A0h]
  __int64 v222; // [rsp+2A8h] [rbp+1A8h]
  const wchar_t *v223; // [rsp+2B0h] [rbp+1B0h]
  __int64 v224; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v225; // [rsp+2C0h] [rbp+1C0h]
  __int64 v226; // [rsp+2C8h] [rbp+1C8h]
  const wchar_t *v227; // [rsp+2D0h] [rbp+1D0h]
  __int64 v228; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int64 *p_DepthSList; // [rsp+2E0h] [rbp+1E0h]
  __int64 v230; // [rsp+2E8h] [rbp+1E8h]

  v10 = *(_QWORD *)(a1 + 16);
  v157 = a6;
  v163 = a7;
  v12 = *(unsigned int *)(a1 + 52);
  v162 = a8;
  v151 = 0;
  v150 = 0LL;
  v142 = 0;
  LOBYTE(v140) = 0;
  v13 = a2;
  v14 = *(_QWORD *)(v10 + 16);
  v154 = a1;
  v143 = v13;
  v148 = 259;
  v146 = *(_BYTE *)(v14 + 1728);
  v15 = HIDWORD(*(_QWORD *)(v14 + 136));
  LOBYTE(v15) = v15 & 1;
  v144 = v10;
  v153 = v15;
  LODWORD(v161) = *(unsigned __int16 *)(a1 + 34) + 1;
  LODWORD(v160) = *(unsigned __int16 *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(_DWORD *)(a1 + 56);
  v18 = *(char **)(v16 + 184);
  v164 = v18;
  v19 = *v18 == 3;
  v145 = *v18;
  v20 = *((_QWORD *)v18 + 3);
  v141 = v19;
  v156 = v20;
  v21 = ((unsigned __int64)(v17 & 0xFFF) + v12 + 4095) >> 12;
  DepthSList = v21;
  if ( (unsigned int)v21 > 2 )
  {
    v150 = (__int64)ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v14 + 880) + 8 * v13));
    if ( !v150 )
    {
      v150 = sub_1401147F0(*(_QWORD *)(v144 + 16), v143);
      if ( !v150 )
      {
        v22 = -1073741670;
LABEL_55:
        v50 = v154;
        v148 = v22;
        *(_DWORD *)(v154 + 112) = v22;
        _InterlockedExchange((volatile __int32 *)(v50 + 104), 5);
        v51 = v156;
        _InterlockedCompareExchange((volatile signed __int32 *)(v156 + 112), v22, 0);
        v52 = _InterlockedIncrement((volatile signed __int32 *)(v51 + 116));
        v25 = v140;
        if ( a5 )
          *a5 = v52 >= *(unsigned __int16 *)(v51 + 32);
LABEL_94:
        if ( v157 && *v157 )
        {
          v74 = 1;
          sub_14011D8D0(*(_QWORD *)(v144 + 16), *v157, *v163, *v162, v25 ^ 1);
        }
        else
        {
          v74 = 0;
        }
        if ( v25 )
          goto LABEL_199;
        goto LABEL_200;
      }
    }
    LODWORD(v13) = v143;
    v10 = v144;
  }
  if ( a4 )
  {
    v23 = a3;
  }
  else
  {
    v24 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v24 + 136) & 2) != 0 )
      v23 = *(_QWORD *)(v24 + 728) + 192LL * (unsigned int)v13;
    else
      v23 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v24 + 872) + 2LL * (unsigned int)v13)
          + *(_QWORD *)(v24 + 728)
          - 192LL;
  }
  v159 = v23;
  v25 = 1;
  v142 = KfRaiseIrql(2u);
  LOBYTE(v140) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v23 + 128));
  if ( *(_DWORD *)(*(_QWORD *)(v23 + 88) + 948LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v23 + 128));
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v154 + 104), 3, 1) == 1
      && !_interlockedbittestandset((volatile signed __int32 *)(v156 + 108), 0) )
    {
      sub_140118560(v144, *(_QWORD *)(v154 + 24), v143);
    }
    if ( v150 )
      sub_1401154D0(*(_QWORD *)(v144 + 16), v143, v150);
LABEL_93:
    v148 = -2147483631;
    goto LABEL_94;
  }
  v26 = *(_DWORD *)(v23 + 124);
  if ( !a4 )
  {
    v53 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v23 + 64));
    if ( v53 )
    {
      _InterlockedOr(v138, 0);
      while ( 1 )
      {
        v54 = 0;
        v147 = *(_WORD *)(v23 + 142);
        v27 = v147;
        if ( (unsigned __int16)(v147 + 1) < v26 )
          v54 = v147 + 1;
        if ( v54 == *(_WORD *)(v23 + 140) )
          break;
        if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v23 + 142), v54, v147) == v27 )
          goto LABEL_74;
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v23 + 64), v53);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v23 + 128));
    v55 = *(_QWORD *)(v23 + 88);
    v56 = *(unsigned __int16 *)(v55 + 22);
    if ( v56 != 1 )
    {
      v57 = *(unsigned __int16 *)(v23 + 136);
      v149 = v57 - 1;
      v58 = v57 % v56;
      if ( v57 % v56 < v56 )
      {
        do
        {
          v59 = *(_QWORD *)(*(_QWORD *)(v23 + 88) + 728LL) + 192LL * v58;
          _InterlockedIncrement((volatile signed __int32 *)(v59 + 128));
          v60 = *(_DWORD *)(v59 + 124);
          v53 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v59 + 64));
          if ( v53 )
          {
            _InterlockedOr(v138, 0);
            while ( 1 )
            {
              v54 = 0;
              v147 = *(_WORD *)(v59 + 142);
              v27 = v147;
              if ( (unsigned __int16)(v147 + 1) < v60 )
                v54 = v147 + 1;
              if ( v54 == *(_WORD *)(v59 + 140) )
                break;
              if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v59 + 142), v54, v147) == v27 )
              {
                LODWORD(v21) = DepthSList;
                v23 = v59;
                v18 = v164;
                v159 = v59;
LABEL_74:
                Next_high = HIWORD(v53[3].Next);
                LOWORD(v149) = v54;
                goto LABEL_75;
              }
            }
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v59 + 64), v53);
          }
          v68 = *(unsigned __int16 *)(v55 + 22);
          _InterlockedDecrement((volatile signed __int32 *)(v59 + 128));
          v69 = (v58 + 1) % v68;
          v58 = v69;
        }
        while ( v69 != v149 && v69 < *(unsigned __int16 *)(v55 + 22) );
      }
    }
    v70 = v154;
    v71 = _InterlockedCompareExchange((volatile signed __int32 *)(v154 + 104), 3, 1);
    v72 = v143;
    v73 = v144;
    if ( v71 == 1 && !_interlockedbittestandset((volatile signed __int32 *)(v156 + 108), 0) )
      sub_140118560(v73, *(_QWORD *)(v70 + 24), v72);
    if ( v150 )
      sub_1401154D0(*(_QWORD *)(v73 + 16), v72, v150);
    v25 = v140;
    goto LABEL_93;
  }
  do
  {
    v28 = 0;
    v147 = *(_WORD *)(v23 + 142);
    LOWORD(v27) = v147;
    if ( (unsigned __int16)(v147 + 1) < v26 )
      LOWORD(v28) = v147 + 1;
    v149 = v28;
    if ( (_WORD)v28 == *(_WORD *)(v23 + 140) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 128));
      DepthSList = ExQueryDepthSList((PSLIST_HEADER)(v23 + 64));
      v30 = *(_QWORD *)(v144 + 16);
      v174 = 0LL;
      EventDescriptor = (EVENT_DESCRIPTOR)xmmword_14014AE88;
      v164 = (char *)*(unsigned int *)(v30 + 8);
      v169 = *(unsigned __int16 *)(v30 + 26);
      v168 = *(unsigned __int16 *)(v30 + 22);
      v160 = *a4;
      v161 = *(unsigned __int16 *)(v23 + 142);
      v150 = *(unsigned __int16 *)(v23 + 140);
      v153 = *(unsigned __int16 *)(v23 + 136);
      v31 = *(_QWORD *)(v30 + 128);
      if ( (*(_BYTE *)(v30 + 136) & 2) != 0 )
        EventDescriptor.Keyword |= 0x8000uLL;
      v32 = *(_QWORD *)(v31 + 16);
      v33 = *(const wchar_t **)(v32 + 48);
      if ( v33 )
      {
        v34 = *(unsigned __int16 *)(v32 + 40);
        if ( (_WORD)v34 )
        {
          v35 = v34 >> 1;
          if ( v35 )
          {
            while ( 1 )
            {
              v36 = v35 - 1;
              v37 = &v33[v36];
              --v35;
              if ( *v37 == 92 )
                break;
              if ( !(_DWORD)v36 )
                goto LABEL_33;
            }
            if ( v37 )
              v33 = v37 + 1;
          }
        }
      }
LABEL_33:
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = v31 + 56;
      v177 = 16LL;
      v176 = v31 + 1032;
      v38 = -1LL;
      if ( v33 )
      {
        v39 = -1LL;
        do
          v19 = v33[++v39] == 0;
        while ( !v19 );
        v40 = 2 * v39 + 2;
      }
      else
      {
        v40 = 10;
      }
      v179 = v40;
      v41 = L"NULL";
      v180 = 0;
      if ( v33 )
        v41 = v33;
      v42 = &dword_140149108;
      v43 = *(const int **)(v30 + 792);
      v178 = v41;
      if ( v43 )
      {
        v44 = -1LL;
        do
          ++v44;
        while ( *((_BYTE *)v43 + v44) );
        v45 = v44 + 1;
      }
      else
      {
        v43 = &dword_140149108;
        v45 = 1;
      }
      v182 = v45;
      v181 = v43;
      v46 = *(const int **)(v30 + 752);
      v184 = v30 + 4;
      v186 = v30 + 744;
      v183 = 0;
      v185 = 2LL;
      v187 = 1LL;
      if ( v46 )
        v42 = v46;
      else
        v46 = &dword_140149108;
      v47 = -1LL;
      do
        ++v47;
      while ( *((_BYTE *)v46 + v47) );
      v188 = v42;
      v189 = v47 + 1;
      v48 = -1LL;
      v190 = 0;
      v191 = v30 + 800;
      do
        ++v48;
      while ( *(_BYTE *)(v30 + 800 + v48) );
      v193 = 0;
      v49 = v30 + 841;
      v192 = v48 + 1;
      v194 = v49;
      do
        ++v38;
      while ( *(_BYTE *)(v49 + v38) );
      v196 = 0;
      v197 = L"Failed to get free slot for split IO";
      v198 = 74LL;
      v199 = L"SQ ID";
      v195 = v38 + 1;
      v201 = &v153;
      v200 = 12LL;
      v203 = L"SQ head";
      v205 = &v150;
      v207 = L"SQ tail";
      v209 = &v161;
      v211 = L"Command ID";
      v213 = &v160;
      v215 = L"IO SQ count";
      v217 = &v168;
      v219 = L"IO CQ count";
      v221 = &v169;
      v223 = L"Queue depth";
      v225 = (__int64 *)&v164;
      v227 = L"Free command ID count";
      p_DepthSList = &DepthSList;
      v202 = 8LL;
      v204 = 16LL;
      v206 = 8LL;
      v208 = 16LL;
      v210 = 8LL;
      v212 = 22LL;
      v214 = 8LL;
      v216 = 24LL;
      v218 = 8LL;
      v220 = 24LL;
      v222 = 8LL;
      v224 = 24LL;
      v226 = 8LL;
      v228 = 44LL;
      v230 = 8LL;
      EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 1u, &v174, 0LL, 0x1Au, &UserData);
      v22 = -1073741595;
      goto LABEL_55;
    }
  }
  while ( _InterlockedCompareExchange16((volatile signed __int16 *)(v23 + 142), v28, v147) != v147 );
  Next_high = *a4;
LABEL_75:
  v140 = Next_high;
  if ( (_BYTE)v153 )
  {
    if ( v157 )
    {
      v61 = *v157;
      if ( *v157 )
      {
        if ( v61 != v23 )
          sub_14011D8D0(*(_QWORD *)(v144 + 16), v61, *v163, *v162, 0);
      }
    }
  }
  v62 = v154;
  v63 = v144;
  v64 = (unsigned __int64)Next_high << 7;
  _InterlockedExchange((volatile __int32 *)(v154 + 104), 2);
  v65 = *(_WORD *)(v63 + 652);
  v66 = *(_QWORD *)(v23 + 32);
  v167 = v64;
  if ( !v65 )
    v65 = *(_WORD *)(v63 + 416);
  *(_WORD *)(v66 + v64 + 58) = v65;
  *(_DWORD *)(*(_QWORD *)(v23 + 32) + v64 + 80) = *(_DWORD *)(v63 + 56);
  if ( (*(_DWORD *)(*(_QWORD *)(v63 + 608) + 4LL) & 1) != 0 )
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v63 = v144;
    *(_QWORD *)(v64 + *(_QWORD *)(v23 + 32) + 64) = UnbiasedInterruptTime;
  }
  else
  {
    *(_QWORD *)(v64 + *(_QWORD *)(v23 + 32) + 64) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v23 + 88) + 1272LL) + 40LL);
  }
  v75 = *(_QWORD *)(v23 + 24);
  v170 = 16LL * (unsigned __int16)v27;
  v76 = *(_QWORD *)(v170 + v75);
  v77 = *(_QWORD *)(v23 + 32);
  v155 = v76;
  if ( (*(_BYTE *)(v77 + v64 + 60) & 4) != 0 )
  {
    v78 = *(_OWORD **)(*(_QWORD *)(v23 + 24) + 16LL * (unsigned __int16)v27);
    *v78 = 0LL;
    v78[1] = 0LL;
    v78[2] = 0LL;
    v78[3] = 0LL;
  }
  if ( byte_1401688BC && (v18[2] & 4) != 0 )
    v79 = 0x40000000;
  else
    v79 = 0;
  v80 = *(unsigned int *)(v63 + 64);
  v81 = *(_DWORD *)(v63 + 56);
  v82 = *(_QWORD *)(v62 + 40);
  v83 = *(_DWORD *)(v62 + 52) / (unsigned int)v80;
  if ( v145 == 3 )
  {
    *(_BYTE *)v76 = 2;
  }
  else
  {
    *(_DWORD *)(v76 + 48) &= 0xFF0FFFFF;
    *(_BYTE *)v76 = 1;
    *(_WORD *)(v76 + 54) = 0;
  }
  *(_DWORD *)v76 &= 0xFFFFFCFF;
  *(_DWORD *)(v76 + 4) = v81;
  *(_DWORD *)(v76 + 40) = v82 / v80;
  *(_WORD *)(v76 + 48) = v83 - 1;
  *(_DWORD *)(v76 + 48) &= 0xC3FFFFFF;
  v84 = v140;
  *(_DWORD *)(v76 + 44) = (unsigned __int64)(v82 / v80) >> 32;
  v85 = *(_DWORD *)(v76 + 48) & 0xBFFFFFFF;
  *(_QWORD *)(v76 + 16) = 0LL;
  *(_BYTE *)(v76 + 52) = 0;
  *(_QWORD *)(v76 + 56) = 0LL;
  *(_DWORD *)(v76 + 48) = (v79 | v85) & 0x7FFFFFFF;
  *(_WORD *)(v76 + 2) = v84;
  if ( !(_BYTE)v153 )
  {
    v97 = *(_DWORD *)(v62 + 52);
    v98 = 0;
    v99 = 0LL;
    v152 = v97;
    v100 = 2;
    v166 = 0LL;
    v101 = 0;
    v88 = v150;
    v102 = *(_DWORD **)(*(_QWORD *)(v154 + 88) + 24LL);
    v158 = (_QWORD *)(v76 + 24);
    v103 = (_QWORD *)(v76 + 24);
    if ( v150 )
    {
      v99 = *(_QWORD **)(v150 + 16);
      v100 = *(unsigned __int16 *)(v150 + 36) + 1;
      v166 = *(_QWORD *)(v150 + 24);
    }
    if ( !*v102 )
    {
LABEL_154:
      if ( v88 )
        *(_DWORD *)(v88 + 32) = v98 - 1;
      v64 = v167;
      *(_BYTE *)(v167 + *(_QWORD *)(v23 + 32) + 60) = -120;
      goto LABEL_157;
    }
    v104 = (_QWORD *)(v76 + 32);
    v105 = v103;
    v106 = 0;
    v107 = v102;
    while ( 1 )
    {
      v108 = *(_QWORD *)&v107[6 * v106 + 4];
      v109 = (unsigned int)v107[6 * v106 + 6];
      if ( v109 + v108 % 4096 > 4096 )
      {
        if ( (_DWORD)v109 )
        {
          while ( 1 )
          {
            *v103 = v108;
            v111 = v108 & 0xFFF;
            v101 += 4096 - v111;
            if ( (unsigned int)(v111 + v109) <= 0x1000 )
              break;
            LODWORD(v109) = v111 + v109 - 4096;
            v108 += (unsigned int)(4096 - v111);
            if ( v103 == v158 )
            {
              v103 = v104;
            }
            else if ( v103 == v104 )
            {
              if ( v99 )
                v103 = v99 + 1;
            }
            else
            {
              ++v103;
            }
            if ( ++v98 >= v100 )
              goto LABEL_151;
            v110 = v152;
            if ( v101 >= v152 )
              goto LABEL_151;
            if ( !(_DWORD)v109 )
              goto LABEL_141;
          }
          v110 = v152;
LABEL_141:
          v105 = v158;
          goto LABEL_142;
        }
      }
      else
      {
        *v103 = v108;
        v101 += v107[6 * v106 + 6];
      }
      v110 = v152;
LABEL_142:
      if ( v103 == v105 )
      {
        v103 = v104;
      }
      else if ( v103 == v104 )
      {
        if ( v99 )
          v103 = v99 + 1;
      }
      else
      {
        ++v103;
      }
      if ( ++v98 < v100 && v101 < v110 && (unsigned int)++v106 < *v107 )
        continue;
LABEL_151:
      v23 = v159;
      LOWORD(v27) = v147;
      v84 = v140;
      v88 = v150;
      if ( v98 > 2 )
      {
        *v99 = *v104;
        *v104 = v166;
      }
      v76 = v155;
      goto LABEL_154;
    }
  }
  v86 = *(unsigned int *)(v62 + 60);
  v87 = *(_QWORD *)(*(_QWORD *)(v62 + 24) + 8LL) + 48LL;
  *(_QWORD *)(v76 + 24) = *(unsigned int *)(v62 + 56) + (*(_QWORD *)(v87 + 8 * v86) << 12);
  if ( (_DWORD)v21 == 1 )
    goto LABEL_111;
  if ( (_DWORD)v21 == 2 )
  {
    *(_QWORD *)(v76 + 32) = *(_QWORD *)(v87 + 8LL * (unsigned int)(v86 + 1)) << 12;
LABEL_111:
    v88 = v150;
    *(_BYTE *)(v64 + *(_QWORD *)(v23 + 32) + 60) = 8;
  }
  else
  {
    v89 = 1;
    v90 = (unsigned int)(v21 - 1);
    v91 = *(__m128i **)(v150 + 16);
    if ( (unsigned int)v21 > 1 )
    {
      if ( (unsigned int)v90 < 8
        || (unsigned __int64)&v91->m128i_u64[1] <= v87 + 8 * (unsigned __int64)(unsigned int)(v86 + v90)
        && (unsigned __int64)v91 + 8 * v90 >= v87 + 8 * (unsigned __int64)(unsigned int)(v86 + 1) )
      {
        goto LABEL_209;
      }
      v92 = (unsigned int)(v86 + 5);
      do
      {
        v89 += 8;
        *v91 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v87 + 8LL * (unsigned int)(v92 - 4))), 0xCu);
        v93 = (unsigned int)(v92 + 2);
        v91[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v87 + 8LL * (unsigned int)(v92 - 2))), 0xCu);
        v94 = _mm_loadu_si128((const __m128i *)(v87 + 8 * v92));
        v92 = (unsigned int)(v92 + 8);
        v91[2] = _mm_slli_epi64(v94, 0xCu);
        v91[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v87 + 8 * v93)), 0xCu);
        v91 += 4;
      }
      while ( v89 < (unsigned int)v21 - (((_BYTE)v21 - 1) & 7) );
      if ( v89 < (unsigned int)v21 )
      {
LABEL_209:
        do
        {
          v95 = v89 + (unsigned int)v86;
          ++v89;
          v91 = (__m128i *)((char *)v91 + 8);
          v91[-1].m128i_i64[1] = *(_QWORD *)(v87 + 8 * v95) << 12;
        }
        while ( v89 < (unsigned int)v21 );
      }
    }
    v88 = v150;
    v96 = v155;
    v64 = v167;
    v84 = v140;
    *(_QWORD *)(v155 + 32) = *(_QWORD *)(v150 + 24);
    *(_DWORD *)(v88 + 32) = v90;
    v76 = v96;
    *(_BYTE *)(v64 + *(_QWORD *)(v23 + 32) + 60) = 8;
  }
LABEL_157:
  v112 = v154;
  *(_BYTE *)(v64 + *(_QWORD *)(v23 + 32) + 61) = 0;
  *(_QWORD *)(*(_QWORD *)(v23 + 32) + v64 + 24) = *(_QWORD *)(v112 + 24);
  v113 = v143;
  *(_QWORD *)(*(_QWORD *)(v23 + 32) + v64 + 40) = v112;
  *(_WORD *)(*(_QWORD *)(v23 + 32) + v64 + 56) = v27;
  *(_QWORD *)(*(_QWORD *)(v23 + 32) + v64 + 16) = v88;
  *(_WORD *)(*(_QWORD *)(v23 + 32) + v64 + 52) = v113;
  *(_DWORD *)(*(_QWORD *)(v23 + 32) + v64 + 48) = *(_DWORD *)(v112 + 52);
  v114 = v170;
  *(_QWORD *)(*(_QWORD *)(v23 + 32) + v64 + 32) = 0LL;
  *(_WORD *)(*(_QWORD *)(v23 + 24) + v114 + 8) = v84;
  v115 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v156 + 120), 1u);
  v116 = v153;
  v117 = v144;
  if ( !v115 )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v112 + 24) + 184LL) + 3LL) |= 1u;
    if ( v116 )
    {
      v118 = *(_QWORD *)(v117 + 16);
      v119 = *(_QWORD *)(v118 + 128) + 1144LL;
      if ( *(_QWORD *)(*(_QWORD *)(v112 + 24) + 8LL) )
      {
        if ( *(_QWORD *)(v118 + 128) != -1144LL )
        {
          v120 = *(_QWORD *)v119;
          if ( *(_QWORD *)v119 )
          {
            v121 = *(_QWORD *)(v120 + 8);
            if ( v121 )
            {
              if ( *(int *)(v119 + 28) >= 3
                && (v122 = *(void (__fastcall **)(__int64, _QWORD, bool))(v121 + 240)) != 0LL )
              {
                v122(v120, *(_QWORD *)(*(_QWORD *)(v112 + 24) + 8LL), v141);
              }
              else
              {
                LOBYTE(v119) = 1;
                KeFlushIoBuffers(*(_QWORD *)(*(_QWORD *)(v112 + 24) + 8LL), v141, v119);
              }
              v116 = v153;
            }
          }
        }
      }
    }
  }
  _InterlockedOr(v138, 0);
  *(_BYTE *)(*(_QWORD *)(v23 + 32) + v64 + 60) |= 1u;
  _InterlockedDecrement((volatile signed __int32 *)(v23 + 128));
  v123 = v151 & 0xFFFF0000 | (unsigned __int16)(v27 + 1);
  v151 = v123;
  if ( (unsigned __int16)(v27 + 1) == *(_DWORD *)(v23 + 124) )
  {
    v123 &= 0xFFFF0000;
    v151 = v123;
  }
  if ( v116 )
  {
    if ( !a9 && (_DWORD)v161 != (_DWORD)v160 )
    {
      v74 = 0;
      *v157 = v23;
      *v163 = v123;
      *v162 = v149;
      goto LABEL_199;
    }
    if ( v157 )
      *v157 = 0LL;
  }
  _InterlockedOr(v138, 0);
  v124 = v149;
  v74 = 1;
  LOBYTE(v140) = 1;
  if ( *(_WORD *)(v23 + 142) == (_WORD)v149 )
  {
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 132), 1, 0) )
    {
      if ( *(_WORD *)(v23 + 142) != v124 )
        goto LABEL_199;
    }
    while ( *(_DWORD *)(v23 + 128) )
      _InterlockedOr(v138, 0);
    if ( *(_WORD *)(v23 + 142) == v124 )
    {
      if ( v146 == 1 )
      {
        v125 = *(_QWORD *)(v117 + 16);
        v126 = *(_QWORD *)(v125 + 1648) + 64LL;
        v127 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v125 + 128) + 528LL);
        ActivityId = (LPCGUID)&v151;
        v127(v126, *(unsigned int *)(v23 + 16), 4LL);
      }
      else
      {
        **(_DWORD **)(v23 + 16) = v151;
        _InterlockedOr(v138, 0);
      }
    }
    _InterlockedOr(v138, 0);
    _InterlockedExchange((volatile __int32 *)(v23 + 132), 0);
    v128 = *(_QWORD *)(v117 + 16);
    if ( (*(_BYTE *)(v128 + 1344) & 1) != 0 )
    {
      LODWORD(v171) = *(_DWORD *)(v23 + 136);
      *((_QWORD *)&v171 + 1) = *(_QWORD *)(v112 + 24);
      DWORD1(v171) = *(_DWORD *)v76;
      v172 = 0LL;
      if ( v128 )
      {
        if ( *(_DWORD *)v128 == 1314276178 )
        {
          v129 = *(_QWORD *)(*(_QWORD *)(v128 + 1352) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
          v130 = *(_DWORD *)(v129 + 12);
          v131 = v129 + 64;
          _InterlockedOr(v138, 0);
          if ( v130 )
          {
            if ( v129 != -64 )
            {
              v132 = _InterlockedIncrement((volatile signed __int32 *)v129) % v130;
              v133 = v131 + ((unsigned __int64)v132 << 6);
              if ( (*(_DWORD *)(v128 + 1320) & 1) != 0 )
                *(_DWORD *)(v133 + 4) = _InterlockedIncrement((volatile signed __int32 *)(v128 + 1408));
              else
                *(_DWORD *)(v133 + 4) = v132;
              *(_DWORD *)v133 = 0x20000;
              v134 = (_QWORD *)(v133 + 8);
              if ( (*(_DWORD *)(v128 + 1320) & 2) != 0 )
                KeQuerySystemTimePrecise(v134);
              else
                *v134 = MEMORY[0xFFFFF78000000014];
              v135 = v172;
              *(_OWORD *)(v133 + 16) = v171;
              *(_OWORD *)(v133 + 32) = v135;
            }
          }
        }
      }
    }
    v74 = v140;
  }
LABEL_199:
  KeLowerIrql(v142);
LABEL_200:
  if ( v74 )
  {
    v136 = *(_BYTE ***)(v144 + 16);
    if ( *v136[217] )
      sub_14011F440(v136);
  }
  return v148;
}
