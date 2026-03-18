/*
 * XREFs of ?OnVerticalAlignmentChanged@CSurfaceBrush@@QEAAXXZ @ 0x180284614
 * Callers:
 *     ?SetVerticalAlignment@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DA1C8 (-SetVerticalAlignment@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

void __fastcall CSurfaceBrush::OnVerticalAlignmentChanged(CSurfaceBrush *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 6) == 0LL;
  *((_DWORD *)this + 43) = *((_DWORD *)this + 32);
  if ( !v1 )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  CBrush::NotifyOnChanged((__int64)this, 0, (__int64)this);
}
