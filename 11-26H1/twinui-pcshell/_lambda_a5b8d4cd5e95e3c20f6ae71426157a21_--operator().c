/*
 * XREFs of _lambda_a5b8d4cd5e95e3c20f6ae71426157a21_::operator() @ 0x1802F0578
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_0d876678aa78b7ed37cbe1753df898cc___1_long_::Invoke @ 0x1802F27A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F27A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180113974 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180113CD4 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1801B8CB0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E8BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801E8BD0.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e2360ed1712dd7b190dfa8ff8188f443___1_long___lambda_e2360ed1712dd7b190dfa8ff8188f443___ @ 0x1802EF2A8 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802EF2A8.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1802F2D7C (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x1802F3420 (-Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x1802F5760 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_a5b8d4cd5e95e3c20f6ae71426157a21_::operator()(CAppViewManager ***a1)
{
  CAppViewManager *v2; // rdi
  __int64 (__fastcall *v3)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CAppViewManager *v7; // rdi
  __int64 (__fastcall *v8)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  CAppViewManager *v11; // rdi
  __int64 (__fastcall *v12)(CAppViewManager *, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, struct Windows::Foundation::Collections::IPropertySet **); // rdi
  int v16; // eax
  __int64 v17; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  const unsigned __int16 *v21; // rdx
  __int64 *v22; // rax
  volatile int *v23; // rdx
  struct IAsyncCallback *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v30; // [rsp+40h] [rbp-49h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+48h] [rbp-41h] BYREF
  __int64 v32; // [rsp+50h] [rbp-39h] BYREF
  __int64 v33; // [rsp+58h] [rbp-31h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v34; // [rsp+60h] [rbp-29h] BYREF
  CAppViewManager *v35; // [rsp+68h] [rbp-21h] BYREF
  HWND v36; // [rsp+70h] [rbp-19h] BYREF
  __int64 v37; // [rsp+78h] [rbp-11h] BYREF
  __int64 v38; // [rsp+80h] [rbp-9h] BYREF
  __int64 v39; // [rsp+88h] [rbp-1h] BYREF
  __int64 v40; // [rsp+90h] [rbp+7h] BYREF
  HWND v41; // [rsp+98h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+17h] BYREF
  HSTRING v43; // [rsp+B8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v34 = 0LL;
  v36 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v2 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
  v4 = v3(v2, &v34);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = WindowFromViewWrapper(v34, &v36);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 508LL;
      goto LABEL_5;
    }
    v30 = 0LL;
    v41 = 0LL;
    v7 = **a1;
    v8 = *(__int64 (__fastcall **)(CAppViewManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v7 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    v9 = v8(v7, &v30);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 512LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_9:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
      goto LABEL_40;
    }
    v9 = WindowFromViewWrapper(v30, &v41);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 513LL;
      goto LABEL_8;
    }
    v38 = 0LL;
    v39 = 0LL;
    v9 = (*(__int64 (__fastcall **)(CAppViewManager *, __int64 *))(*(_QWORD *)**a1 + 64LL))(**a1, &v38);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 516LL;
      goto LABEL_8;
    }
    v9 = (*(__int64 (__fastcall **)(CAppViewManager *, char *))(*(_QWORD *)**a1 + 72LL))(**a1, (char *)&v38 + 4);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 517LL;
      goto LABEL_8;
    }
    v9 = (*(__int64 (__fastcall **)(CAppViewManager *, __int64 *))(*(_QWORD *)**a1 + 80LL))(**a1, &v39);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 518LL;
      goto LABEL_8;
    }
    v32 = 0LL;
    v11 = **a1;
    v12 = **(__int64 (__fastcall ***)(CAppViewManager *, GUID *, __int64 *))v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    v13 = v12(v11, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &v32);
    v5 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x209,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_20:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
      goto LABEL_9;
    }
    v31 = 0LL;
    v14 = v32;
    v15 = *(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v32 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    v16 = v15(v14, &v31);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = 524LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v16);
LABEL_24:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
      goto LABEL_20;
    }
    v18 = v31;
    if ( !v31 )
    {
      v43 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      v16 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
              (__int64)v43,
              (__int64 *)&v31);
      v5 = v16;
      if ( v16 < 0 )
      {
        v17 = 527LL;
        goto LABEL_23;
      }
      v18 = v31;
    }
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
      v18);
    v43 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v20 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
            v43,
            v19,
            0);
    v5 = v20;
    if ( v20 >= 0 )
    {
      MoveTryPositionPropertiesToPropertySet(v36, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v33);
      Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v33,
        v21);
      v35 = **a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v35);
      v22 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_e2360ed1712dd7b190dfa8ff8188f443___1_long___lambda_e2360ed1712dd7b190dfa8ff8188f443___(
              &v40,
              &v35);
      v24 = (struct IAsyncCallback *)*v22;
      v37 = *v22;
      *v22 = 0LL;
      v25 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
          v25,
          v23);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
      if ( v24 )
      {
        v28 = CAppViewManager::_ShowViewAsyncWorker(
                *a1[1],
                v36,
                v41,
                (const struct CAppViewManager::ShowViewAsyncOptions *)&v38,
                v31,
                v24,
                *a1[2]);
        v5 = v28;
        if ( v28 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
          v5 = 0;
          goto LABEL_40;
        }
        v26 = (unsigned int)v28;
        v27 = 553LL;
      }
      else
      {
        v5 = -2147024882;
        v26 = 2147942414LL;
        v27 = 551LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)v26);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x215,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v20);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    goto LABEL_24;
  }
  v6 = 507LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_40:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
  return v5;
}
