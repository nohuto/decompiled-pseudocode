/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1801DD7DC
 * Callers:
 *     ??$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAX$$QEAPEAUHWND__@@@Z @ 0x1801DD6D8 (--$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperie.c)
 *     ?UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX_K@Z @ 0x1801DD764 (-UndockedSearchAppExperienceManager_ResetAppRectClip_@SearchAppExperienceManagerTelemetry@@QEAAX.c)
 *     ??$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z @ 0x18023FDF0 (--$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z.c)
 *     ??$AppViewTitleChangeDataCreated@AEA_KAEA_J@TaskFlowDataEngineTelemetry@@SAXAEA_KAEA_J@Z @ 0x1803F36EC (--$AppViewTitleChangeDataCreated@AEA_KAEA_J@TaskFlowDataEngineTelemetry@@SAXAEA_KAEA_J@Z.c)
 *     ??$InputGestureOperationStarted@_K@MultitaskingViewTelemetry@@SAX$$QEA_K@Z @ 0x18048808C (--$InputGestureOperationStarted@_K@MultitaskingViewTelemetry@@SAX$$QEA_K@Z.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E31E0 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1804E43D0 (-OnShellTrackedWindowPosChanged@GamingPosturePositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@.c)
 *     ?SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E4C54 (-SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ??$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z @ 0x180630BC8 (--$ProviderWindowAdded@_K@CloudPCTelemetry@@SAX$$QEA_K@Z.c)
 *     ??$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z @ 0x180630C38 (--$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int8 *v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  __int64 v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  __int64 v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]

  v17 = 0;
  v14 = 0;
  v15 = a6;
  v12 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v16 = 8;
  v13 = 8;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v10 = *(unsigned __int16 *)(a2 + 11);
  v9 = a2 + 11;
  UserData.Reserved = 2;
  v11 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, 0LL, 4u, &UserData);
}
