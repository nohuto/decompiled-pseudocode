/*
 * XREFs of ?StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ @ 0x1800B4ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@StartMenuExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B51CC (-Provider@StartMenuExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18020D158 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18020D158.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall StartMenuExperienceTelemetry::StartMenuReposition::StopActivity(
        StartMenuExperienceTelemetry::StartMenuReposition *this)
{
  __int64 v1; // rdi
  int v3; // eax
  const struct _tlgProvider_t *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  int v7; // ecx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
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
  __int64 v22; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+100h] [rbp-40h] BYREF
  __int64 v24; // [rsp+108h] [rbp-38h] BYREF
  __int64 v25; // [rsp+110h] [rbp-30h] BYREF
  __int64 v26; // [rsp+118h] [rbp-28h] BYREF
  __int64 v27; // [rsp+120h] [rbp-20h] BYREF
  __int64 v28; // [rsp+128h] [rbp-18h] BYREF
  __int64 v29; // [rsp+130h] [rbp-10h] BYREF
  __int64 v30; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+0h] BYREF
  void *v32; // [rsp+150h] [rbp+10h]
  int v33; // [rsp+158h] [rbp+18h]
  int v34; // [rsp+15Ch] [rbp+1Ch]
  __int64 *v35; // [rsp+160h] [rbp+20h]
  __int64 v36; // [rsp+168h] [rbp+28h]
  int *v37; // [rsp+170h] [rbp+30h]
  __int64 v38; // [rsp+178h] [rbp+38h]
  DWORD *v39; // [rsp+180h] [rbp+40h]
  __int64 v40; // [rsp+188h] [rbp+48h]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && (v11 = v1 + 80, v3 == *(_DWORD *)(v11 + 8)) && v11 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = StartMenuExperienceLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      v9 = *(_QWORD *)(v11 + 48);
      v10 = *((_QWORD *)this + 34);
      v17 = *(_DWORD *)(v11 + 104);
      v25 = *(_QWORD *)(v11 + 96);
      v26 = *(_QWORD *)(v11 + 88);
      v18 = *(_DWORD *)(v11 + 80);
      v27 = *(_QWORD *)(v11 + 72);
      v19 = *(_DWORD *)(v11 + 32);
      v28 = *(_QWORD *)(v11 + 24);
      v12 = *(_DWORD *)v11;
      v29 = *(_QWORD *)(v11 + 128);
      v13 = *(_DWORD *)(v11 + 64);
      v30 = *(_QWORD *)(v11 + 56);
      v14 = *(_DWORD *)(v11 + 8);
      v22 = v9;
      v15 = *(_DWORD *)(v11 + 68);
      v16 = *(_DWORD *)(v11 + 16);
      v23 = *(_QWORD *)(v11 + 120);
      v24 = *(_QWORD *)(v11 + 112);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v20 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v8,
        (unsigned int)&unk_1807F5E71,
        v10 + 8,
        (_DWORD)v8,
        (__int64)&v20,
        (__int64)&EventDescriptor,
        (__int64)&v14,
        (__int64)&v30,
        (__int64)&v13,
        (__int64)&v29,
        (__int64)&v12,
        (__int64)&v28,
        (__int64)&v19,
        (__int64)&v27,
        (__int64)&v18,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v17,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v22);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v4 = StartMenuExperienceLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 34);
      v14 = CurrentThreadId;
      v40 = 4LL;
      v39 = &v14;
      v7 = *(_DWORD *)(v6 + 72);
      v37 = &v13;
      v35 = &v20;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *((_QWORD *)v4 + 1);
      v13 = v7;
      v20 = 0LL;
      v38 = 4LL;
      v36 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v32 = &unk_1807F5D83;
      UserData.Reserved = 2;
      v33 = 72;
      v34 = 1;
      v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v4 + 4), &EventDescriptor, (LPCGUID)(v6 + 8), 0LL, 5u, &UserData);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
