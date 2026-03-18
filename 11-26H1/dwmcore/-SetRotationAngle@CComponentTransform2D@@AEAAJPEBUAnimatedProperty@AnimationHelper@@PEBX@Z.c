/*
 * XREFs of ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801110C0
 * Callers:
 *     CComponentTransform2D::_lambda_10_::_lambda_invoker_cdecl_ @ 0x1801110B0 (CComponentTransform2D--_lambda_10_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z @ 0x18011115C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComponentTransform2D::SetRotationAngle(
        CComponentTransform2D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        float *a3)
{
  __int64 result; // rax
  bool v5; // zf
  unsigned int v6; // ebx

  if ( *((float *)this + 48) == *a3 )
    return 0LL;
  v5 = *((_QWORD *)this + 6) == 0LL;
  *((float *)this + 48) = *a3;
  if ( !v5 )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  (*(void (__fastcall **)(CComponentTransform2D *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  result = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 4LL);
  v6 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0xBDu, 0LL);
    return v6;
  }
  return result;
}
