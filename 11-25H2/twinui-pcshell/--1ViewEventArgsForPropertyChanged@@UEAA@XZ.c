/*
 * XREFs of ??1ViewEventArgsForPropertyChanged@@UEAA@XZ @ 0x1801EA75C
 * Callers:
 *     ??_GViewEventArgsForPropertyChanged@@UEAAPEAXI@Z @ 0x1801EA720 (--_GViewEventArgsForPropertyChanged@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall ViewEventArgsForPropertyChanged::~ViewEventArgsForPropertyChanged(HSTRING *this)
{
  Windows::Internal::String::~String(this + 12);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>((ViewEventArgsBase *)this);
}
