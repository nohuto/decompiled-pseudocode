/*
 * XREFs of ?SetSurfaceInternal@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020FE5C
 * Callers:
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1801DA024 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindRenderStrategy@CSurfaceBrush@@SAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1801B105C (-FindRenderStrategy@CSurfaceBrush@@SAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurfaceInternal(CResource *this, struct CResource *a2, _OWORD *a3)
{
  void **RenderStrategy; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 32) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x12B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
      (const char *)0x8007029CLL);
  if ( *((_QWORD *)this + 23) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x12C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
      (const char *)0x8007029CLL);
  RenderStrategy = CSurfaceBrush::FindRenderStrategy(a2);
  if ( RenderStrategy )
  {
    if ( a2 )
      CResource::RegisterNotifier(this, a2);
    *((_QWORD *)this + 23) = a2;
    *((_QWORD *)this + 24) = RenderStrategy;
    *((_OWORD *)this + 15) = *a3;
    CBrush::NotifyOnChanged((__int64)this, 0, (__int64)this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x132,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
}
