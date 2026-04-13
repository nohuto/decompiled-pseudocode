/*
 * XREFs of ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x1800766E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800673FC (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU-$IAs.c)
 *     ?EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ @ 0x180075864 (-EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180075A28 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsStoreBlockedByPolicy(
        ContentManagement::AppManager *this,
        unsigned __int8 *a2,
        bool *a3)
{
  __int64 result; // rax
  int AppInstallManager; // eax
  unsigned int v7; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v8; // rbx
  __int64 (__fastcall *v9)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  __int64 v10; // rdi
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-19h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v15; // [rsp+38h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-9h] BYREF
  __int64 v17; // [rsp+58h] [rbp+Fh]
  HSTRING_HEADER v18; // [rsp+60h] [rbp+17h] BYREF
  __int64 v19; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *a2 = 0;
  result = ContentManagement::EnsureCallingProcessHasStoreAppInstallCapability(this, (__int64)a2, a3);
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    AppInstallManager = ContentManagement::AppManager::GetAppInstallManager((RTL_SRWLOCK *)this - 6, &v15);
    v7 = AppInstallManager;
    if ( AppInstallManager >= 0 )
    {
      v14 = 0LL;
      v8 = v15;
      v9 = *(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v15 + 184LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      v17 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US",
        0x51u,
        0x50u);
      v10 = v17;
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"Microsoft.WindowsStore", 0x17u, 0x16u);
      v11 = v9(v8, v19, v10, &v14);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *,unsigned char *>(
                v14,
                (__int64)a2,
                v12);
        v7 = v11;
        if ( v11 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
          v7 = 0;
          goto LABEL_10;
        }
        v13 = 71LL;
      }
      else
      {
        v13 = 69LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)AppInstallManager);
    }
LABEL_10:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    return v7;
  }
  return result;
}
