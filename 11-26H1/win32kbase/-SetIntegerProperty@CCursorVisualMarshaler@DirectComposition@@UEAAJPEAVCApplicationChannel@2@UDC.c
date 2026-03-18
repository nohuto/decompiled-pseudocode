/*
 * XREFs of ?SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14018C9E0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSI.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::SetIntegerProperty(
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
    if ( *(_BYTE *)(a1 + 360) == ((_DWORD)a4 != 0) )
      return v5;
    *(_DWORD *)(a1 + 336) |= 4u;
    *(_BYTE *)(a1 + 360) = (_DWORD)a4 != 0;
    goto LABEL_8;
  }
  if ( a3 == 54 )
  {
    if ( *(_BYTE *)(a1 + 361) == ((_DWORD)a4 != 0) )
      return v5;
    *(_DWORD *)(a1 + 336) |= 8u;
    *(_BYTE *)(a1 + 361) = (_DWORD)a4 != 0;
LABEL_8:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
}
