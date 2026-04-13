/*
 * XREFs of ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180075A28
 * Callers:
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180075F70 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180076320 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180076520 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x1800766E0 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x180076860 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180076DE0 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x1800771A0 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?StartRestore@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z @ 0x180077410 (-StartRestore@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@00E@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800448A8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800448E0 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180073394 (--$ActivateInstance@V-$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::GetAppInstallManager(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager **a2)
{
  __int64 *v3; // rsi
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v3 = (__int64 *)&this[9];
  *a2 = 0LL;
  v4 = this + 11;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 11);
  v5 = *v3;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  if ( !v5 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, v4);
    if ( !*v3 )
    {
      v11 = 0LL;
      v14 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
        0x48u,
        0x47u);
      v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>>(
             v14,
             (__int64 *)&v11);
      if ( v6 < 0 )
      {
        v7 = 482LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
        return (unsigned int)v6;
      }
      v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
      v10 = **v11;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
      v6 = v10(v9, &GUID_9353e170_8441_4b45_bd72_7c2fa925beee, v3);
      if ( v6 < 0 )
      {
        v7 = 483LL;
        goto LABEL_7;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( *v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v3 + 8LL))(*v3);
  *a2 = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)*v3;
  return 0LL;
}
