/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A45BC
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021C68 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017004 (-RoundToNearestInt@@YAHM@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18003E74C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F27C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x18009A35C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  const RECT *v2; // r14
  int v3; // r10d
  int v4; // edx
  int v5; // eax
  struct CBaseGeometryProxy **v6; // rsi
  int v7; // r9d
  int v8; // r8d
  int RectangleGeometry; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  int v13; // ebx
  int v14; // eax
  struct CDrawGeometryInstruction *v16; // [rsp+30h] [rbp-40h] BYREF
  struct CRectangleGeometryProxy *v17; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v17 = 0LL;
  v16 = 0LL;
  v2 = (const RECT *)((char *)this + 792);
  v3 = *((_DWORD *)this + 199);
  v4 = *((_DWORD *)this + 200) - *((_DWORD *)this + 198);
  v5 = *((_DWORD *)this + 201) - v3;
  rc = *(struct tagRECT *)((char *)this + 808);
  rcDst = 0LL;
  v6 = (struct CBaseGeometryProxy **)((char *)this + 664);
  v7 = 0;
  if ( v5 >= 0 )
    v7 = v5;
  v8 = 0;
  if ( v4 >= 0 )
    v8 = v4;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        v2->left,
                        v3,
                        v8,
                        v7,
                        (struct CRectangleGeometryProxy **)this + 83);
  v10 = RectangleGeometry;
  if ( RectangleGeometry >= 0 )
  {
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
    BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
    RectangleGeometry = CDrawGeometryInstruction::Create(BrushNoRef, *v6, &v16);
    v10 = RectangleGeometry;
    if ( RectangleGeometry >= 0 )
    {
      RectangleGeometry = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v16);
      v10 = RectangleGeometry;
      if ( RectangleGeometry >= 0 )
      {
        v13 = RoundToNearestInt(*((float *)this + 177));
        v14 = RoundToNearestInt(*((float *)this + 176));
        OffsetRect(&rc, v14, v13);
        IntersectRect(&rcDst, v2, &rc);
        v17 = 0LL;
        RectangleGeometry = ResourceHelper::CreateRectangleGeometry(&rcDst, &v17);
        v10 = RectangleGeometry;
        if ( RectangleGeometry >= 0 )
        {
          RectangleGeometry = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v17);
          v10 = RectangleGeometry;
          if ( RectangleGeometry >= 0 )
          {
            v10 = 0;
            goto LABEL_17;
          }
          v11 = 1118LL;
        }
        else
        {
          v11 = 1115LL;
        }
      }
      else
      {
        v11 = 1109LL;
      }
    }
    else
    {
      v11 = 1107LL;
    }
  }
  else
  {
    v11 = 1101LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)RectangleGeometry);
LABEL_17:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
  return v10;
}
