/*
 * XREFs of ??0VirtualDesktopDataSource@@QEAA@XZ @ 0x18048F824
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopDataSource@@@Z @ 0x1802259BC (--$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualD.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18007FECC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopDataSource@Multitaskin.c)
 */

VirtualDesktopDataSource *__fastcall VirtualDesktopDataSource::VirtualDesktopDataSource(VirtualDesktopDataSource *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource2,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource2,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>(this);
  *(_QWORD *)this = &VirtualDesktopDataSource::`vftable';
  *((_QWORD *)this + 1) = &VirtualDesktopDataSource::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &VirtualDesktopDataSource::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource2,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &VirtualDesktopDataSource::`vftable'{for `IDesktopVirtualDesktopDataSource'};
  *((_QWORD *)this + 4) = &VirtualDesktopDataSource::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 5) = &VirtualDesktopDataSource::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
  *((_QWORD *)this + 6) = &VirtualDesktopDataSource::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 12) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 13);
  InitializeSRWLock((PSRWLOCK)this + 14);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 35);
  return this;
}
