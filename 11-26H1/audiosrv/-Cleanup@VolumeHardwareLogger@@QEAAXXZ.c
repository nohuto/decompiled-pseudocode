/*
 * XREFs of ?Cleanup@VolumeHardwareLogger@@QEAAXXZ @ 0x180117838
 * Callers:
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x1801192A0 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x180118C58 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 */

void __fastcall VolumeHardwareLogger::Cleanup(VolumeHardwareLogger *this)
{
  struct _TP_TIMER *v2; // rcx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  v3 = (struct _RTL_CRITICAL_SECTION *)this;
  *((_BYTE *)this + 56) = 1;
  SetThreadpoolTimer(v2, 0LL, 0, 0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v3);
  WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 6), 1);
  CloseThreadpoolTimer(*((PTP_TIMER *)this + 6));
  VolumeHardwareLogger::LogBurst(this);
  *((_QWORD *)this + 8) = 0LL;
}
