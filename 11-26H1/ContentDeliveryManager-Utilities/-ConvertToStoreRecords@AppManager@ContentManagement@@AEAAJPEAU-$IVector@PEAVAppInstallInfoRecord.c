/*
 * XREFs of ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x180075490
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180076DE0 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007343C (--$ActivateInstance@V-$ComPtr@UIInstallAppInfo@Internal@InstallControl@Preview@Store@Application.c)
 *     ??$CreateExternalObjectVector@VInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@1234@@Z @ 0x180073818 (--$CreateExternalObjectVector@VInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationM.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::ConvertToStoreRecords(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int i; // esi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rdi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  HSTRING v24; // [rsp+20h] [rbp-60h] BYREF
  HSTRING string; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v29; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v31; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a3 = 0LL;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  v7 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>>(
         v5,
         (__int64 *)&v29,
         v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v28 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v28);
    v8 = v7;
    if ( v7 >= 0 )
    {
      for ( i = 0; i < v28; ++i )
      {
        v26 = 0LL;
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
        v12 = v11(a2, i, &v26);
        v8 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x199,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_26;
        }
        v24 = 0LL;
        v13 = v26;
        v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 48LL);
        WindowsDeleteString(0LL);
        v24 = 0LL;
        v15 = v14(v13, &v24);
        v8 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x19B,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_24;
        }
        string = 0LL;
        v16 = v26;
        v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 64LL);
        WindowsDeleteString(0LL);
        string = 0LL;
        v18 = v17(v16, &string);
        v8 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x19D,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v18);
          goto LABEL_22;
        }
        v27 = 0LL;
        v31 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"Windows.ApplicationModel.Store.Preview.InstallControl.Internal.InstallAppInfo",
          0x4Eu,
          0x4Du);
        v19 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>>(
                v31,
                &v27);
        v8 = v19;
        if ( v19 < 0 )
        {
          v22 = 416LL;
LABEL_20:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
LABEL_22:
          WindowsDeleteString(string);
          string = 0LL;
LABEL_24:
          WindowsDeleteString(v24);
          v24 = 0LL;
LABEL_26:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
          goto LABEL_30;
        }
        v19 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v27 + 56LL))(v27, v24);
        v8 = v19;
        if ( v19 < 0 )
        {
          v22 = 417LL;
          goto LABEL_20;
        }
        v19 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v27 + 104LL))(v27, string);
        v8 = v19;
        if ( v19 < 0 )
        {
          v22 = 418LL;
          goto LABEL_20;
        }
        v20 = *v29;
        v21 = v27;
        v27 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v20 + 104))(v29, v21);
        v8 = v19;
        if ( v19 < 0 )
        {
          v22 = 420LL;
          goto LABEL_20;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v24);
        v24 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      }
      v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*v29 + 64))(v29, a3);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v8 = 0;
        goto LABEL_30;
      }
      v9 = 423LL;
    }
    else
    {
      v9 = 405LL;
    }
  }
  else
  {
    v9 = 402LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_30:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  return v8;
}
