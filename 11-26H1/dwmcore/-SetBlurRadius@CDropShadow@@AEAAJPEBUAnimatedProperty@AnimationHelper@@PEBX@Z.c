/*
 * XREFs of ?SetBlurRadius@CDropShadow@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801930EC
 * Callers:
 *     CDropShadow::_lambda_7_::_lambda_invoker_cdecl_ @ 0x1801930E0 (CDropShadow--_lambda_7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801931A0 (-NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CDropShadow::SetBlurRadius(
        CDropShadow *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        float *a3)
{
  float v4; // xmm1_4
  bool v6; // zf

  v4 = fminf(750.0, *a3);
  if ( *((float *)this + 22) != v4 )
  {
    v6 = *((_QWORD *)this + 6) == 0LL;
    *((float *)this + 22) = v4;
    if ( !v6 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CDropShadow::NotifyOnChanged(this, 0LL, this);
  }
  return 0LL;
}
