/*
 * XREFs of ?InvalidateGradient@CGradientBrush@@AEAAXXZ @ 0x1801C665C
 * Callers:
 *     ?SetOrAppendColorStops@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@AEAAJAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801C63C8 (-SetOrAppendColorStops@-$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@AEAAJAEBV-$span@PE.c)
 *     ?Initialize@CGradientBrush@@UEAAJXZ @ 0x180248C70 (-Initialize@CGradientBrush@@UEAAJXZ.c)
 *     ?SetExtendMode@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJI@Z @ 0x18024B16C (-SetExtendMode@-$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJI@Z.c)
 *     ?SetInterpolationSpace@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJI@Z @ 0x18024B770 (-SetInterpolationSpace@-$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientBrush::InvalidateGradient(CGradientBrush *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  *((_BYTE *)this + 240) = 0;
  (*(void (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(v1 + 80))(this, 6LL, this);
}
