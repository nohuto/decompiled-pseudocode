/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070
 * Callers:
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x14002C070 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     DpiRectContainsRectWithSubpixel @ 0x14002C5C4 (DpiRectContainsRectWithSubpixel.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x14002C6E0 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x14002C7B8 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x14002C82C (DpiRectIntersectsRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRect @ 0x14002E1D8 (PhysicalToLogicalInPlaceRect.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x14002EC1C (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x14002EC34 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x14002F6D0 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x14002F720 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x14002F928 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400AA854 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *a1, HRGN *a2, int a3)
{
  struct tagWND *v3; // r13
  __int64 top; // rdx
  __int64 v5; // rax
  struct tagWND *v6; // r14
  __int64 v7; // rcx
  char *v8; // rdi
  int v9; // ebx
  int v10; // r10d
  __int64 v11; // rcx
  __m128i v12; // xmm2
  struct _RECTL v13; // xmm1
  __m128i v14; // xmm0
  struct tagWND *v15; // r15
  __int64 v16; // rsi
  struct tagWND *v17; // r8
  struct tagWND *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  int right; // r8d
  LONG v26; // eax
  LONG v27; // eax
  int bottom; // ecx
  unsigned __int16 v29; // bx
  __int64 v30; // rbx
  __int64 v31; // r8
  LONG left; // edx
  LONG v33; // ecx
  LONG v34; // edx
  LONG v35; // ecx
  unsigned int v36; // ebx
  int v38; // ecx
  struct tagWND *v39; // r15
  const struct tagWND **v40; // r11
  int v41; // r9d
  const struct tagWND *v42; // rcx
  struct tagWND *v43; // r14
  __int64 v44; // rbx
  int v45; // esi
  __int64 v46; // rdi
  unsigned int v47; // eax
  bool v48; // zf
  __int64 v49; // rax
  HRGN *v50; // r15
  __int64 v51; // r8
  __int64 v52; // rbx
  int v53; // esi
  __int64 v54; // rdi
  unsigned int v55; // eax
  bool v56; // zf
  __int64 v57; // rax
  __int64 v58; // rax
  char v59; // cl
  LONG v60; // edx
  LONG v61; // r8d
  int v62; // ecx
  const struct tagWND *v63; // rbx
  int v64; // r12d
  struct tagWND *v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rdx
  unsigned int v69; // eax
  int v70; // esi
  struct tagWND *v71; // rdi
  int v72; // r15d
  int v73; // eax
  int v74; // eax
  struct tagWND *v75; // rdi
  int v76; // esi
  int v77; // r14d
  struct _RECTL *v78; // rdi
  struct tagWND *v79; // r10
  _QWORD *v80; // r12
  const struct tagWND **v81; // rbx
  struct _RECTL *v82; // r13
  const struct tagWND **v83; // r15
  unsigned int v84; // eax
  bool v85; // zf
  int *p_left; // rsi
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  const struct tagWND *v88; // rax
  __int64 v89; // rax
  int v90; // edx
  int v91; // eax
  float *v92; // rdx
  float v93; // xmm5_4
  float v94; // xmm4_4
  float v95; // xmm5_4
  HRGN *v96; // r12
  HRGN EmptyRgn; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r12
  __int64 v102; // rsi
  __int64 v103; // rbx
  const struct tagWND *v104; // r9
  float *v105; // rax
  __int64 v106; // r11
  float *v107; // rdx
  __int64 v108; // r11
  int v109; // r9d
  float v110; // xmm0_4
  __int64 v111; // rax
  int v112; // ecx
  int v113; // edx
  struct tagWND *v114; // rsi
  struct tagWND *v115; // r15
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v117; // rbx
  __int64 v118; // r8
  int v119; // [rsp+38h] [rbp-D0h]
  struct tagWND *v120; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v121; // [rsp+48h] [rbp-C0h]
  struct tagWND *v122; // [rsp+50h] [rbp-B8h]
  struct tagRECT v123; // [rsp+58h] [rbp-B0h] BYREF
  const struct tagWND *v124; // [rsp+68h] [rbp-A0h]
  HRGN *v125; // [rsp+70h] [rbp-98h]
  int v126; // [rsp+78h] [rbp-90h]
  __int128 v127; // [rsp+80h] [rbp-88h] BYREF
  __int128 v128; // [rsp+90h] [rbp-78h]
  struct tagWND *v129; // [rsp+A0h] [rbp-68h]
  __int64 v130; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v131; // [rsp+B8h] [rbp-50h] BYREF
  char v132[40]; // [rsp+C0h] [rbp-48h] BYREF
  int v133; // [rsp+E8h] [rbp-20h]
  struct _RECTL v134; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v135; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v136[240]; // [rsp+118h] [rbp+10h] BYREF
  struct _RECTL v137; // [rsp+208h] [rbp+100h] BYREF

  v3 = a1;
  LODWORD(v121) = a3;
  v125 = a2;
  v120 = a1;
  v126 = 0;
  v134 = 0LL;
  memset_0(v136, 0, sizeof(v136));
  v5 = *((_QWORD *)v3 + 13);
  v6 = 0LL;
  v129 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  if ( !v5
    || (v7 = *((_QWORD *)v3 + 3)) != 0 && (top = *(_QWORD *)(v7 + 8)) != 0 && v5 == *(_QWORD *)(top + 24)
    || (v8 = (char *)v3 + 40,
        top = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 288LL) >> 8,
        LOWORD(top) = (*(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL) >> 8) ^ top,
        (top & 0x1FF) == 0) )
  {
    v9 = 0;
    v8 = (char *)v3 + 40;
    v119 = 0;
    goto LABEL_7;
  }
  WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v3);
  if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v3 + 13)) )
  {
LABEL_263:
    v9 = 1;
    v119 = 1;
    goto LABEL_7;
  }
  v119 = 0;
  v117 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v8 + 256LL));
  if ( v117 )
  {
    v118 = *(_DWORD *)(*(_QWORD *)v8 + 288LL) >> 8;
    LOWORD(v118) = v118 & 0x1FF;
    GetMonitorRectForDpi(&v123, v117, v118);
    if ( *(_QWORD *)(*(_QWORD *)(v117 + 40) + 28LL) == *(_QWORD *)&v123.left )
    {
      v9 = 0;
      v119 = 0;
      goto LABEL_7;
    }
    goto LABEL_263;
  }
  v9 = 0;
