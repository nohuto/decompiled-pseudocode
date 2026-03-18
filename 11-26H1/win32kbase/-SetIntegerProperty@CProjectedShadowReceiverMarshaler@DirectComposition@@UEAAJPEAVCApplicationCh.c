/*
 * XREFs of ?SetIntegerProperty@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140246460
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401C4AE0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  *a5 = 0;
  if ( a3 != 2 )
    return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
  *(_DWORD *)(a1 + 16) |= 0x200u;
  *(_DWORD *)(a1 + 80) = a4;
  *a5 = 1;
  return 0LL;
}
