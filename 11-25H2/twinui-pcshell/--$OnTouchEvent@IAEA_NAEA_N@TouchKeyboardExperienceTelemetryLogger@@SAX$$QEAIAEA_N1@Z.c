/*
 * XREFs of ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x18003508C
 * Callers:
 *     wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x18018BF30 (wistd--__function--__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800384BC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::OnTouchEvent<unsigned int,bool &,bool &>(
        _DWORD *a1,
        char *a2,
        char *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // al
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v11; // [rsp+38h] [rbp-49h] BYREF
  char v12; // [rsp+39h] [rbp-48h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-45h] BYREF
  _DWORD v14[2]; // [rsp+40h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-39h] BYREF
  __int64 v16; // [rsp+50h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  _DWORD *v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+94h] [rbp+13h]
  char *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  char *v28; // [rsp+A8h] [rbp+27h]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]
  __int64 *v31; // [rsp+B8h] [rbp+37h]
  int v32; // [rsp+C0h] [rbp+3Fh]
  int v33; // [rsp+C4h] [rbp+43h]

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    qword_18089C680 = 0LL;
    dword_18089C68C = 0;
    Context = &qword_18089C678;
    qword_18089C678 = &ShellScreenClippingLogging::`vftable';
    byte_18089C688 = 0;
    qword_18089C690 = (struct _tlgProvider_t *)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18089C678, qword_18089C690, v9);
    InitOnceComplete(&`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper, 0, &qword_18089C678);
  }
  LODWORD(v6) = (_DWORD)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(v7 + 24) & 0x10LL;
    if ( v6 == *(_QWORD *)(v7 + 24) )
    {
      v8 = *a3;
      v33 = 0;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v11 = v8;
      v12 = *a2;
      v14[0] = *a1;
      v31 = &v16;
      v28 = &v11;
      v25 = &v12;
      v22 = v14;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v7 + 8);
      v29 = 1;
      v26 = 1;
      v16 = 0x2000000LL;
      v32 = 8;
      v23 = 4;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v19 = &unk_1807D132C;
      v21 = 1;
      UserData.Reserved = 2;
      v20 = 71;
      v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v6) = EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
  }
  return v6;
}
