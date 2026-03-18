/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140031C80
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1400319F0 (CalcVisRgn.c)
 *     UserVisrgnFromHwnd @ 0x140033A34 (UserVisrgnFromHwnd.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D260 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1400317E0 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1400317F8 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x140032CD0 (PhysicalToLogicalInPlaceRect.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x140033DAC (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1400344D4 (DpiRectIntersectsRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x140065D0C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x140065E14 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x140065F60 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x14009BC38 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1401A96B0 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1401B1618 (DpiRectContainsRectWithSubpixel.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1401B1920 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *a1, HRGN *a2, int a3)
{
  struct tagWND *v3; // r12
  int v4; // ebx
  __int64 top; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  HRGN v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // r14
  int v12; // r11d
  int v13; // r10d
  __int64 v14; // rcx
  __m128i v15; // xmm2
  struct _RECTL v16; // xmm1
  __m128i v17; // xmm0
  struct tagWND *v18; // r15
  __int64 v19; // rdi
  struct tagWND *v20; // r13
  struct tagWND *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  int right; // r8d
  LONG v27; // eax
  LONG v28; // eax
  int bottom; // ecx
  int v30; // ebx
  LONG left; // edx
  LONG v32; // ecx
  LONG v33; // edx
  LONG v34; // ecx
  unsigned int v35; // r13d
  int v37; // ebx
  LONG v38; // edx
  LONG v39; // r8d
  int v40; // ecx
  struct tagWND *v41; // r15
  HRGN v42; // r8
  int v43; // r11d
  __int64 v44; // rcx
  struct tagWND *v45; // rsi
  __int64 v46; // rbx
  int v47; // esi
  __int64 v48; // rdi
  unsigned int v49; // eax
  struct tagWND *v50; // rbx
  int v51; // r14d
  __int64 v52; // rdi
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // r11d
  __int64 v56; // rax
  char v57; // cl
  HRGN *v58; // r15
  __int64 v59; // r8
  __int64 v60; // r8
  int v61; // r12d
  __int64 v62; // rbx
  struct tagWND *v63; // rsi
  __int64 v64; // rcx
  int v65; // ecx
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rdx
  unsigned int v69; // eax
  int v70; // r14d
  struct tagWND *v71; // rdi
  int v72; // r15d
  struct tagWND *v73; // rdi
  int v74; // ebx
  int v75; // esi
  struct _RECTL *v76; // r14
  __int64 *v77; // rdi
  int v78; // r13d
  struct tagWND *v79; // r10
  __int64 *v80; // r15
  struct _RECTL *v81; // r12
  HRGN *v82; // r12
  HRGN EmptyRgn; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r12
  int v89; // eax
  int v90; // eax
  __int64 v91; // rbx
  const struct tagWND **v92; // rdi
  __int64 v93; // r9
  HRGN v94; // rdi
  HRGN v95; // r15
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // r8
  unsigned __int16 v100; // bx
  __int64 v101; // rdx
  __int64 v102; // rbx
  __int64 v103; // r8
  int v104; // eax
  int v105; // [rsp+30h] [rbp-D0h]
  int v106; // [rsp+34h] [rbp-CCh]
  struct tagWND *v107; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v108; // [rsp+40h] [rbp-C0h] BYREF
  int v109; // [rsp+50h] [rbp-B0h]
  struct tagWND *v110; // [rsp+58h] [rbp-A8h]
  HRGN *v111; // [rsp+60h] [rbp-A0h]
  HRGN v112; // [rsp+68h] [rbp-98h] BYREF
  __int128 v113; // [rsp+70h] [rbp-90h] BYREF
  __int128 v114; // [rsp+80h] [rbp-80h]
  HRGN v115; // [rsp+90h] [rbp-70h]
  HRGN v116[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v117[7]; // [rsp+A8h] [rbp-58h] BYREF
  struct _RECTL v118; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v119; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v120[240]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v121; // [rsp+1F0h] [rbp+F0h] BYREF

  v109 = a3;
  v3 = a1;
  v111 = a2;
  v107 = a1;
  v4 = 0;
  v106 = 0;
  v118 = 0LL;
  memset_0(v120, 0, sizeof(v120));
  v6 = *((_QWORD *)v3 + 13);
  v7 = 1LL;
  v8 = 0LL;
  v115 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  if ( !v6
    || (v9 = *((_QWORD *)v3 + 3)) != 0 && (v10 = *(_QWORD *)(v9 + 8)) != 0 && v6 == *(_QWORD *)(v10 + 24)
    || (v11 = (char *)v3 + 40,
        top = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL) >> 8,
        LOWORD(top) = (*(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL) >> 8) ^ top,
        (top & 0x1FF) == 0) )
  {
    v12 = 0;
    v11 = (char *)v3 + 40;
    v105 = 0;
    goto LABEL_7;
  }
  WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v3);
  if ( WindowCoordinateSpaceDpi == GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v3 + 13)) )
  {
    v97 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v11 + 256LL), top);
    v12 = 0;
    v98 = v97;
    v105 = 0;
    if ( !v97 )
    {
LABEL_252:
      v7 = 1LL;
      v4 = 0;
      goto LABEL_7;
    }
    v99 = *(_DWORD *)(*(_QWORD *)v11 + 288LL) >> 8;
    LOWORD(v99) = v99 & 0x1FF;
    GetMonitorRectForDpi(&v108, v97, v99);
    if ( *(_QWORD *)(*(_QWORD *)(v98 + 40) + 28LL) == (_QWORD)v108 )
    {
      v12 = 0;
      v105 = 0;
      goto LABEL_252;
    }
  }
  v7 = 1LL;
  v4 = 0;
  v12 = 1;
  v105 = 1;
