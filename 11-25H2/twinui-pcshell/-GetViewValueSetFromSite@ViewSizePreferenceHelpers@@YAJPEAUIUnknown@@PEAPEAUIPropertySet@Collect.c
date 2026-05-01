/*
 * XREFs of ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010B3F0
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18010B0A4 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18010B75C (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18010C45C (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x1802B5734 (-TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VI.c)
 *     ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z @ 0x1802BE5CC (-GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA-AW4APPLICATION_VIEW_SIZE_PRE.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1802F884C (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v14; // rax
  int v15; // eax
  unsigned int TargetViewSizePreferenceOrDefault; // eax
  __int64 (__fastcall *v18)(struct IUnknownVtbl *, GUID *, __int64 *); // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  LPVOID v22; // rcx
  int ppv; // [rsp+20h] [rbp-69h]
  struct IUnknownVtbl *v24; // [rsp+30h] [rbp-59h] BYREF
  LPVOID v25; // [rsp+38h] [rbp-51h] BYREF
  struct IUnknown v26; // [rsp+40h] [rbp-49h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-41h] BYREF
  __int64 v28; // [rsp+50h] [rbp-39h] BYREF
  void *v29; // [rsp+58h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h] BYREF
  void *v31; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v32[32]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v33[32]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  a2->lpVtbl = 0LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  v5 = CoCreateInstance(
         &GUID_f1c46d71_b791_4110_8d5c_7108f22c1010,
         0LL,
         1u,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v25);
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v5);
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    return v7;
  }
  v8 = (struct IUnknownVtbl *)v25;
  v24 = (struct IUnknownVtbl *)v25;
  v25 = 0LL;
  LODWORD(v26.lpVtbl) = 0;
  v30 = 0LL;
  if ( ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
         punk,
         &v26,
         (enum APPLICATION_VIEW_SIZE_PREFERENCE *)&v30,
         v6) )
  {
    v9 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v24, v30, LODWORD(v26.lpVtbl));
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
    v8 = v24;
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
      v29 = 0LL;
      v11 = ppvOut;
      v12 = *(int (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 24LL);
      v13 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v29);
      if ( v12(v11, v13) >= 0 )
      {
        v31 = v29;
        Microsoft::WRL::Wrappers::HStringReference::HStringReference(v32, &v31);
        v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v33, &off_1807359C0);
        v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
                *(HSTRING *)(v14 + 24));
        v7 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF2,
            (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
            (const char *)(unsigned int)v15);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v29);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
LABEL_18:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
          goto LABEL_19;
        }
        v8 = v24;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v29);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  }
  TargetViewSizePreferenceOrDefault = ViewSizePreferenceHelpers::GetTargetViewSizePreferenceOrDefault(punk);
  if ( TargetViewSizePreferenceOrDefault )
  {
    v9 = ViewSizePreferenceHelpers::SetTargetViewSizePreference(&v24, TargetViewSizePreferenceOrDefault);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 250LL;
      goto LABEL_17;
    }
    v8 = v24;
  }
  v28 = 0LL;
  v18 = *(__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v8->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  v19 = v18(v8, &GUID_deab70f3_3a9c_40e6_a680_2ee376c5eaed, &v28);
  if ( v19 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x101,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v19,
      ppv);
  v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 48LL))(v28, 1LL);
  if ( v20 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x102,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v20,
      ppv);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
  a2->lpVtbl = v8;
  v21 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
