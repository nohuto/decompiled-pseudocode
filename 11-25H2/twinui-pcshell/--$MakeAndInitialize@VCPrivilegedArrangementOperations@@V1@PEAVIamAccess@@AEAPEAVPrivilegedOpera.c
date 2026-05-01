/*
 * XREFs of ??$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedArrangementOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x180189C7C
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1801897F8 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedDesktopOperations@@@@QEAAJPEAVIamAccess@@PEAVPrivilegedOperationsService@@@Z @ 0x18002012C (-RuntimeClassInitialize@-$PrivilegedOperationsBase@UIPrivilegedDesktopOperations@@@@QEAAJPEAVIam.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006AFF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_18006AFF0.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedArrangementOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180189C54 (-InternalRelease@-$ComPtr@VCPrivilegedArrangementOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedArrangementOperations,CPrivilegedArrangementOperations,IamAccess *,PrivilegedOperationsService * &>(
        __int64 *a1,
        volatile int **a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v9; // rsi
  volatile int *v10; // rdx
  int v11; // esi
  volatile int *v12; // rdx
  void *v13; // [rsp+50h] [rbp+8h] BYREF
  volatile int *v14; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  v13 = v6;
  if ( !v6 )
    return 2147942414LL;
  v9 = v6 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 1));
  *(_DWORD *)(v7 + 44) = 1;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedArrangementOperations,Microsoft::WRL::FtmBase>::`vftable'{for `IPrivilegedArrangementOperations'};
  *v9 = &CPrivilegedArrangementOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)v7 = &CPrivilegedArrangementOperations::`vftable'{for `IPrivilegedArrangementOperations'};
  *v9 = &CPrivilegedArrangementOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v14 = (volatile int *)v7;
  v13 = 0LL;
  v11 = PrivilegedOperationsBase<IPrivilegedDesktopOperations>::RuntimeClassInitialize(v7, *a2, *a3);
  if ( v11 >= 0 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 44), v10);
    *a1 = v7;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IApplicationFrameWrapper>::Release(
      v7,
      v12);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<CPrivilegedArrangementOperations>::InternalRelease(&v14);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
    return (unsigned int)v11;
  }
}
