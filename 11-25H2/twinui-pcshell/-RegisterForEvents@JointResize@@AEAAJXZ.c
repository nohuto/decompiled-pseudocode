/*
 * XREFs of ?RegisterForEvents@JointResize@@AEAAJXZ @ 0x180516F38
 * Callers:
 *     ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802229A0 (-SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x180516CA0 (-OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UHitTestPartNotifyEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E8D98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_1801E8D98.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall JointResize::RegisterForEvents(JointResize *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _DWORD *v5; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // edi
  _DWORD *v10; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // rsi
  int v13; // eax
  unsigned int v14; // esi
  void *v15; // rsi
  _OWORD *v16; // rax
  _OWORD *v17; // r15
  int v18; // eax
  unsigned int v19; // r14d
  __int128 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-48h]
  __int128 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-30h]
  __int128 v24; // [rsp+50h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  void *v27; // [rsp+B0h] [rbp+38h] BYREF
  void *v28; // [rsp+B8h] [rbp+40h] BYREF
  void *v29; // [rsp+C0h] [rbp+48h] BYREF
  _DWORD *v30; // [rsp+C8h] [rbp+50h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 19) + 72LL))(
         *((_QWORD *)this + 19),
         ((unsigned __int64)this + 88) & -(__int64)(this != 0LL));
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_QWORD *)&v20 = this;
    *((_QWORD *)&v20 + 1) = JointResize::OnArrangedWindowResizeStarted;
    LODWORD(v21) = 0;
    v5 = 0LL;
    v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    v27 = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
      v6[3] = 1;
      *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowResizeStartedEventArgs *>>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_OWORD *)v7 + 1) = v20;
      HIDWORD(v21) = (unsigned __int64)JointResize::OnArrangedWindowResizeStarted >> 32;
      *((_QWORD *)v7 + 4) = v21;
      *(_QWORD *)v7 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowResizeStartedEventArgs *,Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *>>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowResizeStartedEventArgs *>,_lambda_5d89a6149937432e38c6bb167a19c241_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs *>::`vftable';
      v5 = v7;
      v27 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v27);
    v30 = v5;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(**((_QWORD **)this + 20) + 64LL))(
           *((_QWORD *)this + 20),
           v5,
           (char *)this + 472);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *(_QWORD *)&v22 = this;
      *((_QWORD *)&v22 + 1) = JointResize::OnArrangedWindowJointResizeCompleted;
      LODWORD(v23) = 0;
      v10 = 0LL;
      v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      v28 = v11;
      if ( v11 )
      {
        *(_QWORD *)v11 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
        v11[3] = 1;
        *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *((_OWORD *)v12 + 1) = v22;
        HIDWORD(v23) = (unsigned __int64)JointResize::OnArrangedWindowResizeStarted >> 32;
        *((_QWORD *)v12 + 4) = v23;
        *(_QWORD *)v12 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>,_lambda_0329606a7f023ea7effaf9e0739dfef7_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>::`vftable';
        v10 = v12;
        v28 = 0LL;
      }
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v28);
      v13 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(**((_QWORD **)this + 20) + 80LL))(
              *((_QWORD *)this + 20),
              v10,
              (char *)this + 480);
      v14 = v13;
      if ( v13 >= 0 )
      {
        *(_QWORD *)&v24 = this;
        *((_QWORD *)&v24 + 1) = JointResize::OnHitTestPartNotifyEvent;
        LODWORD(v25) = 0;
        v15 = 0LL;
        v16 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
        v17 = v16;
        v29 = v16;
        if ( v16 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>>((__int64)v16);
          v17[1] = v24;
          HIDWORD(v25) = (unsigned __int64)JointResize::OnArrangedWindowResizeStarted >> 32;
          *((_QWORD *)v17 + 4) = v25;
          *(_QWORD *)v17 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>,_lambda_6b37e6f6ffb8617f7a72125e0299ac07_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>::`vftable';
          v15 = v17;
          v29 = 0LL;
        }
        Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v29);
        v29 = v15;
        v18 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(**((_QWORD **)this + 20) + 96LL))(
                *((_QWORD *)this + 20),
                v15,
                (char *)this + 488);
        v19 = v18;
        if ( v18 >= 0 )
        {
          if ( v15 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
          if ( v10 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
          if ( v5 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x391,
            (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v18);
          if ( v15 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
          if ( v10 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
          if ( v5 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
          return v19;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38D,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v13);
        if ( v10 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
        if ( v5 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
        return v14;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x389,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v8);
      if ( v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x385,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
