/*
 * XREFs of ?LogSetWindowId@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAX_K@Z @ 0x18008EAD0
 * Callers:
 *     ?SetWindowId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAX_K@Z @ 0x18008EA44 (-SetWindowId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAX_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000213C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180036710 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::LogSetWindowId(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  Microsoft::BamoImpl::BamoPrincipalImpl *v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  int ItemId; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v1 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v7 = v2;
    ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(v3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v1,
      (__int64)&unk_180212C21,
      v4,
      v5,
      (__int64)&ItemId,
      (__int64)&v7);
  }
}
