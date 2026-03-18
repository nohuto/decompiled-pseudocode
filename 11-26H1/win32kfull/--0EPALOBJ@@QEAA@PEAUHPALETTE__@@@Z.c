/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4
 * Callers:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreSetPaletteEntries @ 0x14017E780 (GreSetPaletteEntries.c)
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x14017E8E0 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     GreGetPaletteEntries @ 0x1401801A0 (GreGetPaletteEntries.c)
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x140180280 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14018890C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     NtGdiResizePalette @ 0x140256060 (NtGdiResizePalette.c)
 *     EngQueryPalette @ 0x14031E750 (EngQueryPalette.c)
 *     NtGdiUnrealizeObject @ 0x14032BF10 (NtGdiUnrealizeObject.c)
 *     NtGdiEngDeletePalette @ 0x14032CF20 (NtGdiEngDeletePalette.c)
 *     NtGdiColorCorrectPalette @ 0x140330700 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x140331770 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1403317EC (GreCreateHalftonePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140347AD0 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

EPALOBJ *__fastcall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8

  *(_QWORD *)this = 0LL;
  v4 = Gre::Base::Globals(this);
  LOBYTE(v5) = 8;
  *(_QWORD *)this = HmgShareLock(v4, a2, v5, 0LL);
  return this;
}