LABEL_7:
  v13 = v109;
  v14 = *(_QWORD *)v11;
  if ( (v109 & 1) != 0 )
  {
    v16 = *(struct _RECTL *)(v14 + 88);
    v118 = v16;
    v15 = (__m128i)v16;
    v118.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 12));
    v17 = (__m128i)v16;
LABEL_9:
    v118.top = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
    v118.right = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v16, 8));
    v118.left = _mm_cvtsi128_si32(v15);
    goto LABEL_10;
  }
  v118 = *(struct _RECTL *)(v14 + 104);
  v25 = *(_DWORD *)(v14 + 88);
  right = v118.right;
  top = (unsigned int)_mm_cvtsi128_si32((__m128i)v118);
  if ( (int)top <= v25 )
    top = (unsigned int)v25;
  v118.left = top;
  if ( v118.right >= *(_DWORD *)(v14 + 96) )
    right = *(_DWORD *)(v14 + 96);
  v118.right = right;
  if ( (int)top >= right )
    goto LABEL_35;
  v27 = *(_DWORD *)(v14 + 92);
  top = (unsigned int)v118.top;
  if ( v118.top <= v27 )
    top = (unsigned int)v27;
  v118.top = top;
  v28 = *(_DWORD *)(v14 + 100);
  bottom = v118.bottom;
  if ( v118.bottom >= v28 )
    bottom = v28;
  v118.bottom = bottom;
  if ( (int)top >= bottom )
  {
LABEL_35:
    v15 = 0LL;
    v16 = 0LL;
    v118 = 0LL;
    v118.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v17 = 0LL;
    goto LABEL_9;
  }
