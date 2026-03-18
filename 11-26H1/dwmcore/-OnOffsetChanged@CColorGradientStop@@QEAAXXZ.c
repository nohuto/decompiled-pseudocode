/*
 * XREFs of ?OnOffsetChanged@CColorGradientStop@@QEAAXXZ @ 0x1801D6670
 * Callers:
 *     ?SetOffset@?$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@QEAAJM@Z @ 0x1801D664C (-SetOffset@-$CColorGradientStopGeneratedT@VCColorGradientStop@@VCResource@@@@QEAAJM@Z.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

void __fastcall CColorGradientStop::OnOffsetChanged(CColorGradientStop *this)
{
  if ( *((_QWORD *)this + 6) )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  (*(void (__fastcall **)(CColorGradientStop *, __int64, CColorGradientStop *))(*(_QWORD *)this + 80LL))(
    this,
    10LL,
    this);
}
