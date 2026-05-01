/*
 * XREFs of ??$HandleEditControlSelectionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000$$QEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BD95C
 * Callers:
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18024EB80 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800BD85C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::HandleEditControlSelectionChanged<float &,float &,float &,float &,unsigned int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        WINBOOL *a6)
{
  __int64 v10; // rax
  __int64 v11; // r10
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // ecx
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v28; // [rsp+88h] [rbp-80h]
  int v29; // [rsp+90h] [rbp-78h]
  int v30; // [rsp+94h] [rbp-74h]
  __int64 *v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  int *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  int *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  int *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  WINBOOL *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  __int64 *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]

  Context = 0LL;
  fPending[0] = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
         0,
         fPending,
         &Context)
    && fPending[0] )
  {
    qword_1808DCD20 = 0LL;
    Context = &qword_1808DCD18;
    qword_1808DCD18 = &ShellScreenClippingLogging::`vftable';
    byte_1808DCD28 = 0;
    dword_1808DCD2C = 0;
    qword_1808DCD30 = (struct _tlgProvider_t *)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808DCD18, qword_1808DCD30, v16);
    InitOnceComplete(&`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper, 0, &qword_1808DCD18);
  }
  LODWORD(v10) = (_DWORD)Context;
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u && (*(_BYTE *)(v11 + 16) & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(v11 + 24) & 0x10LL;
    if ( v10 == *(_QWORD *)(v11 + 24) )
    {
      v12 = *a3;
      v21 = *a4;
      v13 = *a2;
      v22 = v12;
      v14 = *a1;
      fPending[0] = *a6;
      v23 = v13;
      v15 = *a5;
      v43 = &v25;
      v41 = fPending;
      v39 = &v20;
      v37 = &v21;
      v35 = &v22;
      v33 = &v23;
      v31 = &v24;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v11 + 8);
      v20 = v15;
      LODWORD(v24) = v14;
      v25 = 0x1000000LL;
      v44 = 8LL;
      v42 = 4LL;
      v40 = 4LL;
      v38 = 4LL;
      v36 = 4LL;
      v34 = 4LL;
      v32 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v28 = &unk_18080FAD6;
      UserData.Reserved = 2;
      v29 = 105;
      v30 = 1;
      LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v10) = EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
  }
  return v10;
}
