/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180180B90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // r10
  const struct AnimationHelper::AnimatedProperty *const near *v5; // rax
  __int64 result; // rax
  unsigned int v7; // ebx

  for ( i = &CComponentTransform3D::k_rgAnimDef; ; ++i )
  {
    if ( i == &CLineGeometry::k_rgAnimDef )
      goto LABEL_12;
    v5 = *i;
    if ( a2 == **(_DWORD **)i && (a3 == *((_DWORD *)v5 + 1) || !a3) )
      break;
  }
  if ( !v5 )
  {
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x45u, 0LL);
    return 2147942487LL;
  }
  result = (*((__int64 (__fastcall **)(__int64, const struct AnimationHelper::AnimatedProperty *const near *const, __int64))v5
            + 3))(
             a1,
             *i,
             a4);
  v7 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x41u, 0LL);
    return v7;
  }
  return result;
}
