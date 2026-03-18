/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E3D80
 * Callers:
 *     GreFillRgn @ 0x1400E2308 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1400E3294 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     GreExtCreatePen @ 0x1400E35BC (GreExtCreatePen.c)
 *     GreGetObjectBitmapHandle @ 0x1400E43A0 (GreGetObjectBitmapHandle.c)
 *     GreMarkDeletableBrush @ 0x1400E4460 (GreMarkDeletableBrush.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x14033D6B4 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x14033D8F8 (-GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1400E4270 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
  PopThreadGuardedObject((char *)this + 16);
}
