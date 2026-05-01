/*
 * XREFs of ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x18007A950
 * Callers:
 *     _lambda_7e7f8cd3e685741244f76c8bd4111764_::operator() @ 0x1801A6738 (_lambda_7e7f8cd3e685741244f76c8bd4111764_--operator().c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1801CCD60 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

const struct _tlgProvider_t *__fastcall MultitaskingViewTelemetry::AltTabInvoked_(__int64 a1, char a2)
{
  const struct _tlgProvider_t *result; // rax
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  bool v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  result = WindowManagementLogging::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    result = (const struct _tlgProvider_t *)tlgKeywordOn(result, 0x200000000000LL);
    if ( (_BYTE)result )
    {
      LOBYTE(v6) = a2 & 1;
      v7 = (a2 & 2) != 0;
      return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                                              v5,
                                              (unsigned int)&unk_1808116E1,
                                              v4,
                                              v5,
                                              (__int64)&v7,
                                              (__int64)&v6);
    }
  }
  return result;
}
