/*
 * XREFs of ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180258B60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801BFFF8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1801D3DB0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180258A78 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18047C8B4 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@wil@@QEAA_NXZ @ 0x18047E108 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibilityExperienceManager::SubscribeToServices(
        AccessibilityExperienceManager *this,
        struct IServiceProvider *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, GUID *, GUID *, char *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  char *v11; // rbx
  char *v12; // rax
  char *v13; // rdi
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, char *, PVOID, _QWORD, char *); // rdi
  unsigned int v16; // r8d
  HSTRING_HEADER *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, _QWORD, SID *, GUID *, char *); // rdi
  _QWORD *v26; // rsi
  __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  int v29[2]; // [rsp+38h] [rbp-38h] BYREF
  int v30; // [rsp+44h] [rbp-2Ch]
  HSTRING_HEADER v31; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2508>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2508>::GetImpl'::`2'::impl) )
  {
    v4 = GazeUITraceLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      *(_QWORD *)v29 = "AccessibilityExperienceManager::SubscribeToServices";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)v4,
        byte_1807D1B49,
        v5,
        v6,
        (const wchar_t **)v29);
    }
    *((_BYTE *)this + 416) = 1;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 27, (__int64)a2);
  v7 = *((_QWORD *)this + 27);
  v8 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v7 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
  v9 = v8(v7, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, (char *)this + 208);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v31.Reserved.Reserved1 = (char *)this - 48;
    *(_QWORD *)&v31.Reserved.Reserved2[8] = AccessibilityExperienceManager::_OnViewEvent;
    *(_DWORD *)&v31.Reserved.Reserved2[16] = 0;
    *(_DWORD *)&v31.Reserved.Reserved2[20] = v30;
    v11 = 0LL;
    v12 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    *(_QWORD *)v29 = v12;
    if ( v12 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v12);
      *(HSTRING_HEADER *)(v13 + 16) = v31;
      *(_QWORD *)v13 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_25d31112a6ede4e9e98db34fc3b6b635_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::`vftable';
      v11 = v13;
      *(_QWORD *)v29 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)v29);
    *(_QWORD *)v29 = v11;
    v14 = *((_QWORD *)this + 26);
    v15 = *(__int64 (__fastcall **)(__int64, char *, PVOID, _QWORD, char *))(*(_QWORD *)v14 + 48LL);
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&qword_18089C768, v16);
    v18 = v15(v14, v11, v17[1].Reserved.Reserved1, 0LL, (char *)this + 192);
    v10 = v18;
    if ( v18 >= 0 )
    {
      QueryService = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 44);
      v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
              a2,
              &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
              &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
              (char *)this + 352);
      v10 = v18;
      if ( v18 >= 0 )
      {
        v28 = 0LL;
        v21 = a2->lpVtbl->QueryService;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
        v22 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v21)(
                a2,
                &SID_IImmersiveMonitorService,
                &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                &v28);
        v10 = v22;
        if ( v22 >= 0 )
        {
          v24 = v28;
          v25 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v28 + 72LL);
          v26 = (_QWORD *)((char *)this + 232);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 29);
          v22 = v25(v24, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c, (char *)this + 232);
          v10 = v22;
          if ( v22 >= 0 )
          {
            v22 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 44) + 40LL))(
                    *((_QWORD *)this + 44),
                    ((unsigned __int64)this + 72) & -(__int64)(this != (AccessibilityExperienceManager *)48),
                    (char *)this + 200);
            v10 = v22;
            if ( v22 >= 0 )
            {
              v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v26 + 40LL))(
                      *v26,
                      10LL,
                      ((unsigned __int64)this + 80) & -(__int64)(this != (AccessibilityExperienceManager *)48),
                      (char *)this + 204);
              v10 = v22;
              if ( v22 >= 0 )
              {
                (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v26 + 72LL))(*v26, (char *)this + 400);
                *((_QWORD *)this + 48) = 0LL;
                *((_QWORD *)this + 49) = 0LL;
                AccessibilityExperienceManager::RelaunchWithDelay((AccessibilityExperienceManager *)((char *)this - 48));
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
                v10 = 0;
                goto LABEL_24;
              }
              v23 = 173LL;
            }
            else
            {
              v23 = 170LL;
            }
          }
          else
          {
            v23 = 168LL;
          }
        }
        else
        {
          v23 = 167LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
LABEL_24:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
        return v10;
      }
      v19 = 161LL;
    }
    else
    {
      v19 = 159LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x98,
    (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
