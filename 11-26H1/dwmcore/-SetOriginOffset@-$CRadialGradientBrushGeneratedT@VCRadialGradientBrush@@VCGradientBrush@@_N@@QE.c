/*
 * XREFs of ?SetOriginOffset@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024C60C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D850 (-SetProperty@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@MEAAJU.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18015ABB0 (-NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??9@YA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1802060FC (--9@YA_NAEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x18027F23C (-IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18027F27C (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CRadialGradientBrushGeneratedT<CRadialGradientBrush,CGradientBrush,bool>::SetOriginOffset(
        CRadialGradientBrush *this,
        __int64 a2)
{
  _QWORD *v3; // rdx
  bool v4; // zf
  unsigned int v5; // edx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  if ( operator!=((float *)&v8, (float *)this + 66) )
  {
    v4 = *((_QWORD *)this + 6) == 0LL;
    *v3 = a2;
    if ( !v4 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    if ( *((_BYTE *)this + 280) == CRadialGradientBrush::IsCenteredGradient(this) )
    {
      v5 = 6;
    }
    else
    {
      wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset((char *)this + 272);
      v5 = 14;
    }
    CGradientBrush::NotifyOnChanged((__int64)this, v5, 0LL);
    *((_BYTE *)this + 280) = CRadialGradientBrush::IsCenteredGradient(this);
  }
  return 0LL;
}
