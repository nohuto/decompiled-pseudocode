/*
 * XREFs of ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1400078A0
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400DB37C (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400DC1D8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1400DD258 (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032B210 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x14032DCD4 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     vSpUnTearDownSprites @ 0x140330570 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1400077AC (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140007B54 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140008B28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140008C94 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140008D0C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140008FB0 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1400093C0 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140009538 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1400E188C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSpRedrawArea(struct _SPRITESTATE *a1, struct _RECTL *a2, int a3)
{
  __int64 v3; // rax
  int v4; // ebx
  bool v5; // zf
  int v7; // r13d
  struct _SURFOBJ *Composite; // rsi
  __int64 v9; // rdi
  struct SPRITE *v10; // r15
  __int64 v11; // rax
  int v12; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  __int64 v15; // rdi
  int v16; // r12d
  unsigned __int64 v17; // rbx
  int v18; // edx
  _DWORD *v19; // rcx
  ULONG StartingIndex; // [rsp+40h] [rbp-79h] BYREF
  int v21; // [rsp+44h] [rbp-75h]
  struct SPRITE *v22; // [rsp+48h] [rbp-71h] BYREF
  struct _POINTL v23; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v24[64]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-19h]
  _DWORD *v26; // [rsp+A8h] [rbp-11h]
  struct _RECTL v27; // [rsp+C0h] [rbp+7h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = a3;
  v23 = 0LL;
  v21 = a3;
  v27 = 0LL;
  v5 = (*(_DWORD *)(v3 + 40) & 0x400) == 0;
  v22 = 0LL;
  if ( v5 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v24, a1, a2, 0, 0LL);
    while ( 1 )
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v24, &v22, &v27);
      if ( !v22 || (unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v24, &v22) && !v4 )
        goto LABEL_34;
      StartingIndex = 0;
      Composite = psoSpGetComposite(a1, &v27, &StartingIndex);
      if ( !Composite )
      {
LABEL_35:
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v24);
        return;
      }
      v9 = 0LL;
      v10 = v22;
      v23.x = -v27.left;
      v23.y = -v27.top;
      v11 = *((_QWORD *)v22 + 20);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 88);
        if ( (v12 & 0x80004000) != 0 && (v12 & 0x200) == 0 )
        {
          v9 = v11 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v11 - 24 + 48));
        }
      }
      hsurf = (int)Composite[1].hsurf;
      p_pvScan0 = 0LL;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &Composite[-1].pvScan0;
        GreLockDisplayDevice(Composite->hdev);
      }
      INVOKEOFFCOPYBITS(
        &v23,
        Composite,
        (struct _POINTL *)v10 + 21,
        *((struct _SURFOBJ **)v10 + 20),
        0LL,
        0LL,
        &v27,
        (struct _POINTL *)&v27);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
      if ( v9 )
        GreUnlockDisplayDevice(*(_QWORD *)(v9 + 48));
      v15 = v25;
      v16 = v24[0] & 1;
      v17 = (unsigned __int64)v26;
      do
      {
        vSpComposite(v10, &v23, Composite, &v27);
        v18 = 0;
        if ( v16 )
        {
          if ( v17 <= v15 + 24 )
            goto LABEL_26;
          v19 = (_DWORD *)(v17 - 16);
        }
        else
        {
          if ( v17 >= v15 + *(_QWORD *)(v15 + 8) - 16LL )
            goto LABEL_26;
          v19 = (_DWORD *)(v17 + 16);
        }
        if ( *v19 == *(_DWORD *)v17 )
        {
          v18 = 1;
          v26 = v19;
          v17 = (unsigned __int64)v19;
        }
LABEL_26:
        v10 = *(struct SPRITE **)(v17 + 8);
      }
      while ( v18 );
      v22 = *(struct SPRITE **)(v17 + 8);
      vSpWriteToScreen(a1, &v23, Composite, &v27);
      if ( StartingIndex == -1 )
      {
        vSpDeleteSurface(Composite);
      }
      else
      {
        if ( a1 != (struct _SPRITESTATE *)-696LL )
          GreAcquirePushLockExclusive((struct _SPRITESTATE *)((char *)a1 + 696));
        RtlClearBits((PRTL_BITMAP)a1 + 42, StartingIndex, 1u);
        if ( a1 != (struct _SPRITESTATE *)-696LL )
          GreReleasePushLockExclusive((struct _SPRITESTATE *)((char *)a1 + 696));
      }
      v4 = v21;
LABEL_34:
      if ( !v7 )
        goto LABEL_35;
    }
  }
}
