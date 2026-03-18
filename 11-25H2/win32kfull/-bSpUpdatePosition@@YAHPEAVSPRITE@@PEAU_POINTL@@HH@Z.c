/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8
 * Callers:
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14008DF34 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400DAB80 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400DD258 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1400E16A0 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140174944 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1401DDCF0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x14020F548 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x140268220 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x14032C3A0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x14032C81C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x14032CC30 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140007408 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1400078A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140010C50 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     GreClientRgnUpdated @ 0x14001B35C (GreClientRgnUpdated.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DBA64 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400DD91C (--$GreReleaseSemaphoreCommon@$08P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1400DE2E0 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1400E099C (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1400E188C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x14016CAA4 (GreClientRgnUpdatedStable.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x140200E34 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x1402662BC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x140269754 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0?$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x140329A10 (--0-$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032D53C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x14032D6E8 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x14032E3E4 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x14032EE30 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _POINTL v4; // r14
  __int64 v5; // r12
  unsigned int v9; // r13d
  __int64 x; // rdx
  __int64 v11; // rcx
  __int64 y; // r8
  struct Gre::Base::SESSION_GLOBALS *v13; // rsi
  int v14; // ecx
  int v15; // ebx
  __int64 v16; // r8
  LONG v17; // eax
  int v18; // ecx
  struct REGION *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rax
  struct _XLATEOBJ *v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // r8d
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // esi
  int v35; // edi
  __int64 v36; // rax
  int v37; // ebx
  int v38; // r9d
  int v39; // r10d
  int v40; // eax
  int v41; // r11d
  int v42; // eax
  struct _SURFOBJ *v43; // r8
  int v44; // r9d
  int v45; // r8d
  struct _SURFOBJ *Surface; // rax
  struct _SURFOBJ *v47; // rbx
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v50; // rax
  struct _RECTL v51; // xmm0
  int v52; // r8d
  unsigned __int8 v53; // r9
  int v54; // ecx
  struct _POINTL v55; // rax
  bool v56; // si
  struct _POINTL v57; // rcx
  __int64 i; // rbx
  __int64 v59; // rdi
  int v60; // r14d
  int v61; // eax
  bool v62; // zf
  __int64 v63; // r9
  __int64 j; // r8
  struct SPRITE *v65; // rcx
  int v66; // ecx
  struct Gre::Base::SESSION_GLOBALS *v67; // rax
  int v68; // eax
  int v70; // [rsp+20h] [rbp-E0h]
  struct _POINTL v71; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v72; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v73; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+80h] [rbp-80h]
  struct _POINTL v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v78[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL *v79; // [rsp+A8h] [rbp-58h]
  __int64 v80; // [rsp+B0h] [rbp-50h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v81; // [rsp+B8h] [rbp-48h]
  struct _RECTL si128; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v83; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v84[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v85[156]; // [rsp+E4h] [rbp-1Ch] BYREF

  v4 = (struct _POINTL)*((_QWORD *)a1 + 14);
  v5 = *((_QWORD *)a1 + 2);
  v83 = 0LL;
  v76 = v4;
  v75 = a4;
  v79 = a2;
  v9 = 1;
  v81 = Gre::Base::Globals(a1);
  v13 = v81;
  if ( a2 )
  {
    v14 = *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    *((_DWORD *)a1 + 28) = a2->x;
    *((_DWORD *)a1 + 29) = a2->y;
    x = (unsigned int)a2->x;
    y = (unsigned int)a2->y;
    si128.right = x + v14;
    v11 = (unsigned int)(y + *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25));
    si128.left = x;
    si128.bottom = v11;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)a1 & 0x11) != 0 || !bIntersect((const struct _RECTL *)(v5 + 40), &si128, &si128) )
  {
    v15 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v15 = 32;
  }
  v16 = *(_QWORD *)(W32GetSessionState(v11, x, y) + 96);
  v17 = *(_DWORD *)a1;
  v18 = *(_DWORD *)a1 & 0x20;
  v77 = v16;
  v73.x = v17;
  if ( v15 == v18 )
  {
    if ( si128.left == *((_DWORD *)a1 + 20)
      && si128.top == *((_DWORD *)a1 + 21)
      && si128.right == *((_DWORD *)a1 + 22)
      && si128.bottom == *((_DWORD *)a1 + 23) )
    {
      if ( *((_DWORD *)a1 + 1) == 2 && *(_QWORD *)(v16 + 4824) )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, (struct _RECTL *)a1 + 5, (struct _RECTL *)a1 + 5);
      goto LABEL_127;
    }
    v17 = v73.x;
  }
  if ( v18 )
  {
    *(_DWORD *)a1 = v17 & 0xFFFFFFDF;
    --*(_DWORD *)(v5 + 56);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    if ( !a3 )
    {
      vSpRedrawUncoveredArea(a1, &si128);
      goto LABEL_51;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_51;
  }
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v84);
  v19 = (struct REGION *)*((_QWORD *)a1 + 23);
  if ( !v19 )
  {
    v72 = 0LL;
LABEL_27:
    if ( !*((_QWORD *)a1 + 16) )
      goto LABEL_51;
    if ( *((_DWORD *)a1 + 56) == 3 && !*((_BYTE *)a1 + 231) || *((_DWORD *)a1 + 1) == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)v5, (struct _RECTL *)a1 + 5, 1);
LABEL_50:
      GreClientRgnUpdated(0LL);
      GreClientRgnUpdatedStable();
      goto LABEL_51;
    }
    vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 0LL);
    v78[0] = 0LL;
    v20 = *(_QWORD *)(v5 + 32);
    v21 = *((_QWORD *)v13 + 471);
    v22 = 0LL;
    v23 = *((_QWORD *)a1 + 18);
    v24 = *(_QWORD *)(v20 + 104);
    v25 = *(_DWORD *)(*((_QWORD *)a1 + 16) + 72LL);
    v71 = 0LL;
    if ( *(_DWORD *)(v20 + 72) != v25 || (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v71, 0LL, 0, v23, v24, v21, v21, 0, 0, 0, 0) )
      {
LABEL_49:
        vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 1LL);
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v71, v32, v33);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v78);
        goto LABEL_50;
      }
      v22 = (struct _XLATEOBJ *)v71;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v78, *((struct _SURFOBJ **)a1 + 16)) )
    {
      v26 = 0LL;
      v74.x = *((_DWORD *)a1 + 20) - v4.x;
      v74.y = *((_DWORD *)a1 + 21) - v76.y;
      v27 = *(_QWORD *)(v5 + 32);
      if ( v27 )
      {
        v28 = *(_DWORD *)(v27 + 88);
        if ( (v28 & 0x80004000) != 0 && (v28 & 0x200) == 0 )
        {
          v26 = v27 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v27 - 24 + 48));
        }
      }
      v29 = *((_QWORD *)a1 + 16);
      v30 = 0LL;
      if ( v29 )
      {
        v31 = *(_DWORD *)(v29 + 88);
        if ( (v31 & 0x80004000) != 0 && (v31 & 0x200) == 0 )
        {
          v30 = v29 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v29 - 24 + 48));
        }
      }
      SpBitBlt(
        *(struct _SURFOBJ **)(v5 + 32),
        *((struct _SURFOBJ **)a1 + 16),
        0LL,
        v72,
        v22,
        (struct _RECTL *)a1 + 5,
        &v74,
        0LL,
        0LL,
        0LL,
        0xCCCCu);
      if ( v30 )
        GreUnlockDisplayDevice(*(_QWORD *)(v30 + 48));
      if ( v26 )
        GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
    }
    goto LABEL_49;
  }
  XCLIPOBJ::vSetup((XCLIPOBJ *)v84, v19, (struct SPRITE *)((char *)a1 + 80), 0);
  v72 = (struct _CLIPOBJ *)v84;
  if ( !ERECTL::bEmpty((ERECTL *)v85) )
    goto LABEL_27;
