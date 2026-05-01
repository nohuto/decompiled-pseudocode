/*
 * XREFs of ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x180390EB4
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x180390A6C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x180393170 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$ActivateInstance@V?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18038EDD0 (--$ActivateInstance@V-$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Micro.c)
 *     ??$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18038EE78 (--$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@-$ComPtr@UIContactCardOptions@Co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::CopyContactCardOptions(
        CQuickConnectExperienceManager *this,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions *a2,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  unsigned int i; // ebx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-19h] BYREF
  __int64 v19; // [rsp+30h] [rbp-11h] BYREF
  __int64 v20; // [rsp+38h] [rbp-9h] BYREF
  __int64 v21; // [rsp+40h] [rbp-1h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v22; // [rsp+48h] [rbp+7h] BYREF
  __int64 v23; // [rsp+50h] [rbp+Fh] BYREF
  unsigned int v24; // [rsp+58h] [rbp+17h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp+1Bh] BYREF
  unsigned int v26; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+68h] [rbp+27h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v29; // [rsp+88h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  if ( !a2 )
  {
    v17 = 336LL;
    goto LABEL_40;
  }
  if ( !a3 )
  {
    v17 = 337LL;
LABEL_40:
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80070057LL);
    return v6;
  }
  *a3 = 0LL;
  v22 = 0LL;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Contacts.ContactCardOptions",
    0x35u,
    0x34u);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>>(
         v29,
         (__int64 *)&v22);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v24 = 0;
    v7 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
           a2,
           &v24);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 350LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_8:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      goto LABEL_35;
    }
    v7 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v22 + 56LL))(
           v22,
           v24);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 351LL;
      goto LABEL_7;
    }
    v25 = 0;
    v7 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &v25);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 354LL;
      goto LABEL_7;
    }
    v7 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v22 + 72LL))(
           v22,
           v25);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 355LL;
      goto LABEL_7;
    }
    v21 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
                &v18,
                &v21) >= 0 )
    {
      v20 = 0LL;
      v9 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v22,
             &v20);
      v6 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16A,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
LABEL_18:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        goto LABEL_8;
      }
      v19 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 48LL))(v21, &v19);
      v6 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
LABEL_21:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
        goto LABEL_18;
      }
      v23 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 48LL))(v20, &v23);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 368LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        goto LABEL_21;
      }
      v26 = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 56LL))(v19, &v26);
      v6 = v11;
      if ( v11 < 0 )
      {
        v12 = 371LL;
        goto LABEL_24;
      }
      for ( i = 0; i < v26; ++i )
      {
        v27 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 48LL))(v19, i, &v27);
        if ( v14 < 0 )
        {
          v15 = 376LL;
          goto LABEL_34;
        }
        v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 104LL))(v23, v27);
        if ( v14 < 0 )
        {
          v15 = 377LL;
LABEL_34:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v14);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
          v6 = v14;
          goto LABEL_35;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    *a3 = v22;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x159,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_35:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  return v6;
}
