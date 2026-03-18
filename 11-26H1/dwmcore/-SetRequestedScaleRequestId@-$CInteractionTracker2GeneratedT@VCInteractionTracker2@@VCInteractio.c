/*
 * XREFs of ?SetRequestedScaleRequestId@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJH@Z @ 0x18024E7A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetRequestedScaleRequestId(
        __int64 a1,
        int a2)
{
  if ( a2 != *(_DWORD *)(a1 + 264) )
  {
    *(_DWORD *)(a1 + 264) = a2;
    *(_BYTE *)(a1 + 830) |= 0x20u;
  }
  return 0LL;
}
