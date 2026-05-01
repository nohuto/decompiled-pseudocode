/*
 * XREFs of ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B16C0
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801B1600 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18001DE34 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800B8E00 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B9A7C (-RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802B2C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceMa.c)
 *     ?CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1802BAA78 (-CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA-AUfire_and_forget@winrt@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802ED958 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18037E928 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceM.c)
 *     ??$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VPriorityBoostHelper@@@12@$$QEAPEAVCSingleViewShellExperience@@@Z @ 0x18037ED6C (--$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ @ 0x180384360 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::RuntimeClassInitialize(
        CStartExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // r13
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
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v17; // rdi
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PriorityBoostHelper *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdi
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, SID *, GUID *, char *); // rbx
  int v27; // eax
  _BYTE v28[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v29; // [rsp+38h] [rbp-41h] BYREF
  CSingleViewShellExperience *v30; // [rsp+40h] [rbp-39h] BYREF
  char v31; // [rsp+48h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-29h] BYREF
  HSTRING v33; // [rsp+68h] [rbp-11h]
  HSTRING_HEADER v34; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = (CStartExperienceManager *)((char *)this + 320);
  v33 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustStartMenu>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullTrustStartMenu>::GetImpl'::`2'::impl) )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.StartMenu",
      0x2Bu,
      0x2Au);
    v5 = v33;
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &v34,
           (const WCHAR **)&StartMenuExperienceHost_AppIdFullTrust,
           v6);
    started = CSingleViewShellExperience::RuntimeClassInitialize(
                v4,
                (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
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
    v12 = v33;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)&off_180735620, v13);
    started = CSingleViewShellExperience::RuntimeClassInitialize(
                v4,
                (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                a2,
                (HSTRING)v14[1].Reserved.Reserved1,
                v12);
    if ( started < 0 )
    {
      v10 = 291LL;
      goto LABEL_4;
    }
  }
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)&off_180735628, v9);
  started = CSingleViewShellExperience::AddTestAumid(v4, (HSTRING)v15[1].Reserved.Reserved1);
  if ( started < 0 )
  {
    v10 = 294LL;
    goto LABEL_4;
  }
  *((_DWORD *)this + 95) = 6;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 66, (__int64)a2);
  QueryService = a2->lpVtbl->QueryService;
  v17 = (_QWORD *)((char *)this + 560);
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
  started = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v17 + 24LL))(
              *v17,
              26LL,
              ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
              (char *)this + 536);
  if ( started < 0 )
  {
    v10 = 302LL;
    goto LABEL_4;
  }
  started = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v17 + 24LL))(
              *v17,
              1025LL,
              ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
              (char *)this + 540);
  if ( started < 0 )
  {
    v10 = 303LL;
    goto LABEL_4;
  }
  started = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v17 + 24LL))(
              *v17,
              798LL,
              (char *)this + 48,
              (char *)this + 544);
  if ( started < 0 )
  {
    v10 = 304LL;
    goto LABEL_4;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49402389>::GetImpl'::`2'::impl) )
  {
    started = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v17 + 24LL))(
                *v17,
                1027LL,
                (char *)this + 48,
                (char *)this + 552);
    if ( started < 0 )
    {
      v10 = 307LL;
      goto LABEL_4;
    }
    started = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v17 + 24LL))(
                *v17,
                1026LL,
                (char *)this + 48,
                (char *)this + 556);
    if ( started < 0 )
    {
      v10 = 308LL;
      goto LABEL_4;
    }
  }
  v30 = v4;
  v18 = (char *)Microsoft::WRL::Details::Make<PriorityBoostHelper,CSingleViewShellExperience *>(&v29, &v30);
  v19 = 0LL;
  if ( &v31 != v18 )
  {
    v19 = *(_QWORD *)v18;
    *(_QWORD *)v18 = 0LL;
  }
  v20 = *((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = v19;
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release();
  if ( v29 )
  {
    v29 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release();
  }
  v21 = (PriorityBoostHelper *)*((_QWORD *)this + 39);
  if ( !v21 )
  {
    started = -2147024882;
    v10 = 312LL;
    goto LABEL_4;
  }
  started = PriorityBoostHelper::RegisterForStartReady(v21, a2);
  if ( started < 0 )
  {
    v10 = 313LL;
    goto LABEL_4;
  }
  v22 = *((_QWORD *)this + 39);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 37);
  started = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>>(
              v22,
              &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef,
              (char *)this + 296);
  if ( started < 0 )
  {
    v10 = 314LL;
    goto LABEL_4;
  }
  v23 = *((_QWORD *)this + 39);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 38);
  started = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>>(
              v23,
              &GUID_fdae1e57_9570_4461_bab5_532c0f899149,
              (char *)this + 304);
  if ( started < 0 )
  {
    v10 = 315LL;
    goto LABEL_4;
  }
  v24 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 71);
  started = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v24)(
              a2,
              &SID_TransitionCoordinator,
              &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
              (char *)this + 568);
  if ( started < 0 )
  {
    v10 = 317LL;
    goto LABEL_4;
  }
  v25 = *((_QWORD *)this + 66);
  v26 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v25 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 72);
  started = v26(v25, &SID_InputHostLayout, &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25, (char *)this + 576);
  if ( started < 0 )
  {
    v10 = 320LL;
    goto LABEL_4;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 72) + 24LL))(
          *((_QWORD *)this + 72),
          (char *)this + 72,
          (char *)this + 548);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x141,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v27);
  CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync(this, v28);
  return 0LL;
}
