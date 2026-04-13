/*
 * XREFs of ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180075F70
 * Callers:
 *     ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z @ 0x180075F10 (-GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180074690 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x1800758D4 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180075A28 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180076D48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ContentManagement::AppManager::GetEntitlementInternal(
        RTL_SRWLOCK *this,
        HSTRING string1,
        HSTRING string2,
        HSTRING a4,
        HSTRING a5,
        char a6,
        HSTRING a7)
{
  int AppInstallManager; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int Entitlement; // ebx
  HSTRING *v14; // r9
  int v15; // eax
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v16; // rbx
  __int64 (__fastcall *v17)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **); // rdi
  int v18; // eax
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  __int64 (__fastcall *v21)(_QWORD *, HSTRING, HSTRING, HSTRING, int *); // rdi
  int v22; // eax
  __int64 v23; // rdx
  __int64 (__fastcall *v24)(_QWORD *, HSTRING, HSTRING, HSTRING, int *); // rdi
  __int64 (__fastcall *v25)(_QWORD *, PVOID, HSTRING, HSTRING, HSTRING, int *); // rdi
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // rdi
  HRESULT v27; // edx
  __int64 v28; // r8
  int v29; // eax
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  int v34[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-20h] BYREF
  __int64 v36; // [rsp+58h] [rbp-18h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v37[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  HSTRING v39; // [rsp+A8h] [rbp+38h] BYREF

  v39 = a4;
  v37[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v37);
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this, v37);
  Entitlement = AppInstallManager;
  if ( AppInstallManager >= 0 )
  {
    LOBYTE(v12) = 3;
    LOBYTE(v11) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallAttribution>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetImpl'::`2'::impl,
      v11,
      v12);
    WindowsDeleteString(0LL);
    string = 0LL;
    v15 = CreativeFramework::StoreHelpers::GenerateStoreId(string1, string2, &string, v14);
    Entitlement = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_28:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_29;
    }
    v35 = 0LL;
    v16 = v37[0];
    v17 = **(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v37[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
    v18 = v17(v16, &GUID_260a2a16_5a9e_4ebd_b944_f2ba75c31159, &v35);
    Entitlement = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_27:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
      goto LABEL_28;
    }
    *(_QWORD *)v34 = 0LL;
    v19 = v35;
    v20 = (_QWORD *)*v35;
    if ( a6 )
    {
      v21 = (__int64 (__fastcall *)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))v20[8];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v34);
      v22 = v21(v19, string, a7, a5, v34);
      Entitlement = v22;
      if ( v22 < 0 )
      {
        v23 = 340LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v22);
LABEL_26:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v34);
        goto LABEL_27;
      }
    }
    else if ( this[10].Ptr )
    {
      v25 = (__int64 (__fastcall *)(_QWORD *, PVOID, HSTRING, HSTRING, HSTRING, int *))v20[7];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v34);
      v22 = v25(v19, this[10].Ptr, string, a7, a5, v34);
      Entitlement = v22;
      if ( v22 < 0 )
      {
        v23 = 350LL;
        goto LABEL_10;
      }
    }
    else
    {
      v24 = (__int64 (__fastcall *)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))v20[6];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v34);
      v22 = v24(v19, string, a7, a5, v34);
      Entitlement = v22;
      if ( v22 < 0 )
      {
        v23 = 346LL;
        goto LABEL_10;
      }
    }
    v36 = 0LL;
    v26 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v34;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
    Entitlement = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>>(
                    v26,
                    v27,
                    v28);
    if ( Entitlement < 0
      || (Entitlement = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v26)[8])(
                          v26,
                          &v36),
          Entitlement < 0) )
    {
      v31 = 355LL;
    }
    else
    {
      LODWORD(v39) = 0;
      v29 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v36 + 48LL))(v36, &v39);
      Entitlement = v29;
      if ( v29 < 0 )
      {
        v30 = (unsigned int)v29;
        v31 = 358LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v31,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)v30);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
        goto LABEL_26;
      }
      if ( !(_DWORD)v39 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v34);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v35);
        WindowsDeleteString(string);
        Entitlement = 0;
        goto LABEL_29;
      }
      Entitlement = -2147467259;
      v31 = 359LL;
    }
    v30 = (unsigned int)Entitlement;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x147,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)AppInstallManager);
LABEL_29:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v37);
  return (unsigned int)Entitlement;
}