LABEL_10:
  v18 = v3;
  v19 = *((_QWORD *)v3 + 13);
  v20 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)v3 + 3) + 8LL) + 24LL);
  v21 = (struct tagWND *)*((_QWORD *)v20 + 13);
  v110 = v21;
  if ( !v19 )
    goto LABEL_54;
  if ( (struct tagWND *)v19 == v21 )
  {
    if ( (*(_WORD *)(*(_QWORD *)v11 + 42LL) & 0x2FFF) != 0x29D )
      goto LABEL_54;
    goto LABEL_73;
  }
  while ( 1 )
  {
    if ( *(struct tagWND **)(v19 + 104) == v21 && (*(_WORD *)(*(_QWORD *)(v19 + 40) + 42LL) & 0x2FFF) != 0x29D )
      goto LABEL_54;
    if ( (v13 & 0x1004000) != 0 && (*(_WORD *)(*(_QWORD *)(v19 + 40) + 42LL) & 0x2FFF) == 0x29D )
      break;
    if ( (v13 & 0x4000) != 0 )
    {
      v65 = *(_DWORD *)(*((_QWORD *)v18 + 5) + 24LL);
      if ( ((v65 & 0x80000) != 0 || (v65 & 0x20000000) != 0) && ((v65 & 0x2000000) == 0 || (struct tagWND *)v19 == v20) )
        break;
    }
    if ( (v13 & 0x8000000) != 0 && (*(_WORD *)(*(_QWORD *)(v19 + 40) + 42LL) & 0x2FFF) == 0x29D )
    {
      v66 = IsWindowDesktopComposed(v19);
      v7 = 1LL;
      if ( v66 )
      {
        LOWORD(v13) = v109;
        break;
      }
      v12 = v105;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v19 + 40) + 168LL) )
      v4 = 1;
    v106 = v4;
    if ( !v12 )
    {
      v22 = *(_QWORD *)(v19 + 104);
      if ( !v22 )
        goto LABEL_24;
      v23 = *(_QWORD *)(v19 + 24);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 8);
        if ( v24 )
        {
          if ( v22 == *(_QWORD *)(v24 + 24) )
            goto LABEL_24;
        }
      }
      if ( (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v22 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
        goto LABEL_24;
      v100 = GetWindowCoordinateSpaceDpi((const struct tagWND *)v19);
      if ( v100 != GetWindowCoordinateSpaceDpi(*(const struct tagWND **)(v19 + 104)) )
        goto LABEL_222;
      v102 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL), v101);
      if ( v102 )
      {
        v103 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL) >> 8;
        LOWORD(v103) = v103 & 0x1FF;
        GetMonitorRectForDpi(v116, v102, v103);
        if ( *(HRGN *)(*(_QWORD *)(v102 + 40) + 28LL) != v116[0] )
        {
LABEL_222:
          v30 = 0;
          v105 = 1;
          v108 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 104LL);
LABEL_223:
          if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v108, v19 + 224, v19, &v118, (char *)v3 + 224, v3) )
          {
            v30 = 1;
          }
          else
          {
            LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v108, 0LL);
            PhysicalToLogicalInPlaceRectWithSubpixel(v3, &v108, 0LL);
          }
          if ( v30 )
            goto LABEL_60;
          goto LABEL_43;
        }
LABEL_24:
        v108 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 104LL);
        goto LABEL_42;
      }
      v12 = v105;
    }
    v30 = 0;
    v108 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 104LL);
    if ( v12 )
      goto LABEL_223;
LABEL_42:
    PhysicalToLogicalInPlaceRect(v18, &v108);
LABEL_43:
    left = v118.left;
    v32 = v118.right;
    if ( v118.left <= (int)v108 )
      left = v108;
    v118.left = left;
    if ( v118.right >= SDWORD2(v108) )
      v32 = DWORD2(v108);
    v118.right = v32;
    if ( left >= v32 )
      goto LABEL_53;
    v33 = v118.top;
    v34 = v118.bottom;
    if ( v118.top <= SDWORD1(v108) )
      v33 = DWORD1(v108);
    v118.top = v33;
    if ( v118.bottom >= SHIDWORD(v108) )
      v34 = HIDWORD(v108);
    v118.bottom = v34;
    if ( v33 >= v34 )
    {
LABEL_53:
      v118 = 0LL;
      goto LABEL_54;
    }
