/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1401853D0
 * Callers:
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1400F6C80 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     NtGdiResizePalette @ 0x140142990 (NtGdiResizePalette.c)
 *     GreGetPaletteEntries @ 0x140185300 (GreGetPaletteEntries.c)
 *     NtGdiEngDeletePalette @ 0x140263E10 (NtGdiEngDeletePalette.c)
 *     EngQueryPalette @ 0x1403071D0 (EngQueryPalette.c)
 *     GreAnimatePalette @ 0x140310750 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1403107CC (GreCreateHalftonePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140323AF4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x14032575C (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     NtGdiUnrealizeObject @ 0x14033A980 (NtGdiUnrealizeObject.c)
 *     NtGdiColorCorrectPalette @ 0x14033DC50 (NtGdiColorCorrectPalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
