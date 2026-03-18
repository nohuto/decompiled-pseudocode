/*
 * XREFs of ?AppendBrushes@CEffectBrush@@QEAAJAEBV?$span@PEAVCBrush@@$0?0@gsl@@@Z @ 0x18024718C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEffectBrush::AppendBrushes(CEffectBrush *a1)
{
  return CEffectBrush::SetOrAppendBrushes(a1);
}
