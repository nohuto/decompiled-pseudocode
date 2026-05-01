/*
 * XREFs of ?Stop@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18007C038
 * Callers:
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18026B964 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U1@U_tlgWrapperPtrSize@@U5@U2@U2@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564453AEBU_tlgWrapperPtrSize@@744434@Z @ 0x18000F5C8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000F5C8.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U_tlgWrapperPtrSize@@U3@U2@U2@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@43AEBU_tlgWrapperPtrSize@@544434@Z @ 0x1801D33E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U_tlgWrapperPtrSize@@U3@U2@U2@U.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnGetArrangementRects::Stop(
        WindowDragInputProviderTelemetry::OnGetArrangementRects *this,
        const struct _WINDOW_ARRANGEMENT_INFO *a2)
{
  __int64 v2; // rsi
  int v5; // eax
  int *v6; // rsi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  int v14; // esi
  int v15; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  int v18; // r9d
  int v19; // [rsp+100h] [rbp-80h] BYREF
  DWORD v20; // [rsp+104h] [rbp-7Ch] BYREF
  _DWORD v21[2]; // [rsp+108h] [rbp-78h] BYREF
  int v22; // [rsp+110h] [rbp-70h] BYREF
  int v23; // [rsp+114h] [rbp-6Ch] BYREF
  int v24; // [rsp+118h] [rbp-68h] BYREF
  int v25; // [rsp+11Ch] [rbp-64h] BYREF
  int v26; // [rsp+120h] [rbp-60h] BYREF
  __int64 v27; // [rsp+128h] [rbp-58h] BYREF
  __int64 v28; // [rsp+130h] [rbp-50h] BYREF
  __int64 v29; // [rsp+138h] [rbp-48h] BYREF
  char *v30; // [rsp+140h] [rbp-40h] BYREF
  int v31; // [rsp+148h] [rbp-38h]
  char *v32; // [rsp+150h] [rbp-30h] BYREF
  int v33; // [rsp+158h] [rbp-28h]
  __int64 v34; // [rsp+160h] [rbp-20h]
  __int64 v35; // [rsp+168h] [rbp-18h]
  __int64 v36; // [rsp+170h] [rbp-10h] BYREF
  __int64 v37; // [rsp+178h] [rbp-8h] BYREF
  __int64 v38; // [rsp+180h] [rbp+0h] BYREF
  __int64 v39; // [rsp+188h] [rbp+8h] BYREF
  __int64 v40; // [rsp+190h] [rbp+10h] BYREF
  __int64 v41; // [rsp+198h] [rbp+18h] BYREF
  __int64 v42; // [rsp+1A0h] [rbp+20h] BYREF
  _QWORD v43[3]; // [rsp+1A8h] [rbp+28h] BYREF
  int v44; // [rsp+1D0h] [rbp+50h] BYREF
  int v45; // [rsp+1E0h] [rbp+60h] BYREF
  int v46; // [rsp+1E8h] [rbp+68h] BYREF

  v2 = *((_QWORD *)this + 34);
  v5 = *(_DWORD *)(v2 + 72);
  if ( v5 < 0 && (v6 = (int *)(v2 + 80), v5 == v6[2]) && v6 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = WindowManagementLogging::Provider(v7);
    if ( *(_DWORD *)v8 > 5u )
    {
      v9 = *((_DWORD *)a2 + 18);
      v10 = *((_QWORD *)this + 34);
      v30 = (char *)a2 + 40;
      v44 = v9;
      v11 = *((_QWORD *)a2 + 8);
      v32 = (char *)a2 + 20;
      v36 = *((_QWORD *)v6 + 6);
      v22 = v6[17];
      v23 = v6[4];
      v37 = *((_QWORD *)v6 + 15);
      v38 = *((_QWORD *)v6 + 14);
      v24 = v6[26];
      v39 = *((_QWORD *)v6 + 12);
      v40 = *((_QWORD *)v6 + 11);
      v25 = v6[20];
      v41 = *((_QWORD *)v6 + 9);
      v26 = v6[8];
      v42 = *((_QWORD *)v6 + 3);
      v19 = *v6;
      v43[0] = *((_QWORD *)v6 + 16);
      v20 = v6[16];
      v27 = *((_QWORD *)v6 + 7);
      v21[0] = v6[2];
      v34 = v11;
      v45 = *((_DWORD *)a2 + 14);
      v46 = *((_DWORD *)a2 + 9);
      v21[1] = *((_DWORD *)a2 + 4);
      v31 = 16;
      v33 = 16;
      v35 = 0x1000000LL;
      v28 = 0x1000000LL;
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (__int64)&unk_180825144,
        v10 + 8,
        (__int64)v8,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)v21,
        &v27,
        (__int64)&v20,
        v43,
        (__int64)&v19,
        &v42,
        (__int64)&v26,
        &v41,
        (__int64)&v25,
        &v40,
        &v39,
        (__int64)&v24,
        &v38,
        &v37,
        (__int64)&v23,
        (__int64)&v22,
        &v36);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = WindowManagementLogging::Provider(v12);
    v14 = (int)v13;
    if ( *(_DWORD *)v13 > 5u )
    {
      v44 = *((_DWORD *)a2 + 18);
      v29 = *((_QWORD *)a2 + 8);
      v45 = *((_DWORD *)a2 + 14);
      v46 = *((_DWORD *)a2 + 9);
      v15 = *((_DWORD *)a2 + 4);
      v32 = (char *)a2 + 40;
      v21[0] = v15;
      v30 = (char *)a2 + 20;
      v33 = 16;
      v31 = 16;
      v28 = 0x1000000LL;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 34);
      v20 = CurrentThreadId;
      v19 = *(_DWORD *)(v17 + 72);
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v14,
        (unsigned int)&unk_180825337,
        v17 + 8,
        v18,
        (__int64)&v27,
        (__int64)&v19,
        (__int64)&v20,
        (__int64)&v28,
        (__int64)&v30,
        (__int64)&v32,
        (__int64)v21,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v29,
        (__int64)&v44);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
