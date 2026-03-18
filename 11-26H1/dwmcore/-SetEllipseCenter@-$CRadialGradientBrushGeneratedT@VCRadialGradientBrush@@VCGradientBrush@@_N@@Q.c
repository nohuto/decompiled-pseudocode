/*
 * XREFs of ?SetEllipseCenter@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024AF98
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D850 (-SetProperty@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@MEAAJU.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18015ABB0 (-NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??9@YA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1802060FC (--9@YA_NAEBUD2D_VECTOR_2F@@0@Z.c)
 */

__int64 __fastcall CRadialGradientBrushGeneratedT<CRadialGradientBrush,CGradientBrush,bool>::SetEllipseCenter(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rdx
  bool v4; // zf
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  if ( operator!=((float *)&v7, (float *)(a1 + 248)) )
  {
    v4 = *(_QWORD *)(a1 + 48) == 0LL;
    *v3 = a2;
    if ( !v4 )
      CResource::InvalidateConsumingAnimationsInternal(a1);
    CGradientBrush::NotifyOnChanged(a1, 6u, 0LL);
  }
  return 0LL;
}
