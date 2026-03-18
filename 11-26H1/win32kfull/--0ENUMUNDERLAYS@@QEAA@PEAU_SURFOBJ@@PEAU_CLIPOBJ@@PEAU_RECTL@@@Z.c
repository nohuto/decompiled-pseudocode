/*
 * XREFs of ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C
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
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1400BC27C (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC564 (-vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC8B8 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1401670B8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ @ 0x140169254 (-bRedo@UNDOGRETHREADPIDLOCKS@@QEAA_NXZ.c)
 *     ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x140169390 (-vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x140169470 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A62C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401AB3CC (--$GreAcquireSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x14026ABBC (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

ENUMUNDERLAYS *__fastcall ENUMUNDERLAYS::ENUMUNDERLAYS(
        ENUMUNDERLAYS *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4)
{
  char *v8; // r13
  int v9; // esi
  char *v10; // r14
  HDEV hdev; // rdx
  HDEV v12; // rdx
  struct _GRETHREAD *CurrentThread; // rbx
  Gre::Base *v15; // rcx
  struct REGION *v16; // rdx
  struct _GRETHREAD *v17; // rax
  Gre::Base *v18; // rcx
  struct _GRETHREAD *v19; // rbx
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  __int64 v21; // rbx
  struct REGION *v22; // rdx
  _DWORD *v23; // rcx
  struct REGION *v24; // rdx
  const struct ERECTL *v25; // r8
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  __int128 v30; // xmm0
  struct _RECTL *v31; // rbx
  __int64 v32; // rax
  const struct _RECTL *v33; // rdx
  __int128 v34; // xmm0
  struct _RECTL v35; // xmm0
  struct REGION *v36; // [rsp+20h] [rbp-60h] BYREF
  struct _POINTL v37; // [rsp+28h] [rbp-58h] BYREF
  struct REGION *v38; // [rsp+30h] [rbp-50h] BYREF
  HDEV v39; // [rsp+38h] [rbp-48h] BYREF
  struct REGION *v40; // [rsp+40h] [rbp-40h] BYREF
  __int64 v41; // [rsp+48h] [rbp-38h] BYREF
  __int64 v42; // [rsp+50h] [rbp-30h]
  struct Gre::Base::SESSION_GLOBALS *v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h]
  struct _RECTL v45; // [rsp+68h] [rbp-18h] BYREF

  v40 = (struct REGION *)a2;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  v8 = (char *)this + 440;
  *((_DWORD *)this + 94) = 0;
  v9 = 1;
  *((_DWORD *)this + 104) = 1;
  v10 = (char *)this + 64;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *((_DWORD *)this + 142) = 1;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 180) = 1;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_DWORD *)this + 208) = 0;
  *((_DWORD *)this + 218) = 1;
  *((_QWORD *)this + 111) = 0LL;
  hdev = a2->hdev;
  v39 = hdev;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  if ( !hdev )
    return this;
  v12 = hdev + 20;
  *(_QWORD *)this = v12;
  if ( a2 == *((struct _SURFOBJ **)v12 + 4) )
  {
    v45 = *a4;
    ERECTL::operator*=(&v45, v12 + 10);
    if ( v45.left == v45.right || v45.top == v45.bottom )
      goto LABEL_18;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
    if ( !v36 || !v38 || !*(_QWORD *)&v37 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
      goto LABEL_18;
    }
    RGNOBJ::vSet((RGNOBJ *)&v38, (const struct _RECTL *const)(*(_QWORD *)this + 40LL));
    v24 = v38;
    v25 = (const struct ERECTL *)(*(_QWORD *)this + 40LL);
    *((_QWORD *)this + 32) = v36;
    *((struct _POINTL *)this + 34) = v37;
    *((_QWORD *)this + 33) = v24;
    XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 440), v24, v25, 1);
  }
  if ( a2 != *(struct _SURFOBJ **)(*(_QWORD *)this + 32LL)
    || (unsigned int)bInsideDriverCall(*(struct _SPRITESTATE **)this) )
  {
    return this;
  }
  *((_DWORD *)this + 21) = bCurrentTlDriverCall((struct PDEVOBJ *)&v39);
  CurrentThread = GreGetCurrentThread();
  v36 = Gre::Base::Globals(v15);
  if ( CurrentThread
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v39)
    && (*((_DWORD *)CurrentThread + 85) || *((_DWORD *)CurrentThread + 86)) )
  {
    v42 = 0LL;
    v41 = 0LL;
    LOWORD(v43) = 0;
    UNDOGRETHREADPIDLOCKS::vUndo((UNDOGRETHREADPIDLOCKS *)&v41);
    GreAcquireSemaphoreShared<6,>(v36);
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(*(_QWORD *)this + 120LL));
    if ( UNDOGRETHREADPIDLOCKS::bRedo((UNDOGRETHREADPIDLOCKS *)&v41) )
    {
      if ( *((_DWORD *)this + 21) == 1 )
      {
        v32 = *((_QWORD *)GreGetCurrentThread() + 34);
        *(_OWORD *)((char *)this + 88) = *(_OWORD *)v32;
        *(_OWORD *)((char *)this + 104) = *(_OWORD *)(v32 + 16);
        *(_OWORD *)((char *)this + 120) = *(_OWORD *)(v32 + 32);
        *(_OWORD *)((char *)this + 136) = *(_OWORD *)(v32 + 48);
        *(_OWORD *)((char *)this + 152) = *(_OWORD *)(v32 + 64);
        *(_OWORD *)((char *)this + 168) = *(_OWORD *)(v32 + 80);
        *(_OWORD *)((char *)this + 184) = *(_OWORD *)(v32 + 96);
        *(_OWORD *)((char *)this + 200) = *(_OWORD *)(v32 + 112);
        *(_OWORD *)((char *)this + 216) = *(_OWORD *)(v32 + 128);
        *(_OWORD *)((char *)this + 232) = *(_OWORD *)(v32 + 144);
        *((_QWORD *)this + 31) = *(_QWORD *)(v32 + 160);
      }
      v26 = *(_DWORD *)(*(_QWORD *)this + 92LL);
      *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 4LL) = v26;
      v27 = *(_DWORD *)(*(_QWORD *)this + 96LL);
      *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 8LL) = v27;
      v28 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 4LL);
      *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) = v28;
      v29 = *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 8LL);
      *(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 24LL) = v29;
      vSpTlSpriteStateDirectDriverAccess(*(struct _SPRITESTATE **)this, 1);
      **((_DWORD **)GreGetCurrentThread() + 34) = 1;
      goto LABEL_10;
    }
LABEL_18:
    *((_DWORD *)this + 19) = 1;
    return this;
  }
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v39) )
    GreAcquireSemaphore<6,>(v36);
  v16 = v40;
  *((_DWORD *)v40 + 22) = *(_DWORD *)(*(_QWORD *)this + 92LL);
  *((_WORD *)v16 + 38) = *(_WORD *)(*(_QWORD *)this + 96LL);
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
LABEL_10:
  v38 = (struct REGION *)*((_QWORD *)this + 34);
  *((_DWORD *)this + 20) = 1;
  if ( a3 && a3->iDComplexity )
  {
    v23 = *(_DWORD **)this;
    *(_QWORD *)v10 = a3;
    if ( a3->rclBounds.left < v23[10]
      || a3->rclBounds.right > v23[12]
      || a3->rclBounds.top < v23[11]
      || a3->rclBounds.bottom > v23[13] )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
      v37 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v37, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v37);
      if ( !v36 || !*(_QWORD *)&v37 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
        *((_DWORD *)this + 19) = 1;
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v37);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
        return this;
      }
      RGNOBJ::vSet((RGNOBJ *)&v37, (const struct _RECTL *const)(*(_QWORD *)this + 40LL));
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)(*(_QWORD *)v10 + 56LL), (struct RGNOBJ *)&v37, 8u)
        || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v36) == 1 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
        *((_DWORD *)this + 19) = 1;
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v37);
        return this;
      }
      XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 744), v36, (const struct ERECTL *)a4, 1);
      *((_QWORD *)this + 35) = v36;
      *(_QWORD *)v10 = (char *)this + 744;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v37);
    }
    v31 = (struct _RECTL *)((char *)this + 32);
    if ( !(unsigned int)bSpUpdateDeviceSurface(
                          *((struct _SURFOBJ **)this + 2),
                          (struct _CLIPOBJ **)this + 8,
                          (struct RGNOBJ *)&v38,
                          (ENUMUNDERLAYS *)((char *)this + 592)) )
    {
      *((_QWORD *)this + 34) = v38;
      *v31 = (struct _RECTL)xmmword_14036FDF0;
      return this;
    }
    v33 = (const struct _RECTL *)(*(_QWORD *)v10 + 4LL);
    *((struct _RECTL *)this + 3) = *v33;
    v9 = bIntersect(a4, v33, (struct _RECTL *)this + 2);
    goto LABEL_37;
  }
  v17 = GreGetCurrentThread();
  v19 = v17;
  if ( !a3 && v17 && *((_QWORD *)v17 + 37) )
  {
    v20 = Gre::Base::Globals(v18);
    v21 = *((_QWORD *)v19 + 37);
    v43 = v20;
    v36 = (struct REGION *)*((_QWORD *)this + 33);
    v44 = 0LL;
    LODWORD(v42) = 0;
    v41 = v21;
    v40 = XDCOBJ::prgnEffRao((XDCOBJ *)&v41);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v36, (struct RGNOBJ *)&v40) )
      goto LABEL_18;
    v22 = v36;
    *((_QWORD *)this + 33) = v36;
    if ( (*(_DWORD *)(*(_QWORD *)(v21 + 48) + 40LL) & 0x20000) != 0 )
    {
      v37.x = -*((_DWORD *)v39 + 644);
      v37.y = -*((_DWORD *)v39 + 645);
      RGNOBJ::bOffset((RGNOBJ *)&v36, &v37);
      v22 = v36;
    }
    XCLIPOBJ::vSetup((ENUMUNDERLAYS *)((char *)this + 440), v22, (const struct ERECTL *)&v45, 1);
    if ( (unsigned int)ERECTL::bEmpty((ENUMUNDERLAYS *)((char *)this + 444)) )
      goto LABEL_18;
    v30 = *(_OWORD *)((char *)this + 444);
    v31 = (struct _RECTL *)((char *)this + 32);
    *(_QWORD *)v10 = v8;
    *((_OWORD *)this + 2) = v30;
  }
  else
  {
    v34 = (__int128)*a4;
    v31 = (struct _RECTL *)((char *)this + 32);
    *(_QWORD *)v10 = v8;
    *((_OWORD *)this + 2) = v34;
    *(_OWORD *)((char *)this + 444) = v34;
  }
  if ( (unsigned int)bSpUpdateDeviceSurface(
                       *((struct _SURFOBJ **)this + 2),
                       (struct _CLIPOBJ **)this + 8,
                       (struct RGNOBJ *)&v38,
                       (ENUMUNDERLAYS *)((char *)this + 592))
    && *(char **)v10 != v8 )
  {
    v35 = *(struct _RECTL *)(*(_QWORD *)v10 + 4LL);
    *((_QWORD *)this + 34) = v38;
    *v31 = v35;
    *((struct _RECTL *)this + 3) = v35;
    goto LABEL_38;
  }
LABEL_37:
  *((_QWORD *)this + 34) = v38;
  if ( v9 )
LABEL_38:
    *((_QWORD *)this + 3) = pSpFindInZ(*(struct SPRITE **)(*(_QWORD *)this + 8LL), v31);
  return this;
}
