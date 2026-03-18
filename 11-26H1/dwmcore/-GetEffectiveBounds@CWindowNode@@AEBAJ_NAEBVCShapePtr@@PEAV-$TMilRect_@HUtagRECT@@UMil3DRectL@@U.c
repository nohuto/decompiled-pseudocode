/*
 * XREFs of ?GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1802020AC
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800DF2D0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169910 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitma.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180268440 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180012DC0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1801738B0 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180185338 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINT.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtagRECT@@@Z @ 0x18018CEC4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtag.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::GetEffectiveBounds(__int64 a1, char a2, __int64 *a3, int *a4, bool *a5)
{
  double v5; // xmm2_8
  bool IsAxisAlignedRectangle; // r14
  int TightBounds; // eax
  unsigned int v10; // edi
  int v12[4]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  IsAxisAlignedRectangle = 1;
  if ( a2 )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 688);
  }
  else
  {
    *(_QWORD *)a4 = 0LL;
    a4[2] = *(_DWORD *)(a1 + 720);
    a4[3] = *(_DWORD *)(a1 + 724);
    CWindowNode::IntersectWithMaximizedClip(a1);
  }
  if ( *a3 )
  {
    v13 = 0LL;
    TightBounds = CShapePtr::GetTightBounds(a3);
    v10 = TightBounds;
    if ( TightBounds < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D5,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
        (const char *)(unsigned int)TightBounds);
      return v10;
    }
    PixelAlign(v12, (unsigned int *)&v13, v5);
    TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a4, v12);
    IsAxisAlignedRectangle = CShapePtr::IsAxisAlignedRectangle((__int64 **)a3);
  }
  if ( a5 )
    *a5 = IsAxisAlignedRectangle;
  return 0LL;
}
