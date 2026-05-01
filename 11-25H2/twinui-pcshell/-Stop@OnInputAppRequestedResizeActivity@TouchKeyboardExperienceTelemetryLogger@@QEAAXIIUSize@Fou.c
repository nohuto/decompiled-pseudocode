/*
 * XREFs of ?Stop@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIIUSize@Foundation@Windows@@_N1J@Z @ 0x180470228
 * Callers:
 *     ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x18046AA24 (--$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivi.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564444AEBU?$_tlgWrapperByVal@$00@@74@Z @ 0x180007C60 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180007C60.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapperByVal@$00@@54@Z @ 0x1800088A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@$0.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::Stop(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v7; // rax
  int v11; // ecx
  __int64 v12; // rdi
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  const struct _tlgProvider_t *v16; // rax
  __int64 v17; // rdi
  DWORD CurrentThreadId; // [rsp+E8h] [rbp-78h] BYREF
  int v19; // [rsp+ECh] [rbp-74h] BYREF
  int v20; // [rsp+F0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+F4h] [rbp-6Ch] BYREF
  int v22; // [rsp+FCh] [rbp-64h] BYREF
  __int64 v23; // [rsp+100h] [rbp-60h]
  int v24; // [rsp+108h] [rbp-58h]
  int v25; // [rsp+10Ch] [rbp-54h]
  int v26; // [rsp+110h] [rbp-50h]
  int v27; // [rsp+114h] [rbp-4Ch]
  __int64 v28; // [rsp+118h] [rbp-48h] BYREF
  __int64 v29; // [rsp+120h] [rbp-40h] BYREF
  __int64 v30; // [rsp+128h] [rbp-38h] BYREF
  __int64 v31; // [rsp+130h] [rbp-30h] BYREF
  __int64 v32; // [rsp+138h] [rbp-28h] BYREF
  __int64 v33; // [rsp+140h] [rbp-20h] BYREF
  __int64 v34; // [rsp+148h] [rbp-18h] BYREF
  __int64 v35; // [rsp+150h] [rbp-10h] BYREF
  __int64 v36; // [rsp+158h] [rbp-8h] BYREF
  __int64 v37; // [rsp+160h] [rbp+0h] BYREF

  v7 = *(_QWORD *)(a1 + 272);
  v23 = a4;
  v11 = *(_DWORD *)(v7 + 72);
  if ( v11 >= 0 || v11 != *(_DWORD *)(v7 + 88) || (v12 = v7 + 80, v7 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v16 = TouchKeyboardExperienceTraceLogging::Provider();
    v17 = (__int64)v16;
    if ( *(_DWORD *)v16 > 5u && tlgKeywordOn((__int64)v16, 0x400000000000LL) )
    {
      v21 = v23;
      v22 = a7;
      v20 = a3;
      v19 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v28 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v17,
        (__int64)&unk_1807D79AF);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v13 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v25 = HIDWORD(v23);
      v26 = v23;
      v29 = *(_QWORD *)(v12 + 120);
      v30 = *(_QWORD *)(v12 + 112);
      v15 = *(_QWORD *)(a1 + 272) + 8LL;
      CurrentThreadId = *(_DWORD *)(v12 + 104);
      v31 = *(_QWORD *)(v12 + 96);
      v32 = *(_QWORD *)(v12 + 88);
      v19 = *(_DWORD *)(v12 + 80);
      v33 = *(_QWORD *)(v12 + 72);
      v20 = *(_DWORD *)(v12 + 32);
      v34 = *(_QWORD *)(v12 + 24);
      LODWORD(v21) = *(_DWORD *)v12;
      v35 = *(_QWORD *)(v12 + 128);
      HIDWORD(v21) = *(_DWORD *)(v12 + 64);
      v36 = *(_QWORD *)(v12 + 56);
      v22 = *(_DWORD *)(v12 + 8);
      v37 = 0x1000000LL;
      v28 = 0x1000000LL;
      v24 = a7;
      v27 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v14,
        (__int64)&unk_1807D7A65,
        v15,
        v14,
        (__int64)&v28,
        (__int64)&v37,
        (__int64)&v22,
        &v36,
        (__int64)&v21 + 4,
        &v35,
        (__int64)&v21,
        &v34,
        (__int64)&v20,
        &v33,
        (__int64)&v19,
        &v32,
        &v31,
        (__int64)&CurrentThreadId,
        &v30,
        &v29);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
