/*
 * XREFs of ?LogSendZoomGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@AEAAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x18015B3EC
 * Callers:
 *     ?ZoomGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x18015BF24 (-ZoomGestureDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJW4MagnifierGestureState@Inp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180001FB4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void BamoImpl::BamoMagnifierControllerProxyImpl::LogSendZoomGestureDetected(__int64 a1, __int64 a2, __int64 a3, ...)
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
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v7 = *(_QWORD *)(v5 + 16);
    LODWORD(v12) = v4;
    v9 = v6;
    v8 = *(_DWORD *)(v7 + 36);
    v11[0] = *(_DWORD *)(v5 + 24);
    v10 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_180224F61,
      v4,
      v5,
      (__int64)v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)va);
  }
}
