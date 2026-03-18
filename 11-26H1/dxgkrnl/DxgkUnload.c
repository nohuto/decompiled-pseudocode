/*
 * XREFs of DxgkUnload @ 0x1401D5860
 * Callers:
 *     <none>
 * Callees:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x140005854 (-MonitorCleanupGlobal@@YAJXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DxgkEtwShutdown @ 0x1400799FC (DxgkEtwShutdown.c)
 *     ?DxgkDiagShutdown@@YAJXZ @ 0x140079AF4 (-DxgkDiagShutdown@@YAJXZ.c)
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x140079D4C (-DxgkCleanupTelemetry@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401DCC9C (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DpiCleanUpGlobalState @ 0x14023E524 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x14023F2D8 (DxgkCleanupPower.c)
 */

void DxgkUnload()
{
  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1527;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Dxgkrnl unloaded!", 1527LL, 0LL, 0LL, 0LL, 0LL);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal();
  if ( CCD_BTL::m_pGlobalBtl )
  {
    (*(void (__fastcall **)(struct CCD_BTL *, __int64))(*(_QWORD *)CCD_BTL::m_pGlobalBtl + 8LL))(
      CCD_BTL::m_pGlobalBtl,
      1LL);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DpiCleanUpGlobalState();
  if ( byte_140168C74 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  if ( byte_140168C75 )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0x4B677844u);
    P = 0LL;
    KtriageDumpDataArray = 0LL;
  }
  DxgkEtwShutdown();
  if ( gScreenStudyEventSubscription )
  {
    ExUnsubscribeWnfStateChange(gScreenStudyEventSubscription);
    gScreenStudyEventSubscription = 0LL;
  }
  DxgkCleanupTelemetry();
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoUnregisterShutdownNotification(g_pDeviceObject);
    IoDeleteDevice(g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
  PsTlsFree(g_DxgkThreadTlsId);
  g_DxgkThreadTlsId = -1;
  ExDeleteLookasideListEx(&g_DxgkThreadLookasideList);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(g_RegistryPath.Buffer);
  g_RegistryPath = 0LL;
}
