/*
 * XREFs of ??$HandleForegroundChanged@PEBGAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800B69EC
 * Callers:
 *     ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800B6920 (-HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800384BC (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::HandleForegroundChanged<unsigned short const *,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        const WCHAR **a1,
        char *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  const WCHAR *v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v11; // [rsp+38h] [rbp-39h] BYREF
  WINBOOL fPending[3]; // [rsp+3Ch] [rbp-35h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  __int64 v14; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  const WCHAR *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  char *v23; // [rsp+98h] [rbp+27h]
  __int64 v24; // [rsp+A0h] [rbp+2Fh]
  __int64 *v25; // [rsp+A8h] [rbp+37h]
  __int64 v26; // [rsp+B0h] [rbp+3Fh]

  Context = 0LL;
  fPending[0] = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
         0,
         fPending,
         &Context)
    && fPending[0] )
  {
    qword_18089C680 = 0LL;
    Context = &qword_18089C678;
    qword_18089C678 = &ShellScreenClippingLogging::`vftable';
    byte_18089C688 = 0;
    dword_18089C68C = 0;
    qword_18089C690 = (struct _tlgProvider_t *)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18089C678, qword_18089C690, v9);
    InitOnceComplete(&`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper, 0, &qword_18089C678);
  }
  LODWORD(v4) = (_DWORD)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 0x10) != 0 )
  {
    v4 = *(_QWORD *)(v5 + 24) & 0x10LL;
    if ( v4 == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a1;
      v11 = *a2;
      v25 = &v14;
      v23 = &v11;
      v14 = 0x2000000LL;
      v26 = 8LL;
      v24 = 1LL;
      if ( v6 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( v6[v7] );
        v8 = 2 * v7 + 2;
      }
      else
      {
        v6 = &LocaleName;
        v8 = 2;
      }
      v21 = v8;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      v20 = v6;
      v22 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v17 = &unk_1807D899A;
      UserData.Reserved = 2;
      v19 = 1;
      v18 = 73;
      fPending[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v4) = EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  return v4;
}
