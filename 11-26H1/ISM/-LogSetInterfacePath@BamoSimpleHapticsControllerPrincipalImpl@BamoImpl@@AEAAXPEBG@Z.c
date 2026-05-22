/*
 * XREFs of ?LogSetInterfacePath@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEBG@Z @ 0x180189BF0
 * Callers:
 *     ?SetInterfacePath@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18018AE9C (-SetInterfacePath@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180003A0C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180036710 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::LogSetInterfacePath(
        BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rbx
  const WCHAR *v3; // r8
  Microsoft::BamoImpl::BamoPrincipalImpl *v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  int ItemId; // [rsp+50h] [rbp+18h] BYREF
  const WCHAR *v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v8 = v3;
    ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(v4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v2,
      (__int64)&unk_180227BE7,
      v5,
      v6,
      (__int64)&ItemId,
      &v8);
  }
}
