/*
 * XREFs of ?OnRightInsetChanged@CNineGridBrush@@QEAAXXZ @ 0x1801DA3A0
 * Callers:
 *     ?SetRightInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DA350 (-SetRightInset@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

void __fastcall CNineGridBrush::OnRightInsetChanged(CNineGridBrush *this)
{
  if ( *((_QWORD *)this + 6) )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(*(_QWORD *)this + 80LL))(this, 6LL, this);
}
