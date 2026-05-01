/*
 * XREFs of ?Stop@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAX_N@Z @ 0x18007D3E0
 * Callers:
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18026B7F4 (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644534@Z @ 0x18000E214 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000E214.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434@Z @ 0x18007E03C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnArrangementReset::Stop(
        WindowDragInputProviderTelemetry::OnArrangementReset *this,
        unsigned __int8 a2)
{
  __int64 v2; // rdi
  int v4; // esi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  int v13; // edi
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // r9d
  int v17; // [rsp+D0h] [rbp-80h] BYREF
  int v18; // [rsp+D4h] [rbp-7Ch] BYREF
  int v19; // [rsp+D8h] [rbp-78h] BYREF
  int v20; // [rsp+DCh] [rbp-74h] BYREF
  int v21; // [rsp+E0h] [rbp-70h] BYREF
  int v22; // [rsp+E4h] [rbp-6Ch] BYREF
  __int64 v23; // [rsp+E8h] [rbp-68h] BYREF
  _QWORD v24[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+100h] [rbp-50h] BYREF
  __int64 v26; // [rsp+108h] [rbp-48h] BYREF
  __int64 v27; // [rsp+110h] [rbp-40h] BYREF
  __int64 v28; // [rsp+118h] [rbp-38h] BYREF
  __int64 v29; // [rsp+120h] [rbp-30h] BYREF
  __int64 v30; // [rsp+128h] [rbp-28h] BYREF
  __int64 v31; // [rsp+130h] [rbp-20h] BYREF
  __int64 v32; // [rsp+138h] [rbp-18h] BYREF
  __int64 v33; // [rsp+140h] [rbp-10h] BYREF
  int v34; // [rsp+170h] [rbp+20h] BYREF
  DWORD v35; // [rsp+180h] [rbp+30h] BYREF
  int v36; // [rsp+188h] [rbp+38h] BYREF

  v2 = *((_QWORD *)this + 34);
  v4 = a2;
  v5 = *(_DWORD *)(v2 + 72);
  if ( v5 < 0 && (v6 = (int *)(v2 + 80), v5 == v6[2]) && v6 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = WindowManagementLogging::Provider(v7);
    if ( *(_DWORD *)v8 > 5u )
    {
      v26 = *((_QWORD *)v6 + 15);
      v27 = *((_QWORD *)v6 + 14);
      v9 = *((_QWORD *)v6 + 6);
      v17 = v6[26];
      v10 = *((_QWORD *)this + 34);
      v28 = *((_QWORD *)v6 + 12);
      v29 = *((_QWORD *)v6 + 11);
      v18 = v6[20];
      v30 = *((_QWORD *)v6 + 9);
      v19 = v6[8];
      v31 = *((_QWORD *)v6 + 3);
      v20 = *v6;
      v32 = *((_QWORD *)v6 + 16);
      v21 = v6[16];
      v33 = *((_QWORD *)v6 + 7);
      v22 = v6[2];
      v25 = v9;
      LODWORD(v9) = v6[17];
      v34 = v4;
      v35 = v9;
      LODWORD(v9) = v6[4];
      v24[1] = 0x1000000LL;
      v36 = v9;
      v23 = 0x1000000LL;
      v24[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (__int64)&unk_180824F56,
        v10 + 8,
        (__int64)v8,
        (__int64)v24,
        (__int64)&v23,
        (__int64)&v22,
        &v33,
        (__int64)&v21,
        &v32,
        (__int64)&v20,
        &v31,
        (__int64)&v19,
        &v30,
        (__int64)&v18,
        &v29,
        &v28,
        (__int64)&v17,
        &v27,
        &v26,
        (__int64)&v36,
        (__int64)&v35,
        &v25);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = WindowManagementLogging::Provider(v11);
    v13 = (int)v12;
    if ( *(_DWORD *)v12 > 5u )
    {
      v34 = v4;
      v24[0] = 0x1000000LL;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 34);
      v35 = CurrentThreadId;
      v36 = *(_DWORD *)(v15 + 72);
      v23 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v13,
        (unsigned int)&unk_1808250CA,
        v15 + 8,
        v16,
        (__int64)&v23,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)v24,
        (__int64)&v34);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
