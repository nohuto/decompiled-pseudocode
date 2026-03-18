/*
 * XREFs of ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18027EAEC
 * Callers:
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18028BC64 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E147C (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18027EAA4 (--4-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x18027F23C (-IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18027F27C (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z @ 0x1802B3564 (-Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRadialGradientBrush::CreateRadialGradientEffect(
        CRadialGradientBrush *this,
        struct CRadialGradientEffect **a2)
{
  __int64 *v2; // rdi
  bool v3; // zf
  __int64 *v6; // rcx
  bool IsCenteredGradient; // al
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CRadialGradientEffect *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 272);
  v13 = 0LL;
  v3 = *((_QWORD *)this + 34) == 0LL;
  v6 = (__int64 *)&v13;
  if ( !v3 )
  {
    v10 = v2;
    goto LABEL_6;
  }
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset(&v13);
  IsCenteredGradient = CRadialGradientBrush::IsCenteredGradient(this);
  v8 = CRadialGradientEffect::Create(IsCenteredGradient, &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (__int64 *)&v13;
    v6 = v2;
LABEL_6:
    wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::operator=(v6, v10);
    v9 = 0;
    *a2 = v13;
    v13 = 0LL;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEA,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\radialgradientbrush.cpp",
    (const char *)(unsigned int)v8);
LABEL_7:
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>(&v13);
  return v9;
}
