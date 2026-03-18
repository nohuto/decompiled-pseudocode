/*
 * XREFs of ?SetIntegerProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140194050
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14018C9E0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSI.c)
 */

__int64 __fastcall DirectComposition::CWindowNodeMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  switch ( a3 )
  {
    case ':':
      if ( *(_BYTE *)(a1 + 432) == ((_DWORD)a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 336) |= 0x80u;
      *(_BYTE *)(a1 + 432) = (_DWORD)a4 != 0;
      goto LABEL_14;
    case ';':
      if ( *(_BYTE *)(a1 + 433) == ((_DWORD)a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 336) |= 0x100u;
      *(_BYTE *)(a1 + 433) = (_DWORD)a4 != 0;
      goto LABEL_14;
    case '<':
      if ( *(_BYTE *)(a1 + 434) == ((_DWORD)a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 336) |= 0x200u;
      *(_BYTE *)(a1 + 434) = (_DWORD)a4 != 0;
      goto LABEL_14;
    case '=':
      if ( *(_BYTE *)(a1 + 435) == ((_DWORD)a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 336) |= 0x400u;
      *(_BYTE *)(a1 + 435) = (_DWORD)a4 != 0;
LABEL_14:
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
}
