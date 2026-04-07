/*
 * XREFs of ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x1800DD800
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18002748C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DD3F4 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DDAF8 (-UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::SetBitmap(
        CBaseObject **this,
        struct tagSIZE *a2)
{
  struct CImage **v2; // rsi
  struct tagSIZE v5; // rbx
  CVisual *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct CVisual *v9; // rdx
  struct tagSIZE v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 9;
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(this + 9);
  CImage::Create(v2);
  CImage::SetBitmapSource(*v2, (struct CBitmapSource *)a2);
  v5 = a2[16];
  v6 = *v2;
  v10 = v5;
  CVisual::SetSize(v6, &v10, v7, v8);
  if ( v5.cx < 64 )
    winrt::Udwm::Transitions::implementation::UserResizeVisual::AddIconPlate((winrt::Udwm::Transitions::implementation::UserResizeVisual *)this);
  winrt::Udwm::Transitions::implementation::UserResizeVisual::UpdateIconPosition((winrt::Udwm::Transitions::implementation::UserResizeVisual *)this);
  if ( this[7] )
    v9 = this[6];
  else
    v9 = *v2;
  CContainerVisual::AddChild(*((CContainerVisual **)this[5] + 25), v9);
}
