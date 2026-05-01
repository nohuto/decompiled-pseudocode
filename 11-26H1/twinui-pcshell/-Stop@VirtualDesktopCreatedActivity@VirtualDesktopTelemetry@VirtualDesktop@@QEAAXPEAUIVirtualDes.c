/*
 * XREFs of ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@W4SwitcherType@3@@Z @ 0x1805552B4
 * Callers:
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180552460 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x18000C600 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000C600.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int a4)
{
  __int64 (__fastcall *v7)(__int64, __int128 *); // rax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-120h]
  int v25; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v26; // [rsp+C4h] [rbp-7Ch] BYREF
  int v27; // [rsp+C8h] [rbp-78h] BYREF
  _DWORD v28[3]; // [rsp+CCh] [rbp-74h] BYREF
  int v29; // [rsp+D8h] [rbp-68h] BYREF
  int v30; // [rsp+DCh] [rbp-64h] BYREF
  _QWORD v31[2]; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+100h] [rbp-40h] BYREF
  __int64 v35; // [rsp+108h] [rbp-38h] BYREF
  __int64 v36; // [rsp+110h] [rbp-30h] BYREF
  __int64 v37; // [rsp+118h] [rbp-28h] BYREF
  __int64 v38; // [rsp+120h] [rbp-20h] BYREF
  __int64 v39; // [rsp+128h] [rbp-18h] BYREF
  __int64 v40; // [rsp+130h] [rbp-10h] BYREF
  __int128 v41; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+150h] [rbp+10h] BYREF
  _QWORD *v43; // [rsp+170h] [rbp+30h]
  __int64 v44; // [rsp+178h] [rbp+38h]
  int *v45; // [rsp+180h] [rbp+40h]
  __int64 v46; // [rsp+188h] [rbp+48h]
  DWORD *v47; // [rsp+190h] [rbp+50h]
  __int64 v48; // [rsp+198h] [rbp+58h]
  __int128 *v49; // [rsp+1A0h] [rbp+60h]
  __int64 v50; // [rsp+1A8h] [rbp+68h]
  int *v51; // [rsp+1B0h] [rbp+70h]
  __int64 v52; // [rsp+1B8h] [rbp+78h]
  _DWORD *v53; // [rsp+1C0h] [rbp+80h]
  __int64 v54; // [rsp+1C8h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+C8h]

  v7 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 32LL);
  v41 = 0LL;
  v8 = v7(a2, &v41);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v8,
      v24);
  v9 = *(_QWORD *)(a1 + 272);
  v10 = *(_DWORD *)(v9 + 72);
  if ( v10 < 0 && (v11 = v9 + 80, v10 == *(_DWORD *)(v11 + 8)) && v11 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v13 = WindowManagementLogging::Provider(v12);
    v14 = (__int64)v13;
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v15 = *a3;
      v28[1] = a4;
      v28[2] = (*(__int64 (__fastcall **)(__int64 *))(v15 + 24))(a3);
      v16 = *(_QWORD *)(a1 + 272);
      v31[1] = &v41;
      v32 = *(_QWORD *)(v11 + 120);
      v33 = *(_QWORD *)(v11 + 112);
      v29 = *(_DWORD *)(v11 + 104);
      v34 = *(_QWORD *)(v11 + 96);
      v35 = *(_QWORD *)(v11 + 88);
      v30 = *(_DWORD *)(v11 + 80);
      v36 = *(_QWORD *)(v11 + 72);
      v25 = *(_DWORD *)(v11 + 32);
      v37 = *(_QWORD *)(v11 + 24);
      v26 = *(_DWORD *)v11;
      v38 = *(_QWORD *)(v11 + 128);
      v27 = *(_DWORD *)(v11 + 64);
      v39 = *(_QWORD *)(v11 + 56);
      v28[0] = *(_DWORD *)(v11 + 8);
      v40 = 0x1000000LL;
      v31[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v14,
        (__int64)&unk_18081D99D,
        v16 + 8,
        v17,
        (__int64)v31,
        (__int64)&v40,
        (__int64)v28,
        &v39,
        (__int64)&v27,
        &v38,
        (__int64)&v26,
        &v37,
        (__int64)&v25,
        &v36,
        (__int64)&v30,
        &v35,
        &v34,
        (__int64)&v29,
        &v33,
        &v32);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v19 = WindowManagementLogging::Provider(v18);
    v20 = (__int64)v19;
    if ( *(_DWORD *)v19 > 5u && tlgKeywordOn((__int64)v19, 0x400000000000LL) )
    {
      v21 = *a3;
      v28[0] = a4;
      v27 = (*(__int64 (__fastcall **)(__int64 *))(v21 + 24))(a3);
      CurrentThreadId = GetCurrentThreadId();
      v23 = *(_QWORD *)(a1 + 272);
      v26 = CurrentThreadId;
      v54 = 4LL;
      v52 = 4LL;
      v25 = *(_DWORD *)(v23 + 72);
      v53 = v28;
      v51 = &v27;
      v49 = &v41;
      v47 = &v26;
      v45 = &v25;
      v43 = v31;
      v31[0] = 50331648LL;
      v50 = 16LL;
      v48 = 4LL;
      v46 = 4LL;
      v44 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v20, byte_18081D91A, (const GUID *)(v23 + 8), 0LL, 8u, &v42);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
