/*
 * XREFs of ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1803ED2A0
 * Callers:
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x1803EFB90 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@I.c)
 *     ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x1803EFCD0 (-SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1803F2A18 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1803F3060 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802AB878 (-Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = TaskFlowDataEngineTelemetry::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x200000000000LL) )
    {
      v4 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v2,
        byte_1807CB7E8,
        0LL,
        v3,
        (__int64)&v4);
    }
  }
}
