/*
 * XREFs of ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18002630C
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180044400 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180044790 (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x18002642C (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TsSessionRefreshSessionInformation(DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  DWORD v5; // edx
  const char *v6; // r9
  void *v8; // rsi
  LPWSTR v9; // rbp
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v12; // [rsp+50h] [rbp+8h] BYREF
  DWORD pBytesReturned; // [rsp+58h] [rbp+10h] BYREF
  LPWSTR ppBuffer; // [rsp+60h] [rbp+18h] BYREF

  v2 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 4u && tlgKeywordOn((__int64)v2, 0x20000LL) )
  {
    v12 = *a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v3,
      byte_18005B3FC,
      v3,
      v4,
      (__int64)&v12);
  }
  v5 = *a1;
  pBytesReturned = 0;
  ppBuffer = 0LL;
  if ( !WTSQuerySessionInformationW(0LL, v5, WTSSessionInfo, &ppBuffer, &pBytesReturned) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x31E,
             (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             v6);
  EnterCriticalSection(&stru_180068A08);
  v8 = (void *)*((_QWORD *)a1 + 3);
  v9 = ppBuffer;
  if ( v8 )
  {
    LastError = GetLastError();
    WTSFreeMemory(v8);
    SetLastError(LastError);
  }
  *((_QWORD *)a1 + 3) = v9;
  TsSessionRefreshUserSid((struct TSSession *)a1);
  LeaveCriticalSection(&stru_180068A08);
  return 0LL;
}
