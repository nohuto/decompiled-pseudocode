/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800F2B64
 * Callers:
 *     ??_GViewEventArgsForNavigationRequest@@UEAAPEAXI@Z @ 0x1800F2BA0 (--_GViewEventArgsForNavigationRequest@@UEAAPEAXI@Z.c)
 *     ??_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z @ 0x1800F2BE0 (--_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z.c)
 *     ??1ViewEventArgsForPropertyChanged@@UEAA@XZ @ 0x1800F2C5C (--1ViewEventArgsForPropertyChanged@@UEAA@XZ.c)
 *     ??1?$RuntimeClass@VViewEventArgsBase@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1802C722C (--1-$RuntimeClass@VViewEventArgsBase@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shel.c)
 *     ??1ViewHostItemPropertyChangedArgs@@UEAA@XZ @ 0x180401DF4 (--1ViewHostItemPropertyChangedArgs@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804020D0 (--_G-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Interna.c)
 *     ??1ViewEventArgsForSwitch@@UEAA@XZ @ 0x180413220 (--1ViewEventArgsForSwitch@@UEAA@XZ.c)
 *     ??1ViewEventArgsForWindowingSettings@@UEAA@XZ @ 0x180413258 (--1ViewEventArgsForWindowingSettings@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F29E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>(
        ViewEventArgsBase *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 11);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)(2 * v2));
  ViewEventArgsBase::~ViewEventArgsBase(this);
}
