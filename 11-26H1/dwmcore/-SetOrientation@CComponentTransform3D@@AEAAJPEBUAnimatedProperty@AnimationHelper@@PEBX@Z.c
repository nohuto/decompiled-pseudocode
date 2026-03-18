/*
 * XREFs of ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180120E2C
 * Callers:
 *     CComponentTransform3D::_lambda_11_::_lambda_invoker_cdecl_ @ 0x18011F930 (CComponentTransform3D--_lambda_11_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180121D1C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DQuaternion@@@Z @ 0x180267FD4 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2.c)
 */

__int64 __fastcall CComponentTransform3D::SetOrientation(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct D2DQuaternion *a3)
{
  unsigned int v4; // ebx
  bool v6; // zf
  int v7; // eax
  float v8[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  D3DXQuaternionNormalize((struct D2DQuaternion *)v8, a3);
  if ( *((float *)this + 54) != v8[0]
    || *((float *)this + 55) != v8[1]
    || *((float *)this + 56) != v8[2]
    || *((float *)this + 57) != v8[3] )
  {
    v6 = *((_QWORD *)this + 6) == 0LL;
    *(_OWORD *)((char *)this + 216) = *(_OWORD *)v8;
    if ( !v6 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    v7 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(this, 4LL, (char *)this + 216);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x17Fu, 0LL);
  }
  return v4;
}
