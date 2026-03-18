/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x14007F220 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x14009BA38 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x14009BDF8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x14016A02C (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140186F80 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1402130C0 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x14023EB9C (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x140314F7C (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x140315410 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x140315814 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     GreClientRgnUpdatedStable @ 0x140013468 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140068A30 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x14009BFF8 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC308 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1401862C8 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140186748 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x140186E6C (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x140227634 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x14028D51C (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0?$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x140312B1C (--0-$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140316108 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1403162AC (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x140316F74 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1403179A8 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _POINTL v4; // r14
  __int64 v5; // r12
  struct _POINTL *v7; // r13
  __int64 x; // rdx
  __int64 v10; // rcx
  __int64 y; // r8
  struct Gre::Base::SESSION_GLOBALS *v12; // rsi
  int v13; // ecx
  int v14; // ebx
  HSEMAPHORE v15; // r8
  LONG v16; // eax
  int v17; // ecx
  unsigned int v18; // edi
  __int64 v20; // rbx
  struct REGION *v21; // rdx
  struct _CLIPOBJ *v22; // r13
  __int64 v23; // r10
  __int64 v24; // rdx
  Gre::Base *v25; // rax
  struct _XLATEOBJ *v26; // rsi
  __int64 v27; // r9
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  Gre::Base *v37; // rcx
  int v38; // esi
  int v39; // edi
  HSEMAPHORE v40; // rbx
  struct _GRETHREAD *v41; // rax
  bool v42; // zf
  __int64 v43; // rax
  int v44; // r9d
  int v45; // r10d
  int v46; // ebx
  int v47; // ecx
  int v48; // r11d
  int v49; // eax
  struct _SURFOBJ *v50; // r8
  int v51; // r9d
  int v52; // r8d
  struct _SURFOBJ *Surface; // rax
  struct _SURFOBJ *v54; // rbx
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v57; // rax
  struct _RECTL v58; // xmm0
  int v59; // r8d
  unsigned __int8 v60; // r10
  struct _POINTL v61; // rax
  int v62; // r9d
  unsigned int v63; // ecx
  int v64; // r13d
  __int64 v65; // rsi
  __int64 v66; // rdi
  struct _POINTL v67; // rax
  LONG v68; // r14d
  LONG v69; // eax
  __int64 v70; // r8
  unsigned int i; // edx
  struct SPRITE *v72; // rcx
  LONG v73; // ecx
  struct Gre::Base::SESSION_GLOBALS *v74; // rax
  int v75; // eax
  HSEMAPHORE v76; // rbx
  struct _GRETHREAD *v77; // rax
  int v78; // [rsp+20h] [rbp-E0h]
  struct _POINTL v79; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v80; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v81; // [rsp+78h] [rbp-88h] BYREF
  int v82; // [rsp+80h] [rbp-80h]
  int v83; // [rsp+84h] [rbp-7Ch]
  struct _POINTL *v84; // [rsp+88h] [rbp-78h]
  HSEMAPHORE v85; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v86; // [rsp+98h] [rbp-68h]
  HSEMAPHORE v87; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v88[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v89; // [rsp+B8h] [rbp-48h]
  struct _RECTL si128; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v91; // [rsp+D0h] [rbp-30h] BYREF
  struct _CLIPOBJ v92; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v93; // [rsp+118h] [rbp+18h]
  __int64 v94; // [rsp+130h] [rbp+30h]
  int v95; // [rsp+138h] [rbp+38h]
  int v96; // [rsp+160h] [rbp+60h]
  __int64 v97; // [rsp+170h] [rbp+70h]

  v4 = (struct _POINTL)*((_QWORD *)a1 + 14);
  v5 = *((_QWORD *)a1 + 2);
  v91 = 0LL;
  v86 = v4;
  v7 = a2;
  v83 = a4;
  v84 = a2;
  v82 = 1;
  v89 = Gre::Base::Globals(a1);
  v12 = v89;
  if ( v7 )
  {
    v13 = *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    *((_DWORD *)a1 + 28) = v7->x;
    *((_DWORD *)a1 + 29) = v7->y;
    x = (unsigned int)v7->x;
    y = (unsigned int)v7->y;
    si128.right = x + v13;
    v10 = (unsigned int)(y + *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25));
    si128.left = x;
    si128.bottom = v10;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)a1 & 0x11) != 0 || !bIntersect((const struct _RECTL *)(v5 + 40), &si128, &si128) )
  {
    v14 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v14 = 32;
  }
  v15 = *(HSEMAPHORE *)(W32GetSessionState(v10, x, y) + 96);
  v16 = *(_DWORD *)a1;
  v17 = *(_DWORD *)a1 & 0x20;
  v87 = v15;
  v80.x = v16;
  if ( v14 == v17 )
  {
    if ( si128.left == *((_DWORD *)a1 + 20)
      && si128.top == *((_DWORD *)a1 + 21)
      && si128.right == *((_DWORD *)a1 + 22)
      && si128.bottom == *((_DWORD *)a1 + 23) )
    {
      if ( *((_DWORD *)a1 + 1) == 2 && *((_QWORD *)v15 + 602) )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, (struct _RECTL *)a1 + 5, (struct _RECTL *)a1 + 5);
LABEL_13:
      v18 = v82;
      goto LABEL_14;
    }
    v16 = v80.x;
  }
  v20 = 0LL;
  if ( v17 )
  {
    *(_DWORD *)a1 = v16 & 0xFFFFFFDF;
    --*(_DWORD *)(v5 + 56);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    if ( !a3 )
    {
      vSpRedrawUncoveredArea(a1, &si128);
      goto LABEL_56;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_56;
  }
  v21 = (struct REGION *)*((_QWORD *)a1 + 23);
  v94 = 0LL;
  v95 = 0;
  v96 = 1;
  v97 = 0LL;
  v93 = 0LL;
  if ( v21 )
  {
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v92, v21, (struct SPRITE *)((char *)a1 + 80), 0);
    v22 = &v92;
    if ( ERECTL::bEmpty((ERECTL *)&v92.rclBounds) )
      goto LABEL_55;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *((_QWORD *)a1 + 16) )
  {
    if ( *((_DWORD *)a1 + 56) == 3 && !*((_BYTE *)a1 + 231) || *((_DWORD *)a1 + 1) == 1 )
    {
      vSpRedrawArea((struct _SPRITESTATE *)v5, (struct _RECTL *)a1 + 5, 1);
      goto LABEL_54;
    }
    vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 0);
    v23 = *(_QWORD *)(v5 + 32);
    v24 = *((_QWORD *)a1 + 16);
    v25 = (Gre::Base *)*((_QWORD *)v12 + 484);
    v26 = 0LL;
    v27 = *((_QWORD *)a1 + 18);
    v88[0] = 0LL;
    v28 = *(_DWORD *)(v24 + 72);
    v29 = *(_QWORD *)(v23 + 104);
    v79 = 0LL;
    if ( *(_DWORD *)(v23 + 72) != v28 || (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj((Gre::Base *)&v79, 0LL, 0, v27, v29, (__int64)v25, v25, 0, 0, 0, 0) )
      {
LABEL_53:
        vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 1);
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v79, v35, v36);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v88);
LABEL_54:
        GreClientRgnUpdated(0LL);
        GreClientRgnUpdatedStable(v37);
        goto LABEL_55;
      }
      v26 = (struct _XLATEOBJ *)v79;
    }
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v88, *((struct _SURFOBJ **)a1 + 16)) )
    {
      v30 = 0LL;
      v31 = *(_QWORD *)(v5 + 32);
      v81.x = *((_DWORD *)a1 + 20) - v4.x;
      v81.y = *((_DWORD *)a1 + 21) - v86.y;
      if ( v31 )
      {
        v32 = *(_DWORD *)(v31 + 88);
        if ( ((v32 & 0x4000) != 0 || v32 < 0) && (v32 & 0x200) == 0 )
        {
          v30 = v31 - 24;
          GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v31 + 24));
        }
      }
      v33 = *((_QWORD *)a1 + 16);
      if ( v33 )
      {
        v34 = *(_DWORD *)(v33 + 88);
        if ( ((v34 & 0x4000) != 0 || v34 < 0) && (v34 & 0x200) == 0 )
        {
          v20 = v33 - 24;
          GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v33 + 24));
        }
      }
      SpBitBlt(
        *(struct _SURFOBJ **)(v5 + 32),
        *((struct _SURFOBJ **)a1 + 16),
        0LL,
        v22,
        v26,
        (struct _RECTL *)a1 + 5,
        &v81,
        0LL,
        0LL,
        0LL,
        0xCCCCu);
      if ( v20 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v20 + 48));
      LODWORD(v20) = 0;
      if ( v30 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v30 + 48));
    }
    goto LABEL_53;
  }
