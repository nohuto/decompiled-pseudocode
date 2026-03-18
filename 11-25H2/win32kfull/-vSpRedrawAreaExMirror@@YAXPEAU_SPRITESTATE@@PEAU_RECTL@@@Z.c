/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032EA5C
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140007E90 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1400077AC (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140008B28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140008C94 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140008D0C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x140008FB0 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1400093C0 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140009538 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x14000AB70 (--0ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1400E188C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x14020F51C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x14026B484 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x14032ACB0 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x14032CE3C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032F9C0 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2)
{
  __int64 v2; // rax
  struct REGION *v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // ecx
  struct _SURFOBJ *v14; // r9
  struct _SURFOBJ *v15; // rdx
  int v16; // r12d
  struct _SURFOBJ *Composite; // r14
  __int64 v18; // rdi
  struct SPRITE *v19; // r15
  __int64 v20; // rax
  int v21; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  ULONG StartingIndex[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v25; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v26; // [rsp+50h] [rbp-B0h] BYREF
  struct W32_PUSH_LOCK *v27; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v28[96]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v29; // [rsp+C0h] [rbp-40h] BYREF
  struct _CLIPOBJ v30; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)a1;
  v25 = 0LL;
  v26 = 0LL;
  v29 = 0LL;
  if ( (*(_DWORD *)(v2 + 40) & 0x400) == 0 )
  {
    ECLIPOBJTMPIFNEEDED::ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)&v30);
    v5 = (struct REGION *)*((_QWORD *)a1 + 88);
    v7 = bConcurrent(a1, v6);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v30, v7, v5, (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v30.rclBounds) )
    {
      v8 = *((_QWORD *)a1 + 4);
      v9 = 0LL;
      if ( v8 )
      {
        v10 = *(_DWORD *)(v8 + 88);
        if ( (v10 & 0x80004000) != 0 && (v10 & 0x200) == 0 )
        {
          v9 = v8 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v8 - 24 + 48));
        }
      }
      v11 = *((_QWORD *)a1 + 167);
      v12 = 0LL;
      if ( v11 )
      {
        v13 = *(_DWORD *)(v11 + 88);
        if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
        {
          v12 = v11 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v11 - 24 + 48));
        }
      }
      v14 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
      v15 = (struct _SURFOBJ *)*((_QWORD *)a1 + 167);
      *(_QWORD *)StartingIndex = 0LL;
      INVOKEOFFCOPYBITS(
        (struct _POINTL *)StartingIndex,
        v15,
        (struct _POINTL *)StartingIndex,
        v14,
        &v30,
        0LL,
        (struct _RECTL *)((char *)a1 + 40),
        (struct _POINTL *)StartingIndex);
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
      if ( v9 )
        GreUnlockDisplayDevice(*(_QWORD *)(v9 + 48));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v28, a1, a2, 0, 0LL);
    do
    {
      v16 = ENUMAREAS::bEnum((ENUMAREAS *)v28, &v25, &v29);
      if ( v25 && !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v28, &v25) )
      {
        StartingIndex[0] = 0;
        Composite = psoSpGetComposite(a1, &v29, StartingIndex);
        if ( !Composite )
          break;
        v18 = 0LL;
        v19 = v25;
        v26.x = -v29.left;
        v26.y = -v29.top;
        v20 = *((_QWORD *)v25 + 20);
        if ( v20 )
        {
          v21 = *(_DWORD *)(v20 + 88);
          if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
          {
            v18 = v20 - 24;
            GreLockDisplayDevice(*(_QWORD *)(v20 - 24 + 48));
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
          &v26,
          Composite,
          (struct _POINTL *)v19 + 21,
          *((struct _SURFOBJ **)v19 + 20),
          0LL,
          0LL,
          &v29,
          (struct _POINTL *)&v29);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        if ( v18 )
          GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
        while ( 1 )
        {
          if ( (*(_DWORD *)v19 & 0x100) == 0 )
            vSpComposite(v19, &v26, Composite, &v29);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v28, &v25) )
            break;
          v19 = v25;
        }
        vSpWriteToExMirror(a1, &v26, Composite, &v29);
        if ( StartingIndex[0] == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          v27 = (struct _SPRITESTATE *)((char *)a1 + 696);
          if ( a1 != (struct _SPRITESTATE *)-696LL )
            GreAcquirePushLockExclusive((struct _SPRITESTATE *)((char *)a1 + 696));
          RtlClearBits((PRTL_BITMAP)a1 + 42, StartingIndex[0], 1u);
          Gre::PUSHLOCKEX::vUnlock(&v27, 0);
        }
      }
    }
    while ( v16 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v28);
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)&v30);
  }
}
