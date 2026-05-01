/*
 * XREFs of ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801A9FBC
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801A9EF0 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800BFF10 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800C31B0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800C3E5C (-RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802AC840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceMa.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E79F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803868DC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceM.c)
 *     ??$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VPriorityBoostHelper@@@12@$$QEAPEAVCSingleViewShellExperience@@@Z @ 0x180386E18 (--$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ?CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180388380 (-CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA-AUfire_and_forget@winrt@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ @ 0x18038B370 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::RuntimeClassInitialize(
        CStartExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // r12
  HSTRING v5; // rbx
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  int started; // ebx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  HSTRING v12; // rbx
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  HSTRING_HEADER *v15; // rax
  char *v16; // r13
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v18; // r14
  int v19; // edi
  __int64 v20; // rdx
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PriorityBoostHelper *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdi
  HRESULT (__stdcall *v27)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64, SID *, GUID *, char *); // rbx
  int v30; // eax
  _BYTE v31[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v32; // [rsp+38h] [rbp-41h] BYREF
  CSingleViewShellExperience *v33; // [rsp+40h] [rbp-39h] BYREF
  char v34; // [rsp+48h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-29h] BYREF
  HSTRING v36; // [rsp+68h] [rbp-11h]
  HSTRING_HEADER v37; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = (CStartExperienceManager *)((char *)this + 320);
  v36 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustStartMenu>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullTrustStartMenu>::GetImpl'::`2'::impl) )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.StartMenu",
      0x2Bu,
      0x2Au);
    v5 = v36;
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &v37,
           (const WCHAR **)&StartMenuExperienceHost_AppIdFullTrust,
           v6);
    started = CSingleViewShellExperience::RuntimeClassInitialize(
                v4,
                (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                a2,
                (HSTRING)v7[1].Reserved.Reserved1,
                v5);
    if ( started < 0 )
    {
      v10 = 285LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)started);
      return (unsigned int)started;
    }
  }
  else
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.StartMenu",
      0x2Bu,
      0x2Au);
    v12 = v36;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)&off_180760088, v13);
    started = CSingleViewShellExperience::RuntimeClassInitialize(
                v4,
                (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
                a2,
                (HSTRING)v14[1].Reserved.Reserved1,
                v12);
    if ( started < 0 )
    {
      v10 = 291LL;
      goto LABEL_4;
    }
  }
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)&off_180760078, v9);
  started = CSingleViewShellExperience::AddTestAumid(v4, (HSTRING)v15[1].Reserved.Reserved1);
  if ( started < 0 )
  {
    v10 = 294LL;
    goto LABEL_4;
  }
  *((_DWORD *)this + 95) = 6;
  v16 = (char *)this + 528;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 66, (__int64)a2);
  QueryService = a2->lpVtbl->QueryService;
  v18 = (_QWORD *)((char *)this + 560);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 70);
  started = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
              a2,
              &IID_IImmersiveWindowMessageService,
              &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
              (char *)this + 560);
  if ( started < 0 )
  {
    v10 = 301LL;
    goto LABEL_4;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
          *v18,
          26LL,
          ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
          (char *)this + 536);
  if ( v19 < 0 )
  {
    v20 = 302LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
    return (unsigned int)v19;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
          *v18,
          1025LL,
          ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
          (char *)this + 540);
  if ( v19 < 0 )
  {
    v20 = 303LL;
    goto LABEL_13;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
          *v18,
          798LL,
          ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
          (char *)this + 544);
  if ( v19 < 0 )
  {
    v20 = 304LL;
    goto LABEL_13;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49402389>::GetImpl'::`2'::impl) )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
            *v18,
            1027LL,
            ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
            (char *)this + 552);
    if ( v19 < 0 )
    {
      v20 = 307LL;
      goto LABEL_13;
    }
    started = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 24LL))(
                *v18,
                1026LL,
                ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
                (char *)this + 556);
    if ( started < 0 )
    {
      v10 = 308LL;
      goto LABEL_4;
    }
  }
  v33 = v4;
  v21 = (char *)Microsoft::WRL::Details::Make<PriorityBoostHelper,CSingleViewShellExperience *>(&v32, &v33);
  v22 = 0LL;
  if ( &v34 != v21 )
  {
    v22 = *(_QWORD *)v21;
    *(_QWORD *)v21 = 0LL;
  }
  v23 = *((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = v22;
  if ( v23 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release();
  if ( v32 )
  {
    v32 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release();
  }
  v24 = (PriorityBoostHelper *)*((_QWORD *)this + 39);
  if ( !v24 )
  {
    started = -2147024882;
    v10 = 312LL;
    goto LABEL_4;
  }
  started = PriorityBoostHelper::RegisterForStartReady(v24, a2);
  if ( started < 0 )
  {
    v10 = 313LL;
    goto LABEL_4;
  }
  v25 = *((_QWORD *)this + 39);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 37);
  started = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>>(
              v25,
              &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef,
              (char *)this + 296);
  if ( started < 0 )
  {
    v10 = 314LL;
    goto LABEL_4;
  }
  v26 = *((_QWORD *)this + 39);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 38);
  started = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>>(
              v26,
              &GUID_fdae1e57_9570_4461_bab5_532c0f899149,
              (char *)this + 304);
  if ( started < 0 )
  {
    v10 = 315LL;
    goto LABEL_4;
  }
  v27 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 71);
  started = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v27)(
              a2,
              &SID_TransitionCoordinator,
              &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
              (char *)this + 568);
  if ( started < 0 )
  {
    v10 = 317LL;
    goto LABEL_4;
  }
  v28 = *(_QWORD *)v16;
  v29 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(**(_QWORD **)v16 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 72);
  started = v29(v28, &SID_InputHostLayout, &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25, (char *)this + 576);
  if ( started < 0 )
  {
    v10 = 320LL;
    goto LABEL_4;
  }
  v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 72) + 24LL))(
          *((_QWORD *)this + 72),
          ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          (char *)this + 548);
  if ( v30 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x141,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v30);
  CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync(this, v31);
  return 0LL;
}
