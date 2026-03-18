/*
 * XREFs of ?SetIntegerProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1402374B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236CA0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 == 15 )
  {
    if ( a1[69] != a4 )
    {
      a1[4] |= 0x8000u;
      a1[69] = a4;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
  }
  return v5;
}
