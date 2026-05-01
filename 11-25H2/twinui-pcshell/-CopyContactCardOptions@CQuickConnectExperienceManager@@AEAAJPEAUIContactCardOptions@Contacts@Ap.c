/*
 * XREFs of ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x180389D2C
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1803898FC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x18038BFE0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ActivateInstance@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIContactCardOptions@Contacts@ApplicationModel@1@@Z @ 0x180387CCC (--$ActivateInstance@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@Foundation@Windows@.c)
 *     ??$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180387D68 (--$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@-$ComPtr@UIContactCardOptions@Co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CQuickConnectExperienceManager::CopyContactCardOptions(
        CQuickConnectExperienceManager *this,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions *a2,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions **a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  unsigned int i; // ebx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v18; // rdx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-19h] BYREF
  __int64 v20; // [rsp+30h] [rbp-11h] BYREF
  __int64 v21; // [rsp+38h] [rbp-9h] BYREF
  __int64 v22; // [rsp+40h] [rbp-1h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v23; // [rsp+48h] [rbp+7h] BYREF
  __int64 v24; // [rsp+50h] [rbp+Fh] BYREF
  unsigned int v25; // [rsp+58h] [rbp+17h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp+1Bh] BYREF
  unsigned int v27; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+68h] [rbp+27h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v30; // [rsp+88h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  if ( !a2 )
  {
    v18 = 336LL;
    goto LABEL_40;
  }
  if ( !a3 )
  {
    v18 = 337LL;
LABEL_40:
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80070057LL);
    return v7;
  }
  *a3 = 0LL;
  v23 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.ApplicationModel.Contacts.ContactCardOptions",
    0x35u,
    0x34u);
  v5 = v30;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  v6 = Windows::Foundation::ActivateInstance<Windows::ApplicationModel::Contacts::IContactCardOptions>(v5, &v23);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v19 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    v25 = 0;
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
           a2,
           &v25);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 350LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_8:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      goto LABEL_35;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v23 + 56LL))(
           v23,
           v25);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 351LL;
      goto LABEL_7;
    }
    v26 = 0;
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &v26);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 354LL;
      goto LABEL_7;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v23 + 72LL))(
           v23,
           v26);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 355LL;
      goto LABEL_7;
    }
    v22 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
                &v19,
                &v22) >= 0 )
    {
      v21 = 0LL;
      v10 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v23,
              &v21);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16A,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
LABEL_18:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
        goto LABEL_8;
      }
      v20 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v20);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
LABEL_21:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        goto LABEL_18;
      }
      v24 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 48LL))(v21, &v24);
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = 368LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        goto LABEL_21;
      }
      v27 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 56LL))(v20, &v27);
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = 371LL;
        goto LABEL_24;
      }
      for ( i = 0; i < v27; ++i )
      {
        v28 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 48LL))(v20, i, &v28);
        if ( v15 < 0 )
        {
          v16 = 376LL;
          goto LABEL_34;
        }
        v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 104LL))(v24, v28);
        if ( v15 < 0 )
        {
          v16 = 377LL;
LABEL_34:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v15);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
          v7 = v15;
          goto LABEL_35;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    *a3 = v23;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x159,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_35:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  return v7;
}