LABEL_60:
    v37 = 0;
    v108 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 88LL);
    if ( !v105 )
    {
      PhysicalToLogicalInPlaceRect(v18, &v108);
LABEL_62:
      v38 = v118.left;
      v39 = v118.right;
      if ( v118.left <= (int)v108 )
        v38 = v108;
      v118.left = v38;
      if ( v118.right >= SDWORD2(v108) )
        v39 = DWORD2(v108);
      v118.right = v39;
      if ( v38 >= v39 )
        goto LABEL_53;
      top = (unsigned int)v118.top;
      v40 = v118.bottom;
      if ( v118.top <= SDWORD1(v108) )
        top = DWORD1(v108);
      v118.top = top;
      if ( v118.bottom >= SHIDWORD(v108) )
        v40 = HIDWORD(v108);
      v118.bottom = v40;
      if ( (int)top >= v40 )
        goto LABEL_53;
      goto LABEL_72;
    }
    if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v108, v19 + 224, v19, &v118, (char *)v3 + 224, v3) )
    {
      v37 = 1;
    }
    else
    {
      LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v108, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel(v3, &v108, 0LL);
    }
    if ( !v37 )
      goto LABEL_62;
LABEL_72:
    v13 = v109;
    v18 = (struct tagWND *)v19;
    v19 = *(_QWORD *)(v19 + 104);
    v7 = 1LL;
    v12 = v105;
    v4 = v106;
LABEL_73:
    v21 = v110;
    if ( (struct tagWND *)v19 == v110 )
      goto LABEL_74;
  }
  v21 = v110;
LABEL_74:
  v41 = (struct tagWND *)*((_QWORD *)v3 + 13);
  *((_QWORD *)&v114 + 1) = v120;
  v42 = 0LL;
  *(_QWORD *)((char *)&v113 + 4) = 0x1E00000000LL;
  *(_QWORD *)&v114 = v120;
  v43 = 30;
  v44 = v13 & 0x10;
  v45 = v3;
LABEL_75:
  if ( v41 != v21 )
  {
    if ( (v13 & 0x4000) == 0
      || (top = *((_QWORD *)v45 + 5), (*(_BYTE *)(top + 27) & 0x20) == 0)
      || (*(_DWORD *)(top + 24) & 0x2000000) != 0 && v41 != v20 )
    {
      if ( !(_DWORD)v44 )
        goto LABEL_131;
      v50 = (struct tagWND *)*((_QWORD *)v41 + 14);
      if ( v50 == v45 )
        goto LABEL_131;
      v51 = 0;
      while ( 1 )
      {
        if ( !v50 || v50 == v45 )
        {
          v55 = v105;
          LOWORD(v13) = v109;
          if ( v51 )
            v55 = 1;
          v105 = v55;
          v43 = DWORD2(v113);
LABEL_131:
          v56 = *((_QWORD *)v41 + 5);
          v45 = v41;
          v41 = (struct tagWND *)*((_QWORD *)v41 + 13);
          v57 = *(_BYTE *)(v56 + 31);
          v21 = v110;
          v44 = v57 & 4;
          goto LABEL_75;
        }
        v52 = *((_QWORD *)v50 + 5);
        if ( !v51 )
        {
          top = *((_QWORD *)v3 + 5);
          v53 = *(_DWORD *)(top + 288);
          if ( *(_QWORD *)(top + 256) == *(_QWORD *)(v52 + 256) )
          {
            if ( (((unsigned __int16)(v53 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v52 + 288) >> 8)) & 0x1FF) != 0 )
              goto LABEL_113;
          }
          else if ( (v53 & 0xF) != 2 || (*(_DWORD *)(v52 + 288) & 0xF) != 2 )
          {
LABEL_113:
            v51 = 1;
          }
        }
        if ( (*(_BYTE *)(v52 + 31) & 0x10) != 0 && (*(_BYTE *)(v52 + 26) & 8) == 0 && (*(_BYTE *)(v52 + 24) & 0x20) == 0 )
        {
          if ( v51 )
          {
            v90 = DpiRectIntersectsRectWithSubpixel(v52 + 88, (char *)v50 + 224, v50, &v118, (char *)v3 + 224, v3);
            v42 = (HRGN)DWORD1(v113);
            if ( !v90 )
              goto LABEL_110;
            v43 = DWORD2(v113);
          }
          else if ( v118.left >= *(_DWORD *)(v52 + 96)
                 || *(_DWORD *)(v52 + 88) >= v118.right
                 || v118.top >= *(_DWORD *)(v52 + 100)
                 || *(_DWORD *)(v52 + 92) >= v118.bottom )
          {
            goto LABEL_110;
          }
          if ( *(_DWORD *)(v52 + 88) < *(_DWORD *)(v52 + 96) && *(_DWORD *)(v52 + 92) < *(_DWORD *)(v52 + 100) )
          {
            if ( (_DWORD)v42 == v43 )
            {
              if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v113) )
                goto LABEL_156;
              LODWORD(v42) = DWORD1(v113);
            }
            v54 = (int)v42;
            v42 = (HRGN)(unsigned int)((_DWORD)v42 + 1);
            DWORD1(v113) = (_DWORD)v42;
            *(_QWORD *)(v114 + 8 * v54) = v50;
          }
        }
