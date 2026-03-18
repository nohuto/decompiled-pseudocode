/*
 * XREFs of ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A00D0
 * Callers:
 *     CComponentTransform3D::_lambda_9_::_lambda_invoker_cdecl_ @ 0x1801A0070 (CComponentTransform3D--_lambda_9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector3@@@Z @ 0x180025070 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1801A0164 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAxis(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct D2DVector3 *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  bool v8; // zf
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]

  v10 = 0LL;
  v11 = 0;
  v4 = 0;
  D3DXVec3Normalize((struct D2DVector3 *)&v10, a3);
  v5 = v11;
  v6 = *((_QWORD *)this + 24) - v10;
  if ( !v6 )
    v6 = *((unsigned int *)this + 50) - (unsigned __int64)v11;
  if ( v6 )
  {
    v8 = *((_QWORD *)this + 6) == 0LL;
    *((_QWORD *)this + 24) = v10;
    *((_DWORD *)this + 50) = v5;
    if ( !v8 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    v9 = CPropertyChangeResource::NotifyVector3PropertyChanged((__int64)this, 6u, (__int64 *)this + 24);
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x165u, 0LL);
  }
  return v4;
}