LABEL_7:
  v10 = v121;
  v11 = *(_QWORD *)v8;
  if ( (v121 & 1) != 0 )
  {
    v13 = *(struct _RECTL *)(v11 + 88);
    v134 = v13;
    v12 = (__m128i)v13;
    v134.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 12));
    v14 = (__m128i)v13;
LABEL_9:
    v134.top = _mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
    v134.right = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 8));
    v134.left = _mm_cvtsi128_si32(v12);
    goto LABEL_10;
  }
  v134 = *(struct _RECTL *)(v11 + 104);
  v24 = *(_DWORD *)(v11 + 88);
  right = v134.right;
  top = (unsigned int)_mm_cvtsi128_si32((__m128i)v134);
  if ( (int)top <= v24 )
    top = (unsigned int)v24;
  v134.left = top;
  if ( v134.right >= *(_DWORD *)(v11 + 96) )
    right = *(_DWORD *)(v11 + 96);
  v134.right = right;
  if ( (int)top >= right )
    goto LABEL_35;
  v26 = *(_DWORD *)(v11 + 92);
  top = (unsigned int)v134.top;
  if ( v134.top <= v26 )
    top = (unsigned int)v26;
  v134.top = top;
  v27 = *(_DWORD *)(v11 + 100);
  bottom = v134.bottom;
  if ( v134.bottom >= v27 )
    bottom = v27;
  v134.bottom = bottom;
  if ( (int)top >= bottom )
  {
LABEL_35:
    v12 = 0LL;
    v13 = 0LL;
    v134 = 0LL;
    v134.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v14 = 0LL;
    goto LABEL_9;
  }
