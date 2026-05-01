/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801CDD6C
 * Callers:
 *     ??0VirtualDesktopAcessibility@@QEAA@XZ @ 0x1801CDCE0 (--0VirtualDesktopAcessibility@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@QEAA@XZ @ 0x1801CDE10 (--0-$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx

  VirtualDesktopNotificationBase<IVirtualDesktopNotification>::VirtualDesktopNotificationBase<IVirtualDesktopNotification>(a1);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 24));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::`vftable'{for `IVirtualDesktopAccessibilityInternal'};
  *(_QWORD *)(a1 + 24) = &VirtualDesktopAcessibility::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
