/*
 * XREFs of ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800898E4
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18005D6B4 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x1800897E0 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z @ 0x18001F2E0 (-UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800E386C (-Clear@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 *     ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800E38B8 (-Clear@-$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E4E78 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDOCF@@@details@wil@@QEAA_NXZ @ 0x1800E4F14 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDOCF@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall PnpDeviceWatcher::Shutdown(PnpDeviceWatcher *this, void **a2)
{
  void *v3; // rcx
  void **v4; // rdx
  struct PnpDeviceWatcher::DeviceListEntry *v5; // rbx
  RTL_SRWLOCK *v6; // rsi
  struct PnpDeviceWatcher::DeviceListEntry *i; // rdi
  struct PnpDeviceWatcher::DeviceListEntry *v8; // rdi
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  v3 = (void *)_InterlockedExchange64((volatile __int64 *)this + 3, 0LL);
  if ( v3 )
    CloseHandle(v3);
  PnpApiWrapper::Details::UnregisterDeviceEventHandler((PnpDeviceWatcher *)((char *)this + 16), a2);
  PnpApiWrapper::Details::UnregisterDeviceEventHandler((PnpDeviceWatcher *)((char *)this + 8), v4);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDOCF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDOCF>::GetImpl'::`2'::impl) )
  {
    v5 = (PnpDeviceWatcher *)((char *)this + 64);
    v6 = (RTL_SRWLOCK *)((char *)this + 56);
    AcquireSRWLockExclusive((PSRWLOCK)this + 7);
    v9 = (RTL_SRWLOCK *)((char *)this + 56);
    for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 8);
          i != v5;
          i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
    {
      PnpDeviceWatcher::StopDeviceObject(this, i);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  }
  else
  {
    v8 = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 8);
    v5 = (PnpDeviceWatcher *)((char *)this + 64);
    while ( v8 != (PnpDeviceWatcher *)((char *)this + 64) )
    {
      PnpDeviceWatcher::StopDeviceObject(this, v8);
      v8 = *(struct PnpDeviceWatcher::DeviceListEntry **)v8;
    }
    v6 = (RTL_SRWLOCK *)((char *)this + 56);
  }
  SleepEx(0, 1);
  NtList<PnpDeviceWatcher::NotificationListEntry>::Clear((char *)this + 32);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDOCF>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDOCF>::GetImpl'::`2'::impl) )
  {
    AcquireSRWLockExclusive(v6);
    v9 = v6;
    NtList<PnpDeviceWatcher::DeviceListEntry>::Clear(v5);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  }
  else
  {
    NtList<PnpDeviceWatcher::DeviceListEntry>::Clear(v5);
  }
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((char *)this + 88);
}
