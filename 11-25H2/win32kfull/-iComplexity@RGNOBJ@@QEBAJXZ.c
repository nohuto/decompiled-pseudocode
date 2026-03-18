/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140009538 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140031C80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x14006C614 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     EngStrokePath @ 0x14006C7B0 (EngStrokePath.c)
 *     ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x140080068 (-GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x14008B768 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x14008C6BC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x140099794 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140099AFC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x14009AD7C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x14009B018 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x14009B380 (NtGdiExtSelectClipRgn.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x14009B5A4 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400A0744 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     EngFillPath @ 0x1400A3A10 (EngFillPath.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400DCB5C (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreFillRgn @ 0x1400E2308 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     EngStrokeAndFillPath @ 0x1400E48A0 (EngStrokeAndFillPath.c)
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 *     NtGdiOffsetClipRgn @ 0x1401D3310 (NtGdiOffsetClipRgn.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1401D7BB8 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140209018 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140260B68 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140302010 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x14032CEE8 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x14032D0F0 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032F540 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14001D774 (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rax
  _DWORD *v3; // rsi
  int v4; // ebx
  __int64 result; // rax
  const struct REGION_CORE *v6; // rdx
  unsigned int sizeScan; // eax
  const struct BaseRustGlobals *v8; // rdi
  char *v9; // rbx

  BaseRustGlobals = GetBaseRustGlobals();
  v3 = *(_DWORD **)this;
  v4 = 0;
  if ( BaseRustGlobals )
  {
    v8 = GetBaseRustGlobals();
    v9 = (char *)v8 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v8 + 8, 2LL);
    LODWORD(v8) = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 72LL))((unsigned __int64)(v3 + 6) & -(__int64)(v3 != 0LL));
    ExReleasePushLockSharedEx(v9, 2LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v8;
  }
  else
  {
    result = 1LL;
    if ( v3[12] != 1 )
    {
      if ( GetBaseRustGlobals() )
        sizeScan = Win32kRS::RegionCore_get_sizeScan((Win32kRS *)(v3 + 6), v6);
      else
        sizeScan = v3[10];
      LOBYTE(v4) = sizeScan > 0x38;
      return (unsigned int)(v4 + 2);
    }
  }
  return result;
}
