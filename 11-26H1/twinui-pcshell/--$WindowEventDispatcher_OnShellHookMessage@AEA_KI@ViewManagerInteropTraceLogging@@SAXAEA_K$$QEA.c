/*
 * XREFs of ??$WindowEventDispatcher_OnShellHookMessage@AEA_KI@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAI@Z @ 0x180144B2C
 * Callers:
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x180241B50 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_OnShellHookMessage<unsigned __int64 &,unsigned int>(
        __int64 *a1,
        WINBOOL *a2)
{
  ULONG result; // eax
  __int64 v5; // rcx
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  __int64 v9; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v12; // [rsp+78h] [rbp+17h]
  int v13; // [rsp+80h] [rbp+1Fh]
  int v14; // [rsp+84h] [rbp+23h]
  __int64 *v15; // [rsp+88h] [rbp+27h]
  __int64 v16; // [rsp+90h] [rbp+2Fh]
  WINBOOL *p_fPending; // [rsp+98h] [rbp+37h]
  __int64 v18; // [rsp+A0h] [rbp+3Fh]

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    qword_1808DC710 = 0LL;
    Context = &qword_1808DC708;
    qword_1808DC708 = &ShellScreenClippingLogging::`vftable';
    byte_1808DC718 = 0;
    dword_1808DC71C = 0;
    qword_1808DC720 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DC708, qword_1808DC720, v6);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_1808DC708);
  }
  result = (unsigned int)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    fPending = *a2;
    v9 = *a1;
    p_fPending = &fPending;
    v15 = &v9;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    v18 = 4LL;
    v16 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v12 = &unk_180802650;
    UserData.Reserved = 2;
    v13 = 59;
    v14 = 1;
    LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return result;
}
