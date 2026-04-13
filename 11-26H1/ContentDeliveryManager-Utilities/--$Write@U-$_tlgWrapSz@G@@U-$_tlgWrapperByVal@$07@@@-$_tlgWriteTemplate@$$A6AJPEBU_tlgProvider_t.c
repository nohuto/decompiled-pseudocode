/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001010
 * Callers:
 *     ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x180023B70 (--$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z.c)
 *     ?TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z @ 0x18003C034 (-TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z.c)
 *     ??$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEBG@Z @ 0x18004827C (--$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDel.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CBC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r8

  if ( *a5 )
  {
    v5 = -1LL;
    while ( *(_WORD *)(*a5 + 2 * v5++ + 2) != 0 )
      ;
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL);
}
