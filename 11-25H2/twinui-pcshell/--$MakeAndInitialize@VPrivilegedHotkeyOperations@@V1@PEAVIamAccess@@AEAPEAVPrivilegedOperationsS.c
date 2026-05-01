/*
 * XREFs of ??$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedHotkeyOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x180068F9C
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800690A8 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivi.c)
 * Callees:
 *     ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedDesktopOperations@@@@QEAAJPEAVIamAccess@@PEAVPrivilegedOperationsService@@@Z @ 0x18002012C (-RuntimeClassInitialize@-$PrivilegedOperationsBase@UIPrivilegedDesktopOperations@@@@QEAAJPEAVIam.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1800696C0 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006AD80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PrivilegedHotkeyOperations,PrivilegedHotkeyOperations,IamAccess *,PrivilegedOperationsService * &>(
        _QWORD *a1,
        volatile int **a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v9; // rdi
  volatile int *v10; // rdx
  int v11; // edi
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v12 = v6;
  if ( !v6 )
    return 2147942414LL;
  v9 = v6 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 1));
  *((_DWORD *)v7 + 11) = 1;
  *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedHotkeyOperations,Microsoft::WRL::FtmBase>::`vftable'{for `IPrivilegedHotkeyOperations'};
  *v9 = &PrivilegedHotkeyOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v7[6] = 0LL;
  v7[7] = 0LL;
  *v7 = &PrivilegedHotkeyOperations::`vftable'{for `IPrivilegedHotkeyOperations'};
  *v9 = &PrivilegedHotkeyOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v13 = v7;
  v12 = 0LL;
  v11 = PrivilegedOperationsBase<IPrivilegedDesktopOperations>::RuntimeClassInitialize((__int64)v7, *a2, *a3);
  if ( v11 >= 0 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v7 + 44), v10);
    *a1 = v7;
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v13);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(v7);
    return (unsigned int)v11;
  }
}