LABEL_10:
  v15 = v3;
  v16 = *((_QWORD *)v3 + 13);
  v17 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)v3 + 3) + 8LL) + 24LL);
  v122 = v17;
  v18 = (struct tagWND *)*((_QWORD *)v17 + 13);
  v124 = v18;
  if ( !v16 )
    goto LABEL_55;
  if ( (struct tagWND *)v16 == v18 )
  {
    if ( (*(_WORD *)(*(_QWORD *)v8 + 42LL) & 0x2FFF) != 0x29D )
      goto LABEL_55;
    goto LABEL_67;
  }
  while ( 1 )
  {
    if ( *(struct tagWND **)(v16 + 104) == v18 && (*(_WORD *)(*(_QWORD *)(v16 + 40) + 42LL) & 0x2FFF) != 0x29D )
      goto LABEL_55;
    if ( (v10 & 0x1004000) != 0 && (*(_WORD *)(*(_QWORD *)(v16 + 40) + 42LL) & 0x2FFF) == 0x29D )
      break;
    if ( (v10 & 0x4000) != 0 )
    {
      v38 = *(_DWORD *)(*((_QWORD *)v15 + 5) + 24LL);
      if ( ((v38 & 0x80000) != 0 || (v38 & 0x20000000) != 0) && ((v38 & 0x2000000) == 0 || (struct tagWND *)v16 == v17) )
        break;
    }
    if ( (v10 & 0x8000000) != 0
      && (*(_WORD *)(*(_QWORD *)(v16 + 40) + 42LL) & 0x2FFF) == 0x29D
      && (unsigned int)IsWindowDesktopComposed(v16) )
    {
      v17 = v122;
      LOWORD(v10) = v121;
      break;
    }
    v19 = v126;
    v20 = *(_QWORD *)(v16 + 40);
    if ( *(_QWORD *)(v20 + 168) )
      v19 = 1;
    v126 = v19;
    if ( !v9 )
    {
      v21 = *(_QWORD *)(v16 + 104);
      if ( !v21
        || (v22 = *(_QWORD *)(v16 + 24)) != 0 && (v23 = *(_QWORD *)(v22 + 8)) != 0 && v21 == *(_QWORD *)(v23 + 24)
        || (((unsigned __int16)(*(_DWORD *)(v20 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v21 + 40)
                                                                                            + 288LL) >> 8)) & 0x1FF) == 0 )
      {
        v123 = *(struct tagRECT *)(v20 + 104);
LABEL_43:
        PhysicalToLogicalInPlaceRect(v15, &v123);
        goto LABEL_44;
      }
      v29 = GetWindowCoordinateSpaceDpi((const struct tagWND *)v16);
      if ( v29 != GetWindowCoordinateSpaceDpi(*(const struct tagWND **)(v16 + 104))
        || (v30 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 256LL))) != 0
        && (v31 = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 288LL) >> 8,
            LOWORD(v31) = v31 & 0x1FF,
            GetMonitorRectForDpi(&v130, v30, v31),
            *(_QWORD *)(*(_QWORD *)(v30 + 40) + 28LL) != v130) )
      {
        v9 = 1;
        v119 = 1;
        v123 = *(struct tagRECT *)(*(_QWORD *)(v16 + 40) + 104LL);
        goto LABEL_141;
      }
      v9 = v119;
    }
    v123 = *(struct tagRECT *)(*(_QWORD *)(v16 + 40) + 104LL);
    if ( !v9 )
      goto LABEL_43;
LABEL_141:
    if ( DpiRectContainsRectWithSubpixel(
           &v123,
           (const float *)(v16 + 224),
           (const struct tagWND *)v16,
           (const struct tagRECT *)&v134,
           (float *)v3 + 56,
           v3) )
    {
      goto LABEL_142;
    }
    LogicalToPhysicalInPlaceRectWithSubpixel((const struct tagWND *)v16, &v123.left, 0LL);
    PhysicalToLogicalInPlaceRectWithSubpixel(v3, &v123.left, 0LL);
