/*
 * XREFs of ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x180076860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAppInstallManager3@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppInstallManager3@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800734E4 (--$As@UIAppInstallManager3@InstallControl@Preview@Store@ApplicationModel@Windows@@@-$ComPtr@UIAp.c)
 *     ?EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ @ 0x180075864 (-EnsureCallingProcessHasStoreAppInstallCapability@ContentManagement@@YAJXZ.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180075A28 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContentManagement::AppManager::MoveAppInstallToFrontOfQueue(
        RTL_SRWLOCK *this,
        HSTRING a2,
        HSTRING a3)
{
  int AppInstallManager; // eax
  __int64 v7; // rdx
  ContentManagement *v8; // rcx
  bool *v9; // r8
  unsigned int v10; // ebx
  int HasStoreAppInstallCapability; // eax
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v17; // [rsp+48h] [rbp+20h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this - 6, &v17);
  v10 = AppInstallManager;
  if ( AppInstallManager >= 0 )
  {
    HasStoreAppInstallCapability = ContentManagement::EnsureCallingProcessHasStoreAppInstallCapability(v8, v7, v9);
    if ( HasStoreAppInstallCapability >= 0 )
    {
      v16 = 0LL;
      v12 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::As<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v17,
              &v16);
      v10 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING))(*(_QWORD *)v16 + 104LL))(v16, a2, a3);
        v10 = v12;
        if ( v12 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
          v10 = 0;
          goto LABEL_11;
        }
        v13 = 151LL;
      }
      else
      {
        v13 = 149LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    }
    else
    {
      v10 = HasStoreAppInstallCapability;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  return v10;
}
