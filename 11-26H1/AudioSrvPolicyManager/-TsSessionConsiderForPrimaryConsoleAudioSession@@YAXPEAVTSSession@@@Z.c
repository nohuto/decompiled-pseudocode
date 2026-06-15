/*
 * XREFs of ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180007BB0
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?IsPrimaryConsoleAudioSession@TSSession@@QEAAHXZ @ 0x180007D2C (-IsPrimaryConsoleAudioSession@TSSession@@QEAAHXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002B118 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionLogonConnectTime@@YA_JPEAVTSSession@@@Z @ 0x18002E9CC (-TsSessionLogonConnectTime@@YA_JPEAVTSSession@@@Z.c)
 */

void __fastcall TsSessionConsiderForPrimaryConsoleAudioSession(struct TSSession *a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 *i; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+8h] BYREF

  EnterCriticalSection(&stru_180068A08);
  v2 = 0LL;
  v8 = &stru_180068A08;
  if ( *((_DWORD *)a1 + 1) || (v3 = *(_DWORD *)a1, v3 == (unsigned int)RtlGetCurrentServiceSessionId()) )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  }
  else
  {
    v4 = TsSessionLogonConnectTime(a1);
    v5 = qword_180068A38;
    v6 = v4;
    for ( i = *(__int64 **)qword_180068A38;
          i != (__int64 *)v5 && !(unsigned int)TSSession::IsPrimaryConsoleAudioSession((TSSession *)i[3]);
          i = (__int64 *)*i )
    {
      ;
    }
    if ( i != (__int64 *)qword_180068A38 )
      v2 = TsSessionLogonConnectTime((struct TSSession *)i[3]);
    if ( v6 > v2 )
      TsSessionNewPrimaryConsoleAudioSession(a1);
    LeaveCriticalSection(&stru_180068A08);
  }
}
