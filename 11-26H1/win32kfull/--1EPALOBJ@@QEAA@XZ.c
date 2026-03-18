/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x14017EDC0
 * Callers:
 *     GreGetPaletteEntries @ 0x1401801A0 (GreGetPaletteEntries.c)
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

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  if ( *(_QWORD *)this )
  {
    v2 = Gre::Base::Globals(this);
    DEC_SHARE_REF_CNT(v2, *(_QWORD *)this);
  }
}