LABEL_110:
        v50 = (struct tagWND *)*((_QWORD *)v50 + 11);
        v7 = 1LL;
        v43 = DWORD2(v113);
      }
    }
  }
  if ( (v13 & 8) == 0 )
    goto LABEL_132;
  v46 = *((_QWORD *)v3 + 14);
  if ( !v46 )
    goto LABEL_132;
  v47 = 0;
  while ( 2 )
  {
    if ( v46 )
    {
      v48 = *(_QWORD *)(v46 + 40);
      if ( v47 )
        goto LABEL_81;
      top = *((_QWORD *)v3 + 5);
      v49 = *(_DWORD *)(top + 288);
      if ( *(_QWORD *)(top + 256) == *(_QWORD *)(v48 + 256) )
      {
        v44 = *(_DWORD *)(v48 + 288) >> 8;
        LOWORD(v44) = (v49 >> 8) ^ v44;
        if ( (v44 & 0x1FF) == 0 )
          goto LABEL_81;
LABEL_85:
        v47 = 1;
        goto LABEL_81;
      }
      if ( (v49 & 0xF) != 2 || (*(_DWORD *)(v48 + 288) & 0xF) != 2 )
        goto LABEL_85;
LABEL_81:
      if ( (*(_BYTE *)(v48 + 31) & 0x10) != 0 && (*(_BYTE *)(v48 + 26) & 8) == 0 && (*(_BYTE *)(v48 + 24) & 0x20) == 0 )
      {
        if ( v47 )
        {
          v89 = DpiRectIntersectsRectWithSubpixel(v48 + 88, v46 + 224, v46, &v118, (char *)v3 + 224, v3);
          v42 = (HRGN)DWORD1(v113);
          if ( v89 )
          {
            v43 = DWORD2(v113);
LABEL_93:
            if ( *(_DWORD *)(v48 + 88) < *(_DWORD *)(v48 + 96) && *(_DWORD *)(v48 + 92) < *(_DWORD *)(v48 + 100) )
            {
              if ( (_DWORD)v42 == v43 )
              {
                if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v113) )
                  goto LABEL_156;
                LODWORD(v42) = DWORD1(v113);
              }
              v44 = (int)v42;
              v42 = (HRGN)(unsigned int)((_DWORD)v42 + 1);
              DWORD1(v113) = (_DWORD)v42;
              *(_QWORD *)(v114 + 8 * v44) = v46;
            }
          }
        }
        else if ( v118.left < *(_DWORD *)(v48 + 96)
               && *(_DWORD *)(v48 + 88) < v118.right
               && v118.top < *(_DWORD *)(v48 + 100)
               && *(_DWORD *)(v48 + 92) < v118.bottom )
        {
          goto LABEL_93;
        }
      }
      v46 = *(_QWORD *)(v46 + 88);
      v7 = 1LL;
      v43 = DWORD2(v113);
      continue;
    }
    break;
  }
  v104 = v105;
  if ( v47 )
    v104 = 1;
  v105 = v104;
