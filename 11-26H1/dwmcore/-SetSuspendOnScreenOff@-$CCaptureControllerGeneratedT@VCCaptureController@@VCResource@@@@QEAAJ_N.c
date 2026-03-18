/*
 * XREFs of ?SetSuspendOnScreenOff@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJ_N@Z @ 0x18024EBEC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024CD30 (-SetProperty@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAAJUDCOMPOSITIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetSuspendOnScreenOff(
        __int64 a1,
        char a2)
{
  __int64 *v3; // r9
  __int64 *i; // rdx
  __int64 v5; // rcx

  if ( a2 != *(_BYTE *)(a1 + 100) )
  {
    *(_BYTE *)(a1 + 100) = a2;
    v3 = *(__int64 **)(a1 + 168);
    for ( i = *(__int64 **)(a1 + 160); i != v3; ++i )
    {
      v5 = *i;
      *(_BYTE *)(v5 + 2824) = *(_BYTE *)(a1 + 100);
    }
  }
  return 0LL;
}
