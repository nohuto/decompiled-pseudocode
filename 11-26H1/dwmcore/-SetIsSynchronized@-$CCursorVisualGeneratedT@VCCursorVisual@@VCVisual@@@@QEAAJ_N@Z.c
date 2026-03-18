/*
 * XREFs of ?SetIsSynchronized@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_N@Z @ 0x18024BA64
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180265440 (-SetProperty@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetIsSynchronized(__int64 a1, char a2)
{
  __int64 v3; // rdi

  if ( a2 != *(_BYTE *)(a1 + 689) )
  {
    *(_BYTE *)(a1 + 689) = a2;
    v3 = *(_QWORD *)(a1 + 696);
    if ( v3 )
    {
      if ( a2 != *(_BYTE *)(v3 + 80) )
      {
        EnterCriticalSection(&g_CursorManager);
        *(_BYTE *)(v3 + 80) = a2;
        LeaveCriticalSection(&g_CursorManager);
      }
    }
  }
  return 0LL;
}
