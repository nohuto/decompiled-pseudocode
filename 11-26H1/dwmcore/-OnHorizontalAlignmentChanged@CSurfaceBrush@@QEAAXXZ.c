/*
 * XREFs of ?OnHorizontalAlignmentChanged@CSurfaceBrush@@QEAAXXZ @ 0x18021F028
 * Callers:
 *     ?SetHorizontalAlignment@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z @ 0x18021F004 (-SetHorizontalAlignment@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

void __fastcall CSurfaceBrush::OnHorizontalAlignmentChanged(CSurfaceBrush *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 6) == 0LL;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 31);
  if ( !v1 )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  CBrush::NotifyOnChanged((__int64)this, 0, (__int64)this);
}
