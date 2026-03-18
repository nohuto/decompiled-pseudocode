/*
 * XREFs of ?SetProperty@CVisualSurface@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180263620
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180140800 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurface::SetProperty(__int64 a1, int a2, int a3)
{
  _DWORD *AnimatablePropertyInfo; // rax
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 2LL;
  v9[1] = &CVisualSurface::k_rgAnimDef;
  AnimatablePropertyInfo = AnimationHelper::FindAnimatablePropertyInfo(v9, a2, a3);
  if ( AnimatablePropertyInfo )
  {
    v6 = (*((__int64 (__fastcall **)(__int64, _DWORD *, __int64))AnimatablePropertyInfo + 3))(
           v5,
           AnimatablePropertyInfo,
           v4);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x49u, 0LL);
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x4Du, 0LL);
  }
  return v7;
}
