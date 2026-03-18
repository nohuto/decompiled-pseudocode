/*
 * XREFs of ??1CSubDrawingContext@@QEAA@XZ @ 0x1800AD644
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD448 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CCpuClippingData@@QEAA@XZ @ 0x1800ADBD0 (--1CCpuClippingData@@QEAA@XZ.c)
 *     ?Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ @ 0x1800AE1E0 (-Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CSubDrawingContext::~CSubDrawingContext(CSubDrawingContext *this)
{
  __int64 *v1; // rbx
  CSubDrawingContext *v2; // r8
  struct CD2DTarget *v3; // rax
  __int64 v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 8);
  v2 = this;
  if ( *((_QWORD *)this + 1) )
  {
    v3 = CD2DTargetStack::Top((CD2DTargetStack *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 336LL));
    if ( !v3 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22D,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
        (const char *)0x88982F04LL);
      ModuleFailFastForHRESULT(-2003292412, retaddr);
    }
    *(_QWORD *)v3 = v4;
  }
  CCpuClippingData::~CCpuClippingData((CSubDrawingContext *)((char *)v2 + 16));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v1);
}
