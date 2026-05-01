/*
 * XREFs of ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x1800B8DD8
 * Callers:
 *     wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x1800B8980 (wistd--__function--__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::OnTouchEvent<unsigned int,bool &,bool &>(
        WINBOOL *a1,
        char *a2,
        char *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v10; // [rsp+38h] [rbp-49h] BYREF
  char v11; // [rsp+39h] [rbp-48h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-45h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v17; // [rsp+78h] [rbp-9h]
  int v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+84h] [rbp+3h]
  WINBOOL *p_fPending; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  char *v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]
  char *v24; // [rsp+A8h] [rbp+27h]
  __int64 v25; // [rsp+B0h] [rbp+2Fh]
  __int64 *v26; // [rsp+B8h] [rbp+37h]
  __int64 v27; // [rsp+C0h] [rbp+3Fh]

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
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DCD18, qword_1808DCD30, v8);
    InitOnceComplete(&`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper, 0, &qword_1808DCD18);
  }
  LODWORD(v6) = (_DWORD)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(v7 + 24) & 0x10LL;
    if ( v6 == *(_QWORD *)(v7 + 24) )
    {
      v10 = *a3;
      v11 = *a2;
      fPending = *a1;
      v26 = &v14;
      v24 = &v10;
      v22 = &v11;
      p_fPending = &fPending;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v7 + 8);
      v25 = 1LL;
      v23 = 1LL;
      v14 = 0x2000000LL;
      v27 = 8LL;
      v21 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v17 = &unk_18080762F;
      v19 = 1;
      UserData.Reserved = 2;
      v18 = 71;
      LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v6) = EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
  }
  return v6;
}
