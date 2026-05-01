/*
 * XREFs of ?Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800BC0CC
 * Callers:
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800BDD60 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _lambda_3b092b602b32291197616247ac44fb10_::operator() @ 0x180469BA8 (_lambda_3b092b602b32291197616247ac44fb10_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456@Z @ 0x180006680 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180006680.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rdi
  int v5; // eax
  const struct _tlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // eax
  const struct _tlgProvider_t *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // [rsp+C0h] [rbp-80h] BYREF
  int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v18; // [rsp+C8h] [rbp-78h] BYREF
  int v19; // [rsp+CCh] [rbp-74h] BYREF
  int v20; // [rsp+D0h] [rbp-70h] BYREF
  int v21; // [rsp+D4h] [rbp-6Ch] BYREF
  int v22; // [rsp+D8h] [rbp-68h] BYREF
  int v23; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  const unsigned __int16 *v26; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+100h] [rbp-40h] BYREF
  __int64 v28; // [rsp+108h] [rbp-38h] BYREF
  __int64 v29; // [rsp+110h] [rbp-30h] BYREF
  __int64 v30; // [rsp+118h] [rbp-28h] BYREF
  __int64 v31; // [rsp+120h] [rbp-20h] BYREF
  __int64 v32; // [rsp+128h] [rbp-18h] BYREF
  __int64 v33; // [rsp+130h] [rbp-10h] BYREF
  __int64 v34; // [rsp+138h] [rbp-8h] BYREF
  __int64 v35; // [rsp+140h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+10h] BYREF
  void *v37; // [rsp+160h] [rbp+20h]
  int v38; // [rsp+168h] [rbp+28h]
  int v39; // [rsp+16Ch] [rbp+2Ch]
  __int64 *v40; // [rsp+170h] [rbp+30h]
  __int64 v41; // [rsp+178h] [rbp+38h]
  int *v42; // [rsp+180h] [rbp+40h]
  __int64 v43; // [rsp+188h] [rbp+48h]
  DWORD *v44; // [rsp+190h] [rbp+50h]
  __int64 v45; // [rsp+198h] [rbp+58h]
  const unsigned __int16 *v46; // [rsp+1A0h] [rbp+60h]
  int v47; // [rsp+1A8h] [rbp+68h]
  int v48; // [rsp+1ACh] [rbp+6Ch]

  v2 = *((_QWORD *)this + 34);
  v5 = *(_DWORD *)(v2 + 72);
  if ( v5 < 0 && (v15 = v2 + 80, v5 == *(_DWORD *)(v15 + 8)) && v15 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v11 > 5u )
    {
      v29 = *(_QWORD *)(v15 + 112);
      v12 = *(_QWORD *)(v15 + 48);
      v21 = *(_DWORD *)(v15 + 104);
      v30 = *(_QWORD *)(v15 + 96);
      v13 = *((_QWORD *)this + 34);
      v31 = *(_QWORD *)(v15 + 88);
      v22 = *(_DWORD *)(v15 + 80);
      v32 = *(_QWORD *)(v15 + 72);
      v23 = *(_DWORD *)(v15 + 32);
      v33 = *(_QWORD *)(v15 + 24);
      v16 = *(_DWORD *)v15;
      v34 = *(_QWORD *)(v15 + 128);
      v17 = *(_DWORD *)(v15 + 64);
      v35 = *(_QWORD *)(v15 + 56);
      v18 = *(_DWORD *)(v15 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v24 = 0x1000000LL;
      v27 = v12;
      v19 = *(_DWORD *)(v15 + 68);
      v20 = *(_DWORD *)(v15 + 16);
      v14 = *(_QWORD *)(v15 + 120);
      v26 = a2;
      v28 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        (__int64)v11,
        (__int64)&unk_180809AEF,
        v13 + 8,
        (__int64)v11,
        (__int64)&v24,
        (__int64)&EventDescriptor,
        (__int64)&v18,
        &v35,
        (__int64)&v17,
        &v34,
        (__int64)&v16,
        &v33,
        (__int64)&v23,
        &v32,
        (__int64)&v22,
        &v31,
        &v30,
        (__int64)&v21,
        &v29,
        &v28,
        (__int64)&v20,
        (__int64)&v19,
        &v27,
        &v26);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v6 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 34);
      v18 = CurrentThreadId;
      v17 = *(_DWORD *)(v8 + 72);
      v24 = 0x1000000LL;
      if ( a2 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( a2[v9] );
        v10 = 2 * v9 + 2;
      }
      else
      {
        a2 = &pvData;
        v10 = 2;
      }
      v47 = v10;
      v46 = a2;
      v44 = &v18;
      v48 = 0;
      v42 = &v17;
      v45 = 4LL;
      v40 = &v24;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v6 + 1);
      v43 = 4LL;
      v41 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v37 = &unk_18080987A;
      UserData.Reserved = 2;
      v38 = 93;
      v39 = 1;
      v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 6u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)((char *)this + 288));
}
