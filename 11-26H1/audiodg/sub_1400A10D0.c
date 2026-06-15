/*
 * XREFs of sub_1400A10D0 @ 0x1400A10D0
 * Callers:
 *     sub_1400A3270 @ 0x1400A3270 (sub_1400A3270.c)
 *     sub_1400A3560 @ 0x1400A3560 (sub_1400A3560.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400084B4 @ 0x1400084B4 (sub_1400084B4.c)
 *     sub_140008824 @ 0x140008824 (sub_140008824.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 *     sub_14001189C @ 0x14001189C (sub_14001189C.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_140035D64 @ 0x140035D64 (sub_140035D64.c)
 *     sub_14003826C @ 0x14003826C (sub_14003826C.c)
 *     sub_140038D28 @ 0x140038D28 (sub_140038D28.c)
 *     sub_1400390B4 @ 0x1400390B4 (sub_1400390B4.c)
 *     sub_140039BB8 @ 0x140039BB8 (sub_140039BB8.c)
 *     sub_140048338 @ 0x140048338 (sub_140048338.c)
 *     memcmp @ 0x14004A694 (memcmp.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400A29A8 @ 0x1400A29A8 (sub_1400A29A8.c)
 *     sub_1400A2C7C @ 0x1400A2C7C (sub_1400A2C7C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400A10D0(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        _QWORD *a13,
        _QWORD *a14)
{
  unsigned int v14; // r13d
  struct _RTL_CRITICAL_SECTION *v18; // rbx
  __int64 v19; // rbx
  int v20; // edi
  int v21; // edx
  __m128i v22; // xmm6
  __int64 v23; // xmm7_8
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // dx
  unsigned int epi16; // edi
  unsigned int v27; // esi
  unsigned __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // r13d
  unsigned int v40; // edi
  __int64 v41; // r15
  int v42; // ecx
  unsigned __int64 v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // r15d
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  unsigned int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // ecx
  unsigned int v52; // r15d
  unsigned __int64 v53; // rdi
  int v54; // eax
  unsigned __int64 v55; // r10
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned int v59; // ecx
  unsigned int v60; // esi
  unsigned __int64 v61; // rax
  unsigned int v62; // ecx
  unsigned int v63; // eax
  int v64; // esi
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rcx
  void *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  unsigned __int64 v74; // rax
  int v75; // r8d
  unsigned int v76; // eax
  __int64 v77; // rsi
  int v78; // eax
  unsigned __int64 v79; // rax
  int v80; // r8d
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rcx
  int v84; // eax
  unsigned __int64 v85; // rax
  int v86; // r8d
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // rcx
  unsigned __int64 v90; // rax
  int v91; // r8d
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned int v94; // ecx
  unsigned int v95; // ecx
  __int32 v96; // r12d
  __int64 v97; // rsi
  int v98; // eax
  unsigned __int64 v99; // rax
  int v100; // r8d
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rcx
  __int64 v104; // rax
  unsigned int v105; // esi
  unsigned __int64 v106; // rax
  int v107; // r8d
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rsi
  _OWORD *v113; // rax
  __int64 v114; // rcx
  unsigned __int64 v115; // rax
  int v116; // r8d
  unsigned __int64 v117; // rax
  int v118; // r8d
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v122; // [rsp+28h] [rbp-B9h] BYREF
  unsigned int v123; // [rsp+30h] [rbp-B1h]
  int v124; // [rsp+34h] [rbp-ADh]
  __int64 v125; // [rsp+38h] [rbp-A9h]
  __int64 v126; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int v127; // [rsp+48h] [rbp-99h]
  unsigned int v128; // [rsp+4Ch] [rbp-95h]
  unsigned int v129; // [rsp+50h] [rbp-91h]
  int v130; // [rsp+54h] [rbp-8Dh]
  _OWORD v131[3]; // [rsp+58h] [rbp-89h] BYREF
  unsigned __int64 v132; // [rsp+88h] [rbp-59h]
  struct _RTL_CRITICAL_SECTION *v133; // [rsp+90h] [rbp-51h] BYREF
  __int64 v134; // [rsp+98h] [rbp-49h] BYREF
  __int64 v135; // [rsp+A0h] [rbp-41h] BYREF
  char v136; // [rsp+A8h] [rbp-39h]
  __int64 *v137; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v138; // [rsp+B8h] [rbp-29h] BYREF
  char v139; // [rsp+C0h] [rbp-21h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+3Fh]
  unsigned int v141; // [rsp+128h] [rbp+47h] BYREF
  unsigned int v142; // [rsp+140h] [rbp+5Fh]

  v142 = a4;
  v14 = a4;
  v18 = (struct _RTL_CRITICAL_SECTION *)(a1 - 408);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 408));
  v133 = v18;
  v19 = a1 - 424;
  if ( *(_DWORD *)(a1 - 424 + 56) == 1 )
  {
    v20 = -2005139440;
    v21 = 564;
LABEL_132:
    sub_14000C2A8(
      (int)retaddr,
      v21,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      v20);
    goto LABEL_133;
  }
  if ( !a13 )
  {
    v20 = -2147024809;
    v21 = 566;
    goto LABEL_132;
  }
  *a13 = 0LL;
  sub_1400B6010(a1 - 424);
  *(_OWORD *)((char *)v131 + 8) = 0LL;
  memset((char *)&v131[1] + 8, 0, 24);
  if ( !a2 )
    goto LABEL_131;
  if ( *a2 == 0xFFFE )
  {
    if ( a2[8] == 22 )
    {
LABEL_11:
      v22 = *(__m128i *)a2;
      *(_OWORD *)((char *)v131 + 8) = *(_OWORD *)a2;
      *(_OWORD *)((char *)&v131[1] + 8) = *((_OWORD *)a2 + 1);
      v23 = *((_QWORD *)a2 + 4);
      *((_QWORD *)&v131[2] + 1) = v23;
      WORD4(v131[1]) = 22;
      goto LABEL_20;
    }
    if ( !memcmp(a2 + 12, &xmmword_1400C57D0, 0x10uLL) || !memcmp(a2 + 12, &xmmword_1400C6E60, 0x10uLL) )
    {
      v14 = v142;
      goto LABEL_11;
    }
LABEL_131:
    v20 = -2005139404;
    v21 = 575;
    goto LABEL_132;
  }
  if ( a2[8] && ((*a2 - 1) & 0xFFFD) != 0 )
    goto LABEL_131;
  v24 = a2[1];
  if ( v24 != 1 && v24 != 2 )
    goto LABEL_131;
  v25 = a2[7];
  if ( v25 != 8 && (((v25 - 16) & 0xFFE7) != 0 || v25 == 40) )
    goto LABEL_131;
  *(_OWORD *)((char *)v131 + 8) = *(_OWORD *)a2;
  WORD4(v131[0]) = -2;
  WORD4(v131[1]) = 22;
  WORD5(v131[1]) = v25;
  v131[2] = xmmword_1400C57E0;
  LODWORD(v131[2]) = *a2;
  HIDWORD(v131[1]) = 4 - (v24 != 1);
  v23 = 0x719B3800AA000080LL;
  v22 = *(__m128i *)((char *)v131 + 8);
LABEL_20:
  epi16 = _mm_extract_epi16(v22, 6);
  *(_DWORD *)(a1 - 320) = epi16;
  *(_DWORD *)(a1 - 316) = _mm_extract_epi16(v22, 1);
  *(_DWORD *)(a1 - 300) = 1;
  v27 = 0;
  if ( !memcmp(&v131[2], &xmmword_1400C57D0, 0x10uLL) )
    *(_DWORD *)(a1 - 300) = 3;
  LODWORD(v126) = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
  *(float *)(a1 - 252) = (float)(int)v126;
  *(_DWORD *)(a1 - 308) = _mm_extract_epi16(v22, 7);
  *(_DWORD *)(a1 - 304) = sub_140008824((_WORD *)v131 + 4);
  v28 = v14 * (unsigned __int64)epi16;
  if ( v28 > 0xFFFFFFFF )
  {
    v20 = -2147024362;
    v21 = 600;
    goto LABEL_132;
  }
  v29 = v14 * epi16;
  if ( *(_DWORD *)(a1 + 56) != 1 )
    v29 = 0;
  v124 = v29;
  v30 = (unsigned int)v28;
  v31 = sub_140038D28((unsigned int)v28);
  *(_QWORD *)(a1 - 264) = v31;
  if ( !v31 )
  {
    v20 = -2147024882;
    v21 = 607;
    goto LABEL_132;
  }
  v33 = sub_140035D64(v32, v30);
  *(_QWORD *)(a1 - 296) = v33;
  if ( !v33 )
  {
    v20 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      616,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      -2147024882);
    v36 = *(_QWORD *)(a1 - 264);
    if ( v36 )
    {
      sub_140039BB8(v36, v34, v35);
      *(_QWORD *)(a1 - 264) = 0LL;
    }
    goto LABEL_133;
  }
  v37 = *(_DWORD *)(a1 - 320);
  v38 = a3 % v37;
  if ( a3 % v37 )
    a3 += v37 - v38;
  *(_DWORD *)(a1 - 256) = a3;
  *(_DWORD *)(a1 - 312) = v14;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    v38 = a3 / v37 % v14;
    v27 = a3 / v37 / v14 + 3;
    if ( v27 < 0x19 )
      v27 = 25;
  }
  v128 = v27;
  v39 = 0;
  v40 = 0;
  v123 = 0;
  v41 = a8;
  if ( a8 )
  {
    if ( *(_DWORD *)(a1 + 56) == 1 )
    {
      v38 = a3 / v37 % a5;
      v40 = a3 / v37 / a5 + 3;
      if ( v40 < 0x19 )
        v40 = 25;
      v123 = v40;
    }
    else
    {
      v123 = 0;
    }
  }
  v42 = ((unsigned __int8)sub_1400A2C7C(&unk_1400E9878, v38, 25LL) + 3) << 7;
  v130 = v42;
  v129 = 0;
  if ( v41 )
  {
    v48 = (unsigned __int64)v40 << 6;
    if ( v48 > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        691,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v49 = v48 + v42;
    if ( (int)v48 + v42 < (unsigned int)v48 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        692,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v50 = v49 + 1023;
    if ( v49 + 1023 < v49 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        693,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v129 = v50 & 0xFFFFFC00;
    v51 = (v50 & 0xFFFFFC00) + v48;
    if ( v51 < (unsigned int)v48 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        697,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v45 = v51 + 1023;
    if ( v51 + 1023 < v51 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        698,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
  }
  else
  {
    v43 = (unsigned __int64)v27 << 6;
    if ( v43 > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        683,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v44 = v43 + v42;
    if ( (int)v43 + v42 < (unsigned int)v43 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        684,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v45 = v44 + 1023;
    if ( v44 + 1023 < v44 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        685,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
  }
  v52 = v45 & 0xFFFFFC00;
  LODWORD(v53) = 0;
  v132 = 0LL;
  v141 = 0;
  LODWORD(v125) = 0;
  if ( !a9 )
  {
    v64 = v124;
    goto LABEL_76;
  }
  v54 = sub_140048338(a9, v126, &v141);
  v20 = v54;
  if ( v54 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      709,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      v54);
    v58 = *(_QWORD *)(v19 + 160);
    if ( v58 )
    {
      sub_140039BB8(v58, v56, v57);
      *(_QWORD *)(v19 + 160) = 0LL;
    }
    goto LABEL_133;
  }
  v59 = *(_DWORD *)(a1 - 320);
  v53 = v141 * (unsigned __int64)v59;
  v132 = v53;
  if ( v53 <= v55 )
  {
    if ( *(_DWORD *)(a1 + 56) == 1 )
    {
      v60 = (unsigned int)v53 / v59 / a5 + 3;
      if ( v60 < 0x19 )
        v60 = 25;
    }
    else
    {
      v60 = 0;
    }
    LODWORD(v125) = v60;
    v61 = (unsigned __int64)v60 << 6;
    if ( v61 > v55 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        717,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
    }
    else
    {
      v62 = v52 + v61;
      if ( v52 + (unsigned int)v61 < (unsigned int)v61 )
      {
        v20 = -2147024362;
        sub_14000C2A8(
          (int)retaddr,
          718,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
          -2147024362);
      }
      else
      {
        v63 = v62 + a3;
        if ( v62 + a3 >= v62 )
        {
          v64 = v124;
          v39 = v63 + v124;
          if ( v63 + v124 < v63 )
          {
            v20 = -2147024362;
            sub_14000C2A8(
              (int)retaddr,
              720,
              (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
              -2147024362);
            goto LABEL_120;
          }
LABEL_76:
          sub_14000DA4C();
          v71 = (void *)sub_140035D64(v70, 0xE0uLL);
          *(_QWORD *)(a1 - 328) = v71;
          if ( !v71 )
          {
            v20 = -2147024882;
            sub_14000C2A8(
              (int)retaddr,
              724,
              (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
              -2147024882);
            goto LABEL_93;
          }
          memset(v71, 0, 0xE0uLL);
          *(_DWORD *)(*(_QWORD *)(a1 - 328) + 152LL) = -1;
          *(_DWORD *)(*(_QWORD *)(a1 - 328) + 172LL) = 0;
          *(_DWORD *)(*(_QWORD *)(a1 - 328) + 176LL) = 0;
          *(_DWORD *)(*(_QWORD *)(a1 - 328) + 144LL) = 0;
          *(_DWORD *)(*(_QWORD *)(a1 - 328) + 148LL) = 0;
          *(_QWORD *)(*(_QWORD *)(a1 - 328) + 136LL) = (unsigned int)(int)((double)(int)(a3 / *(_DWORD *)(a1 - 320))
                                                                         * 10000000.0
                                                                         / *(float *)(a1 - 252)
                                                                         + 0.5);
          *(_DWORD *)(*(_QWORD *)(a1 - 328) + 220LL) = 0;
          if ( a9 )
          {
            v141 = v53 + v39;
            if ( (unsigned int)v53 + v39 < v39 )
            {
              v20 = -2147024362;
              sub_14000C2A8(
                (int)retaddr,
                776,
                (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                -2147024362);
              v74 = sub_14000DA4C();
              sub_14000DA94(*(_QWORD *)(a1 - 328), v74, v75);
              *(_QWORD *)(a1 - 328) = 0LL;
              goto LABEL_120;
            }
LABEL_83:
            v122 = 0LL;
            v77 = a11;
            sub_140019444(&v122);
            sub_1400B6010(v77);
            v20 = v78;
            if ( v78 < 0 )
            {
              sub_14000C2A8(
                (int)retaddr,
                786,
                (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                v78);
              sub_140003238(&v122);
              v79 = sub_14000DA4C();
              sub_14000DA94(*(_QWORD *)(a1 - 328), v79, v80);
              *(_QWORD *)(a1 - 328) = 0LL;
              v83 = *(_QWORD *)(v19 + 160);
              if ( v83 )
              {
                sub_140039BB8(v83, v81, v82);
                *(_QWORD *)(v19 + 160) = 0LL;
              }
              goto LABEL_133;
            }
            v127 = 0;
            *(_QWORD *)&v131[0] = 0LL;
            sub_1400B6010(v122);
            v20 = v84;
            if ( v84 < 0 )
            {
              sub_14000C2A8(
                (int)retaddr,
                791,
                (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                v84);
              sub_140003238(&v122);
              v85 = sub_14000DA4C();
              sub_14000DA94(*(_QWORD *)(a1 - 328), v85, v86);
              *(_QWORD *)(a1 - 328) = 0LL;
              v89 = *(_QWORD *)(v19 + 160);
              if ( v89 )
              {
                sub_140039BB8(v89, v87, v88);
                *(_QWORD *)(v19 + 160) = 0LL;
              }
              goto LABEL_133;
            }
            if ( v127 < v141 )
            {
              v20 = -2147024882;
              sub_14000C2A8(
                (int)retaddr,
                793,
                (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                -2147024882);
              sub_140003238(&v122);
              v90 = sub_14000DA4C();
              sub_14000DA94(*(_QWORD *)(a1 - 328), v90, v91);
              *(_QWORD *)(a1 - 328) = 0LL;
LABEL_93:
              v92 = *(_QWORD *)(v19 + 160);
              if ( v92 )
              {
                sub_140039BB8(v92, v72, v73);
                *(_QWORD *)(v19 + 160) = 0LL;
              }
              goto LABEL_133;
            }
            **(_DWORD **)(a1 - 328) = 224;
            *(_DWORD *)(*(_QWORD *)(a1 - 328) + 132LL) = v128;
            v93 = *(_QWORD *)(a1 - 328);
            if ( a8 )
            {
              v94 = v123;
              *(_DWORD *)(v93 + 132) = v123;
              *(_DWORD *)(*(_QWORD *)(a1 - 328) + 144LL) = v94;
              *(_DWORD *)(*(_QWORD *)(a1 - 328) + 152LL) = v130;
              v93 = *(_QWORD *)(a1 - 328);
              v95 = v129;
            }
            else
            {
              v95 = v130;
            }
            *(_DWORD *)(v93 + 156) = v95;
            *(_DWORD *)(*(_QWORD *)(a1 - 328) + 160LL) = v52;
            *(_DWORD *)(*(_QWORD *)(a1 - 328) + 164LL) = v52 + a3;
            v96 = v52 + v124 + a3;
            *(_DWORD *)(*(_QWORD *)(a1 - 328) + 168LL) = v96;
            if ( a9 )
            {
              *(_DWORD *)(*(_QWORD *)(a1 - 328) + 148LL) = v125;
              *(_DWORD *)(*(_QWORD *)(a1 - 328) + 172LL) = v39;
              *(_DWORD *)(*(_QWORD *)(a1 - 328) + 176LL) = v39 + v132;
            }
            if ( (a7 & 0x40000) != 0 )
            {
              v97 = a12;
              if ( a12 )
              {
                sub_140019444((__int64 *)(a1 + 16));
                sub_1400B6010(v97);
                v20 = v98;
                if ( v98 < 0 )
                {
                  sub_14000C2A8(
                    (int)retaddr,
                    825,
                    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                    v98);
                  sub_140003238(&v122);
                  v99 = sub_14000DA4C();
                  sub_14000DA94(*(_QWORD *)(a1 - 328), v99, v100);
                  *(_QWORD *)(a1 - 328) = 0LL;
                  v103 = *(_QWORD *)(v19 + 160);
                  if ( v103 )
                  {
                    sub_140039BB8(v103, v101, v102);
                    *(_QWORD *)(v19 + 160) = 0LL;
                  }
                  goto LABEL_133;
                }
                sub_1400B6010(*(_QWORD *)(a1 + 16));
                *(_QWORD *)(a1 + 24) = v104;
                goto LABEL_113;
              }
              v126 = 0LL;
              v137 = &v126;
              v138 = 0LL;
              v139 = 1;
              v134 = a1 - 360;
              v135 = 0LL;
              v136 = 1;
              v105 = a6;
              v20 = sub_1400A29A8((a1 + 8) & -(__int64)(a1 != 424), a6, &v135, &v138);
              sub_1400390B4((__int64)&v134);
              sub_14001189C((__int64)&v137);
              if ( v20 < 0 )
              {
                sub_14000C2A8(
                  (int)retaddr,
                  833,
                  (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                  v20);
                sub_14001D96C((void **)&v126);
                sub_140003238(&v122);
                v106 = sub_14000DA4C();
                sub_14000DA94(*(_QWORD *)(a1 - 328), v106, v107);
                *(_QWORD *)(a1 - 328) = 0LL;
                v110 = *(_QWORD *)(v19 + 160);
                if ( v110 )
                {
                  sub_140039BB8(v110, v108, v109);
                  *(_QWORD *)(v19 + 160) = 0LL;
                }
                goto LABEL_133;
              }
              sub_1400084B4((_WORD *)(*(_QWORD *)(a1 - 328) + 4LL), 64LL, v126);
              *(_DWORD *)(a1 + 44) = v105;
              sub_14001D96C((void **)&v126);
            }
LABEL_113:
            v111 = *(_QWORD *)(a1 - 328);
            *(__m128i *)(v111 + 180) = v22;
            *(_OWORD *)(v111 + 196) = *(_OWORD *)((char *)&v131[1] + 8);
            *(_QWORD *)(v111 + 212) = v23;
            v112 = *(_QWORD *)&v131[0];
            *(_QWORD *)(a1 - 344) = *(_QWORD *)&v131[0];
            *(_DWORD *)v112 = 2;
            *(_DWORD *)(v112 + 4) = v141;
            v113 = *(_OWORD **)(a1 - 328);
            *(_OWORD *)(v112 + 204) = *v113;
            *(_OWORD *)(v112 + 220) = v113[1];
            *(_OWORD *)(v112 + 236) = v113[2];
            *(_OWORD *)(v112 + 252) = v113[3];
            *(_OWORD *)(v112 + 268) = v113[4];
            *(_OWORD *)(v112 + 284) = v113[5];
            *(_OWORD *)(v112 + 300) = v113[6];
            *(_OWORD *)(v112 + 316) = v113[7];
            v113 += 8;
            *(_OWORD *)(v112 + 332) = *v113;
            *(_OWORD *)(v112 + 348) = v113[1];
            *(_OWORD *)(v112 + 364) = v113[2];
            *(_OWORD *)(v112 + 380) = v113[3];
            *(_OWORD *)(v112 + 396) = v113[4];
            *(_OWORD *)(v112 + 412) = v113[5];
            memset((void *)(v112 + 8), 0, 0xC0uLL);
            *(_QWORD *)(a1 - 336) = v112 + 8;
            WerRegisterMemoryBlock((PVOID)(v112 + 8), 0xC0u);
            v114 = *(_QWORD *)(a1 - 328);
            *(_QWORD *)(a1 - 288) = *(_QWORD *)&v131[0] + *(unsigned int *)(v114 + 156);
            if ( a8 )
              *(_QWORD *)(a1 - 272) = *(_QWORD *)&v131[0] + *(unsigned int *)(v114 + 152);
            *(_DWORD *)(*(_QWORD *)(a1 - 336) + 180LL) = -1;
            if ( a9 )
            {
              _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 - 336) + 180LL), v96);
              *(_QWORD *)(a1 - 280) = *(_QWORD *)&v131[0] + *(unsigned int *)(*(_QWORD *)(a1 - 336) + 180LL);
            }
            *(_DWORD *)(v112 + 200) = 1162888004;
            sub_14001821C((__int64 *)(a1 - 352), v122);
            sub_14003826C(&v122, a13);
            sub_14003826C((__int64 *)(a1 + 16), a14);
            *(_DWORD *)(v19 + 56) = 1;
            sub_140003238(&v122);
            v20 = 0;
            goto LABEL_133;
          }
          v76 = v64 + a3;
          if ( v64 + a3 < a3 )
          {
            v20 = -2147024362;
            sub_14000C2A8(
              (int)retaddr,
              780,
              (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
              -2147024362);
            v117 = sub_14000DA4C();
            sub_14000DA94(*(_QWORD *)(a1 - 328), v117, v118);
            *(_QWORD *)(a1 - 328) = 0LL;
          }
          else
          {
            v141 = v52 + v76;
            if ( v52 + v76 >= v76 )
              goto LABEL_83;
            v20 = -2147024362;
            sub_14000C2A8(
              (int)retaddr,
              781,
              (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
              -2147024362);
            v115 = sub_14000DA4C();
            sub_14000DA94(*(_QWORD *)(a1 - 328), v115, v116);
            *(_QWORD *)(a1 - 328) = 0LL;
          }
LABEL_120:
          v119 = *(_QWORD *)(v19 + 160);
          if ( v119 )
          {
            sub_140039BB8(v119, v65, v66);
            *(_QWORD *)(v19 + 160) = 0LL;
          }
          goto LABEL_133;
        }
        v20 = -2147024362;
        sub_14000C2A8(
          (int)retaddr,
          719,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
          -2147024362);
      }
    }
LABEL_127:
    v120 = *(_QWORD *)(v19 + 160);
    if ( v120 )
    {
      sub_140039BB8(v120, v46, v47);
      *(_QWORD *)(v19 + 160) = 0LL;
    }
    goto LABEL_133;
  }
  v20 = -2147024362;
  sub_14000C2A8(
    (int)retaddr,
    710,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    -2147024362);
  v69 = *(_QWORD *)(v19 + 160);
  if ( v69 )
  {
    sub_140039BB8(v69, v67, v68);
    *(_QWORD *)(v19 + 160) = 0LL;
  }
LABEL_133:
  sub_140018FF0(&v133);
  return (unsigned int)v20;
}
