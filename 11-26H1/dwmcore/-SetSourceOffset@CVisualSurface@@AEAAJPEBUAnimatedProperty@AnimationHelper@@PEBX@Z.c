/*
 * XREFs of ?SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099E20
 * Callers:
 *     CVisualSurface::_lambda_6_::_lambda_invoker_cdecl_ @ 0x180263330 (CVisualSurface--_lambda_6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099FC0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 */

__int64 __fastcall CVisualSurface::SetSourceOffset(
        CVisualSurface *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  }
  return 0LL;
}
