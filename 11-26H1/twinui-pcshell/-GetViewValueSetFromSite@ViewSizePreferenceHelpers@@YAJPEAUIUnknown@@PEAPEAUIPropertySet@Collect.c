/*
 * XREFs of ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011285C
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x180112534 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180076364 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180112BE8 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180117530 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x1802AC980 (-TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VI.c)
 *     ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z @ 0x1802B5808 (-GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA-AW4APPLICATION_VIEW_SIZE_PRE.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1802F3900 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ViewSizePreferenceHelpers::GetViewValueSetFromSite(
        IUnknown *punk,
        struct IUnknown *a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  HRESULT v5; // eax
  HWND *v6; // r9
  unsigned int v7; // ebx
  struct IUnknownVtbl *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  void *v11; // rbx
  int (__fastcall *v12)(void *, __int64); // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // eax
  unsigned int TargetViewSizePreferenceOrDefault; // eax
  __int64 (__fastcall *v20)(struct IUnknownVtbl *, GUID *, __int64 *); // rbx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  LPVOID v24; // rcx
  int ppv; // [rsp+20h] [rbp-69h]
  struct IUnknownVtbl *v26; // [rsp+30h] [rbp-59h] BYREF
  LPVOID v27; // [rsp+38h] [rbp-51h] BYREF
  struct IUnknown v28; // [rsp+40h] [rbp-49h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-41h] BYREF
  __int64 v30; // [rsp+50h] [rbp-39h] BYREF
  void *v31; // [rsp+58h] [rbp-31h] BYREF
  __int64 v32; // [rsp+60h] [rbp-29h] BYREF
  void *v33; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v34[32]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v35[32]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  a2->lpVtbl = 0LL;
  v27 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  v5 = CoCreateInstance(
         &GUID_f1c46d71_b791_4110_8d5c_7108f22c1010,
         0LL,
         1u,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v27);
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v5);
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    return v7;
  }
  v8 = (struct IUnknownVtbl *)v27;
  v26 = (struct IUnknownVtbl *)v27;
  v27 = 0LL;
  LODWORD(v28.lpVtbl) = 0;
  v32 = 0LL;
  if ( ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
         punk,
         &v28,
         (enum APPLICATION_VIEW_SIZE_PREFERENCE *)&v32,
         v6) )
  {
    v9 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v26, v32, LODWORD(v28.lpVtbl));
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 230LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v9);
      goto LABEL_18;
    }
    v8 = v26;
  }
  else
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           punk,
           (const GUID *const)&SID_LaunchSourceAppUserModelId,
           &GUID_989191ac_28ff_4cf0_9584_e0d078bc2396,
           &ppvOut) >= 0 )
    {
      v31 = 0LL;
      v11 = ppvOut;
      v12 = *(int (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 24LL);
      v13 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v31);
      if ( v12(v11, v13) >= 0 )
      {
        v33 = v31;
        v14 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v34, &v33) + 24);
        v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180760420);
        v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                *(HSTRING *)(v15 + 24),
                v16,
                v14);
        v7 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF2,
            (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
            (const char *)(unsigned int)v17);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v31);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
LABEL_18:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
          goto LABEL_19;
        }
        v8 = v26;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v31);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  }
  TargetViewSizePreferenceOrDefault = ViewSizePreferenceHelpers::GetTargetViewSizePreferenceOrDefault(punk);
  if ( TargetViewSizePreferenceOrDefault )
  {
    v9 = ViewSizePreferenceHelpers::SetTargetViewSizePreference(&v26, TargetViewSizePreferenceOrDefault);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 250LL;
      goto LABEL_17;
    }
    v8 = v26;
  }
  v30 = 0LL;
  v20 = *(__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v8->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  v21 = v20(v8, &GUID_deab70f3_3a9c_40e6_a680_2ee376c5eaed, &v30);
  if ( v21 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x101,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v21,
      ppv);
  v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 48LL))(v30, 1LL);
  if ( v22 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x102,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v22,
      ppv);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
  a2->lpVtbl = v8;
  v23 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return 0LL;
}
