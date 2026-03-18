/*
 * XREFs of ?GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140240760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::GetFloatAnimatableProperty(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 24 )
    return DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(a1, a2, a3);
  *a3 = 0;
  return result;
}
