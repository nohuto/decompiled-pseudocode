/*
 * XREFs of ?SetMaxScale@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJM@Z @ 0x18024C124
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetMaxScale(
        __int64 a1,
        float a2)
{
  if ( a2 != *(float *)(a1 + 244) )
  {
    *(float *)(a1 + 244) = a2;
    *(_BYTE *)(a1 + 830) |= 0x10u;
  }
  return 0LL;
}
