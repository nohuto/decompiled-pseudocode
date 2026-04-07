/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021E7C
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180021A50 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x18003F3F4 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x18009A35C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  int v2; // eax
  CBaseObject *v3; // rcx
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  int v6; // eax
  unsigned int v7; // edi
  CBaseObject *v8; // rcx
  LONG v9; // r8d
  struct tagPOINT **v10; // rax
  struct tagPOINT *v11; // rcx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-50h]
  bool v14; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  CBaseObject *v16; // [rsp+80h] [rbp+10h] BYREF
  struct tagPOINT v17; // [rsp+88h] [rbp+18h] BYREF

  v16 = 0LL;
  v2 = *((_DWORD *)this + 10);
  if ( (v2 & 0x1000) != 0 || (v2 & 0x2000) != 0 || (v2 & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 927) )
    {
      v17.x = *((_DWORD *)this + 202);
      v9 = *((_DWORD *)this + 203);
      v17.y = v9;
      v10 = *(struct tagPOINT ***)(*((_QWORD *)this + 85) + 152LL);
      v11 = *v10;
      if ( (*v10)[8].x != v17.x || v11[8].y != v9 )
        CVisual::SetOffset(v11, &v17);
      goto LABEL_6;
    }
    if ( (v2 & 0x2000) != 0 )
      CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 85));
    if ( *(_DWORD *)(*((_QWORD *)this + 85) + 232LL) )
    {
LABEL_6:
      *((_DWORD *)this + 10) &= 0xFFFFCFDF;
      goto LABEL_7;
    }
    CRectangleGeometryProxy::SetRectangle(
      *((CRectangleGeometryProxy **)this + 83),
      (float)*((int *)this + 202),
      (float)*((int *)this + 203),
      (float)*((int *)this + 204),
      (float)*((int *)this + 205),
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      v14);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
    BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
    v6 = CDrawGeometryInstruction::Create(BrushNoRef, *((struct CBaseGeometryProxy **)this + 83), &v16);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v12 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 85), v16);
      v7 = v12;
      if ( v12 >= 0 )
        goto LABEL_6;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x587,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v12,
        v13);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x586,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v6,
        v13);
      v8 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        CBaseObject::Release(v8);
      }
    }
    return v7;
  }
LABEL_7:
  v3 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    CBaseObject::Release(v3);
  }
  return 0LL;
}
