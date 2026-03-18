/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1802021A4
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800DF2D0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitma.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180268440 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800DFBBC (-GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180189610 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(
        CWindowNode *this,
        __int64 *a2,
        CMILMatrix *a3,
        _OWORD *a4,
        struct D2D_RECT_F *a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v8)(__int64 *, __int64 *); // rax
  int v11; // eax
  unsigned int v12; // edi
  CCompositionSurfaceBitmap *CurrentFlip; // rdi
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  struct D2D_SIZE_F v17[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18[2]; // [rsp+48h] [rbp-28h] BYREF
  struct D2D_RECT_F v19; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v5 = *a2;
  v16 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 64);
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  v11 = v8(a2, &v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    CurrentFlip = CWindowNode::GetCurrentFlipExSurface(this);
    if ( a2 == (__int64 *)(((unsigned __int64)CurrentFlip + 72) & -(__int64)(CurrentFlip != 0LL)) )
    {
      v15 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
      v17[0].width = (float)(*((_DWORD *)this + 174) - *((_DWORD *)this + 172));
      v17[0].height = (float)v15;
      CCompositionSurfaceBitmap::CalcImageTransform(CurrentFlip, v17, a3, &v19, (__int64)v18);
      if ( *((_BYTE *)this + 747)
        && (unsigned int)CCompositionSurfaceBitmap::GetSizePreference((__int64)CurrentFlip) == 1 )
      {
        *(_OWORD *)&v17[0].width = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, &v19, (float *)v17);
        CMILMatrix::Translate(
          a3,
          (float)(*((_DWORD *)this + 174) - *((_DWORD *)this + 172)) - (float)(v17[1].width - v17[0].width),
          0.0);
      }
      CMILMatrix::Translate(a3, (float)*((int *)this + 172), (float)*((int *)this + 173));
    }
    else
    {
      (*(void (__fastcall **)(__int64, CMILMatrix *, __int64 *))(*(_QWORD *)v16 + 40LL))(v16, a3, v18);
      v19 = *(struct D2D_RECT_F *)v18;
    }
    if ( a4 )
      *a4 = *(_OWORD *)v18;
    if ( a5 )
      *a5 = v19;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)(unsigned int)v11);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return v12;
  }
}
