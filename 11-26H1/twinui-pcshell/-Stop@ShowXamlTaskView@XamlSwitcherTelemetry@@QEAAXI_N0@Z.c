/*
 * XREFs of ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x180169B54
 * Callers:
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x180169900 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x1806A7AF0 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456444@Z @ 0x18001216C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18001216C.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18009E4F4 (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1801BDD08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        XamlSwitcherTelemetry::ShowXamlTaskView *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rdi
  int v6; // esi
  int v8; // r14d
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  const struct _tlgProvider_t *v17; // rax
  int v18; // edi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  int v21; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v22; // [rsp+CCh] [rbp-7Ch] BYREF
  int v23; // [rsp+D0h] [rbp-78h] BYREF
  _DWORD v24[3]; // [rsp+D4h] [rbp-74h] BYREF
  int v25; // [rsp+E0h] [rbp-68h] BYREF
  int v26; // [rsp+E4h] [rbp-64h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+100h] [rbp-48h] BYREF
  __int64 v31; // [rsp+108h] [rbp-40h] BYREF
  __int64 v32; // [rsp+110h] [rbp-38h] BYREF
  __int64 v33; // [rsp+118h] [rbp-30h] BYREF
  __int64 v34; // [rsp+120h] [rbp-28h] BYREF
  __int64 v35; // [rsp+128h] [rbp-20h] BYREF
  __int64 v36; // [rsp+130h] [rbp-18h] BYREF
  int v37; // [rsp+158h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 34);
  v6 = a4;
  v8 = a3;
  v9 = *(_DWORD *)(v4 + 72);
  if ( v9 < 0 && (v10 = v4 + 80, v9 == *(_DWORD *)(v10 + 8)) && v10 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = XamlSwitcherLogging::Provider(v11);
    if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
    {
      v28 = *(_QWORD *)(v10 + 120);
      v29 = *(_QWORD *)(v10 + 112);
      v15 = *((_QWORD *)this + 34);
      v25 = *(_DWORD *)(v10 + 104);
      v30 = *(_QWORD *)(v10 + 96);
      v31 = *(_QWORD *)(v10 + 88);
      v26 = *(_DWORD *)(v10 + 80);
      v32 = *(_QWORD *)(v10 + 72);
      v21 = *(_DWORD *)(v10 + 32);
      v33 = *(_QWORD *)(v10 + 24);
      v22 = *(_DWORD *)v10;
      v34 = *(_QWORD *)(v10 + 128);
      v23 = *(_DWORD *)(v10 + 64);
      v35 = *(_QWORD *)(v10 + 56);
      v24[0] = *(_DWORD *)(v10 + 8);
      v37 = v6;
      v24[1] = v8;
      v24[2] = a2;
      v36 = 0x1000000LL;
      v27 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        (__int64)&unk_180834A67,
        v15 + 8,
        v14,
        (__int64)&v27,
        (__int64)&v36,
        (__int64)v24,
        &v35,
        (__int64)&v23,
        &v34,
        (__int64)&v22,
        &v33,
        (__int64)&v21,
        &v32,
        (__int64)&v26,
        &v31,
        &v30,
        (__int64)&v25,
        &v29,
        &v28);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v17 = XamlSwitcherLogging::Provider(v16);
    v18 = (int)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v37 = v6;
      v24[0] = v8;
      v23 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *((_QWORD *)this + 34);
      v22 = CurrentThreadId;
      v21 = *(_DWORD *)(v20 + 72);
      v27 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v18,
        (unsigned int)&unk_180834BBD,
        v20 + 8,
        0,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)v24,
        (__int64)&v37);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
