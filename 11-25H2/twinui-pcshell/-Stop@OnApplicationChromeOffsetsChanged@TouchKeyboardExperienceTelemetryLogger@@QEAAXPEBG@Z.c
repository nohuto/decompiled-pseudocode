/*
 * XREFs of ?Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1801AF89C
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18001E410 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _lambda_29414a9ca6597666cdb35e84f817c693_::operator() @ 0x18045D410 (_lambda_29414a9ca6597666cdb35e84f817c693_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456@Z @ 0x1800065F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800065F0.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rax
  int v5; // ecx
  const struct _tlgProvider_t *v6; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rsi
  const struct _tlgProvider_t *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
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
  if ( v5 >= 0 || v5 != *(_DWORD *)(v2 + 88) || (v11 = v2 + 80, v2 == -80) )
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
        a2 = &LocaleName;
        v10 = 2;
      }
      v47 = v10;
      v46 = a2;
      v44 = &v18;
      v48 = 0;
      v42 = &v17;
      v40 = &v24;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v6 + 1);
      v45 = 4LL;
      v43 = 4LL;
      v41 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v37 = &unk_1807D31F2;
      UserData.Reserved = 2;
      v38 = 93;
      v39 = 1;
      v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v6 + 4), &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 6u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v12 > 5u )
    {
      v29 = *(_QWORD *)(v11 + 112);
      v13 = *(_QWORD *)(v11 + 48);
      v21 = *(_DWORD *)(v11 + 104);
      v30 = *(_QWORD *)(v11 + 96);
      v14 = *((_QWORD *)this + 34);
      v31 = *(_QWORD *)(v11 + 88);
      v22 = *(_DWORD *)(v11 + 80);
      v32 = *(_QWORD *)(v11 + 72);
      v23 = *(_DWORD *)(v11 + 32);
      v33 = *(_QWORD *)(v11 + 24);
      v16 = *(_DWORD *)v11;
      v34 = *(_QWORD *)(v11 + 128);
      v17 = *(_DWORD *)(v11 + 64);
      v35 = *(_QWORD *)(v11 + 56);
      v18 = *(_DWORD *)(v11 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v24 = 0x1000000LL;
      v27 = v13;
      v19 = *(_DWORD *)(v11 + 68);
      v20 = *(_DWORD *)(v11 + 16);
      v15 = *(_QWORD *)(v11 + 120);
      v26 = a2;
      v28 = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        (__int64)v12,
        (__int64)&unk_1807D2E6C,
        v14 + 8,
        (__int64)v12,
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
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
