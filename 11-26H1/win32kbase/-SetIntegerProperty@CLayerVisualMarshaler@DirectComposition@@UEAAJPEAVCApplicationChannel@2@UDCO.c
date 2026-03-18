/*
 * XREFs of ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14018C9E0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSI.c)
 */

__int64 __fastcall DirectComposition::CLayerVisualMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 == 53 )
  {
    if ( *(_BYTE *)(a1 + 352) == ((_DWORD)a4 != 0) )
      return v5;
    *(_BYTE *)(a1 + 352) = (_DWORD)a4 != 0;
    *(_DWORD *)(a1 + 356) |= 4u;
    goto LABEL_8;
  }
  if ( a3 == 54 )
  {
    if ( *(_BYTE *)(a1 + 353) == ((_DWORD)a4 != 0) )
      return v5;
    *(_BYTE *)(a1 + 353) = (_DWORD)a4 != 0;
    *(_DWORD *)(a1 + 356) |= 8u;
LABEL_8:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
}
