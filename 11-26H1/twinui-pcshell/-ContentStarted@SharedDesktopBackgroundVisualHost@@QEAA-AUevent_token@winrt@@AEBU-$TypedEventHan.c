/*
 * XREFs of ?ContentStarted@SharedDesktopBackgroundVisualHost@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@3@@Z @ 0x18060A380
 * Callers:
 *     ?add_ContentStarted@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18060F4C0 (-add_ContentStarted@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisua.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$get_weak@USharedDesktopBackgroundVisualHost@@@?$root_implements@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@34567@@impl@winrt@@IEAA?AU?$weak_ref@USharedDesktopBackgroundVisualHost@@@2@XZ @ 0x1805E1D28 (--$get_weak@USharedDesktopBackgroundVisualHost@@@-$root_implements@USharedDesktopBackgroundVisua.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0ac2a96e912be1478a5c63e50e2d80bb___ @ 0x180608AF8 (Windows--Internal--ComTaskPool--QueueTask__lambda_0ac2a96e912be1478a5c63e50e2d80bb___.c)
 *     _lambda_0ac2a96e912be1478a5c63e50e2d80bb_::_lambda_0ac2a96e912be1478a5c63e50e2d80bb_ @ 0x1806095D0 (_lambda_0ac2a96e912be1478a5c63e50e2d80bb_--_lambda_0ac2a96e912be1478a5c63e50e2d80bb_.c)
 *     _lambda_8b5f1623488306f7e465df1f94f78972_::__lambda_8b5f1623488306f7e465df1f94f78972_ @ 0x180609BF0 (_lambda_8b5f1623488306f7e465df1f94f78972_--__lambda_8b5f1623488306f7e465df1f94f78972_.c)
 *     ?add@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@2@@Z @ 0x18060F358 (-add@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Interna_ea_18060F358.c)
 */

__int64 __fastcall SharedDesktopBackgroundVisualHost::ContentStarted(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v13; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v14, (RTL_SRWLOCK *)(a1 + 216));
  v6 = *(_BYTE *)(a1 + 225);
  v13 = *(_BYTE *)(a1 + 224);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
  if ( v6 )
  {
    winrt::impl::root_implements<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::get_weak<SharedDesktopBackgroundVisualHost>(
      (volatile signed __int64 *)a1,
      &v14);
    v7 = lambda_0ac2a96e912be1478a5c63e50e2d80bb_::_lambda_0ac2a96e912be1478a5c63e50e2d80bb_(
           (__int64)v11,
           a3,
           &v13,
           (__int64 *)&v14);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_0ac2a96e912be1478a5c63e50e2d80bb___(v8, v7);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFB,
        (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
        (const char *)(unsigned int)v9);
    lambda_8b5f1623488306f7e465df1f94f78972_::__lambda_8b5f1623488306f7e465df1f94f78972_(v11);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v14);
  }
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>::add(
    a1 + 56,
    a2,
    a3);
  return a2;
}
