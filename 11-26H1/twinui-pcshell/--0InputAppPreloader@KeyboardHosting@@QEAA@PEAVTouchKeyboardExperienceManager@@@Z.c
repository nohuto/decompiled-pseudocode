/*
 * XREFs of ??0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z @ 0x1802A6CA4
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$atomic@W4PreloadPreference@KeyboardHosting@@@std@@QEAA@W4PreloadPreference@KeyboardHosting@@@Z @ 0x180136A84 (--0-$atomic@W4PreloadPreference@KeyboardHosting@@@std@@QEAA@W4PreloadPreference@KeyboardHosting@.c)
 *     ??$GetActivationFactory@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801FAE30 (--$GetActivationFactory@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802A6E34 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@Foundation@Windows@@V_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@Foundation@Windows@@@01@$$QEAV_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@@Z @ 0x1802AEFC4 (--$Callback@U-$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Wind.c)
 *     ??0_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@QEAA@AEBQEAVInputAppPreloader@KeyboardHosting@@AEBQ812@EAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@45678@@Z@Z @ 0x1802AF034 (--0_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_@@QEAA@AEBQEAVInputAppPreloader@KeyboardHosting@@AEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
KeyboardHosting::InputAppPreloader *__fastcall KeyboardHosting::InputAppPreloader::InputAppPreloader(
        KeyboardHosting::InputAppPreloader *this,
        struct TouchKeyboardExperienceManager *a2)
{
  __int64 *v3; // rsi
  const char *v4; // r9
  __int64 v5; // r8
  int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, _QWORD, char *); // rdi
  __int64 v14; // rax
  __int64 (__fastcall *v15)(KeyboardHosting::InputAppPreloader *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *); // rbx
  int v16; // eax
  int v18[14]; // [rsp+20h] [rbp-38h] BYREF
  KeyboardHosting *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 (__fastcall *v21)(KeyboardHosting::InputAppPreloader *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *); // [rsp+70h] [rbp+18h] BYREF
  KeyboardHosting::InputAppPreloader *v22; // [rsp+78h] [rbp+20h] BYREF

  *(_QWORD *)this = a2;
  v3 = (__int64 *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  std::atomic<enum KeyboardHosting::PreloadPreference>::atomic<enum KeyboardHosting::PreloadPreference>((__int64)this + 24);
  std::atomic<enum KeyboardHosting::PreloadPreference>::atomic<enum KeyboardHosting::PreloadPreference>((__int64)this + 28);
  std::atomic<enum KeyboardHosting::PreloadPreference>::atomic<enum KeyboardHosting::PreloadPreference>((__int64)this + 32);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x71,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      v4);
  if ( KeyboardHosting::IsRunningOnServerSku(retaddr) )
  {
    _InterlockedExchange((volatile __int32 *)this + 8, 1);
  }
  else
  {
    wil::GetActivationFactory<Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerStatics>(&v20, v6, v7);
    v8 = v20;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 48LL);
    v10 = *v3;
    *v3 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v9(v8, v3);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v11,
        v18[0]);
    v12 = *v3;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v12 + 64LL);
    v21 = KeyboardHosting::InputAppPreloader::OnEnabledInputProfilesChanged;
    v22 = this;
    v14 = _lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_::_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_(v18, &v22, &v21);
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>,_lambda_6b53cd49662f01e6d4a91b8b2ad2b3d7_>(
      &v21,
      v14);
    v15 = v21;
    v16 = v13(v12, v21, (char *)this + 16);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x82,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v16,
        v18[0]);
    if ( v15 )
      (*(void (__fastcall **)(__int64 (__fastcall *)(KeyboardHosting::InputAppPreloader *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *)))(*(_QWORD *)v15 + 16LL))(v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  }
  return this;
}