LABEL_44:
    left = v134.left;
    v33 = v134.right;
    if ( v134.left <= v123.left )
      left = v123.left;
    v134.left = left;
    if ( v134.right >= v123.right )
      v33 = v123.right;
    v134.right = v33;
    if ( left >= v33 )
      goto LABEL_54;
    v34 = v134.top;
    v35 = v134.bottom;
    if ( v134.top <= v123.top )
      v34 = v123.top;
    v134.top = v34;
    if ( v134.bottom >= v123.bottom )
      v35 = v123.bottom;
    v134.bottom = v35;
    if ( v34 >= v35 )
    {
LABEL_54:
      v134 = 0LL;
      goto LABEL_55;
    }
LABEL_142:
    v123 = *(struct tagRECT *)(*(_QWORD *)(v16 + 40) + 88LL);
    if ( !v9 )
    {
      PhysicalToLogicalInPlaceRect(v15, &v123);
      goto LABEL_144;
    }
    if ( !DpiRectContainsRectWithSubpixel(
            &v123,
            (const float *)(v16 + 224),
            (const struct tagWND *)v16,
            (const struct tagRECT *)&v134,
            (float *)v3 + 56,
            v3) )
    {
      LogicalToPhysicalInPlaceRectWithSubpixel((const struct tagWND *)v16, &v123.left, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel(v3, &v123.left, 0LL);
LABEL_144:
      v60 = v134.left;
      v61 = v134.right;
      if ( v134.left <= v123.left )
        v60 = v123.left;
      v134.left = v60;
      if ( v134.right >= v123.right )
        v61 = v123.right;
      v134.right = v61;
      if ( v60 >= v61 )
        goto LABEL_54;
      top = (unsigned int)v134.top;
      v62 = v134.bottom;
      if ( v134.top <= v123.top )
        top = (unsigned int)v123.top;
      v134.top = top;
      if ( v134.bottom >= v123.bottom )
        v62 = v123.bottom;
      v134.bottom = v62;
      if ( (int)top >= v62 )
        goto LABEL_54;
    }
    v17 = v122;
    v15 = (struct tagWND *)v16;
    v16 = *(_QWORD *)(v16 + 104);
    v10 = v121;
LABEL_67:
    v18 = v124;
    if ( (const struct tagWND *)v16 == v124 )
      goto LABEL_68;
  }
  v18 = v124;
LABEL_68:
  v39 = (struct tagWND *)*((_QWORD *)v3 + 13);
  *((_QWORD *)&v128 + 1) = v136;
  v40 = (const struct tagWND **)v136;
  v41 = 0;
  *(_QWORD *)&v128 = v136;
  v42 = (const struct tagWND *)(v10 & 0x10);
  *(_QWORD *)((char *)&v127 + 4) = 0x1E00000000LL;
  v43 = v3;
