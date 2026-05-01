/*
 * XREFs of ?Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z @ 0x1802AF04C
 * Callers:
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800B39D8 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644564@Z @ 0x180008034 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180008034.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@4@Z @ 0x180008B24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTe.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
        TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rdi
  int v5; // eax
  int *v6; // rdi
  const struct _tlgProvider_t *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // r9
  int v16; // [rsp+D0h] [rbp-80h] BYREF
  int v17; // [rsp+D4h] [rbp-7Ch] BYREF
  int v18; // [rsp+D8h] [rbp-78h] BYREF
  int v19; // [rsp+DCh] [rbp-74h] BYREF
  int v20; // [rsp+E0h] [rbp-70h] BYREF
  int v21; // [rsp+E4h] [rbp-6Ch] BYREF
  int v22; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-58h] BYREF
  const unsigned __int16 *v25; // [rsp+100h] [rbp-50h] BYREF
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

  v2 = *((_QWORD *)this + 34);
  v5 = *(_DWORD *)(v2 + 72);
  if ( v5 < 0 && (v6 = (int *)(v2 + 80), v5 == v6[2]) && v6 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v7 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v28 = *((_QWORD *)v6 + 14);
      v8 = *((_QWORD *)v6 + 6);
      v18 = v6[26];
      v29 = *((_QWORD *)v6 + 12);
      v9 = *((_QWORD *)this + 34);
      v30 = *((_QWORD *)v6 + 11);
      v19 = v6[20];
      v31 = *((_QWORD *)v6 + 9);
      v20 = v6[8];
      v32 = *((_QWORD *)v6 + 3);
      v21 = *v6;
      v33 = *((_QWORD *)v6 + 16);
      v22 = v6[16];
      v34 = *((_QWORD *)v6 + 7);
      v16 = v6[2];
      v23 = 0x1000000LL;
      v24 = 0x1000000LL;
      v26 = v8;
      v35 = v6[17];
      v17 = v6[4];
      v10 = *((_QWORD *)v6 + 15);
      v25 = a2;
      v27 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        (__int64)&unk_18080CC23,
        v9 + 8,
        (__int64)v7,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v16,
        &v34,
        (__int64)&v22,
        &v33,
        (__int64)&v21,
        &v32,
        (__int64)&v20,
        &v31,
        (__int64)&v19,
        &v30,
        &v29,
        (__int64)&v18,
        &v28,
        &v27,
        (__int64)&v17,
        (__int64)&v35,
        &v26,
        &v25);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v11 > 5u )
    {
      v24 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 34);
      v35 = CurrentThreadId;
      v14 = *(_DWORD *)(v13 + 72);
      v23 = 0x1000000LL;
      v16 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        (__int64)&unk_18080CD8B,
        v13 + 8,
        v15,
        (__int64)&v23,
        (__int64)&v16,
        (__int64)&v35,
        &v24);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
