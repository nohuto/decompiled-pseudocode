/*
 * XREFs of ?GetFloatAnimatableProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233930
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::GetFloatAnimatableProperty(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( (_DWORD)a2 )
  {
    case 0xA:
      v4 = a1[64];
      goto LABEL_10;
    case 0xB:
      v4 = a1[65];
      goto LABEL_10;
    case 0xC:
      v4 = a1[66];
      goto LABEL_10;
    case 0xD:
      v4 = a1[67];
LABEL_10:
      *a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(a1, a2, a3, 0LL);
}
