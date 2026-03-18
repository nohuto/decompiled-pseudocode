/*
 * XREFs of ?SetRequestedPositionAnimationId@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJH@Z @ 0x18024E6DC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetRequestedPositionAnimationId(
        __int64 a1,
        int a2)
{
  if ( a2 != *(_DWORD *)(a1 + 276) )
  {
    *(_DWORD *)(a1 + 276) = a2;
    *(_BYTE *)(a1 + 831) |= 2u;
  }
  return 0LL;
}
