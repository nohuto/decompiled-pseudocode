/*
 * XREFs of ?SetCallbackPropertyIdSet@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJI@Z @ 0x18024A4CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetCallbackPropertyIdSet(
        __int64 a1,
        int a2)
{
  if ( a2 != *(_DWORD *)(a1 + 200) )
  {
    *(_DWORD *)(a1 + 200) = a2;
    *(_BYTE *)(a1 + 829) |= 0x80u;
  }
  return 0LL;
}
