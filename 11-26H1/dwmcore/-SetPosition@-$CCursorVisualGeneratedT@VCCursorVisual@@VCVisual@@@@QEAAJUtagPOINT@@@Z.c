/*
 * XREFs of ?SetPosition@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJUtagPOINT@@@Z @ 0x18024C850
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetPositionInternal@CCursorState@@AEAAXMM_N@Z @ 0x18015F974 (-SetPositionInternal@CCursorState@@AEAAXMM_N@Z.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetPosition(__int64 a1, __int64 a2)
{
  bool v2; // zf

  if ( a2 != *(_QWORD *)(a1 + 680) )
  {
    v2 = *(_BYTE *)(a1 + 689) == 0;
    *(_QWORD *)(a1 + 680) = a2;
    if ( !v2 )
    {
      if ( *(_QWORD *)(a1 + 696) )
        CCursorState::SetPositionInternal(
          *(CCursorState **)(a1 + 696),
          (float)*(int *)(a1 + 680),
          (float)*(int *)(a1 + 684),
          0);
    }
  }
  return 0LL;
}
