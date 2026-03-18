/*
 * XREFs of ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099E8C
 * Callers:
 *     CVisualSurface::_lambda_7_::_lambda_invoker_cdecl_ @ 0x180099E70 (CVisualSurface--_lambda_7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099FC0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ @ 0x18009A268 (-ClearAllRenderTargets@CVisualSurface@@AEAAXXZ.c)
 */

__int64 __fastcall CVisualSurface::SetSourceSize(
        CVisualSurface *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  unsigned int v3; // edi
  char v5; // si
  char v6; // bp

  v3 = 0;
  v5 = 1;
  if ( *((float *)this + 46) <= 0.0 || (v6 = 1, *((float *)this + 47) <= 0.0) )
    v6 = 0;
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    if ( !*((_BYTE *)this + 204) )
      CVisualSurface::ClearAllRenderTargets(this);
    if ( *((float *)this + 46) <= 0.0 || *((float *)this + 47) <= 0.0 )
      v5 = 0;
    if ( v6 == v5 )
      v3 = 6;
    CResource::NotifyOnChanged((__int64)this, v3, 0LL);
  }
  return 0LL;
}
