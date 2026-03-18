/*
 * XREFs of ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18019F1CC
 * Callers:
 *     CComponentTransform3D::_lambda_12_::_lambda_invoker_cdecl_ @ 0x18019F1C0 (CComponentTransform3D--_lambda_12_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z @ 0x18011115C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAngle(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  bool v6; // zf
  int v7; // eax

  v3 = 0;
  if ( *((float *)this + 58) != *(float *)a3 )
  {
    v6 = *((_QWORD *)this + 6) == 0LL;
    *((_DWORD *)this + 58) = *a3;
    if ( !v6 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    v7 = CPropertyChangeResource::NotifyScalarPropertyChanged((__int64)this, 5u, *((float *)this + 58));
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x14Au, 0LL);
  }
  return v3;
}