LABEL_51:
  v34 = si128.bottom - si128.top;
  v35 = si128.right - si128.left;
  if ( si128.right == si128.left )
  {
    if ( v75 == 1 && *(_DWORD *)(v5 + 56) == v35 && *(_DWORD *)(v5 + 1088) != v35 )
      vSpUnhook((struct _SPRITESTATE *)v5);
  }
  else
  {
    *(_DWORD *)a1 |= 0x20u;
    ++*(_DWORD *)(v5 + 56);
    if ( v75 == 1 && !*(_DWORD *)(v5 + 1088) )
    {
      vSpHook((struct _SPRITESTATE *)v5);
      if ( !*(_DWORD *)(v5 + 116) )
      {
        SEMOBJ<9>::SEMOBJ<9>(&v71, *(_QWORD *)(v5 + 120));
        vSpComputeSpriteRanges(v5);
        if ( v71 )
          ((void (__fastcall *)(_QWORD, _QWORD))GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>)(
            GreReleaseSemaphoreExclusiveInternal,
            v71);
      }
    }
    v36 = *((_QWORD *)a1 + 20);
    if ( v36 && v35 <= *(_DWORD *)(v36 + 32) && v34 <= *(_DWORD *)(v36 + 36) )
    {
      if ( si128.left < *((_DWORD *)a1 + 20)
        || si128.top < *((_DWORD *)a1 + 21)
        || si128.right > *((_DWORD *)a1 + 22)
        || si128.bottom > *((_DWORD *)a1 + 23) )
      {
        v37 = *((_DWORD *)a1 + 52);
        v38 = 0;
        v39 = 0;
        if ( si128.left >= v37 )
        {
          v40 = *((_DWORD *)a1 + 54);
          if ( si128.right > v40 )
            v38 = si128.right - v40;
        }
        else
        {
          v38 = si128.left - v37;
        }
        v41 = *((_DWORD *)a1 + 53);
        if ( si128.top >= v41 )
        {
          v42 = *((_DWORD *)a1 + 55);
          if ( si128.bottom > v42 )
            v39 = si128.bottom - v42;
        }
        else
        {
          v39 = si128.top - v41;
        }
        *((_DWORD *)a1 + 54) += v38;
        v43 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
        *((_DWORD *)a1 + 55) += v39;
        *((_DWORD *)a1 + 53) = v41 + v39;
        *((_DWORD *)a1 + 43) = -(v41 + v39);
        *((_DWORD *)a1 + 52) = v37 + v38;
        *((_DWORD *)a1 + 42) = -(v37 + v38);
        vSpSmallUnderlayCopy(
          a1,
          (struct _POINTL *)a1 + 21,
          v43,
          (struct _POINTL *)a1 + 21,
          v43,
          v38,
          v39,
          &si128,
          (struct _RECTL *)a1 + 5);
      }
    }
    else
    {
      v44 = *((_DWORD *)a1 + 45);
      v45 = *((_DWORD *)a1 + 44);
      if ( v34 > v44 )
        v44 = v34;
      if ( v35 > v45 )
        v45 = v35;
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v5, 0, v45, v44, v70);
      v47 = Surface;
      if ( !Surface )
      {
        v9 = 0;
        bSpUpdatePosition(a1, 0LL, 0, 0);
        goto LABEL_127;
      }
      Surface->fjBitmap |= 4u;
      v71.x = -si128.left;
      v71.y = -si128.top;
      if ( v35 > 128 || v34 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v5, &v71, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          a1,
          &v71,
          Surface,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)a1 + 5);
      vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 20));
      left = si128.left;
      top = si128.top;
      v50 = v71;
      *((_DWORD *)a1 + 52) = si128.left;
      *((struct _POINTL *)a1 + 21) = v50;
      *((_QWORD *)a1 + 20) = v47;
      *((_DWORD *)a1 + 53) = top;
      *((_DWORD *)a1 + 54) = v47->sizlBitmap.cx + left;
      *((_DWORD *)a1 + 55) = top + v47->sizlBitmap.cy;
    }
  }
  v51 = (struct _RECTL)*((_OWORD *)a1 + 5);
  v52 = *(_DWORD *)a1;
  v53 = v73.x;
  v54 = v73.x ^ *(_DWORD *)a1;
  v72 = 0LL;
  v55 = (struct _POINTL)*((_QWORD *)a1 + 24);
  v74 = v55;
  v83 = v51;
  *((struct _RECTL *)a1 + 5) = si128;
  if ( (v54 & 0x20) != 0 )
  {
    v56 = (v53 & 0x20) == 0 && (v52 & 0x20) != 0;
    if ( !*(_QWORD *)&v55 )
    {
      v57 = (struct _POINTL)*((_QWORD *)a1 + 1);
      v78[0] = v57;
      if ( *(_QWORD *)&v57 && v56 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)&v57 + 20LL); i = (unsigned int)(i + 1) )
        {
          v59 = *(_QWORD *)(*(_QWORD *)&v57 + 8 * i + 24);
          if ( (struct SPRITE *)v59 != a1 )
          {
            v80 = *(_QWORD *)(v59 + 192);
            if ( v80 )
            {
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v71);
              if ( *(_QWORD *)&v71 && RGNOBJ::bCopy((RGNOBJ *)&v71, (struct RGNOBJ *)&v80) )
              {
                v73.x = -*(_DWORD *)(v59 + 112);
                v73.y = -*(_DWORD *)(v59 + 116);
                RGNOBJ::bOffset((RGNOBJ *)&v71, &v73);
                v55 = v71;
                *((struct _POINTL *)a1 + 24) = v71;
                v74 = v55;
                goto LABEL_102;
              }
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v71);
              v57 = v78[0];
            }
          }
        }
        v55 = v74;
      }