LABEL_69:
  if ( v39 != v18 )
  {
    if ( (v10 & 0x4000) == 0
      || (top = *((_QWORD *)v43 + 5), (*(_BYTE *)(top + 27) & 0x20) == 0)
      || (*(_DWORD *)(top + 24) & 0x2000000) != 0 && v39 != v17 )
    {
      if ( !(_DWORD)v42 )
        goto LABEL_135;
      v52 = *((_QWORD *)v39 + 14);
      if ( (struct tagWND *)v52 == v43 )
        goto LABEL_135;
      v53 = 0;
      while ( 1 )
      {
        if ( !v52 || (struct tagWND *)v52 == v43 )
        {
          v17 = v122;
          LOWORD(v10) = v121;
          if ( v53 )
            v119 = 1;
LABEL_135:
          v58 = *((_QWORD *)v39 + 5);
          v43 = v39;
          v39 = (struct tagWND *)*((_QWORD *)v39 + 13);
          v59 = *(_BYTE *)(v58 + 31);
          v18 = v124;
          v42 = (const struct tagWND *)(v59 & 4);
          goto LABEL_69;
        }
        v54 = *(_QWORD *)(v52 + 40);
        if ( !v53 )
        {
          top = *((_QWORD *)v3 + 5);
          v55 = *(_DWORD *)(top + 288);
          if ( *(_QWORD *)(top + 256) == *(_QWORD *)(v54 + 256) )
          {
            v56 = (((unsigned __int16)(v55 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v54 + 288) >> 8)) & 0x1FF) == 0;
          }
          else
          {
            if ( (v55 & 0xF) != 2 )
            {
LABEL_119:
              v53 = 1;
              goto LABEL_114;
            }
            v56 = (*(_DWORD *)(v54 + 288) & 0xF) == 2;
          }
          if ( !v56 )
            goto LABEL_119;
        }
LABEL_114:
        if ( (*(_BYTE *)(v54 + 31) & 0x10) != 0 && (*(_BYTE *)(v54 + 26) & 8) == 0 && (*(_BYTE *)(v54 + 24) & 0x20) == 0 )
        {
          if ( v53 )
          {
            v74 = DpiRectIntersectsRectWithSubpixel(
                    (__int128 *)(v54 + 88),
                    (__int128 *)(v52 + 224),
                    (const struct tagWND *)v52,
                    (__int64 *)&v134.left,
                    (__int128 *)v3 + 14,
                    v3);
            v41 = DWORD1(v127);
            v40 = (const struct tagWND **)v128;
            if ( !v74 )
              goto LABEL_115;
          }
          else if ( v134.left >= *(_DWORD *)(v54 + 96)
                 || *(_DWORD *)(v54 + 88) >= v134.right
                 || v134.top >= *(_DWORD *)(v54 + 100)
                 || *(_DWORD *)(v54 + 92) >= v134.bottom )
          {
            goto LABEL_115;
          }
          if ( *(_DWORD *)(v54 + 88) < *(_DWORD *)(v54 + 96) && *(_DWORD *)(v54 + 92) < *(_DWORD *)(v54 + 100) )
          {
            if ( v41 == DWORD2(v127) )
            {
              if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v127) )
                goto LABEL_182;
              v41 = DWORD1(v127);
              v40 = (const struct tagWND **)v128;
            }
            v57 = v41++;
            DWORD1(v127) = v41;
            v40[v57] = (const struct tagWND *)v52;
          }
        }
