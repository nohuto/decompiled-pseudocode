/*
 * XREFs of ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002B118
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180007BB0 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180044400 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180044790 (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ?IsPrimaryConsoleAudioSession@TSSession@@QEAAHXZ @ 0x180007D2C (-IsPrimaryConsoleAudioSession@TSSession@@QEAAHXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180026AE8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x180043E0C (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 */

void __fastcall TsSessionNewPrimaryConsoleAudioSession(struct TSSession *a1)
{
  int v2; // ebx
  __int64 v3; // r14
  __int64 *i; // rbx
  unsigned int *v5; // rax
  unsigned int v6; // ebx
  const struct _tlgProvider_t *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp+18h] BYREF

  EnterCriticalSection(&stru_180068A08);
  v2 = *(_DWORD *)a1;
  v16 = &stru_180068A08;
  if ( v2 == (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    LeaveCriticalSection(&stru_180068A08);
  }
  else
  {
    v3 = qword_180068A38;
    for ( i = *(__int64 **)qword_180068A38;
          i != (__int64 *)v3 && !(unsigned int)TSSession::IsPrimaryConsoleAudioSession((TSSession *)i[3]);
          i = (__int64 *)*i )
    {
      ;
    }
    if ( i == (__int64 *)qword_180068A38 )
      v5 = 0LL;
    else
      v5 = (unsigned int *)i[3];
    if ( v5 != (unsigned int *)a1 )
    {
      v6 = -2;
      if ( v5 )
      {
        v6 = *v5;
        v5[278] = 0;
        if ( g_MaxSessions <= 1 )
          v5[9] = 1;
      }
      *((_DWORD *)a1 + 278) = 1;
      *((_DWORD *)a1 + 9) = 0;
      if ( g_MaxSessions <= 1 )
      {
        v7 = AudioSrvPolicyManagerTelemetryProvider::Provider();
        if ( *(_DWORD *)v7 > 4u && tlgKeywordOn((__int64)v7, 0x20000LL) )
        {
          v14 = *(_DWORD *)a1;
          v15 = v6;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v8,
            byte_18005B38C,
            v9,
            v10,
            (__int64)&v15,
            (__int64)&v14);
        }
        v11 = QueueSessionMuteUnmute(v6, *(_DWORD *)a1);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x374,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)(unsigned int)v11,
            v12);
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
  }
}
