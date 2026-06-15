/*
 * XREFs of sub_14009F2B0 @ 0x14009F2B0
 * Callers:
 *     sub_1400A3090 @ 0x1400A3090 (sub_1400A3090.c)
 *     sub_1400A33C0 @ 0x1400A33C0 (sub_1400A33C0.c)
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
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14009F2B0(
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
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // r9d
  __int64 v38; // rax
  unsigned int v39; // r13d
  unsigned __int64 v40; // rax
  int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // r15d
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  unsigned int v47; // r15d
  unsigned int v48; // edi
  int v49; // eax
  __int64 v50; // r9
  unsigned int v51; // r10d
  unsigned int v52; // r11d
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned int v58; // ecx
  unsigned int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rcx
  void *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  unsigned __int64 v67; // rax
  int v68; // r8d
  unsigned int v69; // ecx
  __int64 v70; // rsi
  int v71; // eax
  unsigned __int64 v72; // rax
  int v73; // r8d
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rcx
  int v77; // eax
  unsigned __int64 v78; // rax
  int v79; // r8d
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  int v84; // r8d
  __int64 v85; // rcx
  __int64 v86; // rax
  __int32 v87; // r12d
  unsigned int v88; // ecx
  __int64 v89; // rsi
  int v90; // eax
  unsigned __int64 v91; // rax
  int v92; // r8d
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rax
  unsigned int v97; // esi
  unsigned __int64 v98; // rax
  int v99; // r8d
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rcx
  __int64 v103; // rax
  char *v104; // rdi
  __int64 v105; // rcx
  __int64 v106; // rcx
  unsigned __int64 v107; // rax
  int v108; // r8d
  unsigned __int64 v109; // rax
  int v110; // r8d
  __int64 v111; // rcx
  __int64 v113; // [rsp+28h] [rbp-B9h] BYREF
  int v114; // [rsp+30h] [rbp-B1h]
  int v115; // [rsp+34h] [rbp-ADh]
  unsigned int v116; // [rsp+38h] [rbp-A9h]
  int v117; // [rsp+3Ch] [rbp-A5h]
  unsigned int v118; // [rsp+40h] [rbp-A1h]
  unsigned int v119; // [rsp+44h] [rbp-9Dh]
  PVOID pvAddress; // [rsp+48h] [rbp-99h]
  _OWORD v121[3]; // [rsp+50h] [rbp-91h] BYREF
  unsigned __int64 v122; // [rsp+80h] [rbp-61h]
  struct _RTL_CRITICAL_SECTION *v123; // [rsp+88h] [rbp-59h] BYREF
  __int64 v124; // [rsp+90h] [rbp-51h] BYREF
  __int64 v125; // [rsp+98h] [rbp-49h] BYREF
  char v126; // [rsp+A0h] [rbp-41h]
  __int64 *v127; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v128; // [rsp+B0h] [rbp-31h] BYREF
  char v129; // [rsp+B8h] [rbp-29h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+3Fh]
  __int64 v131; // [rsp+128h] [rbp+47h] BYREF
  unsigned int v132; // [rsp+140h] [rbp+5Fh]

  v132 = a4;
  v14 = a4;
  v18 = (struct _RTL_CRITICAL_SECTION *)(a1 - 408);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 408));
  v123 = v18;
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
  *(_OWORD *)((char *)v121 + 8) = 0LL;
  memset((char *)&v121[1] + 8, 0, 24);
  if ( !a2 )
    goto LABEL_131;
  if ( *a2 == 0xFFFE )
  {
    if ( a2[8] == 22 )
    {
LABEL_11:
      v22 = *(__m128i *)a2;
      *(_OWORD *)((char *)v121 + 8) = *(_OWORD *)a2;
      *(_OWORD *)((char *)&v121[1] + 8) = *((_OWORD *)a2 + 1);
      v23 = *((_QWORD *)a2 + 4);
      *((_QWORD *)&v121[2] + 1) = v23;
      WORD4(v121[1]) = 22;
      goto LABEL_20;
    }
    if ( !memcmp(a2 + 12, &xmmword_1400C57D0, 0x10uLL) || !memcmp(a2 + 12, &xmmword_1400C6E60, 0x10uLL) )
    {
      v14 = v132;
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
  *(_OWORD *)((char *)v121 + 8) = *(_OWORD *)a2;
  WORD4(v121[0]) = -2;
  WORD4(v121[1]) = 22;
  WORD5(v121[1]) = v25;
  v121[2] = xmmword_1400C57E0;
  LODWORD(v121[2]) = *a2;
  HIDWORD(v121[1]) = 4 - (v24 != 1);
  v23 = 0x719B3800AA000080LL;
  v22 = *(__m128i *)((char *)v121 + 8);
LABEL_20:
  epi16 = _mm_extract_epi16(v22, 6);
  *(_DWORD *)(a1 - 320) = epi16;
  *(_DWORD *)(a1 - 316) = _mm_extract_epi16(v22, 1);
  *(_DWORD *)(a1 - 300) = 1;
  LODWORD(v27) = 0;
  if ( !memcmp(&v121[2], &xmmword_1400C57D0, 0x10uLL) )
    *(_DWORD *)(a1 - 300) = 3;
  LODWORD(v121[0]) = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
  *(float *)(a1 - 252) = (float)SLODWORD(v121[0]);
  *(_DWORD *)(a1 - 308) = _mm_extract_epi16(v22, 7);
  *(_DWORD *)(a1 - 304) = sub_140008824((_WORD *)v121 + 4);
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
  v114 = v29;
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
  if ( a3 % v37 )
    a3 += v37 - a3 % v37;
  *(_DWORD *)(a1 - 256) = a3;
  *(_DWORD *)(a1 - 312) = v14;
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    v38 = a3 / v37 / v14 + 3;
    if ( (unsigned int)v38 < 0x19 )
      v38 = 25LL;
  }
  else
  {
    v38 = 0LL;
  }
  v117 = v38;
  if ( a8 )
  {
    if ( *(_DWORD *)(a1 + 56) == 1 )
    {
      v39 = a3 / v37 / a5 + 3;
      if ( v39 < 0x19 )
        v39 = 25;
    }
    else
    {
      v39 = 0;
    }
    v40 = (unsigned __int64)v39 << 6;
    if ( v40 > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        691,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    if ( (int)v40 + 512 < (unsigned int)v40 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        692,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v41 = v40 + 1535;
    if ( (int)v40 + 1535 < (unsigned int)(v40 + 512) )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        693,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v118 = v41 & 0xFFFFFC00;
    v42 = (v41 & 0xFFFFFC00) + v40;
    if ( v42 < (unsigned int)v40 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        697,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v43 = v42 + 1023;
    if ( v42 + 1023 < v42 )
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
    v118 = 0;
    v46 = v38 << 6;
    if ( v46 > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        683,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    if ( (int)v46 + 512 < (unsigned int)v46 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        684,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v43 = v46 + 1535;
    if ( (int)v46 + 1535 < (unsigned int)(v46 + 512) )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        685,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v39 = 0;
  }
  v47 = v43 & 0xFFFFFC00;
  v122 = 0LL;
  LODWORD(v131) = 0;
  v115 = 0;
  v48 = 0;
  v119 = 0;
  if ( !a9 )
  {
LABEL_80:
    sub_14000DA4C();
    v64 = (void *)sub_140035D64(v63, 0xDEuLL);
    *(_QWORD *)(a1 - 328) = v64;
    if ( !v64 )
    {
      v20 = -2147024882;
      sub_14000C2A8(
        (int)retaddr,
        724,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024882);
      goto LABEL_97;
    }
    memset(v64, 0, 0xDEuLL);
    *(_DWORD *)(*(_QWORD *)(a1 - 328) + 152LL) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 - 328) + 172LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 - 328) + 176LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 - 328) + 144LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 - 328) + 148LL) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 - 328) + 136LL) = (unsigned int)(int)((double)(int)(a3 / *(_DWORD *)(a1 - 320))
                                                                   * 10000000.0
                                                                   / *(float *)(a1 - 252)
                                                                   + 0.5);
    if ( a9 )
    {
      LODWORD(v131) = v48 + v27;
      if ( v48 + (unsigned int)v27 < v48 )
      {
        v20 = -2147024362;
        sub_14000C2A8(
          (int)retaddr,
          776,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
          -2147024362);
        v67 = sub_14000DA4C();
        sub_14000DA94(*(_QWORD *)(a1 - 328), v67, v68);
        *(_QWORD *)(a1 - 328) = 0LL;
        goto LABEL_127;
      }
    }
    else
    {
      v69 = a3 + v114;
      if ( a3 + v114 < a3 )
      {
        v20 = -2147024362;
        sub_14000C2A8(
          (int)retaddr,
          780,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
          -2147024362);
        v109 = sub_14000DA4C();
        sub_14000DA94(*(_QWORD *)(a1 - 328), v109, v110);
        *(_QWORD *)(a1 - 328) = 0LL;
        goto LABEL_127;
      }
      LODWORD(v131) = v47 + v69;
      if ( v47 + v69 < v69 )
      {
        v20 = -2147024362;
        sub_14000C2A8(
          (int)retaddr,
          781,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
          -2147024362);
        v107 = sub_14000DA4C();
        sub_14000DA94(*(_QWORD *)(a1 - 328), v107, v108);
        *(_QWORD *)(a1 - 328) = 0LL;
        goto LABEL_127;
      }
    }
    v113 = 0LL;
    v70 = a11;
    sub_140019444(&v113);
    sub_1400B6010(v70);
    v20 = v71;
    if ( v71 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        786,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        v71);
      sub_140003238(&v113);
      v72 = sub_14000DA4C();
      sub_14000DA94(*(_QWORD *)(a1 - 328), v72, v73);
      *(_QWORD *)(a1 - 328) = 0LL;
      v76 = *(_QWORD *)(v19 + 160);
      if ( v76 )
      {
        sub_140039BB8(v76, v74, v75);
        *(_QWORD *)(v19 + 160) = 0LL;
      }
      goto LABEL_133;
    }
    v116 = 0;
    pvAddress = 0LL;
    sub_1400B6010(v113);
    v20 = v77;
    if ( v77 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        791,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        v77);
      sub_140003238(&v113);
      v78 = sub_14000DA4C();
      sub_14000DA94(*(_QWORD *)(a1 - 328), v78, v79);
      *(_QWORD *)(a1 - 328) = 0LL;
      v82 = *(_QWORD *)(v19 + 160);
      if ( v82 )
      {
        sub_140039BB8(v82, v80, v81);
        *(_QWORD *)(v19 + 160) = 0LL;
      }
      goto LABEL_133;
    }
    if ( v116 < (unsigned int)v131 )
    {
      v20 = -2147024882;
      sub_14000C2A8(
        (int)retaddr,
        793,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024882);
      sub_140003238(&v113);
      v83 = sub_14000DA4C();
      sub_14000DA94(*(_QWORD *)(a1 - 328), v83, v84);
      *(_QWORD *)(a1 - 328) = 0LL;
LABEL_97:
      v85 = *(_QWORD *)(v19 + 160);
      if ( v85 )
      {
        sub_140039BB8(v85, v65, v66);
        *(_QWORD *)(v19 + 160) = 0LL;
      }
      goto LABEL_133;
    }
    **(_DWORD **)(a1 - 328) = 222;
    *(_DWORD *)(*(_QWORD *)(a1 - 328) + 132LL) = v117;
    v86 = *(_QWORD *)(a1 - 328);
    if ( a8 )
    {
      *(_DWORD *)(v86 + 132) = v39;
      *(_DWORD *)(*(_QWORD *)(a1 - 328) + 144LL) = v39;
      *(_DWORD *)(*(_QWORD *)(a1 - 328) + 152LL) = 512;
      *(_DWORD *)(*(_QWORD *)(a1 - 328) + 156LL) = v118;
    }
    else
    {
      *(_DWORD *)(v86 + 156) = 512;
    }
    *(_DWORD *)(*(_QWORD *)(a1 - 328) + 160LL) = v47;
    *(_DWORD *)(*(_QWORD *)(a1 - 328) + 164LL) = v47 + a3;
    v87 = v47 + v114 + a3;
    *(_DWORD *)(*(_QWORD *)(a1 - 328) + 168LL) = v87;
    if ( a9 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 - 328) + 148LL) = v115;
      v88 = v119;
      *(_DWORD *)(*(_QWORD *)(a1 - 328) + 172LL) = v119;
      *(_DWORD *)(*(_QWORD *)(a1 - 328) + 176LL) = v122 + v88;
    }
    if ( (a7 & 0x40000) != 0 )
    {
      v89 = a12;
      if ( a12 )
      {
        sub_140019444((__int64 *)(a1 + 16));
        sub_1400B6010(v89);
        v20 = v90;
        if ( v90 < 0 )
        {
          sub_14000C2A8(
            (int)retaddr,
            825,
            (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            v90);
          sub_140003238(&v113);
          v91 = sub_14000DA4C();
          sub_14000DA94(*(_QWORD *)(a1 - 328), v91, v92);
          *(_QWORD *)(a1 - 328) = 0LL;
          v95 = *(_QWORD *)(v19 + 160);
          if ( v95 )
          {
            sub_140039BB8(v95, v93, v94);
            *(_QWORD *)(v19 + 160) = 0LL;
          }
          goto LABEL_133;
        }
        sub_1400B6010(*(_QWORD *)(a1 + 16));
        *(_QWORD *)(a1 + 24) = v96;
        goto LABEL_117;
      }
      v131 = 0LL;
      v127 = &v131;
      v128 = 0LL;
      v129 = 1;
      v124 = a1 - 360;
      v125 = 0LL;
      v126 = 1;
      v97 = a6;
      v20 = sub_1400A29A8((a1 + 8) & -(__int64)(a1 != 424), a6, &v125, &v128);
      sub_1400390B4((__int64)&v124);
      sub_14001189C((__int64)&v127);
      if ( v20 < 0 )
      {
        sub_14000C2A8(
          (int)retaddr,
          833,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
          v20);
        sub_14001D96C((void **)&v131);
        sub_140003238(&v113);
        v98 = sub_14000DA4C();
        sub_14000DA94(*(_QWORD *)(a1 - 328), v98, v99);
        *(_QWORD *)(a1 - 328) = 0LL;
        v102 = *(_QWORD *)(v19 + 160);
        if ( v102 )
        {
          sub_140039BB8(v102, v100, v101);
          *(_QWORD *)(v19 + 160) = 0LL;
        }
        goto LABEL_133;
      }
      sub_1400084B4((_WORD *)(*(_QWORD *)(a1 - 328) + 4LL), 64LL, v131);
      *(_DWORD *)(a1 + 44) = v97;
      sub_14001D96C((void **)&v131);
    }
LABEL_117:
    v103 = *(_QWORD *)(a1 - 328);
    *(__m128i *)(v103 + 180) = v22;
    *(_OWORD *)(v103 + 196) = *(_OWORD *)((char *)&v121[1] + 8);
    *(_QWORD *)(v103 + 212) = v23;
    v104 = (char *)pvAddress;
    *(_QWORD *)(a1 - 344) = pvAddress;
    v105 = *(_QWORD *)(a1 - 328);
    *(_OWORD *)(v104 + 200) = *(_OWORD *)v105;
    *(_OWORD *)(v104 + 216) = *(_OWORD *)(v105 + 16);
    *(_OWORD *)(v104 + 232) = *(_OWORD *)(v105 + 32);
    *(_OWORD *)(v104 + 248) = *(_OWORD *)(v105 + 48);
    *(_OWORD *)(v104 + 264) = *(_OWORD *)(v105 + 64);
    *(_OWORD *)(v104 + 280) = *(_OWORD *)(v105 + 80);
    *(_OWORD *)(v104 + 296) = *(_OWORD *)(v105 + 96);
    *(_OWORD *)(v104 + 312) = *(_OWORD *)(v105 + 112);
    v105 += 128LL;
    *(_OWORD *)(v104 + 328) = *(_OWORD *)v105;
    *(_OWORD *)(v104 + 344) = *(_OWORD *)(v105 + 16);
    *(_OWORD *)(v104 + 360) = *(_OWORD *)(v105 + 32);
    *(_OWORD *)(v104 + 376) = *(_OWORD *)(v105 + 48);
    *(_OWORD *)(v104 + 392) = *(_OWORD *)(v105 + 64);
    *((_QWORD *)v104 + 51) = *(_QWORD *)(v105 + 80);
    *((_DWORD *)v104 + 104) = *(_DWORD *)(v105 + 88);
    *((_WORD *)v104 + 210) = *(_WORD *)(v105 + 92);
    memset(v104, 0, 0xC0uLL);
    *(_QWORD *)(a1 - 336) = v104;
    WerRegisterMemoryBlock(v104, 0xC0u);
    v106 = *(_QWORD *)(a1 - 328);
    *(_QWORD *)(a1 - 288) = (char *)pvAddress + *(unsigned int *)(v106 + 156);
    if ( a8 )
      *(_QWORD *)(a1 - 272) = (char *)pvAddress + *(unsigned int *)(v106 + 152);
    *(_DWORD *)(*(_QWORD *)(a1 - 336) + 180LL) = -1;
    if ( a9 )
    {
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 - 336) + 180LL), v87);
      *(_QWORD *)(a1 - 280) = (char *)pvAddress + *(unsigned int *)(*(_QWORD *)(a1 - 336) + 180LL);
    }
    *((_DWORD *)v104 + 48) = 1162888004;
    sub_14001821C((__int64 *)(a1 - 352), v113);
    sub_14003826C(&v113, a13);
    sub_14003826C((__int64 *)(a1 + 16), a14);
    *(_DWORD *)(v19 + 56) = 1;
    sub_140003238(&v113);
    v20 = 0;
    goto LABEL_133;
  }
  v49 = sub_140048338(a9, v121[0], &v131);
  v20 = v49;
  if ( v49 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      709,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      v49);
    v55 = *(_QWORD *)(v19 + 160);
    if ( v55 )
    {
      sub_140039BB8(v55, v53, v54);
      *(_QWORD *)(v19 + 160) = 0LL;
    }
    goto LABEL_133;
  }
  v27 = (unsigned int)v131 * v50;
  v122 = v27;
  if ( v27 <= 0xFFFFFFFF )
  {
    if ( *(_DWORD *)(a1 + 56) == 1 )
    {
      v56 = (unsigned int)v27 / (unsigned int)v50 / a5 + 3;
      if ( (unsigned int)v56 < v52 )
        v56 = v52;
    }
    else
    {
      v56 = v51;
    }
    v115 = v56;
    v57 = v56 << 6;
    if ( v57 > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        717,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v58 = v47 + v57;
    if ( v47 + (unsigned int)v57 < (unsigned int)v57 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        718,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v59 = v58 + a3;
    if ( v58 + a3 < v58 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        719,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
      goto LABEL_127;
    }
    v48 = v59 + v114;
    v119 = v59 + v114;
    if ( v59 + v114 < v59 )
    {
      v20 = -2147024362;
      sub_14000C2A8(
        (int)retaddr,
        720,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        -2147024362);
LABEL_127:
      v111 = *(_QWORD *)(v19 + 160);
      if ( v111 )
      {
        sub_140039BB8(v111, v44, v45);
        *(_QWORD *)(v19 + 160) = 0LL;
      }
      goto LABEL_133;
    }
    goto LABEL_80;
  }
  v20 = -2147024362;
  sub_14000C2A8(
    (int)retaddr,
    710,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    -2147024362);
  v62 = *(_QWORD *)(v19 + 160);
  if ( v62 )
  {
    sub_140039BB8(v62, v60, v61);
    *(_QWORD *)(v19 + 160) = 0LL;
  }
LABEL_133:
  sub_140018FF0(&v123);
  return (unsigned int)v20;
}