LABEL_55:
  v7 = v84;
LABEL_56:
  v38 = si128.bottom - si128.top;
  v39 = si128.right - si128.left;
  if ( si128.right == si128.left )
  {
    if ( v83 == 1 && !*(_DWORD *)(v5 + 56) && *(_DWORD *)(v5 + 1088) )
      vSpUnhook((struct _SPRITESTATE *)v5);
LABEL_101:
    v58 = (struct _RECTL)*((_OWORD *)a1 + 5);
    v59 = *(_DWORD *)a1;
    v60 = v80.x;
    v61 = (struct _POINTL)*((_QWORD *)a1 + 24);
    v42 = (*(_DWORD *)a1 & 0x20) == 0;
    v62 = *(_DWORD *)a1 & 0x20;
    v79 = v61;
    v81 = 0LL;
    v63 = ((unsigned int)v80.x >> 5) & 1;
    v91 = v58;
    *((struct _RECTL *)a1 + 5) = si128;
    if ( !v42 == v63 )
    {
      if ( !*(_QWORD *)&v61 || (v60 & (unsigned __int8)v59 & 0x20) == 0 )
        goto LABEL_136;
      v70 = *((_QWORD *)a1 + 1);
      if ( v70 )
      {
        for ( i = 0; i < *(_DWORD *)(v70 + 20); ++i )
        {
          v72 = *(struct SPRITE **)(v70 + 8LL * i + 24);
          if ( v72 != a1 && (*(_DWORD *)v72 & 0x20) != 0 )
          {
            v88[0] = v4;
            RGNOBJ::vSet((RGNOBJ *)&v79, (const struct _RECTL *const)a1 + 6);
            RGNOBJ::bOffset((RGNOBJ *)&v79, v88);
            v61 = v79;
            break;
          }
        }
      }
      if ( !*(_QWORD *)&v61 )
        goto LABEL_136;
      v73 = v7->y - v86.y;
      v81.x = v7->x - v4.x;
      v81.y = v73;
      if ( !v81.x && !v73 )
        goto LABEL_136;
    }
    else
    {
      if ( (v60 & 0x20) != 0 || (v64 = 1, !v62) )
        v64 = 0;
      if ( !*(_QWORD *)&v61 )
      {
        v65 = *((_QWORD *)a1 + 1);
        if ( !v65 || v64 != 1 )
          goto LABEL_136;
        while ( (unsigned int)v20 < *(_DWORD *)(v65 + 20) )
        {
          v66 = *(_QWORD *)(v65 + 8LL * (unsigned int)v20 + 24);
          if ( (struct SPRITE *)v66 != a1 )
          {
            v88[0] = *(struct _POINTL *)(v66 + 192);
            if ( v88[0] )
            {
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v80);
              if ( *(_QWORD *)&v80 && RGNOBJ::bCopy((RGNOBJ *)&v80, (struct RGNOBJ *)v88) )
              {
                LODWORD(v85) = -*(_DWORD *)(v66 + 112);
                HIDWORD(v85) = -*(_DWORD *)(v66 + 116);
                RGNOBJ::bOffset((RGNOBJ *)&v80, (const struct _POINTL *)&v85);
                v67 = v80;
                *((struct _POINTL *)a1 + 24) = v80;
                v79 = v67;
                goto LABEL_117;
              }
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v80);
            }
          }
          LODWORD(v20) = v20 + 1;
        }
        v67 = v79;
LABEL_117:
        if ( !*(_QWORD *)&v67 )
          goto LABEL_136;
      }
      if ( v64 )
      {
        v68 = v84->x;
        v69 = v84->y;
      }
      else
      {
        v68 = -v4.x;
        v69 = -v86.y;
      }
      v81.y = v69;
      v81.x = v68;
      if ( !v68 && !v69 )
        goto LABEL_136;
    }
    RGNOBJ::bOffset((RGNOBJ *)&v79, &v81);
