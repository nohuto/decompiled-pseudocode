/*
 * XREFs of ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022258
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021C68 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180016F24 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017004 (-RoundToNearestInt@@YAHM@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18003E74C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F27C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DWithClip(CAnimatedTransitionVisual *this)
{
  int v2; // esi
  int v3; // r14d
  int v4; // eax
  unsigned int v5; // ebx
  CBaseObject *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  int v10; // [rsp+20h] [rbp-60h]
  CBaseObject *v11; // [rsp+30h] [rbp-50h] BYREF
  struct CRectangleGeometryProxy *v12; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v11 = 0LL;
  v12 = 0LL;
  rcSrc2 = 0LL;
  rcDst = 0LL;
  rc.left = 0;
  rc.top = 0;
  rc.right = *((_DWORD *)this + 226);
  rc.bottom = *((_DWORD *)this + 227);
  v2 = RoundToNearestInt((float)((float)*((int *)this + 202) + *((float *)this + 176)) - (float)*((int *)this + 194));
  v3 = RoundToNearestInt((float)((float)*((int *)this + 203) + *((float *)this + 177)) - (float)*((int *)this + 195));
  OffsetRect(&rc, v2, v3);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v11);
  v4 = CDrawTileImageInstruction::Create(
         *((struct CBaseImageProxy **)this + 67),
         &rc,
         (const struct tagPOINT *)this + 112,
         *((float *)this + 174),
         &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      rcSrc2 = *(RECT *)((char *)this + 776);
      OffsetRect(&rcSrc2, v2, v3);
      IntersectRect(&rcDst, (const RECT *)((char *)this + 792), &rcSrc2);
      v12 = 0LL;
      v7 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v12);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v7 = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v12);
        v5 = v7;
        if ( v7 >= 0 )
        {
          v5 = 0;
          goto LABEL_12;
        }
        v8 = 1170LL;
      }
      else
      {
        v8 = 1167LL;
      }
    }
    else
    {
      v8 = 1157LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v7,
      v10);
LABEL_12:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v12);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v11);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x484,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v4,
    v10);
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    CBaseObject::Release(v6);
  }
  return v5;
}
