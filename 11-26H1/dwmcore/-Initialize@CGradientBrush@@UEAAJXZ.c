/*
 * XREFs of ?Initialize@CGradientBrush@@UEAAJXZ @ 0x180248C70
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateGradient@CGradientBrush@@AEAAXXZ @ 0x1801C665C (-InvalidateGradient@CGradientBrush@@AEAAXXZ.c)
 *     ?SetMappingMode@?$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJW4Enum@MilBrushMappingMode@@@Z @ 0x18024BCA8 (-SetMappingMode@-$CGradientBrushGeneratedT@VCGradientBrush@@VCBrush@@@@QEAAJW4Enum@MilBrushMappi.c)
 */

__int64 __fastcall CGradientBrush::Initialize(CGradientBrush *this)
{
  if ( *((_DWORD *)this + 26) )
  {
    *((_DWORD *)this + 26) = 0;
    CGradientBrush::InvalidateGradient(this);
  }
  CGradientBrushGeneratedT<CGradientBrush,CBrush>::SetMappingMode(this, 1LL);
  if ( *((_DWORD *)this + 28) != 2 )
  {
    *((_DWORD *)this + 28) = 2;
    CGradientBrush::InvalidateGradient(this);
  }
  return 0LL;
}
