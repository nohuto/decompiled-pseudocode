/*
 * XREFs of ?Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXUtagRECT@@0@Z @ 0x18050B2E8
 * Callers:
 *     ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x180507CC0 (-GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644444444@Z @ 0x18000BA4C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000BA4C.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x1801EB9D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r9
  LONG bottom; // ecx
  __int64 v13; // r8
  __int64 v14; // rcx
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // rdi
  LONG v17; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  LONG top; // [rsp+E0h] [rbp-80h] BYREF
  LONG left; // [rsp+E4h] [rbp-7Ch] BYREF
  LONG v23; // [rsp+E8h] [rbp-78h] BYREF
  LONG v24; // [rsp+ECh] [rbp-74h] BYREF
  LONG v25; // [rsp+F0h] [rbp-70h] BYREF
  LONG v26; // [rsp+F4h] [rbp-6Ch] BYREF
  LONG v27; // [rsp+F8h] [rbp-68h] BYREF
  _DWORD v28[5]; // [rsp+FCh] [rbp-64h] BYREF
  __int64 v29; // [rsp+110h] [rbp-50h] BYREF
  __int64 v30; // [rsp+118h] [rbp-48h] BYREF
  __int64 v31; // [rsp+120h] [rbp-40h] BYREF
  __int64 v32; // [rsp+128h] [rbp-38h] BYREF
  __int64 v33; // [rsp+130h] [rbp-30h] BYREF
  __int64 v34; // [rsp+138h] [rbp-28h] BYREF
  __int64 v35; // [rsp+140h] [rbp-20h] BYREF
  __int64 v36; // [rsp+148h] [rbp-18h] BYREF
  __int64 v37; // [rsp+150h] [rbp-10h] BYREF
  __int64 v38; // [rsp+158h] [rbp-8h] BYREF
  LONG v39; // [rsp+180h] [rbp+20h] BYREF
  LONG right; // [rsp+198h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 34);
  v7 = *(_DWORD *)(v3 + 72);
  if ( v7 < 0 && (v8 = v3 + 80, v7 == *(_DWORD *)(v8 + 8)) && v8 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = WindowManagementLogging::Provider(v9);
    if ( *(_DWORD *)v10 > 4u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      right = a3->right;
      v28[1] = a3->top;
      v28[2] = a3->left;
      v28[3] = a2->bottom;
      v28[4] = a2->right;
      top = a2->top;
      left = a2->left;
      bottom = a3->bottom;
      v13 = *((_QWORD *)this + 34) + 8LL;
      v30 = *(_QWORD *)(v8 + 120);
      v31 = *(_QWORD *)(v8 + 112);
      v23 = *(_DWORD *)(v8 + 104);
      v32 = *(_QWORD *)(v8 + 96);
      v33 = *(_QWORD *)(v8 + 88);
      v24 = *(_DWORD *)(v8 + 80);
      v34 = *(_QWORD *)(v8 + 72);
      v25 = *(_DWORD *)(v8 + 32);
      v35 = *(_QWORD *)(v8 + 24);
      v26 = *(_DWORD *)v8;
      v36 = *(_QWORD *)(v8 + 128);
      v27 = *(_DWORD *)(v8 + 64);
      v37 = *(_QWORD *)(v8 + 56);
      v28[0] = *(_DWORD *)(v8 + 8);
      v39 = bottom;
      v38 = 0x1000000LL;
      v29 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (__int64)&unk_180819C19,
        v13,
        v11,
        (__int64)&v29,
        (__int64)&v38,
        (__int64)v28,
        &v37,
        (__int64)&v27,
        &v36,
        (__int64)&v26,
        &v35,
        (__int64)&v25,
        &v34,
        (__int64)&v24,
        &v33,
        &v32,
        (__int64)&v23,
        &v31,
        &v30);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = WindowManagementLogging::Provider(v14);
    v16 = (__int64)v15;
    if ( *(_DWORD *)v15 > 4u && tlgKeywordOn((__int64)v15, 0x400000000000LL) )
    {
      v17 = a3->bottom;
      right = a3->right;
      v28[0] = a3->top;
      v27 = a3->left;
      v26 = a2->bottom;
      v25 = a2->right;
      v24 = a2->top;
      v23 = a2->left;
      v39 = v17;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 34);
      left = CurrentThreadId;
      top = *(_DWORD *)(v19 + 72);
      v29 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v16,
        byte_18081A032,
        (const GUID *)(v19 + 8),
        v20,
        (__int64)&v29,
        (__int64)&top,
        (__int64)&left,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)v28,
        (__int64)&right,
        (__int64)&v39);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