LABEL_115:
        v52 = *(_QWORD *)(v52 + 88);
      }
    }
  }
  if ( (v10 & 8) == 0 )
    goto LABEL_98;
  v44 = *((_QWORD *)v3 + 14);
  if ( !v44 )
    goto LABEL_98;
  v45 = 0;
  while ( 2 )
  {
    if ( v44 )
    {
      v46 = *(_QWORD *)(v44 + 40);
      if ( v45 )
      {
LABEL_75:
        if ( (*(_BYTE *)(v46 + 31) & 0x10) != 0 && (*(_BYTE *)(v46 + 26) & 8) == 0 && (*(_BYTE *)(v46 + 24) & 0x20) == 0 )
        {
          if ( v45 )
          {
            v73 = DpiRectIntersectsRectWithSubpixel(
                    (__int128 *)(v46 + 88),
                    (__int128 *)(v44 + 224),
                    (const struct tagWND *)v44,
                    (__int64 *)&v134.left,
                    (__int128 *)v3 + 14,
                    v3);
            v41 = DWORD1(v127);
            v40 = (const struct tagWND **)v128;
            if ( v73 )
            {
LABEL_88:
              if ( *(_DWORD *)(v46 + 88) < *(_DWORD *)(v46 + 96) && *(_DWORD *)(v46 + 92) < *(_DWORD *)(v46 + 100) )
              {
                if ( v41 == DWORD2(v127) )
                {
                  if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v127) )
                    goto LABEL_182;
                  v41 = DWORD1(v127);
                  v40 = (const struct tagWND **)v128;
                }
                v49 = v41++;
                DWORD1(v127) = v41;
                v40[v49] = (const struct tagWND *)v44;
              }
            }
          }
          else if ( v134.left < *(_DWORD *)(v46 + 96)
                 && *(_DWORD *)(v46 + 88) < v134.right
                 && v134.top < *(_DWORD *)(v46 + 100)
                 && *(_DWORD *)(v46 + 92) < v134.bottom )
          {
            goto LABEL_88;
          }
        }
        v44 = *(_QWORD *)(v44 + 88);
        continue;
      }
      top = *((_QWORD *)v3 + 5);
      v47 = *(_DWORD *)(top + 288);
      if ( *(_QWORD *)(top + 256) == *(_QWORD *)(v46 + 256) )
      {
        v42 = (const struct tagWND *)(*(_DWORD *)(v46 + 288) >> 8);
        LOWORD(v42) = (v47 >> 8) ^ (unsigned __int16)v42;
        v48 = ((unsigned __int16)v42 & 0x1FF) == 0;
LABEL_79:
        if ( v48 )
          goto LABEL_75;
      }
      else if ( (v47 & 0xF) == 2 )
      {
        v48 = (*(_DWORD *)(v46 + 288) & 0xF) == 2;
        goto LABEL_79;
      }
      v45 = 1;
      goto LABEL_75;
    }
    break;
  }
  if ( v45 )
    v119 = 1;
LABEL_98:
  if ( v41 <= 0 )
  {
    if ( *(char *)(*((_QWORD *)v3 + 5) + 19LL) < 0 )
      v134 = 0LL;
    v50 = v125;
    if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v125, &v134) )
    {
      v6 = v129;
      v122 = v129;
      goto LABEL_103;
    }
LABEL_182:
    v6 = v129;
