/*
 * XREFs of ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x1801AC0BC
 * Callers:
 *     _lambda_7e7f8cd3e685741244f76c8bd4111764_::operator() @ 0x1801ABEB0 (_lambda_7e7f8cd3e685741244f76c8bd4111764_--operator().c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1801D57B0 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

char __fastcall MultitaskingViewTelemetry::AltTabInvoked_(__int64 a1, char a2)
{
  const struct _tlgProvider_t *v3; // rax
  int v4; // r8d
  int v5; // r9d
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  bool v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = a1;
  v3 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v3, 0x200000000000LL);
    if ( (_BYTE)v3 )
    {
      LOBYTE(v7) = a2 & 1;
      v8 = (a2 & 2) != 0;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                     v5,
                     (unsigned int)&unk_1807DA373,
                     v4,
                     v5,
                     (__int64)&v8,
                     (__int64)&v7);
    }
  }
  return (char)v3;
}
