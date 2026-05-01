/*
 * XREFs of ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x18049A670
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18049A43C (--$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInter.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopThumbnailWindowFilter@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18049A64C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopThumbna.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

VirtualDesktopThumbnailWindowFilter *__fastcall VirtualDesktopThumbnailWindowFilter::VirtualDesktopThumbnailWindowFilter(
        VirtualDesktopThumbnailWindowFilter *this)
{
  unsigned __int64 v2; // rdi

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>();
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `IVirtualDesktopThumbnailWindowFilter'};
  v2 = (unsigned __int64)this + 8;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopThumbnailWindowFilter::`vftable'{for `IVirtualDesktopThumbnailWindowFilter'};
  *(_QWORD *)v2 = &VirtualDesktopThumbnailWindowFilter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 44) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = v2 & -(__int64)(this != 0LL);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
