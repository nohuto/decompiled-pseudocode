/*
 * XREFs of ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802CE754
 * Callers:
 *     _lambda_21bbf2e079f5591be5df5fdb5b101015_::operator() @ 0x18045D240 (_lambda_21bbf2e079f5591be5df5fdb5b101015_--operator().c)
 *     _lambda_29414a9ca6597666cdb35e84f817c693_::operator() @ 0x18045D410 (_lambda_29414a9ca6597666cdb35e84f817c693_--operator().c)
 *     _lambda_46a8ca2e66b0a909e1f565be00ec5b40_::operator() @ 0x18045D830 (_lambda_46a8ca2e66b0a909e1f565be00ec5b40_--operator().c)
 *     _lambda_5a946cfacaeb0e3185d961cd96352272_::operator() @ 0x18045D974 (_lambda_5a946cfacaeb0e3185d961cd96352272_--operator().c)
 *     _lambda_6609ff0ab640c01183d8a2076431907a_::operator() @ 0x18045DA70 (_lambda_6609ff0ab640c01183d8a2076431907a_--operator().c)
 *     _lambda_6fd8c80f4e8205d0daf1b865183c59df_::operator() @ 0x18045DC98 (_lambda_6fd8c80f4e8205d0daf1b865183c59df_--operator().c)
 *     _lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_::operator() @ 0x18045E10C (_lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_--operator().c)
 *     _lambda_ce5f0a13437f36dbd45420a359bd80e9_::operator() @ 0x18045E9CC (_lambda_ce5f0a13437f36dbd45420a359bd80e9_--operator().c)
 *     _lambda_ecf6d3fa74ef9006e73e169fd34c7f4f_::operator() @ 0x18045EC98 (_lambda_ecf6d3fa74ef9006e73e169fd34c7f4f_--operator().c)
 *     _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54 (_lambda_ff3af0abcf4100822182f80ac5bd56ae_--operator().c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed(void)
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
        byte_1807D384A,
        0LL,
        v2,
        (__int64)&v3);
    }
  }
}
