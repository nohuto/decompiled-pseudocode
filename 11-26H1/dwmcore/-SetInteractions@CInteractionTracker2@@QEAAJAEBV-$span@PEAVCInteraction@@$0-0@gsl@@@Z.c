/*
 * XREFs of ?SetInteractions@CInteractionTracker2@@QEAAJAEBV?$span@PEAVCInteraction@@$0?0@gsl@@@Z @ 0x180217C14
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetOrAppendInteractions@CInteractionTracker2@@AEAAXAEBV?$span@PEAVCInteraction@@$0?0@gsl@@_N@Z @ 0x180217C30 (-SetOrAppendInteractions@CInteractionTracker2@@AEAAXAEBV-$span@PEAVCInteraction@@$0-0@gsl@@_N@Z.c)
 */

__int64 __fastcall CInteractionTracker2::SetInteractions(__int64 a1, __int64 a2)
{
  CInteractionTracker2::SetOrAppendInteractions(a1, a2, 0LL);
  return 0LL;
}
