/*
 * XREFs of ?GetFloatAnimatableProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffectMarshaler::GetFloatAnimatableProperty(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (_DWORD)a2 == 10 )
    *a3 = *(_DWORD *)(a1 + 256);
  else
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(a1, a2, a3, 0LL);
  return v3;
}
