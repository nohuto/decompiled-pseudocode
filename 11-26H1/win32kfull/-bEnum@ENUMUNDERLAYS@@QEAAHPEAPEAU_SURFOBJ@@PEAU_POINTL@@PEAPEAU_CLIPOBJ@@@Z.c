/*
 * XREFs of ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4
 * Callers:
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x140060540 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x140062A50 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140067F50 (-SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140068280 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140068720 (-SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140068A30 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400695B0 (-SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1400E9B20 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1401B5330 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1401F2F90 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1401FE960 (-SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU.c)
 *     ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x140210A00 (-SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140313750 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x14006A1F0 (-bIsCursorSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC564 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1401670B8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x140169738 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A674 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401A7B8C (--$GreReleaseSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D0544 (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x14024E6D8 (--0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     ??1UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x14024F8A0 (--1UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14026E8E4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x140296C88 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1403159BC (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall ENUMUNDERLAYS::bEnum(
        ENUMUNDERLAYS *this,
        struct _SURFOBJ **a2,
        struct _POINTL *a3,
        struct _CLIPOBJ **a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rax
  struct _RECTL v12; // xmm0
  __int64 v13; // rax
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rbx
  int v17; // r13d
  int v18; // edi
  int IsCursorSprite; // r14d
  struct _GRETHREAD *CurrentThread; // rbx
  Gre::Base *v21; // rcx
  struct Gre::Base::SESSION_GLOBALS *v22; // r14
  __int64 v23; // rax
  ENUMUNDERLAYS *v24; // r8
  __int64 v25; // rdx
  struct REGION *v26; // rdx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  __int128 v31; // xmm1
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  _OWORD *v40; // rcx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // rax
  ENUMUNDERLAYS *v51; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v52[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v57[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+70h] [rbp-90h]
  __int128 v59; // [rsp+80h] [rbp-80h]
  __int128 v60; // [rsp+90h] [rbp-70h]
  __int128 v61; // [rsp+A0h] [rbp-60h]
  __int128 v62; // [rsp+B0h] [rbp-50h]
  __int128 v63; // [rsp+C0h] [rbp-40h]
  __int128 v64; // [rsp+D0h] [rbp-30h]
  __int128 v65; // [rsp+E0h] [rbp-20h]
  __int128 v66; // [rsp+F0h] [rbp-10h]
  __int128 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+110h] [rbp+10h]
  struct _RECTL v69; // [rsp+118h] [rbp+18h] BYREF

  v51 = this;
  v69 = 0LL;
  while ( 1 )
  {
    v8 = *((_QWORD *)this + 112);
    if ( !*((_QWORD *)this + 3) )
      break;
    if ( v8 )
    {
      SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v8 + 248));
      *((_QWORD *)this + 112) = 0LL;
    }
    if ( bIntersect((const struct _RECTL *)(*((_QWORD *)this + 3) + 80LL), (const struct _RECTL *)this + 2, &v69) )
    {
      v11 = *((_QWORD *)this + 8);
      v12 = v69;
      *((_DWORD *)this + 18) = 1;
      *(struct _RECTL *)(v11 + 4) = v12;
      *a4 = (struct _CLIPOBJ *)*((_QWORD *)this + 8);
      *a2 = *(struct _SURFOBJ **)(*((_QWORD *)this + 3) + 160LL);
      *a3 = *(struct _POINTL *)(*((_QWORD *)this + 3) + 168LL);
      v13 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 112) = v13;
      v14 = *((_DWORD *)this + 8);
      v15 = *((_DWORD *)this + 9);
      v16 = *(_QWORD *)(v13 + 24);
      v17 = *((_DWORD *)this + 10);
      v18 = *((_DWORD *)this + 11);
      while ( v16 )
      {
        IsCursorSprite = bIsCursorSprite((struct SPRITE *)v16);
        if ( IsCursorSprite == 1 )
          SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v16 + 248));
        if ( (*(_DWORD *)v16 & 0x400) == 0
          && *(_DWORD *)(v16 + 80) <= v17
          && *(_DWORD *)(v16 + 84) <= v18
          && *(_DWORD *)(v16 + 88) >= v14
          && *(_DWORD *)(v16 + 92) >= v15 )
        {
          break;
        }
        if ( IsCursorSprite == 1 )
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v16 + 248));
        v16 = *(_QWORD *)(v16 + 24);
      }
      *((_QWORD *)v51 + 3) = v16;
      return 1LL;
    }
    SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(*((_QWORD *)this + 3) + 248LL));
    *((_QWORD *)this + 3) = pSpFindInZ(*(struct SPRITE **)(*((_QWORD *)this + 3) + 24LL), (struct _RECTL *)this + 2);
  }
  if ( v8 )
  {
    SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(v8 + 248));
    *((_QWORD *)this + 112) = 0LL;
  }
  if ( *((_DWORD *)this + 19) )
  {
LABEL_9:
    if ( *((_DWORD *)this + 20) )
    {
      if ( *((_DWORD *)this + 18) )
      {
        PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v57, *(struct _SPRITESTATE **)this, (struct _RECTL *)this + 2);
        if ( v57[0] )
        {
          UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v52);
          vSpRedrawArea(*(struct _SPRITESTATE **)this, (struct _RECTL *)this + 2, 0);
          UNDOENGUPDATEDEVICESURFACE::~UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v52);
        }
        PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v57);
      }
      CurrentThread = GreGetCurrentThread();
      v22 = Gre::Base::Globals(v21);
      v51 = **(ENUMUNDERLAYS ***)this;
      if ( CurrentThread
        && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v51)
        && (*((_DWORD *)CurrentThread + 85) || *((_DWORD *)CurrentThread + 86)) )
      {
        v27 = *(_DWORD *)(*(_QWORD *)this + 100LL);
        *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 12LL) = v27;
        v28 = *(_DWORD *)(*(_QWORD *)this + 104LL);
        *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 16LL) = v28;
        v29 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 12LL);
        *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) = v29;
        v30 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 16LL);
        *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 24LL) = v30;
        vSpTlSpriteStateDirectDriverAccess(*(struct _SPRITESTATE **)this, 0);
        **((_DWORD **)GreGetCurrentThread() + 34) = 0;
        if ( *((_DWORD *)this + 21) == 1 )
        {
          v31 = *(_OWORD *)((char *)this + 104);
          v58 = *(_OWORD *)((char *)this + 88);
          v32 = *((_QWORD *)this + 31);
          v33 = *(_OWORD *)((char *)this + 120);
          v59 = v31;
          v34 = *(_OWORD *)((char *)this + 136);
          v60 = v33;
          v35 = *(_OWORD *)((char *)this + 152);
          v61 = v34;
          v36 = *(_OWORD *)((char *)this + 168);
          v62 = v35;
          v37 = *(_OWORD *)((char *)this + 184);
          v63 = v36;
          v38 = *(_OWORD *)((char *)this + 216);
          v64 = v37;
          v65 = *(_OWORD *)((char *)this + 200);
          v39 = *(_OWORD *)((char *)this + 232);
          v66 = v38;
          v67 = v39;
          v68 = v32;
          v40 = (_OWORD *)*((_QWORD *)GreGetCurrentThread() + 34);
          v41 = v59;
          *v40 = v58;
          v42 = v60;
          v40[1] = v41;
          v43 = v61;
          v40[2] = v42;
          v44 = v62;
          v40[3] = v43;
          v45 = v63;
          v40[4] = v44;
          v46 = v64;
          v40[5] = v45;
          v47 = v65;
          v40[6] = v46;
          v40 += 8;
          v48 = v66;
          *(v40 - 1) = v47;
          v49 = v67;
          v50 = v68;
          *v40 = v48;
          v40[1] = v49;
          *((_QWORD *)v40 + 4) = v50;
        }
        SPRITERANGELOCK::vUnlockShared((SPRITERANGELOCK *)(*(_QWORD *)this + 120LL));
        GreReleaseSemaphoreShared<6,>(v22);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)this + 2) + 88LL) = *(_DWORD *)(*(_QWORD *)this + 100LL);
        *(_WORD *)(*((_QWORD *)this + 2) + 76LL) = *(_WORD *)(*(_QWORD *)this + 104LL);
        *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
        if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v51) )
          GreReleaseSemaphoreExclusive<6,>(v22);
      }
      v23 = *((_QWORD *)this + 8);
      if ( v23 )
        *(_OWORD *)(v23 + 4) = *((_OWORD *)this + 3);
    }
    v53 = *((_QWORD *)this + 33);
    v54 = *((_QWORD *)this + 32);
    v55 = *((_QWORD *)this + 34);
    v56 = *((_QWORD *)this + 35);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v53);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v54);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v55);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v56);
    return 0LL;
  }
  v9 = *((_QWORD *)this + 8);
  if ( !*((_DWORD *)this + 18) )
  {
    *((_DWORD *)this + 19) = 1;
    *a4 = (struct _CLIPOBJ *)v9;
    *a2 = (struct _SURFOBJ *)*((_QWORD *)this + 2);
    *a3 = 0LL;
    return 1LL;
  }
  *(_OWORD *)(v9 + 4) = *((_OWORD *)this + 3);
  v24 = (ENUMUNDERLAYS *)*((_QWORD *)this + 32);
  if ( v24 && *((_QWORD *)this + 33) )
  {
    v25 = *((_QWORD *)this + 8);
    if ( *(_BYTE *)(v25 + 20) == 3 )
    {
      v52[0] = *(_QWORD *)(*(_QWORD *)this + 704LL);
      v51 = v24;
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v51, (struct RGNOBJ *)(v25 + 56), (struct RGNOBJ *)v52, 8u) )
        RGNOBJ::vSet((RGNOBJ *)&v51);
      v26 = v51;
      *((_QWORD *)this + 32) = v51;
    }
    else
    {
      v26 = *(struct REGION **)(*(_QWORD *)this + 704LL);
    }
    XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 288), v26, (ENUMUNDERLAYS *)((char *)this + 32), 1);
    if ( (unsigned int)bIntersect((char *)this + 292, (char *)this + 32) )
    {
      *((_DWORD *)this + 19) = 1;
      *a4 = (struct _CLIPOBJ *)((char *)this + 288);
      *a2 = (struct _SURFOBJ *)*((_QWORD *)this + 2);
      *a3 = 0LL;
      return 1LL;
    }
    goto LABEL_9;
  }
  return 0LL;
}