LABEL_102:
      if ( !*(_QWORD *)&v55 )
        goto LABEL_122;
    }
    if ( v56 )
    {
      v60 = v79->x;
      v61 = v79->y;
    }
    else
    {
      v60 = -v4.x;
      v61 = -v76.y;
    }
    v72 = (struct _CLIPOBJ *)__PAIR64__(v61, v60);
    if ( v60 )
      goto LABEL_121;
    v62 = v61 == 0;
  }
  else
  {
    if ( !*(_QWORD *)&v55 || (v53 & (unsigned __int8)v52 & 0x20) == 0 )
      goto LABEL_122;
    v63 = *((_QWORD *)a1 + 1);
    if ( v63 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v63 + 20); j = (unsigned int)(j + 1) )
      {
        v65 = *(struct SPRITE **)(v63 + 8 * j + 24);
        if ( v65 != a1 && (*(_DWORD *)v65 & 0x20) != 0 )
        {
          v78[0] = v4;
          RGNOBJ::vSet((RGNOBJ *)&v74, (const struct _RECTL *const)a1 + 6);
          RGNOBJ::bOffset((RGNOBJ *)&v74, v78);
          v55 = v74;
          break;
        }
      }
    }
    if ( !*(_QWORD *)&v55 )
      goto LABEL_122;
    v66 = v79->y - v76.y;
    LODWORD(v72) = v79->x - v4.x;
    HIDWORD(v72) = v66;
    if ( (_DWORD)v72 )
      goto LABEL_121;
    v62 = v66 == 0;
  }
  if ( !v62 )
