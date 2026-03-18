/*
 * XREFs of ?SetBufferProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023F350
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@AEAAJPEA_N@Z @ 0x14023F2E0 (-IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@AEAAJ.c)
 *     DirectComposition::SetGuidProperty @ 0x14023F3AC (DirectComposition--SetGuidProperty.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *v8; // r10
  bool *v9; // r11

  *a6 = 0;
  if ( a3 )
  {
    if ( a3 != 1 )
      return 3221225485LL;
    v7 = 88LL;
  }
  else
  {
    v7 = 72LL;
  }
  result = DirectComposition::SetGuidProperty(a4, a5, a1 + v7);
  if ( (int)result >= 0 )
    return DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::IsReadyForMarshaling(v8, v9);
  return result;
}
