/*
 * XREFs of ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x18051B9CC
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U3@U2@U2@U2@U2@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapSz@G@@44445444444445444454444@Z @ 0x18000BFCC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapSz@G@@U2@U2@U2.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B158 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ @ 0x1805152C4 (--1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x180518088 (-GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOper.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
        TabletModeTraceLogging::ApplyLayoutOperationHelper *this,
        struct IAppLayoutOperation *a2)
{
  int AppLayoutOperationData; // eax
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // [rsp+120h] [rbp-70h] BYREF
  int v9; // [rsp+124h] [rbp-6Ch] BYREF
  int v10; // [rsp+128h] [rbp-68h] BYREF
  int v11; // [rsp+12Ch] [rbp-64h] BYREF
  int v12; // [rsp+130h] [rbp-60h] BYREF
  int v13; // [rsp+134h] [rbp-5Ch] BYREF
  int v14; // [rsp+138h] [rbp-58h] BYREF
  int v15; // [rsp+13Ch] [rbp-54h] BYREF
  int v16; // [rsp+140h] [rbp-50h] BYREF
  int v17; // [rsp+144h] [rbp-4Ch] BYREF
  int v18; // [rsp+148h] [rbp-48h] BYREF
  int v19; // [rsp+14Ch] [rbp-44h] BYREF
  int v20; // [rsp+150h] [rbp-40h] BYREF
  int v21; // [rsp+154h] [rbp-3Ch] BYREF
  int v22; // [rsp+158h] [rbp-38h] BYREF
  int v23; // [rsp+15Ch] [rbp-34h] BYREF
  int v24; // [rsp+160h] [rbp-30h] BYREF
  int v25; // [rsp+164h] [rbp-2Ch] BYREF
  int v26; // [rsp+168h] [rbp-28h] BYREF
  int v27; // [rsp+16Ch] [rbp-24h] BYREF
  DWORD CurrentThreadId; // [rsp+170h] [rbp-20h] BYREF
  __int64 v29; // [rsp+178h] [rbp-18h] BYREF
  __int64 v30; // [rsp+180h] [rbp-10h] BYREF
  __int64 v31; // [rsp+188h] [rbp-8h] BYREF
  __int64 v32; // [rsp+190h] [rbp+0h] BYREF
  __int64 v33; // [rsp+198h] [rbp+8h] BYREF
  _DWORD v34[10]; // [rsp+1A0h] [rbp+10h] BYREF
  __int64 v35; // [rsp+1C8h] [rbp+38h]
  __int128 v36; // [rsp+1D0h] [rbp+40h]
  __int64 v37; // [rsp+1E0h] [rbp+50h]
  __int64 v38; // [rsp+1E8h] [rbp+58h]
  __int128 v39; // [rsp+1F0h] [rbp+60h]
  __int64 v40; // [rsp+200h] [rbp+70h]
  __int64 v41; // [rsp+208h] [rbp+78h]
  __int64 v42; // [rsp+210h] [rbp+80h]
  int v43; // [rsp+218h] [rbp+88h]
  int v44; // [rsp+21Ch] [rbp+8Ch]
  int v45; // [rsp+220h] [rbp+90h]
  int v46; // [rsp+224h] [rbp+94h]
  __int128 v47; // [rsp+240h] [rbp+B0h]
  __int64 v48; // [rsp+250h] [rbp+C0h]
  __int64 v49; // [rsp+258h] [rbp+C8h]
  __int64 v50; // [rsp+260h] [rbp+D0h]
  __int64 v51; // [rsp+268h] [rbp+D8h]
  __int128 v52; // [rsp+270h] [rbp+E0h]
  __int64 v53; // [rsp+280h] [rbp+F0h]
  __int64 v54; // [rsp+288h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+128h]

  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  AppLayoutOperationData = TabletModeTraceLogging::GetAppLayoutOperationData(
                             a2,
                             (struct TabletModeTraceLogging::AppLayoutOperationData *)v34);
  if ( AppLayoutOperationData >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
    v5 = WindowManagementLogging::Provider(v4);
    if ( *(_DWORD *)v5 > 5u )
    {
      v29 = v51;
      v8 = HIDWORD(v50);
      v9 = v50;
      v10 = HIDWORD(v49);
      v11 = v49;
      v30 = v47;
      v12 = v46;
      v13 = v45;
      v14 = v44;
      v15 = v43;
      v16 = HIDWORD(v42);
      v17 = v42;
      v18 = HIDWORD(v41);
      v19 = v41;
      v31 = v39;
      v20 = HIDWORD(v38);
      v21 = v38;
      v22 = HIDWORD(v37);
      v23 = v37;
      v32 = v35;
      v24 = v34[3];
      v25 = v34[2];
      v26 = v34[1];
      v27 = v34[0];
      CurrentThreadId = GetCurrentThreadId();
      v33 = 0LL;
      v6 = *((_QWORD *)this + 34);
      if ( !*(_BYTE *)(v6 + 4) || _tlgGuidIsZero((const struct _GUID *)(v6 + 24)) )
        v7 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        (__int64)&unk_18081A24A,
        v6 + 8,
        v7,
        (__int64)&v33,
        (__int64)&CurrentThreadId,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        &v32,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        &v31,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        &v30,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        &v29);
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
  TabletModeTraceLogging::AppLayoutOperationData::~AppLayoutOperationData((TabletModeTraceLogging::AppLayoutOperationData *)v34);
}
