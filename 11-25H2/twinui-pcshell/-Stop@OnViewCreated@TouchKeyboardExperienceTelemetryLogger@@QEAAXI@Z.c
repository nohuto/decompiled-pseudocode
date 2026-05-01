/*
 * XREFs of ?Stop@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x18014CBAC
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18006BDAC (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     _lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_::operator() @ 0x18045E10C (_lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454@Z @ 0x180001FE8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180001FE8.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18014CEEC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnViewCreated::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnViewCreated *this,
        int a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  const struct _tlgProvider_t *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rax
  int v12; // edi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // ecx
  int v16; // [rsp+C0h] [rbp-80h] BYREF
  int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  int v18; // [rsp+C8h] [rbp-78h] BYREF
  int v19; // [rsp+CCh] [rbp-74h] BYREF
  int v20; // [rsp+D0h] [rbp-70h] BYREF
  int v21; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v22; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+100h] [rbp-40h] BYREF
  __int64 v28; // [rsp+108h] [rbp-38h] BYREF
  __int64 v29; // [rsp+110h] [rbp-30h] BYREF
  __int64 v30; // [rsp+118h] [rbp-28h] BYREF
  __int64 v31; // [rsp+120h] [rbp-20h] BYREF
  __int64 v32[3]; // [rsp+128h] [rbp-18h] BYREF
  int v33; // [rsp+150h] [rbp+10h] BYREF
  DWORD v34; // [rsp+160h] [rbp+20h] BYREF
  int v35; // [rsp+168h] [rbp+28h] BYREF

  v2 = (int *)*((_QWORD *)this + 34);
  v5 = v2[18];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = TouchKeyboardExperienceTraceLogging::Provider();
    v12 = (int)v11;
    if ( *(_DWORD *)v11 > 5u )
    {
      v33 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 34);
      v34 = CurrentThreadId;
      v15 = *(_DWORD *)(v14 + 72);
      v22 = 0x1000000LL;
      v35 = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        (unsigned int)&unk_1807D2DB6,
        v14 + 8,
        0,
        (__int64)&v22,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v7 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v25 = *((_QWORD *)v6 + 14);
      v8 = *((_QWORD *)v6 + 6);
      v16 = v6[26];
      v26 = *((_QWORD *)v6 + 12);
      v9 = *((_QWORD *)this + 34);
      v27 = *((_QWORD *)v6 + 11);
      v17 = v6[20];
      v28 = *((_QWORD *)v6 + 9);
      v18 = v6[8];
      v29 = *((_QWORD *)v6 + 3);
      v19 = *v6;
      v30 = *((_QWORD *)v6 + 16);
      v20 = v6[16];
      v31 = *((_QWORD *)v6 + 7);
      v21 = v6[2];
      v32[0] = 0x1000000LL;
      v22 = 0x1000000LL;
      v23 = v8;
      v34 = v6[17];
      v35 = v6[4];
      v10 = *((_QWORD *)v6 + 15);
      v33 = a2;
      v24 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        (__int64)&unk_1807D2C5F,
        v9 + 8,
        (__int64)v7,
        (__int64)&v22,
        (__int64)v32,
        (__int64)&v21,
        &v31,
        (__int64)&v20,
        &v30,
        (__int64)&v19,
        &v29,
        (__int64)&v18,
        &v28,
        (__int64)&v17,
        &v27,
        &v26,
        (__int64)&v16,
        &v25,
        &v24,
        (__int64)&v35,
        (__int64)&v34,
        &v23);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
