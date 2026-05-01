/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHolographicViewTransitionNotification@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180080E4C
 * Callers:
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180080D78 (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180063BA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHolographicViewTransitionNotification,CVirtualDesktopHolographicViewTransitionNotification,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rbx
  volatile int *v10; // rdx
  volatile int *v11; // rdx

  *a1 = 0LL;
  v6 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
    return 2147942414LL;
  v8 = v6 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 1));
  *((_DWORD *)v7 + 11) = 1;
  *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHolographicViewTransitionNotification,Microsoft::WRL::FtmBase>::`vftable'{for `IHolographicViewTransitionNotification'};
  *v8 = &CVirtualDesktopHolographicViewTransitionNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v7 = &CVirtualDesktopHolographicViewTransitionNotification::`vftable'{for `IHolographicViewTransitionNotification'};
  *v8 = &CVirtualDesktopHolographicViewTransitionNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v7[6] = 0LL;
  v7[7] = 0LL;
  v9 = *a3;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v7 + 6, *a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v7 + 7, v9);
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v7 + 44), v10);
  *a1 = v7;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
    (__int64)v7,
    v11);
  return 0LL;
}
