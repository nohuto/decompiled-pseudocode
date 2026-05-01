/*
 * XREFs of ??1ViewHostItemPropertyChangedArgs@@UEAA@XZ @ 0x180401DF4
 * Callers:
 *     ??_GViewHostItemPropertyChangedArgs@@UEAAPEAXI@Z @ 0x1804021D0 (--_GViewHostItemPropertyChangedArgs@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ViewHostItemPropertyChangedArgs::~ViewHostItemPropertyChangedArgs(HSTRING *this)
{
  WindowsDeleteString(this[12]);
  this[12] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>((ViewEventArgsBase *)this);
}
