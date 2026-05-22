/*
 * XREFs of ?LogSendProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIAEBUDragOperationResult@Input@Internal@UI@Windows@@I@Z @ 0x18011DE7C
 * Callers:
 *     ?ProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientPrincipal@@@Z @ 0x180123F2C (-ProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIAEBUDragOperationResult@Input@Intern.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180001FB4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoGestureServicesProxyImpl::LogSendProcessResult(
        BamoImpl::BamoGestureServicesProxyImpl *this,
        __int64 a2,
        const struct Windows::UI::Internal::Input::DragOperationResult *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // rax
  int v8; // edx
  int v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v11[4]; // [rsp+48h] [rbp-10h] BYREF
  const struct Windows::UI::Internal::Input::DragOperationResult *v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v7 = *(_QWORD *)(v4 + 16);
    LODWORD(v12) = v5;
    v9 = v6;
    v8 = *(_DWORD *)(v7 + 36);
    v11[0] = *(_DWORD *)(v4 + 24);
    v10 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_180219054,
      v4,
      v5,
      (__int64)v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v12);
  }
}
