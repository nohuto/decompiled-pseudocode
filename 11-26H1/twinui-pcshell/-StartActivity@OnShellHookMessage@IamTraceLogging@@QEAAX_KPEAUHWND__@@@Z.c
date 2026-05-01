/*
 * XREFs of ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x1800434A0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800425B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180043B24 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::StartActivity(
        IamTraceLogging::OnShellHookMessage *this,
        __int64 a2,
        HWND a3)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  const GUID *v12; // rcx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID Context; // [rsp+30h] [rbp-79h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-71h] BYREF
  HWND v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+48h] [rbp-61h] BYREF
  __int64 v18; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v21; // [rsp+80h] [rbp-29h]
  int v22; // [rsp+88h] [rbp-21h]
  int v23; // [rsp+8Ch] [rbp-1Dh]
  __int64 *v24; // [rsp+90h] [rbp-19h]
  __int64 v25; // [rsp+98h] [rbp-11h]
  PSRWLOCK *p_SRWLock; // [rsp+A0h] [rbp-9h]
  __int64 v27; // [rsp+A8h] [rbp-1h]
  __int64 *v28; // [rsp+B0h] [rbp+7h]
  __int64 v29; // [rsp+B8h] [rbp+Fh]
  HWND *v30; // [rsp+C0h] [rbp+17h]
  __int64 v31; // [rsp+C8h] [rbp+1Fh]

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
  if ( v3 )
  {
    v7 = v3 + 33;
    AcquireSRWLockExclusive(v7);
    Context = 0LL;
  }
  else
  {
    v7 = 0LL;
    SRWLock = 0LL;
  }
  v8 = *((_QWORD *)this + 34);
  if ( *(_DWORD *)CAppManagerLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  else
    *(_OWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)v8 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  Context = 0LL;
  LODWORD(SRWLock) = 0;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&SRWLock, &Context)
    && (_DWORD)SRWLock )
  {
    qword_1808DA380 = 0LL;
    Context = &qword_1808DA378;
    qword_1808DA378 = &ShellScreenClippingLogging::`vftable';
    byte_1808DA388 = 0;
    dword_1808DA38C = 0;
    qword_1808DA390 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DA378, qword_1808DA390, v13);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1808DA378);
  }
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v16 = a3;
    v17 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v11 = *((_QWORD *)this + 34);
    LODWORD(SRWLock) = CurrentThreadId;
    v18 = 0LL;
    if ( !*(_BYTE *)(v11 + 4) || _tlgGuidIsZero((const struct _GUID *)(v11 + 24)) )
      v12 = 0LL;
    v31 = 8LL;
    v30 = &v16;
    v29 = 8LL;
    v28 = &v17;
    v27 = 4LL;
    p_SRWLock = &SRWLock;
    v25 = 8LL;
    v24 = &v18;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v21 = &unk_1807E2CC0;
    UserData.Reserved = 2;
    v22 = 78;
    v23 = 1;
    LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v9 + 32), &EventDescriptor, (LPCGUID)(v11 + 8), v12, 6u, &UserData);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((IamTraceLogging::OnShellHookMessage *)((char *)this + 288));
}
