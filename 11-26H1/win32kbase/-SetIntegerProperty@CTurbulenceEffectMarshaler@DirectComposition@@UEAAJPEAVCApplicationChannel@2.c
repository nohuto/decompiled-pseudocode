/*
 * XREFs of ?SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1402376F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236CA0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  switch ( a3 )
  {
    case 13:
      if ( a1[70] == a4 )
        return v5;
      a1[4] |= 0x2000u;
      a1[70] = a4;
      goto LABEL_14;
    case 14:
      if ( a1[71] == a4 )
        return v5;
      a1[4] |= 0x4000u;
      a1[71] = a4;
      goto LABEL_14;
    case 15:
      if ( a1[72] == a4 )
        return v5;
      a1[4] |= 0x8000u;
      a1[72] = a4;
      goto LABEL_14;
    case 16:
      if ( a1[73] == a4 )
        return v5;
      a1[4] |= 0x10000u;
      a1[73] = a4;
LABEL_14:
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
}
