/*
 * XREFs of ??$HandleEditControlFocusChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BC86C
 * Callers:
 *     ?HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BC810 (-HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::HandleEditControlFocusChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        _BYTE *a1,
        char *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v9; // [rsp+38h] [rbp-29h] BYREF
  bool v10; // [rsp+39h] [rbp-28h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-25h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  bool *v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  char *v20; // [rsp+88h] [rbp+27h]
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  LPVOID *p_Context; // [rsp+98h] [rbp+37h]
  __int64 v23; // [rsp+A0h] [rbp+3Fh]

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    qword_1808DCD20 = 0LL;
    Context = &qword_1808DCD18;
    qword_1808DCD18 = &ShellScreenClippingLogging::`vftable';
    byte_1808DCD28 = 0;
    dword_1808DCD2C = 0;
    qword_1808DCD30 = (struct _tlgProvider_t *)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DCD18, qword_1808DCD30, v7);
    InitOnceComplete(&`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper, 0, &qword_1808DCD18);
  }
  LODWORD(v4) = (_DWORD)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 0x10) != 0 )
  {
    v4 = *(_QWORD *)(v5 + 24) & 0x10LL;
    if ( v4 == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a1 == 0;
      v9 = *a2;
      p_Context = &Context;
      v10 = !v6;
      v21 = 1LL;
      v20 = &v9;
      v19 = 1LL;
      v18 = &v10;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      Context = (LPVOID)0x1000000;
      v23 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v15 = &unk_18080F89E;
      v17 = 1;
      UserData.Reserved = 2;
      v16 = 85;
      fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v4) = EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  return v4;
}
