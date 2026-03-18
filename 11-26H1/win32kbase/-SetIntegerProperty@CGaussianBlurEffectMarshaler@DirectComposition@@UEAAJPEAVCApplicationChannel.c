/*
 * XREFs of ?SetIntegerProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236D10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236CA0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffectMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 == 11 )
  {
    if ( a1[65] == a4 )
      return v5;
    a1[4] |= 0x800u;
    a1[65] = a4;
    goto LABEL_8;
  }
  if ( a3 == 12 )
  {
    if ( a1[66] == a4 )
      return v5;
    a1[4] |= 0x1000u;
    a1[66] = a4;
LABEL_8:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
}
