/*
 * XREFs of ?StopActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@MEAAXXZ @ 0x180013EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18020D158 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18020D158.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::StopActivity(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *this)
{
  __int64 v1; // rdi
  int v3; // eax
  __int64 v4; // rdx
  const struct _tlgProvider_t *v5; // rdi
  __int64 v6; // r8
  const struct _tlgProvider_t *v7; // r9
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  unsigned int v14; // [rsp+C0h] [rbp-80h] BYREF
  int v15; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v16; // [rsp+C8h] [rbp-78h] BYREF
  int v17; // [rsp+CCh] [rbp-74h] BYREF
  int v18; // [rsp+D0h] [rbp-70h] BYREF
  int v19; // [rsp+D4h] [rbp-6Ch] BYREF
  int v20; // [rsp+D8h] [rbp-68h] BYREF
  int v21; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+100h] [rbp-40h] BYREF
  __int64 v26; // [rsp+108h] [rbp-38h] BYREF
  __int64 v27; // [rsp+110h] [rbp-30h] BYREF
  __int64 v28; // [rsp+118h] [rbp-28h] BYREF
  __int64 v29; // [rsp+120h] [rbp-20h] BYREF
  __int64 v30; // [rsp+128h] [rbp-18h] BYREF
  __int64 v31; // [rsp+130h] [rbp-10h] BYREF
  __int64 v32; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+0h] BYREF
  void *v34; // [rsp+150h] [rbp+10h]
  int v35; // [rsp+158h] [rbp+18h]
  int v36; // [rsp+15Ch] [rbp+1Ch]
  __int64 *v37; // [rsp+160h] [rbp+20h]
  __int64 v38; // [rsp+168h] [rbp+28h]
  int *v39; // [rsp+170h] [rbp+30h]
  __int64 v40; // [rsp+178h] [rbp+38h]
  DWORD *v41; // [rsp+180h] [rbp+40h]
  __int64 v42; // [rsp+188h] [rbp+48h]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && (v13 = v1 + 80, v3 == *(_DWORD *)(v13 + 8)) && v13 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v7 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v11 = *(_QWORD *)(v13 + 48);
      v19 = *(_DWORD *)(v13 + 104);
      v12 = *((_QWORD *)this + 34);
      v27 = *(_QWORD *)(v13 + 96);
      v28 = *(_QWORD *)(v13 + 88);
      v20 = *(_DWORD *)(v13 + 80);
      v29 = *(_QWORD *)(v13 + 72);
      v21 = *(_DWORD *)(v13 + 32);
      v30 = *(_QWORD *)(v13 + 24);
      v14 = *(_DWORD *)v13;
      v31 = *(_QWORD *)(v13 + 128);
      v15 = *(_DWORD *)(v13 + 64);
      v32 = *(_QWORD *)(v13 + 56);
      v16 = *(_DWORD *)(v13 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v22 = 0x1000000LL;
      v24 = v11;
      v17 = *(_DWORD *)(v13 + 68);
      v18 = *(_DWORD *)(v13 + 16);
      v25 = *(_QWORD *)(v13 + 120);
      v26 = *(_QWORD *)(v13 + 112);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v7,
        (unsigned int)&unk_18080C157,
        v12 + 8,
        (_DWORD)v7,
        (__int64)&v22,
        (__int64)&EventDescriptor,
        (__int64)&v16,
        (__int64)&v32,
        (__int64)&v15,
        (__int64)&v31,
        (__int64)&v14,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v29,
        (__int64)&v20,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v19,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v24);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v5 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = *((_QWORD *)this + 34);
      v16 = CurrentThreadId;
      v42 = 4LL;
      v40 = 4LL;
      v10 = *(_DWORD *)(v9 + 72);
      v22 = 0x1000000LL;
      v41 = &v16;
      v39 = &v15;
      v37 = &v22;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v5 + 1);
      v15 = v10;
      v38 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v34 = &unk_18080C2C3;
      UserData.Reserved = 2;
      v35 = 91;
      v36 = 1;
      v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, (LPCGUID)(v9 + 8), 0LL, 5u, &UserData);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
    this,
    v4,
    v6,
    v7);
}
