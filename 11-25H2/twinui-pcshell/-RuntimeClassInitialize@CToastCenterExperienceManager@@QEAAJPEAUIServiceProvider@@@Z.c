/*
 * XREFs of ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BA420
 * Callers:
 *     ??$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800BB3E0 (--$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18001DE34 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x180079954 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800B8E00 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@Z @ 0x1800BB7D4 (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastC.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800BB8A8 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800BB8DC (-SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180374400 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CToastCenterExperienceManager::RuntimeClassInitialize(
        CToastCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  HSTRING v7; // rbx
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  unsigned int v12; // ebx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v15; // eax
  int v16; // eax
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v23; // eax
  int v24; // eax
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v26; // eax
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, char *); // rsi
  int v29; // eax
  HRESULT (__stdcall *v30)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v31; // rdi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  HRESULT (__stdcall *v35)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v36; // eax
  int ready; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v38; // r8
  int HostExperiencePriorityManipulator; // eax
  int v40; // edx
  unsigned int v41; // r8d
  unsigned __int64 v42; // rbx
  unsigned int v43; // eax
  UINT32 v44; // edx
  HRESULT v45; // eax
  int v46; // edx
  unsigned int v47; // r8d
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // [rsp+30h] [rbp-39h] BYREF
  __int64 v51; // [rsp+38h] [rbp-31h] BYREF
  HSTRING_HEADER v52; // [rsp+40h] [rbp-29h] BYREF
  HSTRING v53; // [rsp+58h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-9h] BYREF
  HSTRING string; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ToastCenter", 0x2Cu, &hstringHeader, &string);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
  v7 = string;
  v53 = 0LL;
  v8 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v52, &v53);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
  v11 = CSingleViewShellExperience::RuntimeClassInitialize(
          (CToastCenterExperienceManager *)((char *)this + 104),
          (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
          a2,
          v53,
          v7);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x143,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  hstringHeader.Reserved.Reserved1 = this;
  hstringHeader.Reserved.Reserved2[8] = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 51);
  v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          (char *)this + 408);
  v12 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 51) + 32LL))(
          *((_QWORD *)this + 51),
          ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
          (char *)this + 416);
  v12 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v17 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 53);
  v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v17)(
          a2,
          &SID_InputHostLayout,
          &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
          (char *)this + 424);
  v12 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v21 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CToastCenterExperienceManager *>(
          (int)this + 432,
          *((_QWORD *)this + 53),
          v19,
          v20,
          (__int64)this);
  v12 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v21);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v22 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 78);
  v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v22)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          (char *)this + 624);
  v12 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 78) + 24LL))(
          *((_QWORD *)this + 78),
          ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
          (char *)this + 568);
  v12 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v24);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v50 = 0LL;
  v25 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
  v26 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v25)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          &v50);
  v12 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x157,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v27 = v50;
  v28 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v50 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 79);
  v29 = v28(v27, (char *)this + 632);
  v12 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v30 = a2->lpVtbl->QueryService;
  v31 = (_QWORD *)((char *)this + 616);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 77);
  v32 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v30)(
          a2,
          &IID_IImmersiveWindowMessageService,
          &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
          (char *)this + 616);
  v12 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v31 + 24LL))(
          *v31,
          0LL,
          ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
          (char *)this + 560);
  v12 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v34 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v31 + 24LL))(
          *v31,
          26LL,
          ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
          (char *)this + 564);
  v12 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v51 = 0LL;
  v35 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 81);
  v36 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v35)(
          a2,
          &IID_IRealmActivationHistory,
          &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
          (char *)this + 648);
  v12 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v36);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  ready = CToastCenterExperienceManager::SubscribeToShellReadyWnf(this);
  v12 = ready;
  if ( ready < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x164,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                        (ExperienceManagerUtils *)a2,
                                        (struct IServiceProvider *)this + 12,
                                        v38);
  v12 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  v53 = 0LL;
  v42 = -1LL;
  do
    ++v42;
  while ( aActioncenterex[v42] );
  if ( v42 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v40, v41);
    JUMPOUT(0x1800BAB2CLL);
  }
  v43 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v42, v40, v41);
  v44 = v43 - 1;
  if ( (unsigned int)v42 < v43 )
    v44 = v42;
  v45 = WindowsCreateStringReference(L"ActionCenterExperienceHostVS_ccv6fwk6gx0xp!App", v44, &v52, &v53);
  if ( v45 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v45, v46, v47);
  v48 = CSingleViewShellExperience::AddTestAumid((CToastCenterExperienceManager *)((char *)this + 104), v53);
  v12 = v48;
  if ( v48 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x168,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v48);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v12;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 76, (__int64)a2);
  *((_BYTE *)this + 404) = IsShellLauncherEnabledForCurrentUser();
  hstringHeader.Reserved.Reserved2[8] = 0;
  v49 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  return 0LL;
}
