/*
 * XREFs of ?Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800141B4
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800BF380 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _lambda_9bbb35718b31022091a790d2d74f2a46_::operator() @ 0x18046AA34 (_lambda_9bbb35718b31022091a790d2d74f2a46_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456@Z @ 0x180006680 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180006680.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rdi
  int v5; // eax
  __int64 v6; // rdx
  const struct _tlgProvider_t *v7; // rdi
  __int64 v8; // r8
  const struct _tlgProvider_t *v9; // r9
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned int v18; // [rsp+C0h] [rbp-80h] BYREF
  int v19; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v20; // [rsp+C8h] [rbp-78h] BYREF
  int v21; // [rsp+CCh] [rbp-74h] BYREF
  int v22; // [rsp+D0h] [rbp-70h] BYREF
  int v23; // [rsp+D4h] [rbp-6Ch] BYREF
  int v24; // [rsp+D8h] [rbp-68h] BYREF
  int v25; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+E8h] [rbp-58h] BYREF
  const unsigned __int16 *v28; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+100h] [rbp-40h] BYREF
  __int64 v30; // [rsp+108h] [rbp-38h] BYREF
  __int64 v31; // [rsp+110h] [rbp-30h] BYREF
  __int64 v32; // [rsp+118h] [rbp-28h] BYREF
  __int64 v33; // [rsp+120h] [rbp-20h] BYREF
  __int64 v34; // [rsp+128h] [rbp-18h] BYREF
  __int64 v35; // [rsp+130h] [rbp-10h] BYREF
  __int64 v36; // [rsp+138h] [rbp-8h] BYREF
  __int64 v37; // [rsp+140h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+10h] BYREF
  void *v39; // [rsp+160h] [rbp+20h]
  int v40; // [rsp+168h] [rbp+28h]
  int v41; // [rsp+16Ch] [rbp+2Ch]
  __int64 *v42; // [rsp+170h] [rbp+30h]
  __int64 v43; // [rsp+178h] [rbp+38h]
  int *v44; // [rsp+180h] [rbp+40h]
  __int64 v45; // [rsp+188h] [rbp+48h]
  DWORD *v46; // [rsp+190h] [rbp+50h]
  __int64 v47; // [rsp+198h] [rbp+58h]
  const unsigned __int16 *v48; // [rsp+1A0h] [rbp+60h]
  int v49; // [rsp+1A8h] [rbp+68h]
  int v50; // [rsp+1ACh] [rbp+6Ch]

  v2 = *((_QWORD *)this + 34);
  v5 = *(_DWORD *)(v2 + 72);
  if ( v5 < 0 && (v17 = v2 + 80, v5 == *(_DWORD *)(v17 + 8)) && v17 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v9 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      v31 = *(_QWORD *)(v17 + 112);
      v14 = *(_QWORD *)(v17 + 48);
      v23 = *(_DWORD *)(v17 + 104);
      v32 = *(_QWORD *)(v17 + 96);
      v15 = *((_QWORD *)this + 34);
      v33 = *(_QWORD *)(v17 + 88);
      v24 = *(_DWORD *)(v17 + 80);
      v34 = *(_QWORD *)(v17 + 72);
      v25 = *(_DWORD *)(v17 + 32);
      v35 = *(_QWORD *)(v17 + 24);
      v18 = *(_DWORD *)v17;
      v36 = *(_QWORD *)(v17 + 128);
      v19 = *(_DWORD *)(v17 + 64);
      v37 = *(_QWORD *)(v17 + 56);
      v20 = *(_DWORD *)(v17 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v26 = 0x1000000LL;
      v29 = v14;
      v21 = *(_DWORD *)(v17 + 68);
      v22 = *(_DWORD *)(v17 + 16);
      v16 = *(_QWORD *)(v17 + 120);
      v28 = a2;
      v30 = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        (__int64)v9,
        (__int64)&unk_180809CBB,
        v15 + 8,
        (__int64)v9,
        (__int64)&v26,
        (__int64)&EventDescriptor,
        (__int64)&v20,
        &v37,
        (__int64)&v19,
        &v36,
        (__int64)&v18,
        &v35,
        (__int64)&v25,
        &v34,
        (__int64)&v24,
        &v33,
        &v32,
        (__int64)&v23,
        &v31,
        &v30,
        (__int64)&v22,
        (__int64)&v21,
        &v29,
        &v28);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v7 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v11 = *((_QWORD *)this + 34);
      v20 = CurrentThreadId;
      v19 = *(_DWORD *)(v11 + 72);
      v26 = 0x1000000LL;
      if ( a2 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( a2[v12] );
        v13 = 2 * v12 + 2;
      }
      else
      {
        a2 = &pvData;
        v13 = 2;
      }
      v49 = v13;
      v48 = a2;
      v46 = &v20;
      v50 = 0;
      v44 = &v19;
      v47 = 4LL;
      v42 = &v26;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v7 + 1);
      v45 = 4LL;
      v43 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v39 = &unk_180809C5D;
      UserData.Reserved = 2;
      v40 = 93;
      v41 = 1;
      v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v7 + 4), &EventDescriptor, (LPCGUID)(v11 + 8), 0LL, 6u, &UserData);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
    this,
    v6,
    v8,
    v9);
}
