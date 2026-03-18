/*
 * XREFs of ?OnBrushChanged@CCompositionTextLine@@UEAAXXZ @ 0x18026B7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionTextLine::OnBrushChanged(CClipBrush **this)
{
  CClipBrush::SetSource(this[14], this[11]);
}