LABEL_132:
  if ( (int)v42 <= 0 )
  {
    if ( *(char *)(*((_QWORD *)v3 + 5) + 19LL) < 0 )
      v118 = 0LL;
    v58 = v111;
    if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v111, &v118) )
    {
      v8 = v115;
      v116[0] = v115;
      goto LABEL_137;
    }
LABEL_156:
    v8 = v115;
LABEL_54:
    v119 = 0LL;
    SetOrCreateRectRgnIndirectPublic(v111, &v119);
    v35 = 0;
    goto LABEL_55;
  }
  v74 = 0;
  v75 = 0;
  LODWORD(v112) = 0;
  if ( (int)v42 > 30 )
  {
    *(_QWORD *)&v108 = Win32AllocPoolWithQuotaZInit(16LL * (int)v42, 1769370453LL);
    v76 = (struct _RECTL *)v108;
    if ( !(_QWORD)v108 )
      goto LABEL_156;
    v42 = (HRGN)DWORD1(v113);
  }
  else
  {
    v76 = &v121;
    *(_QWORD *)&v108 = &v121;
  }
  if ( (int)v42 > 0 )
  {
    v77 = (__int64 *)v114;
    v78 = -1;
    v79 = v107;
    v80 = (__int64 *)v114;
    v81 = v76;
    v116[0] = v42;
    do
    {
      v44 = *(_QWORD *)(*v77 + 40);
      if ( *(_QWORD *)(v44 + 168) )
      {
        ++v74;
        *v80 = *v77;
        LODWORD(v112) = v74;
        ++v80;
        goto LABEL_187;
      }
      ++v75;
      ++v78;
      *v81++ = *(struct _RECTL *)(v44 + 88);
      if ( v105 )
      {
        v7 = *v77;
        v44 = *((_QWORD *)v79 + 5);
        top = *(_QWORD *)(*v77 + 40);
        if ( *(_QWORD *)(v44 + 256) != *(_QWORD *)(top + 256) )
        {
          if ( (*(_DWORD *)(v44 + 288) & 0xF) == 2 && (*(_DWORD *)(top + 288) & 0xF) == 2 )
            goto LABEL_187;
LABEL_203:
          LogicalToPhysicalInPlaceRectWithSubpixel(*v77, &v76[v78], 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(v107, &v76[v78], 0LL);
          v42 = v116[0];
          v79 = v107;
          v74 = (int)v112;
          goto LABEL_187;
        }
        v44 = *(_DWORD *)(v44 + 288) >> 8;
        LOWORD(v44) = (*(_DWORD *)(top + 288) >> 8) ^ v44;
        if ( (v44 & 0x1FF) != 0 )
          goto LABEL_203;
      }
LABEL_187:
      ++v77;
      v42 = (HRGN)((char *)v42 - 1);
      v116[0] = v42;
    }
    while ( v42 );
  }
  v82 = v111;
  EmptyRgn = *v111;
  if ( !*v111 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v44, top, v42, v7);
    *v82 = EmptyRgn;
  }
  if ( v75 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v117, EmptyRgn, 0, 0);
    if ( v117[0] )
    {
      if ( RGNOBJAPI::bSubtract((RGNOBJAPI *)v117, &v118, v76, v75) )
      {
        RGNOBJ::iComplexity((RGNOBJ *)v117);
      }
      else if ( v117[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v117);
      }
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v117);
  }
  else
  {
    SetRectRgnIndirect(EmptyRgn, &v118);
  }
  v8 = v115;
  v116[0] = v115;
  if ( !v115 )
  {
    v8 = (HRGN)CreateEmptyRgn(v85, v84, v86, v87);
    v116[0] = v8;
  }
  v58 = v111;
  v88 = v74;
  if ( v74 > 0 )
  {
    v91 = 0LL;
    do
    {
      v92 = (const struct tagWND **)(v114 + 8 * v91);
      SetRectRgnIndirect(v8, *((_QWORD *)*v92 + 5) + 88LL);
      GreCombineRgn(v8, v8, *(_QWORD *)(*((_QWORD *)*v92 + 5) + 168LL), 1LL);
      if ( v105 && IsDpiBoundaryBetweenWindows(v107, *v92) )
      {
        v112 = v8;
        v94 = 0LL;
        if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v93, &v112, 1LL) )
          v94 = v112;
        v95 = 0LL;
        if ( (unsigned int)PhysicalToLogicalInPlaceRgnWorker(v107, &v112, 1) )
          v95 = v112;
        if ( v112 != v8 )
          GreCombineRgn(v8, v112, 0LL, 5LL);
        if ( v94 )
          GreDeleteObject(v94);
        if ( v95 )
          GreDeleteObject(v95);
        v58 = v111;
      }
      if ( (unsigned int)GreCombineRgn(*v58, *v58, v8, 4LL) == 1 )
        break;
      ++v91;
    }
    while ( v91 < v88 );
    v76 = (struct _RECTL *)v108;
  }
  if ( v76 != &v121 )
    Win32FreePool(v76);
  v3 = v107;
