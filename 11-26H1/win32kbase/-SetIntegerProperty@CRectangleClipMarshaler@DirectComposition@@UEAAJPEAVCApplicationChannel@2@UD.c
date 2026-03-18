/*
 * XREFs of ?SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140195A00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401C4AE0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 21:
      if ( !*(_BYTE *)(a1 + 144) && !*(_BYTE *)(a1 + 145) && a4 )
      {
        *(_BYTE *)(a1 + 144) = 1;
        *a5 = 1;
        *(_DWORD *)(a1 + 16) &= ~0x1000u;
        return v5;
      }
      return (unsigned int)-1073741811;
    case 22:
      if ( !*(_BYTE *)(a1 + 145) && !*(_BYTE *)(a1 + 144) && a4 )
      {
        *(_BYTE *)(a1 + 145) = 1;
        *a5 = 1;
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_QWORD *)(a1 + 104) = 0LL;
        *(_DWORD *)(a1 + 16) &= 0xFFFF4FFF;
        return v5;
      }
      return (unsigned int)-1073741811;
    case 23:
      if ( *(_BYTE *)(a1 + 146) != (a4 != 0) )
      {
        *(_BYTE *)(a1 + 146) = a4 != 0;
        *a5 = 1;
        *(_DWORD *)(a1 + 16) &= ~0x1000u;
      }
      break;
    default:
      return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(a1);
  }
  return v5;
}
