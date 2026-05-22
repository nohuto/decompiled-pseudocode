/*
 * XREFs of ?LogSendDropTargetChanged@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I2@Z @ 0x18014888C
 * Callers:
 *     ?DropTargetChanged@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I2@Z @ 0x1801480E4 (-DropTargetChanged@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAni.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@334@Z @ 0x180007014 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U2@@-$_tlgWriteTemplate@$.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void BamoImpl::BamoDragManagerClientProxyImpl::LogSendDropTargetChanged(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // [rsp+60h] [rbp-10h] BYREF
  __int64 v8; // [rsp+68h] [rbp-8h] BYREF
  __int64 v9; // [rsp+90h] [rbp+20h] BYREF
  va_list va; // [rsp+90h] [rbp+20h]
  __int64 v11; // [rsp+98h] [rbp+28h] BYREF
  va_list va1; // [rsp+98h] [rbp+28h]
  __int64 v13; // [rsp+A0h] [rbp+30h] BYREF
  va_list va2; // [rsp+A0h] [rbp+30h]
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF
  va_list va3; // [rsp+A8h] [rbp+38h]
  __int64 v17; // [rsp+B0h] [rbp+40h]
  __int64 v18; // [rsp+B8h] [rbp+48h]
  __int64 v19; // [rsp+C0h] [rbp+50h] BYREF
  va_list va4; // [rsp+C0h] [rbp+50h]
  __int64 v21; // [rsp+C8h] [rbp+58h]
  __int64 v22; // [rsp+D0h] [rbp+60h]
  va_list va5; // [rsp+D8h] [rbp+68h] BYREF

  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _QWORD);
  v17 = va_arg(va4, _QWORD);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v19 = va_arg(va5, _QWORD);
  v21 = va_arg(va5, _QWORD);
  v22 = va_arg(va5, _QWORD);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v7 = v22;
    LODWORD(v11) = v21;
    LODWORD(v9) = v18;
    v8 = v17;
    v5 = *(_QWORD *)(v3 + 16);
    LODWORD(v13) = v4;
    v6 = *(_DWORD *)(v5 + 36);
    LODWORD(v19) = *(_DWORD *)(v3 + 24);
    LODWORD(v15) = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v2,
      (__int64)&unk_180222600,
      v2,
      v3,
      (__int64)va4,
      (__int64)va3,
      (__int64)va2,
      (__int64)&v8,
      (__int64)va,
      (__int64)va1,
      (__int64)&v7);
  }
}
