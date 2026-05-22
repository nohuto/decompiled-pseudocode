/*
 * XREFs of ?LogSendOnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@AEAAXW4InputActivationState@Input@UI@Windows@@@Z @ 0x18008B954
 * Callers:
 *     ?OnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJW4InputActivationState@Input@UI@Windows@@@Z @ 0x18003677C (-OnActivate@BamoActivationListenerInputObjectProxyImpl@BamoImpl@@QEAAJW4InputActivationState@Inp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001E50 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void BamoImpl::BamoActivationListenerInputObjectProxyImpl::LogSendOnActivate()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  int v4; // edx
  _DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v3 = *(_QWORD *)(v1 + 16);
    v6 = v2;
    v4 = *(_DWORD *)(v3 + 36);
    v5[0] = *(_DWORD *)(v1 + 24);
    v7 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v0,
      (__int64)&unk_180219624,
      v1,
      v2,
      (__int64)v5,
      (__int64)&v7,
      (__int64)&v6);
  }
}
