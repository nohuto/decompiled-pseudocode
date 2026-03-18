/*
 * XREFs of ?SetBrushes@CEffectBrush@@QEAAJAEBV?$span@PEAVCBrush@@$0?0@gsl@@@Z @ 0x18024A4BC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEffectBrush::SetBrushes(CEffectBrush *a1)
{
  return CEffectBrush::SetOrAppendBrushes(a1);
}
