/*
 * XREFs of ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x1800C41E0
 * Callers:
 *     ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180056138 (--$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1800C4104 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C43A0 (--0-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Wi.c)
 *     ??0?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C43E0 (--0-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par_ea_1800C43E0.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@$$T@Z @ 0x1800C44A0 (--0resume_apartment_context@impl@winrt@@QEAA@$$T@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1802B88AC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIJumpViewExperienceManager@Experience.c)
 */

CJumpViewExperienceManager *__fastcall CJumpViewExperienceManager::CJumpViewExperienceManager(
        CJumpViewExperienceManager *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>();
  *(_QWORD *)this = &CJumpViewExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 2) = &CJumpViewExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 3) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 4) = &CJumpViewExperienceManager::`vftable'{for `IActiveZBandNotificationForMonitor'};
  *((_QWORD *)this + 5) = &CJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification>'};
  *((_QWORD *)this + 8) = &CJumpViewExperienceManager::`vftable';
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((char *)this + 72);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((char *)this + 96);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((char *)this + 120);
  *((_QWORD *)this + 18) = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience(
    (__int64)this + 152,
    ((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
    1);
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_QWORD *)this + 53) = 0LL;
  *((_BYTE *)this + 432) = 0;
  *((_DWORD *)this + 109) = 56;
  *(GUID *)((char *)this + 440) = GUID_NULL;
  *((_QWORD *)this + 57) = 0LL;
  *((_BYTE *)this + 464) = 0;
  *((_DWORD *)this + 117) = 57;
  *(GUID *)((char *)this + 472) = GUID_NULL;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 124) = 3;
  *((_DWORD *)this + 125) = 3;
  *((_DWORD *)this + 126) = 6;
  *((_QWORD *)this + 64) = 0LL;
  *((_WORD *)this + 260) = 0;
  *(_OWORD *)((char *)this + 524) = 0LL;
  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((CJumpViewExperienceManager *)((char *)this + 544));
  *((_QWORD *)this + 68) = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((char *)this + 904);
  return this;
}
