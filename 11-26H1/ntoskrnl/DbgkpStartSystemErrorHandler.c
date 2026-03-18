/*
 * XREFs of DbgkpStartSystemErrorHandler @ 0x14078AF7C
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryWnfStateNameInformation @ 0x140726230 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 */

__int64 DbgkpStartSystemErrorHandler()
{
  unsigned int v0; // ebx
  BOOL v1; // edi
  ULONGLONG RegHandle; // [rsp+48h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-28h] BYREF

  v0 = 0;
  RegHandle = 0LL;
  v1 = 0;
  ZwQueryWnfStateNameInformation((__int64)&WNF_WER_SERVICE_START, 1LL);
  if ( EtwRegister(&ProviderId, 0LL, 0LL, &RegHandle) >= 0 )
  {
    EventDescriptor = 0LL;
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) )
      v1 = EtwWrite(RegHandle, &EventDescriptor, 0LL, 0, 0LL) >= 0;
    EtwUnregister(RegHandle);
  }
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
