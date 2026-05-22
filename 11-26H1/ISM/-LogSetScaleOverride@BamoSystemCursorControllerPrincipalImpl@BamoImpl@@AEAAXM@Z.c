/*
 * XREFs of ?LogSetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXM@Z @ 0x180091C78
 * Callers:
 *     ?SetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAXM@Z @ 0x180091BEC (-SetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAXM@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001DDC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180036710 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::LogSetScaleOverride(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        float a2)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BamoPrincipalImpl *v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9
  float v6; // [rsp+50h] [rbp+18h] BYREF
  int ItemId; // [rsp+58h] [rbp+20h] BYREF

  v2 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = a2;
    ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(v3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_180217A1E,
      v4,
      v5,
      (__int64)&ItemId,
      (__int64)&v6);
  }
}
