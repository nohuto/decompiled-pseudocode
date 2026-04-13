/*
 * XREFs of ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180076DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180073534 (--$As@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Window.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180074360 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVInstallAppInfo@Int.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180075170 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x180075490 (-ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVector@PEAVAppInstallInfoRecord.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180075A28 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AppInstallBatching@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180076CC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AppInstallBatching@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::StartBatchInstalls(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  int AppInstallManager; // eax
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, _QWORD, char, char, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rdi
  HRESULT v15; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  char v22; // [rsp+20h] [rbp-50h]
  char v23; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v28; // [rsp+A0h] [rbp+30h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF

  *a3 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AppInstallBatching>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3);
  v26[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
  v7 = ContentManagement::AppManager::ConvertToStoreRecords(v6, a2, v26);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
    AppInstallManager = ContentManagement::AppManager::GetAppInstallManager((RTL_SRWLOCK *)(a1 - 48), &v28);
    v8 = AppInstallManager;
    if ( AppInstallManager >= 0 )
    {
      v24 = 0LL;
      v10 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::As<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal2>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v28,
              &v24);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v29 = 0LL;
        v11 = v24;
        v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, char, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v24 + 72LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
        v23 = 0;
        v22 = 0;
        v13 = v12(v11, v26[0], 0LL, 0LL, v22, v23, 0LL, &v29);
        v8 = v13;
        if ( v13 >= 0 )
        {
          v25 = 0LL;
          v14 = v29;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
          v8 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>>(
                 v14,
                 v15,
                 v16);
          if ( v8 < 0
            || (v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v14)[8])(
                       v14,
                       &v25),
                v8 < 0) )
          {
            v19 = (unsigned int)v8;
            v20 = 209LL;
          }
          else
          {
            v18 = ContentManagement::AppManager::ConvertFromStoreRecords(v17, v25, a3);
            v8 = v18;
            if ( v18 >= 0 )
            {
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
              v8 = 0;
              goto LABEL_19;
            }
            v19 = (unsigned int)v18;
            v20 = 211LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)v19);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xCE,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v13);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC4,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v10);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)AppInstallManager);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_19:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
  return (unsigned int)v8;
}
