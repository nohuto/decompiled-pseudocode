/*
 * XREFs of ?SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180077D10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180051C40 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x180078708 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@E.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x1801928F0 (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAV.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PeoplePaneViewManager::SubscribeToServices(PeoplePaneViewManager *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v5; // rdi
  __int64 *v6; // rax
  unsigned int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  HRESULT v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING, char *); // rdi
  int v17; // eax
  HRESULT v18; // eax
  int v19; // edx
  unsigned int v20; // r8d
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, HSTRING, char *); // rdi
  int v23; // eax
  int v24; // eax
  HRESULT v25; // eax
  int v26; // edx
  unsigned int v27; // r8d
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, HSTRING, char *); // rdi
  int v30; // eax
  __int64 v31; // rcx
  int v33; // eax
  HRESULT (__stdcall *v34)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v35; // eax
  HRESULT (__stdcall *v36)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v37; // eax
  HRESULT (__stdcall *v38)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v39; // rdi
  int v40; // r8d
  int v41; // r9d
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // [rsp+30h] [rbp-59h] BYREF
  __int64 v52; // [rsp+38h] [rbp-51h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-49h] BYREF
  HSTRING string; // [rsp+58h] [rbp-31h] BYREF
  HSTRING_HEADER v55; // [rsp+60h] [rbp-29h] BYREF
  HSTRING v56; // [rsp+78h] [rbp-11h] BYREF
  HSTRING_HEADER v57; // [rsp+80h] [rbp-9h] BYREF
  HSTRING v58; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 320);
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 40);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v6);
  if ( (v7 & 0x80000000) != 0 )
  {
    v48 = 103LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)v7);
    return v7;
  }
  v7 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),PeoplePaneViewManager *>(
         (int)this + 328,
         *v5,
         v8,
         v9,
         (__int64)this - 24);
  if ( (v7 & 0x80000000) != 0 )
  {
    v48 = 107LL;
    goto LABEL_36;
  }
  v51 = 0LL;
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))v10)(
          a2,
          &unk_180751F98,
          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
          &v51);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_55:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
    return v7;
  }
  string = 0LL;
  v12 = WindowsCreateStringReference(
          L"Windows.Internal.ShellExperience.PeopleBarFlyout",
          0x30u,
          &hstringHeader,
          &string);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
    goto LABEL_39;
  }
  v15 = v51;
  v16 = *(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v51 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 63);
  v17 = v16(v15, string, (char *)this + 504);
  v7 = v17;
  if ( v17 < 0 )
  {
LABEL_39:
    v49 = 113LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v17);
LABEL_54:
    string = 0LL;
    goto LABEL_55;
  }
  v17 = CMarshaledInterface::Marshal(
          (__int64 *)this + 64,
          &GUID_1b7781cd_1b97_4728_8b6e_67a7e55cc53c,
          *((IUnknown **)this + 63),
          2);
  v7 = v17;
  if ( v17 < 0 )
  {
    v49 = 114LL;
    goto LABEL_41;
  }
  v56 = 0LL;
  v18 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.PeopleBarJumpView", 0x32u, &v55, &v56);
  if ( v18 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18, v19, v20);
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v24);
LABEL_53:
    v56 = 0LL;
    goto LABEL_54;
  }
  v21 = v51;
  v22 = *(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v51 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 65);
  v23 = v22(v21, v56, (char *)this + 520);
  v7 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v23);
    v56 = 0LL;
    string = 0LL;
    v47 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    return v7;
  }
  v24 = CMarshaledInterface::Marshal(
          (__int64 *)this + 66,
          &GUID_ab65b025_ff88_470a_9513_b62bcd7ce879,
          *((IUnknown **)this + 65),
          2);
  v7 = v24;
  if ( v24 < 0 )
    goto LABEL_43;
  v58 = 0LL;
  v25 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ShoulderTap", 0x2Cu, &v57, &v58);
  if ( v25 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25, v26, v27);
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v33);
LABEL_52:
    v58 = 0LL;
    goto LABEL_53;
  }
  v28 = v51;
  v29 = *(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v51 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 67);
  v30 = v29(v28, v58, (char *)this + 536);
  v7 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v30);
    v58 = 0LL;
    v56 = 0LL;
    string = 0LL;
    v31 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    return v7;
  }
  v33 = CMarshaledInterface::Marshal(
          (__int64 *)this + 68,
          &GUID_8667db0d_6960_465f_b9a4_c461863efa91,
          *((IUnknown **)this + 67),
          2);
  v7 = v33;
  if ( v33 < 0 )
    goto LABEL_45;
  v52 = 0LL;
  v34 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
  v35 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v34)(
          a2,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
          &v52);
  v7 = v35;
  if ( v35 < 0 )
  {
    v50 = 126LL;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v35);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
    goto LABEL_52;
  }
  v35 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64))(*(_QWORD *)v52 + 64LL))(
          v52,
          L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
          0x28800000168LL);
  v7 = v35;
  if ( v35 < 0 )
  {
    v50 = 127LL;
    goto LABEL_51;
  }
  v36 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  v37 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v36)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          (char *)this + 168);
  v7 = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v37);
    v45 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    v58 = 0LL;
    v56 = 0LL;
    string = 0LL;
    v46 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    return v7;
  }
  v38 = a2->lpVtbl->QueryService;
  v39 = (_QWORD *)((char *)this + 176);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  v35 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v38)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          (char *)this + 176);
  v7 = v35;
  if ( v35 < 0 )
  {
    v50 = 131LL;
    goto LABEL_51;
  }
  v42 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),PeoplePaneViewManager *>(
          (int)this + 192,
          *v39,
          v40,
          v41,
          (__int64)this - 24);
  v7 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v42);
    v43 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v58 = 0LL;
    v56 = 0LL;
    string = 0LL;
    v44 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    return v7;
  }
  v35 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v39 + 24LL))(*v39, (char *)this + 184);
  v7 = v35;
  if ( v35 < 0 )
  {
    v50 = 136LL;
    goto LABEL_51;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
  v58 = 0LL;
  v56 = 0LL;
  string = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
  return 0LL;
}
