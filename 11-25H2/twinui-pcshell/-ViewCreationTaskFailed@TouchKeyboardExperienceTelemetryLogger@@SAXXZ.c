/*
 * XREFs of ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1804680B4
 * Callers:
 *     wil::details::ScopeExitFn__lambda_19da34734f4bdb06fd399a1deabab8cc___::_ScopeExitFn__lambda_19da34734f4bdb06fd399a1deabab8cc___ @ 0x18045C54C (wil--details--ScopeExitFn__lambda_19da34734f4bdb06fd399a1deabab8cc___--_ScopeExitFn__lambda_19da.c)
 *     _lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_::operator() @ 0x18045E10C (_lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_--operator().c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed(void)
{
  const struct _tlgProvider_t *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    if ( tlgKeywordOn((__int64)v0, 0x400000000000LL) )
    {
      v3 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v1,
        byte_1807D3891,
        0LL,
        v2,
        (__int64)&v3);
    }
  }
}
