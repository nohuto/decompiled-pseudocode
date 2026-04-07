/*
 * XREFs of ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800CEFFC
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18009670C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x18006AD8C (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18006ADBC (-CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CThumbnailAnimatedVisual::AddSolidBrushInstruction(
        CThumbnailAnimatedVisual *this,
        struct CRectangleGeometryProxy *a2,
        int a3,
        D3DVALUE a4)
{
  CCompositor *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  CSolidColorLegacyMilBrushProxy *v12; // [rsp+20h] [rbp-40h] BYREF
  struct CDrawGeometryInstruction *v13; // [rsp+28h] [rbp-38h] BYREF
  struct _D3DCOLORVALUE v14; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v13 = 0LL;
  v12 = 0LL;
  v7 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(&v12);
  v8 = CCompositor::CreateSolidColorLegacyMilBrushProxy(v7, &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v14.r = flt_1800F9280[(unsigned __int8)a3] / 255.0;
    v14.g = flt_1800F9280[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
    v14.b = flt_1800F9280[BYTE2(a3)] / 255.0;
    v14.a = a4;
    v8 = CSolidColorLegacyMilBrushProxy::Update(v12, 1.0, &v14);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v13 = 0LL;
      v8 = CDrawGeometryInstruction::Create(v12, a2, &v13);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v8 = CRenderDataVisual::AddInstruction(this, v13);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v9 = 0;
          goto LABEL_11;
        }
        v10 = 247LL;
      }
      else
      {
        v10 = 246LL;
      }
    }
    else
    {
      v10 = 244LL;
    }
  }
  else
  {
    v10 = 236LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\thumbnailtransition.cpp",
    (const char *)(unsigned int)v8);
LABEL_11:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v12);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
  return v9;
}