LABEL_55:
    v135 = 0LL;
    SetOrCreateRectRgnIndirectPublic(v125, &v135);
    v36 = 0;
    goto LABEL_56;
  }
  v76 = 0;
  v77 = 0;
  LODWORD(v122) = 0;
  if ( v41 > 30 )
  {
    *(_QWORD *)&v123.left = Win32AllocPoolWithQuotaZInit(16LL * v41, 1769370453LL);
    v78 = *(struct _RECTL **)&v123.left;
    if ( !*(_QWORD *)&v123.left )
      goto LABEL_182;
    v41 = DWORD1(v127);
    v40 = (const struct tagWND **)v128;
  }
  else
  {
    v78 = &v137;
    *(_QWORD *)&v123.left = &v137;
  }
  if ( v41 <= 0 )
    goto LABEL_206;
  v79 = v120;
  v80 = 0LL;
  v81 = v40;
  v82 = v78;
  v83 = v40;
  v130 = (unsigned int)v41;
  while ( 2 )
  {
    v17 = (struct tagWND *)v80;
    v42 = (const struct tagWND *)*((_QWORD *)*v81 + 5);
    if ( *((_QWORD *)v42 + 21) )
    {
      ++v76;
      *v83 = *v81;
      LODWORD(v122) = v76;
      ++v83;
    }
    else
    {
      ++v77;
      v80 = (_QWORD *)((char *)v80 + 1);
      *v82++ = *(struct _RECTL *)((char *)v42 + 88);
      if ( v119 )
      {
        top = *((_QWORD *)v79 + 5);
        v42 = (const struct tagWND *)*((_QWORD *)*v81 + 5);
        v84 = *(_DWORD *)(top + 288);
        if ( *(_QWORD *)(top + 256) == *((_QWORD *)v42 + 32) )
        {
          v42 = (const struct tagWND *)(*((_DWORD *)v42 + 72) >> 8);
          LOWORD(v42) = (v84 >> 8) ^ (unsigned __int16)v42;
          v85 = ((unsigned __int16)v42 & 0x1FF) == 0;
          goto LABEL_198;
        }
        if ( (v84 & 0xF) != 2 )
          goto LABEL_199;
        v85 = (*((_DWORD *)v42 + 72) & 0xF) == 2;
LABEL_198:
        if ( !v85 )
        {
LABEL_199:
          p_left = &v78[(_QWORD)v17].left;
          TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(*v81);
          if ( TopLevelOrDpiBoundaryWindow )
          {
            v105 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
            if ( v105 )
            {
              ScaleValueWithSubpixel(p_left, 0LL, *v105);
              ScaleValueWithSubpixel(p_left + 1, v107, *(float *)(*(_QWORD *)(v106 + 216) + 20LL));
              v109 = (int)(float)((float)((float)((float)p_left[2] * **(float **)(v108 + 216)) + 0.0) + 0.5);
              p_left[2] = v109;
              v110 = (float)((float)((float)p_left[3] * *(float *)(*(_QWORD *)(v108 + 216) + 20LL)) + 0.0) + 0.5;
              p_left[3] = (int)v110;
              v111 = *(_QWORD *)(v108 + 216);
              v112 = (int)*(float *)(v111 + 48);
              v113 = (int)*(float *)(v111 + 52);
              *p_left += v112;
              p_left[2] = v109 + v112;
              p_left[1] += v113;
              p_left[3] = (int)v110 + v113;
            }
          }
          v88 = GetTopLevelOrDpiBoundaryWindow(v120);
          v42 = v88;
          if ( v88 )
          {
            v89 = *((_QWORD *)v88 + 27);
            if ( v89 )
            {
              v90 = (int)*(float *)(v89 + 52);
              v91 = (int)*(float *)(v89 + 48);
              p_left[3] -= v90;
              p_left[1] -= v90;
              *p_left -= v91;
              p_left[2] -= v91;
              ScaleValueWithSubpixel(p_left, 0LL, 1.0 / **((float **)v42 + 27));
              ScaleValueWithSubpixel(p_left + 1, v92, v93);
              p_left[2] = (int)(float)((float)((float)((float)p_left[2] * v94) + 0.0) + 0.5);
              p_left[3] = (int)(float)((float)((float)((float)p_left[3] * v95) + 0.0) + 0.5);
            }
          }
          v76 = (int)v122;
          v79 = v120;
        }
      }
    }
    ++v81;
    if ( --v130 )
      continue;
    break;
  }
  v3 = v120;
LABEL_206:
  v96 = v125;
  EmptyRgn = *v125;
  if ( !*v125 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v42, top, v17);
    *v96 = EmptyRgn;
  }
  if ( v77 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v131, EmptyRgn, 0, 0);
    if ( v131 )
    {
      if ( RGNOBJAPI::bSubtract((RGNOBJAPI *)&v131, &v134, v78, v77) )
      {
        RGNOBJ::iComplexity((RGNOBJ *)&v131);
      }
      else if ( v131 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v131);
      }
    }
    if ( !v133 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v131);
    if ( v131 )
      _InterlockedDecrement16((volatile signed __int16 *)(v131 + 12));
    PopThreadGuardedObject(v132);
  }
  else
  {
    SetRectRgnIndirect(EmptyRgn, &v134);
  }
  v6 = v129;
  v122 = v129;
  if ( !v129 )
  {
    v6 = (struct tagWND *)CreateEmptyRgn(v99, v98, v100);
    v122 = v6;
  }
  v50 = v125;
  v101 = v76;
  if ( v76 > 0 )
  {
    v102 = v128;
    v103 = 0LL;
    do
    {
      SetRectRgnIndirect(v6, *(_QWORD *)(*(_QWORD *)(v102 + 8 * v103) + 40LL) + 88LL);
      GreCombineRgn(v6, v6, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 + 8 * v103) + 40LL) + 168LL), 1LL);
      if ( v119 && IsDpiBoundaryBetweenWindows(v3, *(const struct tagWND **)(v102 + 8 * v103)) )
      {
        v120 = v6;
        v114 = 0LL;
        if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v104, (HRGN *)&v120, 1) )
          v114 = v120;
        v115 = 0LL;
        if ( (unsigned int)PhysicalToLogicalInPlaceRgnWorker(v3) )
          v115 = v120;
        if ( v120 != v6 )
          GreCombineRgn(v6, v120, 0LL, 5LL);
        if ( v114 )
          GreDeleteObject(v114);
        if ( v115 )
          GreDeleteObject(v115);
        v50 = v125;
        v102 = v128;
      }
      if ( (unsigned int)GreCombineRgn(*v50, *v50, v6, 4LL) == 1 )
        break;
      ++v103;
    }
    while ( v103 < v101 );
    v78 = *(struct _RECTL **)&v123.left;
  }
  if ( v78 != &v137 )
    Win32FreePool(v78);
