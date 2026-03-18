/*
 * XREFs of ?SetManipulations@CInteractionTracker2@@QEAAJAEBV?$span@PEAVCManipulation@@$0?0@gsl@@@Z @ 0x1802179D4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetOrAppendManipulations@CInteractionTracker2@@AEAAXAEBV?$span@PEAVCManipulation@@$0?0@gsl@@_N@Z @ 0x1802179F0 (-SetOrAppendManipulations@CInteractionTracker2@@AEAAXAEBV-$span@PEAVCManipulation@@$0-0@gsl@@_N@.c)
 */

__int64 __fastcall CInteractionTracker2::SetManipulations(__int64 a1, __int64 a2)
{
  CInteractionTracker2::SetOrAppendManipulations(a1, a2, 0LL);
  return 0LL;
}
