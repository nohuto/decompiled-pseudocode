/*
 * XREFs of SetupAAHeader @ 0x14013BB0C
 * Callers:
 *     AAHalftoneBitmap @ 0x14013B328 (AAHalftoneBitmap.c)
 * Callees:
 *     CheckBMPNeedFixup @ 0x14013ADF0 (CheckBMPNeedFixup.c)
 *     ComputeInputColorInfo @ 0x14013C9C4 (ComputeInputColorInfo.c)
 *     ComputeAABBP @ 0x14013CBD4 (ComputeAABBP.c)
 *     ComputeByteOffset @ 0x14013D870 (ComputeByteOffset.c)
 *     _ALIGN_MEM @ 0x1401B3918 (_ALIGN_MEM.c)
 *     ComputeBytesPerScanLine @ 0x1401E705C (ComputeBytesPerScanLine.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)())
{
  __int64 v6; // rdx
  _BYTE *v7; // r10
  __int64 v8; // rax
  int v9; // edi
  int v10; // r13d
  unsigned int v11; // r15d
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // r9d
  unsigned int v15; // esi
  __int64 v16; // r12
  __int64 v17; // rdx
  unsigned int *v18; // r14
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rdi
  unsigned int v23; // r9d
  __int64 result; // rax
  PVOID v25; // rcx
  unsigned __int64 v26; // rdx
  char v27; // r8
  __int64 (__fastcall *v28)(int, int, int, int, int); // rax
  __int64 (__fastcall *v29)(int, int, int, int, int); // rcx
  unsigned int v30; // r11d
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  int v35; // r10d
  __int64 v36; // rax
  unsigned int v37; // r8d
  unsigned __int64 v38; // rax
  int v39; // r11d
  unsigned __int64 v40; // rax
  int v41; // edi
  signed int v42; // edx
  signed int v43; // r12d
  unsigned int v44; // r13d
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned int v47; // esi
  unsigned int v48; // r14d
  unsigned __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // edx
  unsigned int v54; // ecx
  unsigned int v55; // eax
  unsigned int v56; // r8d
  __int64 v57; // rax
  int *v58; // rdi
  __int64 v59; // rdx
  unsigned int v60; // ecx
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  _QWORD *v65; // rax
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rcx
  size_t v69; // r8
  unsigned int v70; // r12d
  int v71; // eax
  unsigned int v72; // r14d
  int v73; // esi
  int v74; // r11d
  _DWORD *v75; // r9
  int v76; // eax
  __int64 v77; // r15
  __int64 v78; // rdx
  int v79; // r10d
  int v80; // eax
  int v81; // r10d
  __int64 v82; // rcx
  __int64 v83; // r15
  int v84; // eax
  int v85; // r11d
  __int64 v86; // rcx
  int v87; // eax
  int v88; // r10d
  int v89; // r11d
  __int64 v90; // rdx
  unsigned int v91; // eax
  __int64 (__fastcall **v92)(); // rcx
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // rdx
  unsigned int v100; // edx
  bool v101; // cf
  __int64 (__fastcall *v102)(__int64); // r8
  bool v103; // sf
  unsigned int v104; // r13d
  int v105; // r8d
  int v106; // r12d
  int v107; // r12d
  __int64 v108; // rdx
  unsigned int v109; // eax
  __int64 v110; // rcx
  unsigned __int64 v111; // rcx
  __int64 v112; // rax
  unsigned __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 (__fastcall *v116)(); // r8
  __int64 v117; // rax
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // rcx
  __int64 v120; // rax
  __int64 (__fastcall *v121)(); // r8
  __int64 v122; // rax
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rdx
  unsigned __int64 v125; // rax
  unsigned __int64 v126; // rcx
  unsigned int v127; // edx
  unsigned int v128; // eax
  __int64 v129; // r8
  int v130; // eax
  int v131; // r12d
  int v132; // r10d
  _DWORD *v133; // r8
  __int64 v134; // rcx
  _BYTE *v135; // rax
  unsigned int v136; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v137)(); // [rsp+68h] [rbp-98h]
  signed int v138; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v139; // [rsp+74h] [rbp-8Ch]
  unsigned int v140; // [rsp+78h] [rbp-88h]
  unsigned int v141; // [rsp+7Ch] [rbp-84h]
  int v142; // [rsp+80h] [rbp-80h]
  unsigned int v143; // [rsp+84h] [rbp-7Ch]
  __int64 v144; // [rsp+88h] [rbp-78h]
  PVOID pv; // [rsp+90h] [rbp-70h]
  __int64 v146; // [rsp+98h] [rbp-68h]
  _DWORD *v147; // [rsp+A0h] [rbp-60h]
  _QWORD *v148; // [rsp+A8h] [rbp-58h]
  _BYTE *v149; // [rsp+B0h] [rbp-50h]
  __int64 v150; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v151)(); // [rsp+C0h] [rbp-40h]
  unsigned int v152; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int8 v153; // [rsp+D4h] [rbp-2Ch]
  char v154; // [rsp+D5h] [rbp-2Bh]
  __int64 (__fastcall *v155)(int, int, int, int, int); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v156)(__int64, __int64, unsigned int *, _BYTE *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v157)(__int64, _QWORD, int *, char *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+E8h] [rbp-18h]
  __int64 v158; // [rsp+F0h] [rbp-10h]
  __int64 v159; // [rsp+F8h] [rbp-8h]
  __int64 v160; // [rsp+100h] [rbp+0h]
  __int64 v161; // [rsp+108h] [rbp+8h]
  unsigned int v162; // [rsp+110h] [rbp+10h] BYREF
  int v163; // [rsp+114h] [rbp+14h] BYREF
  _BYTE v164[4]; // [rsp+118h] [rbp+18h] BYREF
  char v165[4]; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v166; // [rsp+120h] [rbp+20h] BYREF
  int v167; // [rsp+124h] [rbp+24h] BYREF
  int v168; // [rsp+128h] [rbp+28h] BYREF
  int v169; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v170; // [rsp+130h] [rbp+30h]
  int v171; // [rsp+134h] [rbp+34h]
  int v172; // [rsp+138h] [rbp+38h]
  int v173; // [rsp+13Ch] [rbp+3Ch]
  int v174; // [rsp+140h] [rbp+40h]
  int v175; // [rsp+144h] [rbp+44h]
  int v176; // [rsp+150h] [rbp+50h]
  int v177; // [rsp+154h] [rbp+54h]
  unsigned int v178; // [rsp+158h] [rbp+58h]
  int v179; // [rsp+15Ch] [rbp+5Ch]

  v146 = a2;
  v148 = a1;
  v151 = a4;
  memset_0(&v152, 0, 0x90uLL);
  v6 = a1[5];
  v7 = (_BYTE *)a1[2];
  v144 = a1[3];
  v147 = (_DWORD *)a1[4];
  v143 = *(unsigned __int8 *)(v6 + 10);
  v8 = a1[1];
  v149 = v7;
  v150 = v6;
  v9 = *(_DWORD *)(v8 + 56);
  v10 = 2 * ((*(_BYTE *)(v8 + 24) & 1) == 0);
  v136 = v10 + 1;
  v152 = (v9 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v7 & 0x40) != 0 )
    v152 = 1536;
  v11 = 0;
  if ( (int)ComputeAABBP(v7, v6, &v152, v10 == 0) <= 0 )
    return 0LL;
  v12 = v152;
  v13 = 3100;
  if ( (v9 & 0x100000) != 0 )
  {
    v12 = v152 | 0x800;
    v152 |= 0x800u;
    if ( (v9 & 0x200000) != 0 )
    {
      v12 |= 0x1000u;
      v13 = 5148;
      v152 = v12;
    }
    else
    {
      if ( (v9 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v9 & 0x1000000) != 0 )
      {
        v12 |= 0x100000u;
        v152 = v12;
      }
      v13 = 3868;
    }
  }
  if ( (v9 & 0x40000000) != 0 )
    v152 = v12 & 0xFFFFFFE7;
  if ( v13 + 8 < v13 )
    return 4294967294LL;
  v14 = (_DWORD)a1 + 64;
  v15 = (v13 + 8) & 0xFFFFFFF8;
  v16 = v144;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v144 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v144 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v144 + 32) + 3LL),
    v14,
    a3 + 8);
  v17 = v152;
  *(_BYTE *)(a3 + 8) |= v10 != 0 ? 2 : 6;
  if ( (v9 & 0x4000) != 0 )
  {
    v17 = (unsigned int)v17 | 4;
    v152 = v17;
  }
  if ( (*v149 & 0x40) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v152 = v17;
  }
  if ( (v17 & 0x200) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v152 = v17;
  }
  if ( (v17 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v16, &v152);
    v17 = v152;
    if ( (v152 & 0x80000) != 0 )
    {
      if ( (v9 & 0x80000) != 0 )
        LODWORD(v17) = v152 | 0x200;
      else
        LODWORD(v17) = v152 & 0xFFFFFDFF;
      v152 = v17;
    }
  }
  if ( (v17 & 0x200) != 0 )
  {
    LODWORD(v17) = v17 & 0xFFFFBFFF;
    v152 = v17;
  }
  if ( v147 )
  {
    LODWORD(v17) = v17 | 0x80;
    v152 = v17;
  }
  pv = (PVOID)v156(v146, v17, &v162, v164, *(_DWORD *)(v16 + 12), v170, v172, &v166, &v168, v15);
  v18 = (unsigned int *)pv;
  if ( !pv )
  {
    v15 = 0;
    pv = (PVOID)v156(v146, v152, &v162, v164, *(_DWORD *)(v144 + 12), v170, v172, &v166, &v168, 0);
    v18 = (unsigned int *)pv;
    if ( !pv )
      return 4294967294LL;
  }
  if ( !*v18 || !v18[1] )
    goto LABEL_28;
  v19 = v152;
  *(_QWORD *)(a3 + 304) = v18;
  if ( v15 )
  {
    v20 = *((_QWORD *)v18 + 4);
    *(_QWORD *)(a3 + 376) = v20;
    if ( (v19 & 0x800) == 0 )
      goto LABEL_25;
    v97 = v20 + 3100;
    goto LABEL_111;
  }
  v94 = v146;
  v19 |= 0x80000000;
  v152 = v19;
  v95 = v146 + 856;
  *(_QWORD *)(a3 + 376) = v146 + 856;
  v20 = v95;
  if ( (v19 & 0x800) != 0 )
  {
    v96 = *(_QWORD *)(v94 + 7064);
    *(_QWORD *)(a3 + 336) = v96;
    if ( (v9 & 0x200000) != 0 )
    {
      v97 = v96 + 768;
LABEL_111:
      *(_QWORD *)(a3 + 336) = v97;
    }
  }
LABEL_25:
  *(_QWORD *)(a3 + 384) = v20 + 28;
  if ( (v19 & 1) != 0 )
  {
    v166 = v174 - v166 - 1;
    v168 = v174 - v168 - 1;
  }
  v21 = *v18;
  v22 = v18[1];
  v141 = v21;
  v140 = v22;
  v23 = v21 + 6;
  if ( (int)v21 + 6 < (unsigned int)v21 )
    goto LABEL_28;
  v137 = 0LL;
  LODWORD(v26) = 0;
  if ( (v19 & 0x200) != 0 )
  {
    v27 = v153;
    if ( v153 == 1 )
    {
      v137 = (__int64 (__fastcall *)())BltDIB_CY;
      goto LABEL_36;
    }
    if ( v153 == 2 || v153 == 3 )
    {
      v102 = (__int64 (__fastcall *)(__int64))SkipDIB_CY;
LABEL_138:
      v137 = (__int64 (__fastcall *)())v102;
LABEL_36:
      if ( v154 )
      {
        if ( v154 == 1 )
        {
          v28 = SkipDIB_CX;
          v29 = GraySkipDIB_CX;
        }
        else
        {
          if ( v154 != 2 )
          {
LABEL_41:
            v27 = -1;
            v153 = -1;
            goto LABEL_42;
          }
          v28 = RepDIB_CX;
          v29 = GrayRepDIB_CX;
        }
      }
      else
      {
        v28 = CopyDIB_CX;
        v29 = GrayCopyDIB_CXGray;
      }
      if ( !v10 )
        v28 = v29;
      v155 = v28;
      goto LABEL_41;
    }
    if ( (unsigned int)v153 - 4 <= 1 )
    {
      if ( (v19 & 0x800) != 0 )
      {
        v120 = (unsigned int)(v22 + 6);
        if ( (unsigned int)v120 < (unsigned int)v22 )
          goto LABEL_28;
        LODWORD(v26) = 3 * v120;
        if ( (unsigned __int64)(3 * v120) > 0xFFFFFFFF )
          goto LABEL_28;
      }
      v102 = RepDIB_CY;
      goto LABEL_138;
    }
  }
  else
  {
    v27 = v153;
  }
LABEL_42:
  switch ( v27 )
  {
    case 0:
      v137 = TileDIB_CY;
      if ( v10 )
      {
        LODWORD(v26) = 0;
        break;
      }
      LODWORD(v26) = 2 * v21;
      if ( (unsigned __int64)(2 * v21) <= 0xFFFFFFFF )
        break;
LABEL_28:
      EngFreeMem(v18);
      return 0LL;
    case 1:
      v137 = (__int64 (__fastcall *)())BltDIB_CY;
      break;
    case 2:
      if ( v10 )
      {
        v30 = v10 + 1;
        v98 = v23 * (unsigned __int64)v136;
        v137 = (__int64 (__fastcall *)())ShrinkDIB_CY;
        if ( v98 > 0xFFFFFFFF )
          goto LABEL_28;
        v99 = 36 * v21;
      }
      else
      {
        LODWORD(v98) = 12 * v22;
        v137 = (__int64 (__fastcall *)())GrayShrinkDIB_CY;
        if ( (unsigned __int64)(12 * v22) > 0xFFFFFFFF )
          goto LABEL_28;
        v112 = (unsigned int)(v22 + 6);
        if ( (unsigned int)v112 < (unsigned int)v22 )
          goto LABEL_28;
        v30 = v10 + 1;
        v99 = v112 * v136;
      }
      if ( v99 > 0xFFFFFFFF )
        goto LABEL_28;
      v100 = v99 + 2048;
      if ( v100 < 0x800 )
        goto LABEL_28;
      LODWORD(v26) = v98 + v100;
      v101 = (unsigned int)v26 < (unsigned int)v98;
      goto LABEL_128;
    case 3:
      v109 = v18[5];
      v137 = (__int64 (__fastcall *)())ShrinkDIB_CY_SrkCX;
      v110 = v109 + 2;
      if ( (unsigned int)v110 >= v109 )
      {
        v111 = 36 * v110;
        if ( v111 <= 0xFFFFFFFF )
        {
          LODWORD(v26) = v111 + 2048;
          if ( (unsigned int)v111 < 0xFFFFF800 )
            break;
        }
      }
      goto LABEL_28;
    case 4:
      v116 = GrayExpandDIB_CY;
      if ( v10 )
        v116 = (__int64 (__fastcall *)())ExpandDIB_CY;
      v117 = (unsigned int)(v22 + 6);
      v137 = v116;
      if ( (unsigned int)v117 < (unsigned int)v22 )
        goto LABEL_28;
      v30 = v10 + 1;
      v118 = v117 * v136;
      if ( v118 > 0xFFFFFFFF )
        goto LABEL_28;
      v119 = 6LL * (unsigned int)v118;
      if ( v119 > 0xFFFFFFFF )
        goto LABEL_28;
      LODWORD(v26) = v119 + 4096;
LABEL_165:
      v101 = (unsigned int)v26 < 0x1000;
LABEL_128:
      if ( !v101 )
        goto LABEL_49;
      goto LABEL_28;
    case 5:
      if ( (v19 & 0x4000) != 0 )
      {
        v30 = v10 + 1;
        v113 = v23 * (unsigned __int64)v136;
        if ( v113 <= 0xFFFFFFFF )
        {
          v26 = 5LL * (unsigned int)v113;
          if ( v26 <= 0xFFFFFFFF )
          {
            v137 = (__int64 (__fastcall *)())FastExpAA_CY;
            goto LABEL_49;
          }
        }
        goto LABEL_28;
      }
      v121 = GrayExpandDIB_CY_ExpCX;
      if ( v10 )
        v121 = ExpandDIB_CY_ExpCX;
      v122 = (unsigned int)(v22 + 6);
      v137 = v121;
      if ( (unsigned int)v122 < (unsigned int)v22 )
        goto LABEL_28;
      v30 = v10 + 1;
      v123 = v136 * v122;
      if ( v123 > 0xFFFFFFFF )
        goto LABEL_28;
      v124 = 4LL * (unsigned int)v123;
      if ( v124 > 0xFFFFFFFF )
        goto LABEL_28;
      v125 = v136 * (unsigned __int64)v23;
      if ( v125 > 0xFFFFFFFF )
        goto LABEL_28;
      v126 = 3LL * (unsigned int)v125;
      if ( v126 > 0xFFFFFFFF )
        goto LABEL_28;
      v127 = v126 + v124;
      if ( v127 < (unsigned int)v126 )
        goto LABEL_28;
      LODWORD(v26) = v127 + 4096;
      goto LABEL_165;
  }
  v30 = v10 + 1;
LABEL_49:
  v31 = (v19 & 0x800) != 0 ? v22 : 0;
  *(_BYTE *)(a3 + 96) = v10 != 0 ? 0 : 4;
  *(_DWORD *)(a3 + 152) = v31 * v30;
  v32 = v31 + 8;
  if ( (unsigned int)v32 < v31 )
    goto LABEL_30;
  v33 = v30;
  v34 = v30 * v32;
  if ( v34 > 0xFFFFFFFF )
    goto LABEL_30;
  if ( (int)v34 + 8 < (unsigned int)v34 )
    goto LABEL_30;
  v35 = (v34 + 8) & 0xFFFFFFF8;
  if ( (int)v26 + 8 < (unsigned int)v26 )
    goto LABEL_30;
  v36 = v23 + 2;
  v37 = (v26 + 8) & 0xFFFFFFF8;
  v139 = v37;
  if ( (unsigned int)v36 < v23 )
    goto LABEL_30;
  v38 = v30 * v36;
  if ( v38 > 0xFFFFFFFF )
    goto LABEL_30;
  if ( (int)v38 + 8 < (unsigned int)v38 )
    goto LABEL_30;
  v39 = (v38 + 8) & 0xFFFFFFF8;
  if ( (unsigned int)v22 >= 0xFFFFFFF6 )
    goto LABEL_30;
  v40 = 4LL * (unsigned int)(v22 + 10);
  if ( v40 > 0xFFFFFFFF || (int)v40 + 8 < (unsigned int)v40 )
    goto LABEL_30;
  v41 = (v40 + 8) & 0xFFFFFFF8;
  if ( (v19 & 0x80u) != 0 )
  {
    v128 = ComputeBytesPerScanLine(1LL);
    if ( v128 + 4 < v128 )
      goto LABEL_30;
    v138 = v128 + 4;
    if ( (int)ALIGN_MEM(&v138) < 0 )
      goto LABEL_30;
    v42 = v138;
    v37 = v139;
  }
  else
  {
    v42 = 0;
  }
  v138 = v42;
  if ( v39 < v35 )
    v39 = v35;
  v142 = v39;
  if ( (v19 & 0x1800) == 0x800 )
  {
    if ( v140 + 8 < v140 )
      goto LABEL_30;
    v43 = (v140 + 8) & 0xFFFFFFF8;
  }
  else
  {
    v43 = 0;
  }
  if ( v143 != 254 || (v44 = 368, !v148[7]) )
    v44 = 0;
  if ( (v152 & 0x40) == 0 )
  {
    v47 = 0;
    goto LABEL_72;
  }
  v45 = v141 + 4;
  if ( (unsigned int)v45 < v141 || (v46 = v33 * v45, v46 > 0xFFFFFFFF) || (int)v46 + 8 < (unsigned int)v46 )
  {
LABEL_30:
    v25 = v18;
LABEL_31:
    EngFreeMem(v25);
    return 4294967294LL;
  }
  v47 = (v46 + 8) & 0xFFFFFFF8;
LABEL_72:
  if ( (*(_BYTE *)(a3 + 8) & 4) == 0
    || (v148[8] & 1) == 0
    || (*(_BYTE *)(a3 + 72) & 1) == 0
    || (v48 = 3080, *((_BYTE *)v148 + 84) == 4) )
  {
    v48 = 0;
  }
  v49 = 6LL * v47;
  if ( v49 > 0xFFFFFFFF )
    goto LABEL_75;
  v50 = v49 + v39;
  if ( (int)v49 + v39 < (unsigned int)v49 )
    goto LABEL_75;
  v51 = v50 + v41;
  if ( v50 + v41 < v50
    || (v52 = v51 + v42, v51 + v42 < v51)
    || (v53 = v52 + v43, v52 + v43 < v52)
    || (v54 = v53 + v48, v53 + v48 < v53)
    || (v55 = v54 + v44, v54 + v44 < v54)
    || (v56 = v55 + v37, v56 < v55)
    || (v57 = v157(v146, v152, &v163, v165, *(_DWORD *)(v144 + 16), v171, v173, &v167, &v169, v56),
        (v58 = (int *)v57) == 0LL) )
  {
LABEL_75:
    v25 = pv;
    goto LABEL_31;
  }
  if ( !*(_DWORD *)v57 || !*(_DWORD *)(v57 + 4) )
  {
    v75 = pv;
    goto LABEL_141;
  }
  v59 = v139;
  v60 = v152;
  *(_QWORD *)(a3 + 312) = v57;
  v61 = *(_QWORD *)(v57 + 32) + v59;
  v62 = v141 * v136;
  *(_QWORD *)(a3 + 536) = v61;
  *(_DWORD *)a3 = v60;
  *(_DWORD *)(a3 + 64) = v62;
  v63 = v142 + v61;
  if ( v43 )
  {
    v64 = (int)v140;
    *(_QWORD *)(a3 + 352) = v63;
    *(_QWORD *)(a3 + 344) = v63;
    *(_DWORD *)(a3 + 368) = 1;
    *(_QWORD *)(a3 + 360) = v63 + v64;
    v63 += v43;
  }
  else
  {
    LODWORD(v64) = v140;
  }
  if ( v47 )
  {
    *(_QWORD *)(a3 + 264) = v63;
    v65 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v47;
    v66 = 6LL;
    do
    {
      *v65 = v63;
      v63 += (int)v47;
      ++v65;
      --v66;
    }
    while ( v66 );
  }
  if ( v44 )
  {
    *(_QWORD *)(a3 + 400) = v63;
    v63 += v44;
  }
  v67 = v138;
  if ( v138 )
  {
    *(_QWORD *)(a3 + 208) = v63;
    v63 += v67;
  }
  v68 = v63;
  if ( v48 )
    v63 += v48;
  else
    v68 = *(_QWORD *)(a3 + 384);
  *(_QWORD *)(a3 + 16) = v68;
  *(_QWORD *)(a3 + 576) = v63 + 20;
  *(_QWORD *)(a3 + 544) = v63 + 20;
  *(_QWORD *)(a3 + 560) = v63 + 20;
  v69 = 4LL * (int)v64;
  *(_QWORD *)(a3 + 568) = v69 + v63 + 20;
  *(_QWORD *)(a3 + 552) = v69 + v63 + 20;
  *(_QWORD *)(a3 + 584) = v69 + v63 + 20;
  memset_0((void *)(v63 + 20), 255, v69);
  v70 = v166;
  v139 = v166;
  if ( v166 > v168 )
  {
    v70 = v168;
    v168 = v166;
    v114 = *(_QWORD *)(a3 + 568) - 4LL;
    v139 = v70;
    *(_QWORD *)(a3 + 576) = v114;
    v115 = *(_QWORD *)(a3 + 560) - 4LL;
    v166 = v70;
    *(_QWORD *)(a3 + 584) = v115;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
    v71 = -4;
  }
  else
  {
    v71 = 4;
  }
  *(_DWORD *)(a3 + 592) = v71;
  v72 = v152;
  *(_DWORD *)(a3 + 328) = v70 - v176;
  if ( (v72 & 2) != 0 )
  {
    v74 = v175 - v167 - 1;
    v73 = v175 - v169 - 1;
    v167 = v74;
    v169 = v73;
  }
  else
  {
    v73 = v169;
    v74 = v167;
  }
  v75 = pv;
  *(_DWORD *)(a3 + 332) = v74 - v177;
  *(_QWORD *)(a3 + 288) = v155;
  *(_DWORD *)(a3 + 56) = *v75;
  v76 = *v58;
  *(_DWORD *)(a3 + 60) = *v58;
  *(_DWORD *)(a3 + 40) = v76;
  if ( (v72 & 0x80u) == 0 )
    goto LABEL_103;
  v103 = (int)(v75[30] + v178) < 0;
  v104 = v75[30] + v178;
  v105 = v147[5];
  v178 = v104;
  v106 = v58[30];
  v142 = v105;
  v107 = v106 + v179;
  v179 = v107;
  v108 = v75[31] + v104;
  if ( v103 || v107 < 0 || (int)v108 > v147[3] || v107 + v58[31] > v147[4] )
  {
    v11 = -13;
LABEL_141:
    EngFreeMem(v75);
    EngFreeMem(v58);
    return v11;
  }
  *(_DWORD *)(a3 + 224) = v105;
  *(_DWORD *)(a3 + 228) = v58[31];
  ComputeByteOffset(1LL, v108, a3 + 4);
  v130 = ComputeByteOffset(1LL, v104, v129);
  v131 = v142 * v107;
  v133 = v147;
  *(_DWORD *)(a3 + 200) = v132 - v130 + 1;
  v134 = v130 + *((_QWORD *)v133 + 3) + v131;
  v135 = v149;
  *(_QWORD *)(a3 + 216) = v134;
  if ( (*v135 & 8) != 0 )
  {
    v72 |= 0x100u;
    v152 = v72;
  }
  v70 = v139;
  *(_QWORD *)(a3 + 184) = v158;
  *(_QWORD *)(a3 + 192) = v159;
LABEL_103:
  v77 = v144;
  v78 = v162;
  v79 = *(_DWORD *)(v144 + 20);
  *(_DWORD *)(a3 + 68) = v79;
  *(_DWORD *)(a3 + 260) = v79;
  v80 = ComputeByteOffset(*(unsigned __int8 *)(v77 + 10), v78, a3 + 9);
  v82 = *(_QWORD *)(v77 + 24) + v81 * v163 + (__int64)v80;
  v83 = v150;
  *(_QWORD *)(a3 + 232) = v160;
  *(_QWORD *)(a3 + 240) = v161;
  *(_QWORD *)(a3 + 48) = v82;
  *(_QWORD *)(a3 + 32) = v82;
  v84 = *(_DWORD *)(v83 + 20);
  if ( v85 > v73 )
    v84 = -v84;
  v86 = v143;
  *(_DWORD *)(a3 + 156) = v84;
  v87 = ComputeByteOffset(v86, v70, a3 + 97);
  v90 = *(_QWORD *)(v83 + 24) + v88 * v89 + (__int64)v87;
  *(_QWORD *)(a3 + 136) = v90;
  *(_QWORD *)(a3 + 120) = v90;
  v91 = v140;
  *(_QWORD *)(a3 + 320) = v90 + *(_DWORD *)(a3 + 156) * v58[1];
  v92 = v151;
  *(_DWORD *)(a3 + 144) = v91;
  v93 = v58[1];
  *(_DWORD *)(a3 + 148) = v93;
  *(_DWORD *)(a3 + 128) = v93;
  *(_DWORD *)a3 = v72;
  *v92 = v137;
  if ( (v72 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += *(_DWORD *)(a3 + 68) * v58[6];
    *(_DWORD *)(a3 + 60) -= v58[6];
  }
  result = 1LL;
  *(_QWORD *)(a3 + 248) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  return result;
}