LABEL_103:
  v51 = *(_QWORD *)(*((_QWORD *)v3 + 5) + 168LL);
  if ( v51 )
    GreCombineRgn(*v50, *v50, v51, 1LL);
  if ( v126 )
  {
    v63 = (const struct tagWND *)*((_QWORD *)v3 + 13);
    v64 = 0;
    v65 = v3;
    if ( v63 != v124 )
    {
      while ( 2 )
      {
        v66 = *((_QWORD *)v63 + 5);
        v120 = *(struct tagWND **)(v66 + 168);
        if ( !v120 )
        {
LABEL_161:
          v65 = v63;
          v63 = (const struct tagWND *)*((_QWORD *)v63 + 13);
          if ( v63 == v124 )
            goto LABEL_162;
          continue;
        }
        break;
      }
      v67 = *((_QWORD *)v65 + 5);
      if ( (*(_BYTE *)(v67 + 26) & 8) != 0 && (*(_DWORD *)(v67 + 232) & 2) == 0 )
      {
        v64 = 1;
        goto LABEL_229;
      }
      if ( (v121 & 0x1000000) != 0 )
      {
        v64 = 1;
        goto LABEL_229;
      }
      if ( v64 )
      {
LABEL_229:
        if ( (*(_WORD *)(v66 + 42) & 0x2FFF) == 0x29D )
        {
LABEL_162:
          v6 = v122;
          goto LABEL_106;
        }
      }
      v68 = *((_QWORD *)v3 + 5);
      v69 = *(_DWORD *)(v68 + 288);
      if ( *(_QWORD *)(v68 + 256) == *(_QWORD *)(v66 + 256) )
      {
        if ( (((unsigned __int16)(v69 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v66 + 288) >> 8)) & 0x1FF) == 0 )
          goto LABEL_168;
LABEL_185:
        v75 = 0LL;
        if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v63, (HRGN *)&v120, 1) )
          v75 = v120;
        v70 = PhysicalToLogicalInPlaceRgnWorker(v3);
        if ( v70 && v75 )
        {
          GreDeleteObject(v75);
          v71 = v120;
          v72 = GreCombineRgn(*v50, *v50, v120, 1LL);
LABEL_170:
          GreDeleteObject(v71);
LABEL_171:
          if ( v72 == 1 )
            goto LABEL_162;
          v50 = v125;
          goto LABEL_161;
        }
      }
      else
      {
        if ( (v69 & 0xF) != 2 || (*(_DWORD *)(v66 + 288) & 0xF) != 2 )
          goto LABEL_185;
LABEL_168:
        v70 = PhysicalToLogicalInPlaceRgn(v65, &v120);
      }
      v71 = v120;
      v72 = GreCombineRgn(*v50, *v50, v120, 1LL);
      if ( v70 )
        goto LABEL_170;
      goto LABEL_171;
    }
  }
LABEL_106:
  v36 = 1;
LABEL_56:
  if ( v6 )
    GreDeleteObject(v6);
  if ( (_DWORD)v127 )
    Win32FreePool((void *)v128);
  return v36;
}
