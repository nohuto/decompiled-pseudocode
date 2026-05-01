/*
 * XREFs of ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x1803C3FB8
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803C2500 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CC0D0 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444@Z @ 0x18000468C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000468C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x180004A04 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800C458C (-Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Stop(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int a2,
        int a3,
        int a4)
{
  int *v4; // rax
  int v9; // ecx
  int *v10; // rdi
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rcx
  const struct _tlgProvider_t *v16; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  int v19; // ecx
  int v20; // [rsp+E8h] [rbp-80h] BYREF
  DWORD v21; // [rsp+ECh] [rbp-7Ch] BYREF
  int v22; // [rsp+F0h] [rbp-78h] BYREF
  int v23; // [rsp+F4h] [rbp-74h] BYREF
  _DWORD v24[4]; // [rsp+F8h] [rbp-70h] BYREF
  int v25; // [rsp+108h] [rbp-60h] BYREF
  int v26; // [rsp+10Ch] [rbp-5Ch] BYREF
  int v27; // [rsp+110h] [rbp-58h] BYREF
  __int64 v28; // [rsp+118h] [rbp-50h] BYREF
  __int64 v29; // [rsp+120h] [rbp-48h] BYREF
  __int64 v30; // [rsp+128h] [rbp-40h] BYREF
  __int64 v31; // [rsp+130h] [rbp-38h] BYREF
  __int64 v32; // [rsp+138h] [rbp-30h] BYREF
  __int64 v33; // [rsp+140h] [rbp-28h] BYREF
  __int64 v34; // [rsp+148h] [rbp-20h] BYREF
  __int64 v35; // [rsp+150h] [rbp-18h] BYREF
  __int64 v36; // [rsp+158h] [rbp-10h] BYREF
  __int64 v37; // [rsp+160h] [rbp-8h] BYREF
  __int64 v38; // [rsp+168h] [rbp+0h] BYREF

  v4 = (int *)*((_QWORD *)this + 34);
  v9 = v4[18];
  if ( v9 >= 0 || v9 != v4[22] || (v10 = v4 + 20, v4 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v16 = CortanaProactiveLogging::Provider(v15);
    if ( *(_DWORD *)v16 > 5u )
    {
      v24[0] = a4;
      v23 = a3;
      v22 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 34);
      v21 = CurrentThreadId;
      v19 = *(_DWORD *)(v18 + 72);
      v28 = 0x1000000LL;
      v20 = v19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v16,
        (__int64)&unk_1807CA0C1);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = CortanaProactiveLogging::Provider(v11);
    if ( *(_DWORD *)v12 > 5u )
    {
      v26 = v10[4];
      v30 = *((_QWORD *)v10 + 15);
      v31 = *((_QWORD *)v10 + 14);
      v27 = v10[26];
      v13 = *((_QWORD *)this + 34);
      v32 = *((_QWORD *)v10 + 12);
      v33 = *((_QWORD *)v10 + 11);
      v20 = v10[20];
      v34 = *((_QWORD *)v10 + 9);
      v21 = v10[8];
      v35 = *((_QWORD *)v10 + 3);
      v22 = *v10;
      v36 = *((_QWORD *)v10 + 16);
      v23 = v10[16];
      v37 = *((_QWORD *)v10 + 7);
      v24[0] = v10[2];
      v38 = 0x1000000LL;
      v28 = 0x1000000LL;
      v29 = *((_QWORD *)v10 + 6);
      v14 = v10[17];
      v24[1] = a4;
      v24[2] = a3;
      v24[3] = a2;
      v25 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        (__int64)&unk_1807CA38A,
        v13 + 8,
        (__int64)v12,
        (__int64)&v28,
        (__int64)&v38,
        (__int64)v24,
        &v37,
        (__int64)&v23,
        &v36,
        (__int64)&v22,
        &v35,
        (__int64)&v21,
        &v34,
        (__int64)&v20,
        &v33,
        &v32,
        (__int64)&v27,
        &v31,
        &v30,
        (__int64)&v26,
        (__int64)&v25,
        &v29);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