LABEL_121:
    RGNOBJ::bOffset((RGNOBJ *)&v74, (const struct _POINTL *)&v72);
LABEL_122:
  v67 = v81;
  *(_DWORD *)(v5 + 116) = 0;
  ++*((_DWORD *)v67 + 1060);
  vSpOrderInY(a1);
  if ( *(_QWORD *)(v77 + 4824) )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, &si128, &v83);
  if ( !*(_DWORD *)(v5 + 116) )
    vSpComputeSpriteRanges(v5);
  vSpRemoveAllSpriteOverlapPresents(*(HDEV *)v5);
LABEL_127:
  if ( v75 == 1 )
  {
    v68 = *(_DWORD *)(v5 + 1088);
    if ( *(_DWORD *)(v5 + 56) )
    {
      if ( !v68 )
      {
        vSpHook((struct _SPRITESTATE *)v5);
        if ( !*(_DWORD *)(v5 + 116) )
        {
          SEMOBJ<9>::SEMOBJ<9>(&v77, *(_QWORD *)(v5 + 120));
          vSpComputeSpriteRanges(v5);
          if ( v77 )
            GreReleaseSemaphoreCommon<9,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v77);
        }
      }
    }
    else if ( v68 )
    {
      vSpUnhook((struct _SPRITESTATE *)v5);
    }
  }
  return v9;
}
