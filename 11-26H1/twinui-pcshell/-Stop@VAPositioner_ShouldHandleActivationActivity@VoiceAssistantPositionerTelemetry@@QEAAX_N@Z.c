/*
 * XREFs of ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x18007B424
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18007B740 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180004C04 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180004C04.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this,
        char a2)
{
  __int64 v2; // rdi
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // [rsp+C0h] [rbp-80h] BYREF
  unsigned int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  int v18; // [rsp+C8h] [rbp-78h] BYREF
  DWORD v19; // [rsp+CCh] [rbp-74h] BYREF
  int v20; // [rsp+D0h] [rbp-70h] BYREF
  int v21; // [rsp+D4h] [rbp-6Ch] BYREF
  int v22; // [rsp+D8h] [rbp-68h] BYREF
  int v23; // [rsp+DCh] [rbp-64h] BYREF
  int v24; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-50h] BYREF
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
  char *v46; // [rsp+1A0h] [rbp+60h]
  __int64 v47; // [rsp+1A8h] [rbp+68h]

  v2 = *((_QWORD *)this + 34);
  v5 = *(_DWORD *)(v2 + 72);
  if ( v5 < 0 && (v6 = v2 + 80, v5 == *(_DWORD *)(v6 + 8)) && v6 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = WindowManagementLogging::Provider(v12);
    if ( *(_DWORD *)v13 > 5u )
    {
      v14 = *(_QWORD *)(v6 + 48);
      v29 = *(_QWORD *)(v6 + 112);
      v22 = *(_DWORD *)(v6 + 104);
      v15 = *((_QWORD *)this + 34);
      v30 = *(_QWORD *)(v6 + 96);
      v31 = *(_QWORD *)(v6 + 88);
      v23 = *(_DWORD *)(v6 + 80);
      v32 = *(_QWORD *)(v6 + 72);
      v24 = *(_DWORD *)(v6 + 32);
      v33 = *(_QWORD *)(v6 + 24);
      v17 = *(_DWORD *)v6;
      v34 = *(_QWORD *)(v6 + 128);
      v18 = *(_DWORD *)(v6 + 64);
      v35 = *(_QWORD *)(v6 + 56);
      v19 = *(_DWORD *)(v6 + 8);
      v27 = v14;
      v20 = *(_DWORD *)(v6 + 68);
      v21 = *(_DWORD *)(v6 + 16);
      v28 = *(_QWORD *)(v6 + 120);
      v16 = a2;
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v25 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        (__int64)v13,
        (__int64)&unk_180819471,
        v15 + 8,
        (__int64)v13,
        (__int64)&v25,
        (__int64)&EventDescriptor,
        (__int64)&v19,
        &v35,
        (__int64)&v18,
        &v34,
        (__int64)&v17,
        &v33,
        (__int64)&v24,
        &v32,
        (__int64)&v23,
        &v31,
        &v30,
        (__int64)&v22,
        &v29,
        &v28,
        (__int64)&v21,
        (__int64)&v20,
        &v27);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = WindowManagementLogging::Provider(v7);
    if ( *(_DWORD *)v8 > 5u )
    {
      v16 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v10 = *((_QWORD *)this + 34);
      v19 = CurrentThreadId;
      v47 = 1LL;
      v46 = &v16;
      v11 = *(_DWORD *)(v10 + 72);
      v44 = &v19;
      v42 = &v18;
      v40 = &v25;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v8 + 1);
      v18 = v11;
      v25 = 50331648LL;
      v45 = 4LL;
      v43 = 4LL;
      v41 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v37 = &unk_1808192BD;
      v39 = 1;
      UserData.Reserved = 2;
      v38 = 116;
      v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v8 + 4), &EventDescriptor, (LPCGUID)(v10 + 8), 0LL, 6u, &UserData);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
