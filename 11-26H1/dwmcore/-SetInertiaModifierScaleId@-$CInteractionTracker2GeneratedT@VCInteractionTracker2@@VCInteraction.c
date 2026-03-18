/*
 * XREFs of ?SetInertiaModifierScaleId@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJH@Z @ 0x18024B404
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetInertiaModifierScaleId(
        __int64 a1,
        int a2)
{
  if ( a2 != *(_DWORD *)(a1 + 292) )
  {
    *(_DWORD *)(a1 + 292) = a2;
    *(_BYTE *)(a1 + 832) |= 1u;
  }
  return 0LL;
}
