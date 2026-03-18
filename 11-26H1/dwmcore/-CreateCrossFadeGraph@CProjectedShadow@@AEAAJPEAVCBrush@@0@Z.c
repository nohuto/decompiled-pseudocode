/*
 * XREFs of ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x1802627F8
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180198140 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180130610 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18028847C (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 */

__int64 __fastcall CProjectedShadow::CreateCrossFadeGraph(CProjectedShadow *this, struct CBrush *a2, struct CBrush *a3)
{
  struct Windows::UI::Composition::IEffectInstance **v3; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct Windows::UI::Composition::IEffectInstance **)((char *)this + 376);
  wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((_QWORD *)this + 47);
  wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((_QWORD *)this + 46);
  v7 = CProjectedShadowApproxBlurGraphBuilder::Build(a2, a3, (struct CBrushRenderingGraph **)this + 46, v3);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2EA,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\projectedshadow.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
