/*
 * XREFs of ?SetIntegerProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14019B870
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401C4AE0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CPathGeometryMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  if ( a3 == 6 )
  {
    a1[26] = a4;
    goto LABEL_6;
  }
  if ( a3 == 7 )
  {
    a1[27] = a4;
LABEL_6:
    a1[4] |= 0x1000u;
    *a5 = 1;
    return v5;
  }
  return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(a1);
}
