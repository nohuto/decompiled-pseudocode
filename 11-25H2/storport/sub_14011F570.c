/*
 * XREFs of sub_14011F570 @ 0x14011F570
 * Callers:
 *     sub_1401172A0 @ 0x1401172A0 (sub_1401172A0.c)
 *     sub_140117A50 @ 0x140117A50 (sub_140117A50.c)
 *     sub_140118950 @ 0x140118950 (sub_140118950.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 * Callees:
 *     sub_1401154D0 @ 0x1401154D0 (sub_1401154D0.c)
 *     sub_140118560 @ 0x140118560 (sub_140118560.c)
 *     sub_14011F440 @ 0x14011F440 (sub_14011F440.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14011F570(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        __int16 a10,
        unsigned __int8 a11,
        unsigned __int16 *a12)
{
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v16; // rax
  char v17; // cl
  _DWORD *v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r13
  __int64 v22; // r12
  int v23; // eax
  KIRQL v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r15
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // esi
  int v31; // edi
  int v32; // edx
  unsigned __int16 Next_high; // r15
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rax
  const wchar_t *v37; // rdx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  __int64 v40; // rax
  const wchar_t *v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  bool v44; // zf
  int v45; // r8d
  const wchar_t *v46; // rax
  const int *v47; // r8
  const int *v48; // rdx
  __int64 v49; // rax
  int v50; // eax
  const int *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r9
  PSLIST_ENTRY v56; // r9
  int v57; // r8d
  __int64 v58; // r13
  unsigned int v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // esi
  unsigned int v62; // r14d
  __int64 v63; // rax
  unsigned __int64 v64; // rsi
  _OWORD *v65; // rdx
  __int64 v66; // r14
  __int16 v67; // ax
  __int64 v68; // rdx
  int v69; // ecx
  unsigned int v70; // ecx
  unsigned int v71; // edx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v73; // r11
  __int64 v74; // r10
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // rcx
  int v78; // edx
  __int64 v79; // r10
  __int64 v80; // r12
  __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // rcx
  __int64 v84; // rax
  void (__fastcall *v85)(__int64, _QWORD, _QWORD); // rax
  __int64 v86; // r11
  unsigned int v87; // r9d
  __int64 v88; // rdx
  __int64 v89; // rax
  __m128i v90; // xmm0
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  _QWORD *v94; // r13
  _QWORD *v95; // r14
  unsigned int v96; // r10d
  _QWORD *v97; // r8
  unsigned int v98; // r12d
  unsigned int v99; // esi
  unsigned int *v100; // rcx
  _QWORD *v101; // r15
  unsigned int v102; // ebx
  unsigned int *v103; // rdi
  __int64 v104; // r9
  __int64 v105; // r11
  unsigned int v106; // eax
  int v107; // ecx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r11
  __int64 v111; // r8
  char v112; // r9
  __int64 v113; // rax
  __int64 v114; // r10
  __int64 v115; // rcx
  unsigned int v116; // ecx
  __int16 v117; // cx
  __int64 v118; // r13
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rcx
  void (__fastcall *v122)(__int64, _QWORD, __int64); // rax
  __int64 v123; // rsi
  __int64 v124; // rdx
  unsigned int v125; // r8d
  __int64 v126; // rcx
  unsigned int v127; // edx
  __int64 v128; // rdi
  _QWORD *v129; // rcx
  __int128 v130; // xmm1
  __int64 v131; // r13
  signed __int32 v132[8]; // [rsp+0h] [rbp-100h] BYREF
  LPCGUID ActivityId; // [rsp+20h] [rbp-E0h]
  KIRQL v134; // [rsp+40h] [rbp-C0h]
  char v135; // [rsp+41h] [rbp-BFh]
  char v136; // [rsp+42h] [rbp-BEh]
  unsigned __int16 v137; // [rsp+44h] [rbp-BCh]
  unsigned __int16 v138; // [rsp+46h] [rbp-BAh]
  unsigned int v139; // [rsp+48h] [rbp-B8h] BYREF
  int v140; // [rsp+4Ch] [rbp-B4h]
  __int64 v141; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v142; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v143; // [rsp+60h] [rbp-A0h]
  unsigned int v144; // [rsp+68h] [rbp-98h]
  __int64 v145; // [rsp+70h] [rbp-90h] BYREF
  __int64 v146; // [rsp+78h] [rbp-88h]
  unsigned __int64 DepthSList; // [rsp+80h] [rbp-80h] BYREF
  __int64 v148; // [rsp+88h] [rbp-78h] BYREF
  __int64 v149; // [rsp+90h] [rbp-70h]
  __int64 v150; // [rsp+98h] [rbp-68h]
  __int64 v151; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v152; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v153; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v154; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v155; // [rsp+C8h] [rbp-38h]
  __int128 v156; // [rsp+D8h] [rbp-28h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-10h] BYREF
  int v158; // [rsp+100h] [rbp+0h] BYREF
  __int128 v159; // [rsp+104h] [rbp+4h]
  int v160; // [rsp+114h] [rbp+14h]
  __int64 v161; // [rsp+118h] [rbp+18h]
  GUID v162; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  __int64 v164; // [rsp+140h] [rbp+40h]
  __int64 v165; // [rsp+148h] [rbp+48h]
  const wchar_t *v166; // [rsp+150h] [rbp+50h]
  int v167; // [rsp+158h] [rbp+58h]
  int v168; // [rsp+15Ch] [rbp+5Ch]
  const int *v169; // [rsp+160h] [rbp+60h]
  int v170; // [rsp+168h] [rbp+68h]
  int v171; // [rsp+16Ch] [rbp+6Ch]
  __int64 v172; // [rsp+170h] [rbp+70h]
  __int64 v173; // [rsp+178h] [rbp+78h]
  __int64 v174; // [rsp+180h] [rbp+80h]
  __int64 v175; // [rsp+188h] [rbp+88h]
  const int *v176; // [rsp+190h] [rbp+90h]
  int v177; // [rsp+198h] [rbp+98h]
  int v178; // [rsp+19Ch] [rbp+9Ch]
  __int64 v179; // [rsp+1A0h] [rbp+A0h]
  int v180; // [rsp+1A8h] [rbp+A8h]
  int v181; // [rsp+1ACh] [rbp+ACh]
  __int64 v182; // [rsp+1B0h] [rbp+B0h]
  int v183; // [rsp+1B8h] [rbp+B8h]
  int v184; // [rsp+1BCh] [rbp+BCh]
  const wchar_t *v185; // [rsp+1C0h] [rbp+C0h]
  __int64 v186; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v187; // [rsp+1D0h] [rbp+D0h]
  __int64 v188; // [rsp+1D8h] [rbp+D8h]
  __int64 *v189; // [rsp+1E0h] [rbp+E0h]
  __int64 v190; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v191; // [rsp+1F0h] [rbp+F0h]
  __int64 v192; // [rsp+1F8h] [rbp+F8h]
  __int64 *v193; // [rsp+200h] [rbp+100h]
  __int64 v194; // [rsp+208h] [rbp+108h]
  const wchar_t *v195; // [rsp+210h] [rbp+110h]
  __int64 v196; // [rsp+218h] [rbp+118h]
  __int64 *v197; // [rsp+220h] [rbp+120h]
  __int64 v198; // [rsp+228h] [rbp+128h]
  const wchar_t *v199; // [rsp+230h] [rbp+130h]
  __int64 v200; // [rsp+238h] [rbp+138h]
  __int64 *v201; // [rsp+240h] [rbp+140h]
  __int64 v202; // [rsp+248h] [rbp+148h]
  const wchar_t *v203; // [rsp+250h] [rbp+150h]
  __int64 v204; // [rsp+258h] [rbp+158h]
  __int64 *v205; // [rsp+260h] [rbp+160h]
  __int64 v206; // [rsp+268h] [rbp+168h]
  const wchar_t *v207; // [rsp+270h] [rbp+170h]
  __int64 v208; // [rsp+278h] [rbp+178h]
  __int64 *v209; // [rsp+280h] [rbp+180h]
  __int64 v210; // [rsp+288h] [rbp+188h]
  const wchar_t *v211; // [rsp+290h] [rbp+190h]
  __int64 v212; // [rsp+298h] [rbp+198h]
  __int64 *v213; // [rsp+2A0h] [rbp+1A0h]
  __int64 v214; // [rsp+2A8h] [rbp+1A8h]
  const wchar_t *v215; // [rsp+2B0h] [rbp+1B0h]
  __int64 v216; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int64 *p_DepthSList; // [rsp+2C0h] [rbp+1C0h]
  __int64 v218; // [rsp+2C8h] [rbp+1C8h]

  v12 = *(_QWORD *)(a2 + 184);
  v14 = a3;
  *(_QWORD *)&EventDescriptor.Id = a1;
  v145 = v12;
  v16 = *(_QWORD *)(a1 + 16);
  v142 = a4;
  v139 = 0;
  v148 = 0LL;
  v17 = *(_BYTE *)(v16 + 1728);
  LOBYTE(v16) = *(_BYTE *)(v16 + 1729);
  v136 = v17;
  v135 = v16;
  v18 = *(_DWORD **)(a2 + 8);
  v141 = a2;
  v149 = a3;
  v19 = v18[11];
  v20 = ((((_WORD)v19 + (unsigned __int16)v18[8]) & 0xFFF) + (unsigned __int64)(unsigned int)v18[10] + 4095) >> 12;
  v21 = ((v19 & 0xFFF) + (unsigned __int64)a7 + 4095) >> 12;
  DepthSList = v21;
  if ( !(_DWORD)v21 )
    return 3221225488LL;
  v22 = v19 >> 12;
  if ( v19 < 0x1000 )
    v22 = 0LL;
  v23 = v19 & 0xFFF;
  if ( v19 < 0x1000 )
    v23 = v19;
  v144 = v23;
  if ( (int)v22 + (int)v21 > (unsigned int)v20 )
    return 3221225488LL;
  v24 = KfRaiseIrql(2u);
  v134 = v24;
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 128));
  v25 = *(_QWORD *)(v14 + 88);
  v26 = v14 + 88;
  v146 = v14 + 88;
  if ( *(_DWORD *)(v25 + 948) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
    v27 = a5;
    sub_140118560(a1, v141, a5);
    if ( !a4 )
    {
LABEL_182:
      KeLowerIrql(v134);
      return 2147483665LL;
    }
    v28 = *(_QWORD *)(a1 + 16);
    v29 = a4;
LABEL_181:
    sub_1401154D0(v28, v27, v29);
    goto LABEL_182;
  }
  v30 = *(_DWORD *)(v14 + 124);
  if ( !a12 )
  {
    v56 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v14 + 64));
    if ( !v56 )
    {
LABEL_56:
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
      v58 = *(_QWORD *)v26;
      v59 = *(unsigned __int16 *)(*(_QWORD *)v26 + 22LL);
      if ( v59 != 1 )
      {
        v60 = *(unsigned __int16 *)(v14 + 136);
        v140 = v60 - 1;
        v61 = v60 % v59;
        if ( v60 % v59 < v59 )
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(*(_QWORD *)v26 + 728LL) + 192LL * v61;
            v149 = v14;
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 128));
            v62 = *(_DWORD *)(v14 + 124);
            v56 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v14 + 64));
            if ( v56 )
            {
              _InterlockedOr(v132, 0);
              while ( 1 )
              {
                v57 = 0;
                v137 = *(_WORD *)(v14 + 142);
                v31 = v137;
                if ( (unsigned __int16)(v137 + 1) < v62 )
                  LOWORD(v57) = v137 + 1;
                if ( (_WORD)v57 == *(_WORD *)(v14 + 140) )
                  break;
                if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v14 + 142), v57, v137) == v31 )
                {
                  LODWORD(v21) = DepthSList;
                  goto LABEL_65;
                }
              }
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 64), v56);
            }
            v70 = *(unsigned __int16 *)(v58 + 22);
            _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
            v71 = (v61 + 1) % v70;
            v61 = v71;
            if ( v71 == v140 || v71 >= *(unsigned __int16 *)(v58 + 22) )
              break;
            v26 = v146;
          }
        }
      }
      v131 = *(_QWORD *)&EventDescriptor.Id;
      v27 = a5;
      sub_140118560(*(__int64 *)&EventDescriptor.Id, v141, a5);
      if ( !v142 )
        goto LABEL_182;
      v28 = *(_QWORD *)(v131 + 16);
      v29 = v142;
      goto LABEL_181;
    }
    _InterlockedOr(v132, 0);
    do
    {
      v57 = 0;
      v137 = *(_WORD *)(v14 + 142);
      v31 = v137;
      if ( (unsigned __int16)(v137 + 1) < v30 )
        LOWORD(v57) = v137 + 1;
      if ( (_WORD)v57 == *(_WORD *)(v14 + 140) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 64), v56);
        goto LABEL_56;
      }
    }
    while ( _InterlockedCompareExchange16((volatile signed __int16 *)(v14 + 142), v57, v137) != v31 );
LABEL_65:
    Next_high = HIWORD(v56[3].Next);
    v140 = v57;
LABEL_66:
    v63 = *(_QWORD *)(v14 + 32);
    v64 = (unsigned __int64)Next_high << 7;
    v138 = Next_high;
    v146 = v64;
    if ( (*(_BYTE *)(v64 + v63 + 60) & 4) != 0 )
    {
      v65 = *(_OWORD **)(*(_QWORD *)(v14 + 24) + 16LL * (unsigned __int16)v31);
      *v65 = 0LL;
      v65[1] = 0LL;
      v65[2] = 0LL;
      v65[3] = 0LL;
    }
    v66 = *(_QWORD *)&EventDescriptor.Id;
    v67 = *(_WORD *)(*(_QWORD *)&EventDescriptor.Id + 652LL);
    if ( !v67 )
      v67 = *(_WORD *)(*(_QWORD *)&EventDescriptor.Id + 416LL);
    *(_WORD *)(*(_QWORD *)(v14 + 32) + v64 + 58) = v67;
    *(_DWORD *)(*(_QWORD *)(v14 + 32) + v64 + 80) = *(_DWORD *)(v66 + 56);
    if ( (int)IoGetIoAttributionHandle(v141, &v148) < 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v66 + 608) + 4LL) & 1) != 0 )
        UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      else
        UnbiasedInterruptTime = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 88) + 1272LL) + 40LL);
      *(_QWORD *)(*(_QWORD *)(v14 + 32) + v64 + 64) = UnbiasedInterruptTime;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v14 + 32) + v64 + 64) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)(v64 + *(_QWORD *)(v14 + 32) + 64LL));
      v68 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + v64 + 64);
      v159 = 0LL;
      v160 = 0;
      v158 = 1;
      v69 = **(unsigned __int8 **)(v141 + 184);
      v161 = v68;
      LODWORD(v159) = v69 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFF00 | 0x100;
      IoRecordIoAttribution(v148, &v158);
    }
    v73 = v145;
    v74 = (unsigned __int16)v31;
    v44 = byte_1401688BC == 0;
    v143 = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 16LL * (unsigned __int16)v31);
    v75 = v143;
    *(_WORD *)(v143 + 2) = Next_high;
    if ( v44 || (*(_BYTE *)(v73 + 2) & 4) == 0 )
      v76 = 0LL;
    else
      v76 = 0x40000000LL;
    v77 = *(unsigned int *)(v66 + 64);
    v78 = *(_DWORD *)(v66 + 56);
    if ( a11 )
    {
      *(_BYTE *)v75 = 2;
    }
    else
    {
      *(_DWORD *)(v75 + 48) &= 0xFF0FFFFF;
      *(_BYTE *)v75 = 1;
      *(_WORD *)(v75 + 54) = 0;
    }
    *(_DWORD *)v75 &= 0xFFFFFCFF;
    *(_QWORD *)(v75 + 16) = 0LL;
    *(_DWORD *)(v75 + 4) = v78;
    *(_BYTE *)(v75 + 52) = 0;
    *(_QWORD *)(v75 + 40) = a8 / v77;
    *(_QWORD *)(v75 + 56) = 0LL;
    *(_WORD *)(v75 + 48) = a10 - 1;
    *(_DWORD *)(v75 + 48) = v76 & 0x7FFFFFFF | *(_DWORD *)(v75 + 48) & 0x3FFFFFF;
    if ( !v135 )
    {
      v80 = v75;
      goto LABEL_146;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v66 + 16) + 136LL) & 0x100000000LL) == 0 )
    {
      v93 = *(_QWORD *)(v73 + 24);
      v94 = (_QWORD *)(v75 + 24);
      v150 = 0LL;
      v95 = 0LL;
      v96 = 0;
      v97 = (_QWORD *)(v75 + 24);
      v98 = 2;
      v99 = 0;
      v100 = *(unsigned int **)(v93 + 24);
      if ( v142 )
      {
        v95 = *(_QWORD **)(v142 + 16);
        v150 = *(_QWORD *)(v142 + 24);
        v98 = *(unsigned __int16 *)(v142 + 36) + 1;
      }
      if ( *v100 )
      {
        v101 = (_QWORD *)(v75 + 32);
        v102 = 0;
        v103 = v100;
        do
        {
          v104 = *(_QWORD *)&v103[6 * v102 + 4];
          v105 = v103[6 * v102 + 6];
          if ( v105 + v104 % 4096 > 4096 )
          {
            if ( (_DWORD)v105 )
            {
              while ( 1 )
              {
                *v97 = v104;
                v107 = v104 & 0xFFF;
                v99 += 4096 - v107;
                if ( (unsigned int)(v107 + v105) <= 0x1000 )
                  break;
                LODWORD(v105) = v107 + v105 - 4096;
                v104 += (unsigned int)(4096 - v107);
                if ( v97 == v94 )
                {
                  v97 = v101;
                }
                else if ( v97 == v101 )
                {
                  if ( v95 )
                    v97 = v95 + 1;
                }
                else
                {
                  ++v97;
                }
                if ( ++v96 >= v98 )
                  goto LABEL_139;
                v106 = a7;
                if ( v99 >= a7 )
                  goto LABEL_139;
                if ( !(_DWORD)v105 )
                  goto LABEL_118;
              }
            }
          }
          else
          {
            *v97 = v104;
            v99 += v103[6 * v102 + 6];
          }
          v106 = a7;
LABEL_118:
          if ( v97 == v94 )
          {
            v97 = v101;
          }
          else if ( v97 == v101 )
          {
            if ( v95 )
              v97 = v95 + 1;
          }
          else
          {
            ++v97;
          }
          if ( ++v96 >= v98 )
            break;
          if ( v99 >= v106 )
            break;
          ++v102;
        }
        while ( v102 < *v103 );
LABEL_139:
        v14 = v149;
        LOWORD(v31) = v137;
        v80 = v143;
        if ( v96 > 2 )
        {
          *v95 = *(_QWORD *)(v143 + 32);
          *(_QWORD *)(v80 + 32) = v150;
        }
      }
      else
      {
        v80 = v75;
      }
      if ( v142 )
        *(_DWORD *)(v142 + 32) = v96 - 1;
      v64 = v146;
      v74 = (unsigned __int16)v31;
      *(_BYTE *)(*(_QWORD *)(v14 + 32) + v146 + 60) = 0x80;
LABEL_146:
      v108 = v142;
      v109 = v138;
      v110 = v141;
      v111 = v138;
      *(_BYTE *)(*(_QWORD *)(v14 + 32) + v64 + 61) = 0;
      *(_QWORD *)(*(_QWORD *)(v14 + 32) + (v109 << 7) + 24) = v110;
      *(_WORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v111 << 7) + 56) = v31;
      *(_QWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v111 << 7) + 16) = v108;
      *(_WORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v111 << 7) + 52) = a5;
      *(_DWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v111 << 7) + 48) = a7;
      *(_QWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v111 << 7) + 40) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v111 << 7) + 32) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v111 << 7) + 40) = 0LL;
      *(_WORD *)(*(_QWORD *)(v14 + 24) + 16 * v74 + 8) = v111;
      v112 = v136;
      if ( v136 == 1 )
      {
        v113 = *(_QWORD *)(v14 + 56);
        if ( v113 )
        {
          v114 = v74 << 6;
          *(_OWORD *)(v114 + v113) = 0LL;
          *(_OWORD *)(v114 + v113 + 16) = 0LL;
          *(_OWORD *)(v114 + v113 + 32) = 0LL;
          *(_OWORD *)(v114 + v113 + 48) = 0LL;
          *(_DWORD *)(v114 + *(_QWORD *)(v14 + 56)) = 1;
          *(_DWORD *)(v114 + *(_QWORD *)(v14 + 56) + 8) = *(unsigned __int16 *)(v14 + 136);
          *(_DWORD *)(v114 + *(_QWORD *)(v14 + 56) + 12) = (unsigned __int16)v31;
          *(_QWORD *)(v114 + *(_QWORD *)(v14 + 56) + 40) |= 1uLL;
          *(_QWORD *)(*(_QWORD *)(v14 + 56) + v114 + 40) = *(_QWORD *)(*(_QWORD *)(v14 + 56) + v114 + 40) & 0xFFFFFFFFFFFFFFFDuLL | ((*(_DWORD *)(v110 + 16) & 0x42) != 0 ? 2 : 0);
          v115 = *(_QWORD *)(v14 + 56);
          if ( *(char *)(*(_QWORD *)(v14 + 32) + ((unsigned __int64)(unsigned int)v111 << 7) + 60) >= 0 )
            *(_QWORD *)(v115 + v114 + 32) = *(_QWORD *)(v110 + 8);
          else
            *(_QWORD *)(v115 + v114 + 24) = *(_QWORD *)(*(_QWORD *)(v145 + 24) + 24LL);
        }
      }
      *(_BYTE *)(*(_QWORD *)(v110 + 184) + 3LL) |= 1u;
      _InterlockedOr(v132, 0);
      *(_BYTE *)(*(_QWORD *)(v14 + 32) + (v111 << 7) + 60) |= 1u;
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
      v116 = v139 & 0xFFFF0000 | (unsigned __int16)(v31 + 1);
      v139 = v116;
      if ( (unsigned __int16)(v31 + 1) == *(_DWORD *)(v14 + 124) )
        v139 = v116 & 0xFFFF0000;
      _InterlockedOr(v132, 0);
      v117 = v140;
      if ( *(_WORD *)(v14 + 142) != (_WORD)v140 )
      {
LABEL_156:
        v118 = *(_QWORD *)&EventDescriptor.Id;
LABEL_157:
        KeLowerIrql(v134);
        v119 = *(_QWORD *)(v118 + 16);
        if ( **(_BYTE **)(v119 + 1736) )
          sub_14011F440((_QWORD *)v119, v14, a5);
        return 259LL;
      }
      while ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 132), 1, 0) )
      {
        if ( *(_WORD *)(v14 + 142) != v117 )
          goto LABEL_156;
      }
      while ( *(_DWORD *)(v14 + 128) )
        _InterlockedOr(v132, 0);
      if ( *(_WORD *)(v14 + 142) == v117 )
      {
        if ( v112 == 1 )
        {
          v118 = *(_QWORD *)&EventDescriptor.Id;
          v120 = *(_QWORD *)(*(_QWORD *)&EventDescriptor.Id + 16LL);
          v121 = *(_QWORD *)(v120 + 1648) + 64LL;
          v122 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v120 + 128) + 528LL);
          ActivityId = (LPCGUID)&v139;
          v122(v121, *(unsigned int *)(v14 + 16), 4LL);
          v110 = v141;
LABEL_167:
          _InterlockedOr(v132, 0);
          _InterlockedExchange((volatile __int32 *)(v14 + 132), 0);
          v123 = *(_QWORD *)(v118 + 16);
          if ( (*(_BYTE *)(v123 + 1344) & 1) != 0 )
          {
            LODWORD(v155) = *(_DWORD *)(v14 + 136);
            DWORD1(v155) = *(_DWORD *)v80;
            *((_QWORD *)&v155 + 1) = v110;
            v156 = 0LL;
            if ( v123 )
            {
              if ( *(_DWORD *)v123 == 1314276178 )
              {
                v124 = *(_QWORD *)(*(_QWORD *)(v123 + 1352) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
                v125 = *(_DWORD *)(v124 + 12);
                v126 = v124 + 64;
                _InterlockedOr(v132, 0);
                if ( v125 )
                {
                  if ( v124 != -64 )
                  {
                    v127 = _InterlockedIncrement((volatile signed __int32 *)v124) % v125;
                    v128 = v126 + ((unsigned __int64)v127 << 6);
                    if ( (*(_DWORD *)(v123 + 1320) & 1) != 0 )
                      *(_DWORD *)(v128 + 4) = _InterlockedIncrement((volatile signed __int32 *)(v123 + 1408));
                    else
                      *(_DWORD *)(v128 + 4) = v127;
                    *(_DWORD *)v128 = 0x10000;
                    v129 = (_QWORD *)(v128 + 8);
                    if ( (*(_DWORD *)(v123 + 1320) & 2) != 0 )
                      KeQuerySystemTimePrecise(v129);
                    else
                      *v129 = MEMORY[0xFFFFF78000000014];
                    v130 = v156;
                    *(_OWORD *)(v128 + 16) = v155;
                    *(_OWORD *)(v128 + 32) = v130;
                  }
                }
              }
            }
          }
          goto LABEL_157;
        }
        **(_DWORD **)(v14 + 16) = v139;
        _InterlockedOr(v132, 0);
      }
      v118 = *(_QWORD *)&EventDescriptor.Id;
      goto LABEL_167;
    }
    v79 = *(_QWORD *)(v141 + 8) + 48LL;
    *(_QWORD *)(v75 + 24) = v144 + (*(_QWORD *)(v79 + 8 * v22) << 12);
    if ( (_DWORD)v21 != 1 )
    {
      if ( (_DWORD)v21 != 2 )
      {
        v86 = (unsigned int)(v21 - 1);
        v87 = 1;
        v76 = *(_QWORD *)(v142 + 16);
        if ( (unsigned int)v21 > 1 )
        {
          if ( (unsigned int)v86 < 8
            || v76 + 8 <= v79 + 8 * (unsigned __int64)(unsigned int)(v22 + v86)
            && v76 + 8 * v86 >= v79 + 8 * (unsigned __int64)(unsigned int)(v22 + 1) )
          {
            goto LABEL_186;
          }
          v88 = (unsigned int)(v22 + 5);
          do
          {
            v87 += 8;
            *(__m128i *)v76 = _mm_slli_epi64(
                                _mm_loadu_si128((const __m128i *)(v79 + 8LL * (unsigned int)(v88 - 4))),
                                0xCu);
            v89 = (unsigned int)(v88 + 2);
            *(__m128i *)(v76 + 16) = _mm_slli_epi64(
                                       _mm_loadu_si128((const __m128i *)(v79 + 8LL * (unsigned int)(v88 - 2))),
                                       0xCu);
            v90 = _mm_loadu_si128((const __m128i *)(v79 + 8 * v88));
            v88 = (unsigned int)(v88 + 8);
            *(__m128i *)(v76 + 32) = _mm_slli_epi64(v90, 0xCu);
            *(__m128i *)(v76 + 48) = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v79 + 8 * v89)), 0xCu);
            v76 += 64LL;
          }
          while ( v87 < (unsigned int)v21 - (((_BYTE)v21 - 1) & 7) );
          if ( v87 < (unsigned int)v21 )
          {
LABEL_186:
            do
            {
              v91 = (unsigned int)v22 + v87++;
              v76 += 8LL;
              *(_QWORD *)(v76 - 8) = *(_QWORD *)(v79 + 8 * v91) << 12;
            }
            while ( v87 < (unsigned int)v21 );
          }
        }
        v92 = v142;
        v80 = v143;
        v64 = v146;
        v66 = *(_QWORD *)&EventDescriptor.Id;
        *(_QWORD *)(v143 + 32) = *(_QWORD *)(v142 + 24);
        *(_DWORD *)(v92 + 32) = v86;
LABEL_93:
        v81 = *(_QWORD *)(v66 + 16);
        v82 = *(_QWORD *)(v81 + 128) + 1144LL;
        if ( *(_QWORD *)(v141 + 8) )
        {
          if ( *(_QWORD *)(v81 + 128) != -1144LL )
          {
            v83 = *(_QWORD *)v82;
            if ( *(_QWORD *)v82 )
            {
              v84 = *(_QWORD *)(v83 + 8);
              if ( v84 )
              {
                if ( *(int *)(v82 + 28) >= 3 )
                {
                  v85 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v84 + 240);
                  if ( v85 )
                  {
                    v85(v83, *(_QWORD *)(v141 + 8), a11);
                    v74 = (unsigned __int16)v31;
                    *(_BYTE *)(*(_QWORD *)(v14 + 32) + v64 + 60) = 0;
                    goto LABEL_146;
                  }
                }
                LOBYTE(v76) = 1;
                KeFlushIoBuffers(*(_QWORD *)(v141 + 8), a11, v76);
              }
            }
          }
        }
        v74 = (unsigned __int16)v31;
        *(_BYTE *)(*(_QWORD *)(v14 + 32) + v64 + 60) = 0;
        goto LABEL_146;
      }
      *(_QWORD *)(v75 + 32) = *(_QWORD *)(v79 + 8LL * (unsigned int)(v22 + 1)) << 12;
    }
    v80 = v75;
    goto LABEL_93;
  }
  while ( 1 )
  {
    v32 = 0;
    v137 = *(_WORD *)(v14 + 142);
    LOWORD(v31) = v137;
    if ( (unsigned __int16)(v137 + 1) < v30 )
      LOWORD(v32) = v137 + 1;
    v140 = v32;
    if ( (_WORD)v32 == *(_WORD *)(v14 + 140) )
      break;
    if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v14 + 142), v32, v137) == v137 )
    {
      Next_high = *a12;
      goto LABEL_66;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v14 + 128));
  KeLowerIrql(v24);
  DepthSList = ExQueryDepthSList((PSLIST_HEADER)(v14 + 64));
  v34 = *(_QWORD *)(*(_QWORD *)&EventDescriptor.Id + 16LL);
  v162 = 0LL;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_14014AE88;
  v154 = *(unsigned int *)(v34 + 8);
  v153 = *(unsigned __int16 *)(v34 + 26);
  v152 = *(unsigned __int16 *)(v34 + 22);
  v151 = *a12;
  v141 = *(unsigned __int16 *)(v14 + 142);
  v142 = *(unsigned __int16 *)(v14 + 140);
  v145 = *(unsigned __int16 *)(v14 + 136);
  v35 = *(_QWORD *)(v34 + 128);
  if ( (*(_BYTE *)(v34 + 136) & 2) != 0 )
    EventDescriptor.Keyword |= 0x8000uLL;
  v36 = *(_QWORD *)(v35 + 16);
  v37 = *(const wchar_t **)(v36 + 48);
  if ( v37 )
  {
    v38 = *(unsigned __int16 *)(v36 + 40);
    if ( (_WORD)v38 )
    {
      v39 = v38 >> 1;
      if ( v39 )
      {
        while ( 1 )
        {
          v40 = v39 - 1;
          v41 = &v37[v40];
          --v39;
          if ( *v41 == 92 )
            break;
          if ( !(_DWORD)v40 )
            goto LABEL_26;
        }
        if ( v41 )
          v37 = v41 + 1;
      }
    }
  }
LABEL_26:
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = v35 + 56;
  v164 = v35 + 1032;
  v42 = -1LL;
  v165 = 16LL;
  if ( v37 )
  {
    v43 = -1LL;
    do
      v44 = v37[++v43] == 0;
    while ( !v44 );
    v45 = 2 * v43 + 2;
  }
  else
  {
    v45 = 10;
  }
  v167 = v45;
  v46 = L"NULL";
  v168 = 0;
  if ( v37 )
    v46 = v37;
  v47 = &dword_140149108;
  v48 = *(const int **)(v34 + 792);
  v166 = v46;
  if ( v48 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( *((_BYTE *)v48 + v49) );
    v50 = v49 + 1;
  }
  else
  {
    v50 = 1;
    v48 = &dword_140149108;
  }
  v170 = v50;
  v169 = v48;
  v51 = *(const int **)(v34 + 752);
  v172 = v34 + 4;
  v174 = v34 + 744;
  v171 = 0;
  v173 = 2LL;
  v175 = 1LL;
  if ( v51 )
    v47 = v51;
  else
    v51 = &dword_140149108;
  v52 = -1LL;
  do
    ++v52;
  while ( *((_BYTE *)v51 + v52) );
  v176 = v47;
  v177 = v52 + 1;
  v53 = -1LL;
  v178 = 0;
  v179 = v34 + 800;
  do
    ++v53;
  while ( *(_BYTE *)(v34 + 800 + v53) );
  v181 = 0;
  v54 = v34 + 841;
  v180 = v53 + 1;
  v182 = v54;
  do
    ++v42;
  while ( *(_BYTE *)(v54 + v42) );
  v184 = 0;
  v185 = L"Failed to get free slot";
  v186 = 48LL;
  v187 = L"SQ ID";
  v183 = v42 + 1;
  v189 = &v145;
  v188 = 12LL;
  v191 = L"SQ head";
  v193 = &v142;
  v195 = L"SQ tail";
  v197 = &v141;
  v199 = L"Command ID";
  v201 = &v151;
  v203 = L"IO SQ count";
  v205 = &v152;
  v207 = L"IO CQ count";
  v209 = &v153;
  v211 = L"Queue depth";
  v213 = &v154;
  v215 = L"Free command ID count";
  p_DepthSList = &DepthSList;
  v190 = 8LL;
  v192 = 16LL;
  v194 = 8LL;
  v196 = 16LL;
  v198 = 8LL;
  v200 = 22LL;
  v202 = 8LL;
  v204 = 24LL;
  v206 = 8LL;
  v208 = 24LL;
  v210 = 8LL;
  v212 = 24LL;
  v214 = 8LL;
  v216 = 44LL;
  v218 = 8LL;
  EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 1u, &v162, 0LL, 0x1Au, &UserData);
  return 3221225701LL;
}
