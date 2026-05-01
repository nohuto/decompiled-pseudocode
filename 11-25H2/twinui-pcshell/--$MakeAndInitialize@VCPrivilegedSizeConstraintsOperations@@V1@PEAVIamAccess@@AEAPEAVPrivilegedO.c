/*
 * XREFs of ??$MakeAndInitialize@VCPrivilegedSizeConstraintsOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedSizeConstraintsOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x1802397B8
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1802B9B44 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedSizeConstraintsOperatio.c)
 * Callees:
 *     ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedDesktopOperations@@@@QEAAJPEAVIamAccess@@PEAVPrivilegedOperationsService@@@Z @ 0x18002012C (-RuntimeClassInitialize@-$PrivilegedOperationsBase@UIPrivilegedDesktopOperations@@@@QEAAJPEAVIam.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180191888 (-InternalRelease@-$ComPtr@VCPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedSizeConstraintsOperations,CPrivilegedSizeConstraintsOperations,IamAccess *,PrivilegedOperationsService * &>(
        __int64 *a1,
        volatile int **a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v9; // rdi
  volatile int *v10; // rdx
  int v11; // edi
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v13; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  v12 = v6;
  if ( !v6 )
    return 2147942414LL;
  v9 = v6 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 1));
  *(_DWORD *)(v7 + 44) = 1;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::`vftable'{for `IPrivilegedSizeConstraintsOperations'};
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)v7 = &CPrivilegedSizeConstraintsOperations::`vftable'{for `IPrivilegedSizeConstraintsOperations'};
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v13 = (volatile signed __int32 *)v7;
  v12 = 0LL;
  v11 = PrivilegedOperationsBase<IPrivilegedDesktopOperations>::RuntimeClassInitialize(v7, *a2, *a3);
  if ( v11 >= 0 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 44), v10);
    *a1 = v7;
    v11 = 0;
  }
  Microsoft::WRL::ComPtr<CPrivilegedSizeConstraintsOperations>::InternalRelease(&v13);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return (unsigned int)v11;
}
