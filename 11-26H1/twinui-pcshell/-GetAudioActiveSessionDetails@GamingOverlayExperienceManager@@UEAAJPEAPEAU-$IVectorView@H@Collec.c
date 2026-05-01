/*
 * XREFs of ?GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAUHSTRING__@@@345@0000@Z @ 0x1803474F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalVector@PEAUHSTRING__@@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@PEAUHSTRING__@@@234@@ZPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@1234@@Z @ 0x1802347E0 (--$CreateExternalVector@PEAUHSTRING__@@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate.c)
 *     ??$CreateExternalVector@HV?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@H@234@@ZPEAPEAV?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@1234@@Z @ 0x18033BA4C (--$CreateExternalVector@HV-$AgileVector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foun.c)
 *     ?GetSessionDetails@AppList@GamingAudio@@QEAAJAEBV?$ComPtr@V?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@45@0000@Z @ 0x18035EF24 (-GetSessionDetails@AppList@GamingAudio@@QEAAJAEBV-$ComPtr@V-$AgileVector@HU-$DefaultEqualityPred.c)
 *     ?RebuildList@AppList@GamingAudio@@QEAAX_N@Z @ 0x18035FD40 (-RebuildList@AppList@GamingAudio@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetAudioActiveSessionDetails(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  GamingAudio::AppList *v8; // rcx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int SessionDetails; // eax
  __int64 v25; // rdx
  __int64 v27; // [rsp+40h] [rbp-41h] BYREF
  __int64 v28; // [rsp+48h] [rbp-39h] BYREF
  int v29[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v30; // [rsp+58h] [rbp-29h] BYREF
  __int64 v31; // [rsp+60h] [rbp-21h] BYREF
  __int64 v32; // [rsp+68h] [rbp-19h] BYREF
  __int64 v33; // [rsp+70h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v8 = *(GamingAudio::AppList **)(a1 + 1280);
  v33 = a7;
  if ( v8 )
  {
    GamingAudio::AppList::RebuildList(v8, 0);
    v32 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    v13 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<int,Windows::Foundation::Collections::Internal::AgileVector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,0>>(
            v12,
            &v32);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA77,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v13);
LABEL_33:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
      return v14;
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    v16 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<HSTRING__ *,Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>(
            v15,
            &v27);
    v14 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7A,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v16);
LABEL_32:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      goto LABEL_33;
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    v18 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<int,Windows::Foundation::Collections::Internal::AgileVector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,0>>(
            v17,
            &v28);
    v14 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7D,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v18);
LABEL_31:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      goto LABEL_32;
    }
    *(_QWORD *)v29 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
    v20 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<int,Windows::Foundation::Collections::Internal::AgileVector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,0>>(
            v19,
            (__int64 *)v29);
    v14 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA80,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v20);
LABEL_30:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
      goto LABEL_31;
    }
    v30 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
    v22 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<int,Windows::Foundation::Collections::Internal::AgileVector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,0>>(
            v21,
            &v30);
    v14 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA83,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v22);
LABEL_29:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      goto LABEL_30;
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
    SessionDetails = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<int,Windows::Foundation::Collections::Internal::AgileVector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,0>>(
                       v23,
                       &v31);
    v14 = SessionDetails;
    if ( SessionDetails < 0 )
    {
      v25 = 2694LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)SessionDetails);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
      goto LABEL_29;
    }
    SessionDetails = GamingAudio::AppList::GetSessionDetails(
                       *(_QWORD *)(a1 + 1280),
                       (unsigned int)&v32,
                       (unsigned int)&v27,
                       (unsigned int)&v28,
                       (__int64)v29,
                       (__int64)&v30,
                       (__int64)&v31);
    v14 = SessionDetails;
    if ( SessionDetails < 0 )
    {
      v25 = 2701LL;
      goto LABEL_28;
    }
    SessionDetails = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 64LL))(v32, a2);
    v14 = SessionDetails;
    if ( SessionDetails < 0 )
    {
      v25 = 2703LL;
      goto LABEL_28;
    }
    SessionDetails = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 64LL))(v27, a3);
    v14 = SessionDetails;
    if ( SessionDetails < 0 )
    {
      v25 = 2704LL;
      goto LABEL_28;
    }
    SessionDetails = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 64LL))(v28, a4);
    v14 = SessionDetails;
    if ( SessionDetails < 0 )
    {
      v25 = 2705LL;
      goto LABEL_28;
    }
    SessionDetails = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v29 + 64LL))(*(_QWORD *)v29, a5);
    v14 = SessionDetails;
    if ( SessionDetails < 0 )
    {
      v25 = 2706LL;
      goto LABEL_28;
    }
    SessionDetails = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 64LL))(v30, a6);
    v14 = SessionDetails;
    if ( SessionDetails < 0 )
    {
      v25 = 2707LL;
      goto LABEL_28;
    }
    SessionDetails = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 64LL))(v31, v33);
    v14 = SessionDetails;
    if ( SessionDetails < 0 )
    {
      v25 = 2708LL;
      goto LABEL_28;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  }
  return 0LL;
}
