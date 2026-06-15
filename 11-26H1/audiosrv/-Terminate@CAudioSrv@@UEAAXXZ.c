/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800DAA10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18001EB84 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x18008E518 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800AF45C (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioDGProcess@@QEAA@XZ @ 0x1800D74B4 (--1CAudioDGProcess@@QEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800DB86C (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?reset@?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAXPEAVCPowerReferenceManager@@@Z @ 0x1800DBE10 (-reset@-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@s.c)
 *     ?MME_ServiceStop@@YAXXZ @ 0x180106938 (-MME_ServiceStop@@YAXXZ.c)
 *     ??_G?$TItem@VCKsNotificationsMonitor@@@@QEAAPEAXI@Z @ 0x180122E14 (--_G-$TItem@VCKsNotificationsMonitor@@@@QEAAPEAXI@Z.c)
 *     ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014767C (--4-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180157C70 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  __int64 v2; // rcx
  AtmosCheck *v3; // rbx
  LPCRITICAL_SECTION v4; // rbx
  CKsNotificationsMonitor *v5; // rbx
  __int64 v6; // rax
  AtmosCheck *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  Microsoft::WRL::ComPtr<AtmosCheck>::operator=(&v7);
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  if ( v7 )
    AtmosCheck::Uninitialize(v7);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v7);
  if ( g_ADGProcess )
    CAudioDGProcess::CancelADGTerminationTimer(g_ADGProcess);
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  std::unique_ptr<CPowerReferenceManager>::reset(v2, 0LL);
  MME_ServiceStop();
  v3 = (AtmosCheck *)g_ADGProcess;
  if ( g_ADGProcess )
  {
    EnterCriticalSection(g_ADGProcess);
    v7 = v3;
    CAudioDGProcess::CancelADGTerminationTimer((struct _RTL_CRITICAL_SECTION *)v3);
    CAudioDGProcess::DoTerminateADG(v3);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v7);
    v4 = g_ADGProcess;
    if ( g_ADGProcess )
    {
      CAudioDGProcess::~CAudioDGProcess((CAudioDGProcess *)g_ADGProcess);
      operator delete(v4, (const struct std::nothrow_t *)0xA0);
    }
    g_ADGProcess = 0LL;
  }
  while ( g_lstKsNotificationMonitors )
  {
    v5 = *(CKsNotificationsMonitor **)(g_lstKsNotificationMonitors + 16);
    v6 = *(_QWORD *)g_lstKsNotificationMonitors;
    g_lstKsNotificationMonitors = v6;
    if ( v6 )
      *(_QWORD *)(v6 + 8) = 0LL;
    else
      qword_1801D66D0 = 0LL;
    TItem<CKsNotificationsMonitor>::`scalar deleting destructor'();
    --dword_1801D66D8;
    CKsNotificationsMonitor::Dispose(v5);
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (char *)g_hCanAcceptMMCClientEvent - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_hCanAcceptMMCClientEvent);
    g_hCanAcceptMMCClientEvent = 0LL;
  }
}
