/*
 * XREFs of ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180251D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180009DF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180117530 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180251AD8 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_09375df4986ae0e45577a23731ed12dd_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@V_lambda_09375df4986ae0e45577a23731ed12dd_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_09375df4986ae0e45577a23731ed12dd_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_09375df4986ae0e45577a23731ed12dd_@@@Z @ 0x1802DBF04 (--$Make@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048D374 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 *v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64, PVOID, _QWORD, char *); // rdi
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
  __int64 v28; // [rsp+30h] [rbp-50h] BYREF
  const char *v29; // [rsp+38h] [rbp-48h] BYREF
  int v30[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v31)(AccessibilityExperienceManager *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *); // [rsp+48h] [rbp-38h]
  int v32; // [rsp+50h] [rbp-30h]
  int v33; // [rsp+54h] [rbp-2Ch]
  HSTRING_HEADER v34; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v4 = GazeUITraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v29 = "AccessibilityExperienceManager::SubscribeToServices";
    *(_QWORD *)v30 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)v4,
      (__int64)&unk_1808110E4,
      v5,
      v6,
      (__int64)v30,
      &v29);
  }
  *((_BYTE *)this + 416) = 1;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 27, (__int64)a2);
  v7 = *((_QWORD *)this + 27);
  v8 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v7 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
  v9 = v8(v7, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, (char *)this + 208);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *(_QWORD *)v30 = (char *)this - 48;
    v31 = AccessibilityExperienceManager::_OnViewEvent;
    v32 = 0;
    v33 = (unsigned __int64)AccessibilityExperienceManager::_OnViewEvent >> 32;
    v11 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_09375df4986ae0e45577a23731ed12dd_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_09375df4986ae0e45577a23731ed12dd_>(
                       &v29,
                       v30);
    v13 = *v11;
    *(_QWORD *)v30 = *v11;
    *v11 = 0LL;
    v14 = (volatile signed __int32 *)v29;
    if ( v29 )
    {
      v29 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v14);
    }
    v15 = *((_QWORD *)this + 26);
    v16 = *(__int64 (__fastcall **)(__int64, __int64, PVOID, _QWORD, char *))(*(_QWORD *)v15 + 48LL);
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)&qword_1808DCE08, v12);
    v18 = v16(v15, v13, v17[1].Reserved.Reserved1, 0LL, (char *)this + 192);
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
            v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 44) + 40LL))(
                    *((_QWORD *)this + 44),
                    ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 48) >> 64),
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
                goto LABEL_22;
              }
              v23 = 170LL;
            }
            else
            {
              v23 = 167LL;
            }
          }
          else
          {
            v23 = 165LL;
          }
        }
        else
        {
          v23 = 164LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
LABEL_22:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v30);
        return v10;
      }
      v19 = 158LL;
    }
    else
    {
      v19 = 156LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x95,
    (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
