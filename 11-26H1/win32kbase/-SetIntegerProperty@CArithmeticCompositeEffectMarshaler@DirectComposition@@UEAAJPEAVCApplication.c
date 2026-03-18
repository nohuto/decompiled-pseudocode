/*
 * XREFs of ?SetIntegerProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236A10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236CA0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 == 14 )
  {
    if ( *(_DWORD *)(a1 + 272) != a4 )
    {
      *(_DWORD *)(a1 + 16) |= 0x4000u;
      *(_DWORD *)(a1 + 272) = a4;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(a1);
  }
  return v5;
}
