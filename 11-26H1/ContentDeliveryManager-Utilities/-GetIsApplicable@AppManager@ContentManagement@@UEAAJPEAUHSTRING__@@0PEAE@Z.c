/*
 * XREFs of ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180076320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800673FC (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU-$IAs.c)
 *     ??$As@UIAppInstallManager3@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppInstallManager3@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800734E4 (--$As@UIAppInstallManager3@InstallControl@Preview@Store@ApplicationModel@Windows@@@-$ComPtr@UIAp.c)
 *     ?EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ @ 0x180075864 (-EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180075A28 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContentManagement::AppManager::GetIsApplicable(
        ContentManagement::AppManager *this,
        __int64 a2,
        bool *a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  int AppInstallManager; // eax
  unsigned int v10; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  __int64 (__fastcall *v12)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, __int64, bool *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v13; // eax
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64, bool *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v21; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0;
  result = ContentManagement::EnsureCallingProcessHasStoreAppInstallCapability(this, a2, a3);
  if ( (int)result >= 0 )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    AppInstallManager = ContentManagement::AppManager::GetAppInstallManager((RTL_SRWLOCK *)this - 6, &v21);
    v10 = AppInstallManager;
    if ( AppInstallManager < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)AppInstallManager);
LABEL_18:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
      return v10;
    }
    v23 = 0LL;
    if ( !*((_QWORD *)this + 4) )
    {
      v11 = v21;
      v12 = *(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, __int64, bool *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v21 + 144LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
      v13 = v12(v11, a2, a3, &v23);
      v10 = v13;
      if ( v13 < 0 )
      {
        v15 = 123LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v13);
LABEL_8:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
        goto LABEL_18;
      }
LABEL_15:
      v13 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *,unsigned char *>(
              v23,
              (__int64)a4,
              v14);
      v10 = v13;
      if ( v13 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
        v10 = 0;
        goto LABEL_18;
      }
      v15 = 137LL;
      goto LABEL_7;
    }
    v20 = 0LL;
    v16 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::As<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v21,
            &v20);
    v10 = v16;
    if ( v16 >= 0 )
    {
      v18 = v20;
      v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, bool *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v20 + 96LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
      v16 = v19(v18, *((_QWORD *)this + 4), a2, a3, &v23);
      v10 = v16;
      if ( v16 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
        goto LABEL_15;
      }
      v17 = 133LL;
    }
    else
    {
      v17 = 128LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    goto LABEL_8;
  }
  return result;
}
