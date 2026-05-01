/*
 * XREFs of ?Stop@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXI_K@Z @ 0x1802B6FC4
 * Callers:
 *     ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180257BA4 (-TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644543@Z @ 0x1800062A8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800062A8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443@Z @ 0x180007394 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::Stop(
        TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *this,
        __int64 a2,
        __int64 a3)
{
  int *v3; // rax
  int v6; // ecx
  int *v7; // rdi
  const struct _tlgProvider_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // ecx
  int v17; // [rsp+D0h] [rbp-80h] BYREF
  int v18; // [rsp+D4h] [rbp-7Ch] BYREF
  int v19; // [rsp+D8h] [rbp-78h] BYREF
  int v20; // [rsp+DCh] [rbp-74h] BYREF
  int v21; // [rsp+E0h] [rbp-70h] BYREF
  int v22; // [rsp+E4h] [rbp-6Ch] BYREF
  int v23; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-60h] BYREF
  _QWORD v25[2]; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+108h] [rbp-48h] BYREF
  __int64 v27; // [rsp+110h] [rbp-40h] BYREF
  __int64 v28; // [rsp+118h] [rbp-38h] BYREF
  __int64 v29; // [rsp+120h] [rbp-30h] BYREF
  __int64 v30; // [rsp+128h] [rbp-28h] BYREF
  __int64 v31; // [rsp+130h] [rbp-20h] BYREF
  __int64 v32; // [rsp+138h] [rbp-18h] BYREF
  __int64 v33; // [rsp+140h] [rbp-10h] BYREF
  __int64 v34; // [rsp+148h] [rbp-8h] BYREF
  DWORD v35; // [rsp+188h] [rbp+38h] BYREF

  v3 = (int *)*((_QWORD *)this + 34);
  v6 = v3[18];
  if ( v6 >= 0 || v6 != v3[22] || (v7 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v13 > 5u )
    {
      v25[0] = a3;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 34);
      v35 = CurrentThreadId;
      v16 = *(_DWORD *)(v15 + 72);
      v24 = 0LL;
      v17 = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)v13,
        (__int64)&unk_1807D5293);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      v28 = *((_QWORD *)v7 + 14);
      v9 = *((_QWORD *)v7 + 6);
      v19 = v7[26];
      v29 = *((_QWORD *)v7 + 12);
      v10 = *((_QWORD *)v7 + 11);
      v25[0] = 0LL;
      v11 = *((_QWORD *)this + 34);
      v30 = v10;
      v20 = v7[20];
      v31 = *((_QWORD *)v7 + 9);
      v21 = v7[8];
      v32 = *((_QWORD *)v7 + 3);
      v22 = *v7;
      v33 = *((_QWORD *)v7 + 16);
      v23 = v7[16];
      v34 = *((_QWORD *)v7 + 7);
      v17 = v7[2];
      v26 = v9;
      v35 = v7[17];
      v18 = v7[4];
      v12 = *((_QWORD *)v7 + 15);
      v25[1] = a3;
      v27 = v12;
      v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)v8,
        (__int64)&unk_1807D535E,
        v11 + 8,
        (__int64)v8,
        (__int64)v25,
        (__int64)&v24,
        (__int64)&v17,
        &v34,
        (__int64)&v23,
        &v33,
        (__int64)&v22,
        &v32,
        (__int64)&v21,
        &v31,
        (__int64)&v20,
        &v30,
        &v29,
        (__int64)&v19,
        &v28,
        &v27,
        (__int64)&v18,
        (__int64)&v35,
        &v26);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
