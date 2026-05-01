/*
 * XREFs of ?Stop@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NK0@Z @ 0x180289D38
 * Callers:
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046AE20 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180006D10 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180006D10.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1801DCED8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByVal@$00@@@-$.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppActivation::Stop(
        TouchKeyboardExperienceTelemetryLogger::InputAppActivation *this,
        unsigned __int8 a2,
        int a3,
        char a4)
{
  __int64 v4; // rdi
  int v7; // r15d
  int v9; // eax
  __int64 v10; // rdi
  const struct _tlgProvider_t *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  int v19; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v20; // [rsp+CCh] [rbp-7Ch] BYREF
  int v21; // [rsp+D0h] [rbp-78h] BYREF
  _DWORD v22[3]; // [rsp+D4h] [rbp-74h] BYREF
  int v23; // [rsp+E0h] [rbp-68h] BYREF
  int v24; // [rsp+E4h] [rbp-64h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+100h] [rbp-48h] BYREF
  __int64 v29; // [rsp+108h] [rbp-40h] BYREF
  __int64 v30; // [rsp+110h] [rbp-38h] BYREF
  __int64 v31; // [rsp+118h] [rbp-30h] BYREF
  __int64 v32; // [rsp+120h] [rbp-28h] BYREF
  __int64 v33; // [rsp+128h] [rbp-20h] BYREF
  __int64 v34; // [rsp+130h] [rbp-18h] BYREF
  char v35; // [rsp+158h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 34);
  v7 = a2;
  v9 = *(_DWORD *)(v4 + 72);
  if ( v9 < 0 && (v10 = v4 + 80, v9 == *(_DWORD *)(v10 + 8)) && v10 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v11 > 5u && tlgKeywordOn((__int64)v11, 0x400000000000LL) )
    {
      v26 = *(_QWORD *)(v10 + 120);
      v27 = *(_QWORD *)(v10 + 112);
      v23 = *(_DWORD *)(v10 + 104);
      v14 = *((_QWORD *)this + 34);
      v28 = *(_QWORD *)(v10 + 96);
      v29 = *(_QWORD *)(v10 + 88);
      v24 = *(_DWORD *)(v10 + 80);
      v30 = *(_QWORD *)(v10 + 72);
      v19 = *(_DWORD *)(v10 + 32);
      v31 = *(_QWORD *)(v10 + 24);
      v20 = *(_DWORD *)v10;
      v32 = *(_QWORD *)(v10 + 128);
      v21 = *(_DWORD *)(v10 + 64);
      v33 = *(_QWORD *)(v10 + 56);
      v22[0] = *(_DWORD *)(v10 + 8);
      v34 = 0x1000000LL;
      v25 = 0x1000000LL;
      v35 = a4;
      v22[1] = a3;
      v22[2] = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v12,
        (__int64)&unk_18080AAC6,
        v14 + 8,
        v13,
        (__int64)&v25,
        (__int64)&v34,
        (__int64)v22,
        &v33,
        (__int64)&v21,
        &v32,
        (__int64)&v20,
        &v31,
        (__int64)&v19,
        &v30,
        (__int64)&v24,
        &v29,
        &v28,
        (__int64)&v23,
        &v27,
        &v26);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = TouchKeyboardExperienceTraceLogging::Provider();
    v16 = (__int64)v15;
    if ( *(_DWORD *)v15 > 5u && tlgKeywordOn((__int64)v15, 0x400000000000LL) )
    {
      v35 = a4;
      v22[0] = a3;
      v21 = v7;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 34);
      v20 = CurrentThreadId;
      v19 = *(_DWORD *)(v18 + 72);
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v16,
        byte_18080AC9E,
        (const GUID *)(v18 + 8),
        0LL,
        (__int64)&v25,
        (__int64)&v19,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)v22,
        (__int64)&v35);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