LABEL_137:
  v35 = 1;
  v59 = *(_QWORD *)(*((_QWORD *)v3 + 5) + 168LL);
  if ( v59 )
    GreCombineRgn(*v58, *v58, v59, 1LL);
  if ( v106 )
  {
    v60 = (__int64)v3;
    v61 = 0;
    v62 = *((_QWORD *)v107 + 13);
    if ( (struct tagWND *)v62 != v110 )
    {
      v63 = v107;
      while ( 2 )
      {
        v64 = *(_QWORD *)(v62 + 40);
        v107 = *(struct tagWND **)(v64 + 168);
        if ( !v107 )
          goto LABEL_143;
        v67 = *(_QWORD *)(v60 + 40);
        if ( (*(_BYTE *)(v67 + 26) & 8) != 0 && (*(_DWORD *)(v67 + 232) & 2) == 0 )
        {
          v61 = 1;
          goto LABEL_210;
        }
        if ( (v109 & 0x1000000) != 0 )
        {
          v61 = 1;
          goto LABEL_210;
        }
        if ( v61 )
        {
LABEL_210:
          if ( (*(_WORD *)(v64 + 42) & 0x2FFF) == 0x29D )
          {
LABEL_144:
            v8 = v116[0];
            goto LABEL_55;
          }
        }
        v68 = *((_QWORD *)v63 + 5);
        v69 = *(_DWORD *)(v68 + 288);
        if ( *(_QWORD *)(v68 + 256) == *(_QWORD *)(v64 + 256) )
        {
          if ( (((unsigned __int16)(v69 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v64 + 288) >> 8)) & 0x1FF) == 0 )
            goto LABEL_167;
LABEL_173:
          v73 = 0LL;
          if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v62, &v107, 1LL) )
            v73 = v107;
          v70 = PhysicalToLogicalInPlaceRgnWorker(v63, (HRGN *)&v107, 1);
          if ( v70 && v73 )
          {
            GreDeleteObject(v73);
            v71 = v107;
            v72 = GreCombineRgn(*v58, *v58, v107, 1LL);
LABEL_178:
            GreDeleteObject(v71);
LABEL_169:
            if ( v72 == 1 )
              goto LABEL_144;
            v58 = v111;
LABEL_143:
            v60 = v62;
            v62 = *(_QWORD *)(v62 + 104);
            if ( (struct tagWND *)v62 == v110 )
              goto LABEL_144;
            continue;
          }
        }
        else
        {
          if ( (v69 & 0xF) != 2 || (*(_DWORD *)(v64 + 288) & 0xF) != 2 )
            goto LABEL_173;
LABEL_167:
          v70 = PhysicalToLogicalInPlaceRgn(v60, (__int64)&v107);
        }
        break;
      }
      v71 = v107;
      v72 = GreCombineRgn(*v58, *v58, v107, 1LL);
      if ( v70 )
        goto LABEL_178;
      goto LABEL_169;
    }
  }
LABEL_55:
  if ( v8 )
    GreDeleteObject(v8);
  if ( (_DWORD)v113 )
    Win32FreePool((void *)v114);
  return v35;
}
