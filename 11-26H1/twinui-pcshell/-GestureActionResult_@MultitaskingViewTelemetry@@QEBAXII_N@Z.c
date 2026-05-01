/*
 * XREFs of ?GestureActionResult_@MultitaskingViewTelemetry@@QEBAXII_N@Z @ 0x1801DB3F0
 * Callers:
 *     _lambda_5f246d3d225ef97a552fc7098e7c8139_::operator() @ 0x18049A2EC (_lambda_5f246d3d225ef97a552fc7098e7c8139_--operator().c)
 *     ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z @ 0x1804AA1A8 (-PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801DB49C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

void __fastcall MultitaskingViewTelemetry::GestureActionResult_(
        MultitaskingViewTelemetry *this,
        int a2,
        int a3,
        char a4)
{
  const struct _tlgProvider_t *v7; // rax
  int v8; // r9d
  int v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+44h] [rbp-14h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  MultitaskingViewTelemetry *v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = this;
  v7 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v7 > 5u
    && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
  {
    LOBYTE(v12) = a4;
    v9 = a3;
    v10 = a2;
    v11 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (_DWORD)v7,
      (unsigned int)&unk_180811BEA,
      0,
      v8,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v12);
  }
}
