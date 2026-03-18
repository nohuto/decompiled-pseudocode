/*
 * XREFs of ?Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801AA424
 * Callers:
 *     ?RenderAndPresent@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801AA3C0 (-RenderAndPresent@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(COffScreenRenderTarget *this, struct CDrawingContext *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 240LL))(this);
  if ( !(*(unsigned __int8 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 264LL))(this) )
  {
    v4 = *((_QWORD *)this + 14);
    if ( v4 )
      (*(void (__fastcall **)(COffScreenRenderTarget *, __int64, _QWORD))(*(_QWORD *)this + 288LL))(this, v4 + 112, 0LL);
    return 0LL;
  }
  v5 = *(_QWORD *)this;
  v10 = 0;
  v6 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, struct CDrawingContext *, char *))(v5 + 296))(
         this,
         a2,
         &v10);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\offscreenrendertarget.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
