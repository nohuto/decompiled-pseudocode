/*
 * XREFs of ?SetProperty@CLineGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801773C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180177460 (-SetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLineGeometry::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *i; // r10
  const struct AnimationHelper::AnimatedProperty *const near *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax

  for ( i = &CLineGeometry::k_rgAnimDef; ; ++i )
  {
    if ( i == &CGeometry::k_rgAnimDef )
      goto LABEL_7;
    v5 = *i;
    if ( a2 == **(_DWORD **)i && (a3 == *((_DWORD *)v5 + 1) || !a3) )
      break;
  }
  if ( !v5 )
  {
LABEL_7:
    v6 = CGeometry::SetProperty();
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x24u, 0LL);
    return v7;
  }
  v9 = (*((__int64 (__fastcall **)(__int64, const struct AnimationHelper::AnimatedProperty *const near *const, __int64))v5
        + 3))(
         a1,
         *i,
         a4);
  v7 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x20u, 0LL);
  return v7;
}
