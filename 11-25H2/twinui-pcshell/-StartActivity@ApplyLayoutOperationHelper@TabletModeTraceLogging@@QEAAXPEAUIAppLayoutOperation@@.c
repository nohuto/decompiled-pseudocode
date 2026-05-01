/*
 * XREFs of ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1804F9BE8
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1804F4474 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U3@U2@U2@U2@U2@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapSz@G@@44445444444445444454444@Z @ 0x18000A81C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapSz@G@@U2@U2@U2.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180016A80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180016E10 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180056FB8 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3BC8 (--1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x1804F692C (-GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOper.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
        TabletModeTraceLogging::ApplyLayoutOperationHelper *this,
        struct IAppLayoutOperation *a2)
{
  int AppLayoutOperationData; // eax
  const struct _tlgProvider_t *v4; // rdi
  __int64 v5; // rax
  int v6; // [rsp+120h] [rbp-70h] BYREF
  int v7; // [rsp+124h] [rbp-6Ch] BYREF
  int v8; // [rsp+128h] [rbp-68h] BYREF
  int v9; // [rsp+12Ch] [rbp-64h] BYREF
  int v10; // [rsp+130h] [rbp-60h] BYREF
  int v11; // [rsp+134h] [rbp-5Ch] BYREF
  int v12; // [rsp+138h] [rbp-58h] BYREF
  int v13; // [rsp+13Ch] [rbp-54h] BYREF
  int v14; // [rsp+140h] [rbp-50h] BYREF
  int v15; // [rsp+144h] [rbp-4Ch] BYREF
  int v16; // [rsp+148h] [rbp-48h] BYREF
  int v17; // [rsp+14Ch] [rbp-44h] BYREF
  int v18; // [rsp+150h] [rbp-40h] BYREF
  int v19; // [rsp+154h] [rbp-3Ch] BYREF
  int v20; // [rsp+158h] [rbp-38h] BYREF
  int v21; // [rsp+15Ch] [rbp-34h] BYREF
  int v22; // [rsp+160h] [rbp-30h] BYREF
  int v23; // [rsp+164h] [rbp-2Ch] BYREF
  int v24; // [rsp+168h] [rbp-28h] BYREF
  int v25; // [rsp+16Ch] [rbp-24h] BYREF
  DWORD CurrentThreadId; // [rsp+170h] [rbp-20h] BYREF
  __int64 v27; // [rsp+178h] [rbp-18h] BYREF
  __int64 v28; // [rsp+180h] [rbp-10h] BYREF
  __int64 v29; // [rsp+188h] [rbp-8h] BYREF
  __int64 v30; // [rsp+190h] [rbp+0h] BYREF
  __int64 v31; // [rsp+198h] [rbp+8h] BYREF
  _DWORD v32[10]; // [rsp+1A0h] [rbp+10h] BYREF
  __int64 v33; // [rsp+1C8h] [rbp+38h]
  __int128 v34; // [rsp+1D0h] [rbp+40h]
  __int64 v35; // [rsp+1E0h] [rbp+50h]
  __int64 v36; // [rsp+1E8h] [rbp+58h]
  __int128 v37; // [rsp+1F0h] [rbp+60h]
  __int64 v38; // [rsp+200h] [rbp+70h]
  __int64 v39; // [rsp+208h] [rbp+78h]
  __int64 v40; // [rsp+210h] [rbp+80h]
  int v41; // [rsp+218h] [rbp+88h]
  int v42; // [rsp+21Ch] [rbp+8Ch]
  int v43; // [rsp+220h] [rbp+90h]
  int v44; // [rsp+224h] [rbp+94h]
  __int128 v45; // [rsp+240h] [rbp+B0h]
  __int64 v46; // [rsp+250h] [rbp+C0h]
  __int64 v47; // [rsp+258h] [rbp+C8h]
  __int64 v48; // [rsp+260h] [rbp+D0h]
  __int64 v49; // [rsp+268h] [rbp+D8h]
  __int128 v50; // [rsp+270h] [rbp+E0h]
  __int64 v51; // [rsp+280h] [rbp+F0h]
  __int64 v52; // [rsp+288h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+128h]

  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  AppLayoutOperationData = TabletModeTraceLogging::GetAppLayoutOperationData(
                             a2,
                             (struct TabletModeTraceLogging::AppLayoutOperationData *)v32);
  if ( AppLayoutOperationData >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
    v4 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      v27 = v49;
      v6 = HIDWORD(v48);
      v7 = v48;
      v8 = HIDWORD(v47);
      v9 = v47;
      v28 = v45;
      v10 = v44;
      v11 = v43;
      v12 = v42;
      v13 = v41;
      v14 = HIDWORD(v40);
      v15 = v40;
      v16 = HIDWORD(v39);
      v17 = v39;
      v29 = v37;
      v18 = HIDWORD(v36);
      v19 = v36;
      v20 = HIDWORD(v35);
      v21 = v35;
      v30 = v33;
      v22 = v32[3];
      v23 = v32[2];
      v24 = v32[1];
      v25 = v32[0];
      CurrentThreadId = GetCurrentThreadId();
      v31 = 0LL;
      v5 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v4,
        (__int64)&unk_1807DF744,
        *((_QWORD *)this + 34) + 8LL,
        v5,
        (__int64)&v31,
        (__int64)&CurrentThreadId,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        &v30,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        &v29,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        &v28,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        &v27);
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD8,
      (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)AppLayoutOperationData);
  }
  TabletModeTraceLogging::AppLayoutOperationData::~AppLayoutOperationData((TabletModeTraceLogging::AppLayoutOperationData *)v32);
}
