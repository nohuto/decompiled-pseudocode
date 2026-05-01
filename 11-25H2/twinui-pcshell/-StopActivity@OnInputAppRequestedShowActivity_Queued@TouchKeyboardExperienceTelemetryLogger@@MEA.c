/*
 * XREFs of ?StopActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@MEAAXXZ @ 0x1801AF5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1800908D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800908D8.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::StopActivity(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *this)
{
  __int64 v1; // rax
  int v3; // ecx
  const struct _tlgProvider_t *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rdi
  const struct _tlgProvider_t *v9; // r9
  const wchar_t *v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // [rsp+C0h] [rbp-80h] BYREF
  int v13; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v14; // [rsp+C8h] [rbp-78h] BYREF
  int v15; // [rsp+CCh] [rbp-74h] BYREF
  int v16; // [rsp+D0h] [rbp-70h] BYREF
  int v17; // [rsp+D4h] [rbp-6Ch] BYREF
  int v18; // [rsp+D8h] [rbp-68h] BYREF
  int v19; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  const wchar_t *v22; // [rsp+F8h] [rbp-48h] BYREF
  const WCHAR *v23; // [rsp+100h] [rbp-40h] BYREF
  const wchar_t *v24; // [rsp+108h] [rbp-38h] BYREF
  const WCHAR *v25; // [rsp+110h] [rbp-30h] BYREF
  const wchar_t *v26; // [rsp+118h] [rbp-28h] BYREF
  const wchar_t *v27; // [rsp+120h] [rbp-20h] BYREF
  const WCHAR *v28; // [rsp+128h] [rbp-18h] BYREF
  const wchar_t *v29; // [rsp+130h] [rbp-10h] BYREF
  const wchar_t *v30; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+0h] BYREF
  void *v32; // [rsp+150h] [rbp+10h]
  int v33; // [rsp+158h] [rbp+18h]
  int v34; // [rsp+15Ch] [rbp+1Ch]
  __int64 *v35; // [rsp+160h] [rbp+20h]
  int v36; // [rsp+168h] [rbp+28h]
  int v37; // [rsp+16Ch] [rbp+2Ch]
  int *v38; // [rsp+170h] [rbp+30h]
  int v39; // [rsp+178h] [rbp+38h]
  int v40; // [rsp+17Ch] [rbp+3Ch]
  DWORD *v41; // [rsp+180h] [rbp+40h]
  int v42; // [rsp+188h] [rbp+48h]
  int v43; // [rsp+18Ch] [rbp+4Ch]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 >= 0 || v3 != *(_DWORD *)(v1 + 88) || (v8 = v1 + 80, v1 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v4 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 34);
      v43 = 0;
      v40 = 0;
      v37 = 0;
      EventDescriptor.Keyword = 0LL;
      v14 = CurrentThreadId;
      v7 = *(_DWORD *)(v6 + 72);
      v20 = 0x1000000LL;
      v41 = &v14;
      v38 = &v13;
      v35 = &v20;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v4 + 1);
      v13 = v7;
      v42 = 4;
      v39 = 4;
      v36 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v32 = &unk_1807D5982;
      UserData.Reserved = 2;
      v33 = 91;
      v34 = 1;
      v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v4 + 4), &EventDescriptor, (LPCGUID)(v6 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      v10 = *(const wchar_t **)(v8 + 48);
      v17 = *(_DWORD *)(v8 + 104);
      v11 = *((_QWORD *)this + 34);
      v25 = *(const WCHAR **)(v8 + 96);
      v26 = *(const wchar_t **)(v8 + 88);
      v18 = *(_DWORD *)(v8 + 80);
      v27 = *(const wchar_t **)(v8 + 72);
      v19 = *(_DWORD *)(v8 + 32);
      v28 = *(const WCHAR **)(v8 + 24);
      v12 = *(_DWORD *)v8;
      v29 = *(const wchar_t **)(v8 + 128);
      v13 = *(_DWORD *)(v8 + 64);
      v30 = *(const wchar_t **)(v8 + 56);
      v14 = *(_DWORD *)(v8 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v20 = 0x1000000LL;
      v22 = v10;
      v15 = *(_DWORD *)(v8 + 68);
      v16 = *(_DWORD *)(v8 + 16);
      v23 = *(const WCHAR **)(v8 + 120);
      v24 = *(const wchar_t **)(v8 + 112);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v9,
        byte_1807D59DE,
        (const GUID *)(v11 + 8),
        (__int64)v9,
        (__int64)&v20,
        (__int64)&EventDescriptor,
        (__int64)&v14,
        &v30,
        (__int64)&v13,
        &v29,
        (__int64)&v12,
        &v28,
        (__int64)&v19,
        &v27,
        (__int64)&v18,
        &v26,
        &v25,
        (__int64)&v17,
        &v24,
        &v23,
        (__int64)&v16,
        (__int64)&v15,
        &v22);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