LABEL_136:
    v74 = v89;
    *(_DWORD *)(v5 + 116) = 0;
    ++*((_DWORD *)v74 + 1088);
    vSpOrderInY(a1);
    if ( *((_QWORD *)v87 + 602) )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, &si128, &v91);
    if ( !*(_DWORD *)(v5 + 116) )
      vSpComputeSpriteRanges(v5);
    vSpRemoveAllSpriteOverlapPresents(*(HDEV *)v5);
    goto LABEL_13;
  }
  *(_DWORD *)a1 |= 0x20u;
  ++*(_DWORD *)(v5 + 56);
  if ( v83 == 1 && !*(_DWORD *)(v5 + 1088) )
  {
    vSpHook((struct _SPRITESTATE *)v5);
    if ( !*(_DWORD *)(v5 + 116) )
    {
      SEMOBJ<9>::SEMOBJ<9>(&v85, *(_QWORD *)(v5 + 120));
      vSpComputeSpriteRanges(v5);
      v40 = v85;
      if ( v85 )
      {
        EtwTraceGreLockReleaseSemaphore(L"SpriteRangeLock", v85);
        v41 = GreGetCurrentThreadCrossSessionCheck();
        if ( v41 )
        {
          v42 = (*((_BYTE *)v41 + 17))-- == 1;
          if ( v42 )
            *(_QWORD *)v41 &= ~0x200uLL;
          if ( !*(_QWORD *)v41 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v40);
      }
      LODWORD(v20) = 0;
    }
  }
  v43 = *((_QWORD *)a1 + 20);
  if ( v43 && v39 <= *(_DWORD *)(v43 + 32) && v38 <= *(_DWORD *)(v43 + 36) )
  {
    if ( si128.left >= *((_DWORD *)a1 + 20)
      && si128.top >= *((_DWORD *)a1 + 21)
      && si128.right <= *((_DWORD *)a1 + 22)
      && si128.bottom <= *((_DWORD *)a1 + 23) )
    {
      goto LABEL_101;
    }
    v44 = 0;
    v45 = 0;
    v46 = *((_DWORD *)a1 + 52);
    if ( si128.left >= v46 )
    {
      v47 = *((_DWORD *)a1 + 54);
      if ( si128.right > v47 )
        v44 = si128.right - v47;
    }
    else
    {
      v44 = si128.left - v46;
    }
    v48 = *((_DWORD *)a1 + 53);
    if ( si128.top >= v48 )
    {
      v49 = *((_DWORD *)a1 + 55);
      if ( si128.bottom > v49 )
        v45 = si128.bottom - v49;
    }
    else
    {
      v45 = si128.top - v48;
    }
    *((_DWORD *)a1 + 54) += v44;
    v50 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
    *((_DWORD *)a1 + 55) += v45;
    *((_DWORD *)a1 + 53) = v48 + v45;
    *((_DWORD *)a1 + 43) = -(v48 + v45);
    *((_DWORD *)a1 + 52) = v46 + v44;
    *((_DWORD *)a1 + 42) = -(v46 + v44);
    vSpSmallUnderlayCopy(
      a1,
      (struct _POINTL *)a1 + 21,
      v50,
      (struct _POINTL *)a1 + 21,
      v50,
      v44,
      v45,
      &si128,
      (struct _RECTL *)a1 + 5);
LABEL_100:
    LODWORD(v20) = 0;
    goto LABEL_101;
  }
  v51 = *((_DWORD *)a1 + 45);
  v52 = *((_DWORD *)a1 + 44);
  if ( v38 > v51 )
    v51 = v38;
  if ( v39 > v52 )
    v52 = v39;
  Surface = psoSpCreateSurface((struct _SPRITESTATE *)v5, 0, v52, v51, v78);
  v54 = Surface;
  if ( Surface )
  {
    Surface->fjBitmap |= 4u;
    v79.x = -si128.left;
    v79.y = -si128.top;
    if ( v39 > 128 || v38 > 128 )
      vSpBigUnderlayCopy((struct _SPRITESTATE *)v5, &v79, Surface, &si128);
    else
      vSpSmallUnderlayCopy(
        a1,
        &v79,
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
    v57 = v79;
    *((_DWORD *)a1 + 52) = si128.left;
    *((struct _POINTL *)a1 + 21) = v57;
    *((_QWORD *)a1 + 20) = v54;
    *((_DWORD *)a1 + 53) = top;
    *((_DWORD *)a1 + 54) = v54->sizlBitmap.cx + left;
    *((_DWORD *)a1 + 55) = top + v54->sizlBitmap.cy;
    goto LABEL_100;
  }
  v18 = 0;
  bSpUpdatePosition(a1, 0LL, 0, 0);
LABEL_14:
  if ( v83 == 1 )
  {
    v75 = *(_DWORD *)(v5 + 1088);
    if ( *(_DWORD *)(v5 + 56) )
    {
      if ( !v75 )
      {
        vSpHook((struct _SPRITESTATE *)v5);
        if ( !*(_DWORD *)(v5 + 116) )
        {
          SEMOBJ<9>::SEMOBJ<9>(&v87, *(_QWORD *)(v5 + 120));
          vSpComputeSpriteRanges(v5);
          v76 = v87;
          if ( v87 )
          {
            EtwTraceGreLockReleaseSemaphore(L"SpriteRangeLock", v87);
            v77 = GreGetCurrentThreadCrossSessionCheck();
            if ( v77 )
            {
              v42 = (*((_BYTE *)v77 + 17))-- == 1;
              if ( v42 )
                *(_QWORD *)v77 &= ~0x200uLL;
              if ( !*(_QWORD *)v77 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v76);
          }
        }
      }
    }
    else if ( v75 )
    {
      vSpUnhook((struct _SPRITESTATE *)v5);
    }
  }
  return v18;
}
