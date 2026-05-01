/*
 * XREFs of ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180555624
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805545A0 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@74@Z @ 0x18000CBFC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000CBFC.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::Stop(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 (__fastcall *v6)(__int64, __int128 *); // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  int *v12; // rdi
  __int64 v13; // rcx
  const struct _tlgProvider_t *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v22; // r8
  int v23; // [rsp+20h] [rbp-120h]
  int v24; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v25; // [rsp+C4h] [rbp-7Ch] BYREF
  _DWORD v26[2]; // [rsp+C8h] [rbp-78h] BYREF
  int v27; // [rsp+D0h] [rbp-70h] BYREF
  int v28; // [rsp+D4h] [rbp-6Ch] BYREF
  int v29; // [rsp+D8h] [rbp-68h] BYREF
  _QWORD v30[3]; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+100h] [rbp-40h] BYREF
  __int64 v33; // [rsp+108h] [rbp-38h] BYREF
  __int64 v34; // [rsp+110h] [rbp-30h] BYREF
  __int64 v35; // [rsp+118h] [rbp-28h] BYREF
  __int64 v36; // [rsp+120h] [rbp-20h] BYREF
  __int64 v37; // [rsp+128h] [rbp-18h] BYREF
  __int64 v38; // [rsp+130h] [rbp-10h] BYREF
  __int64 v39; // [rsp+138h] [rbp-8h] BYREF
  __int128 v40; // [rsp+140h] [rbp+0h] BYREF
  __int128 v41; // [rsp+150h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+160h] [rbp+20h] BYREF
  _QWORD *v43; // [rsp+180h] [rbp+40h]
  __int64 v44; // [rsp+188h] [rbp+48h]
  int *v45; // [rsp+190h] [rbp+50h]
  __int64 v46; // [rsp+198h] [rbp+58h]
  DWORD *v47; // [rsp+1A0h] [rbp+60h]
  __int64 v48; // [rsp+1A8h] [rbp+68h]
  __int128 *v49; // [rsp+1B0h] [rbp+70h]
  __int64 v50; // [rsp+1B8h] [rbp+78h]
  __int128 *v51; // [rsp+1C0h] [rbp+80h]
  __int64 v52; // [rsp+1C8h] [rbp+88h]
  _DWORD *v53; // [rsp+1D0h] [rbp+90h]
  __int64 v54; // [rsp+1D8h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+C8h]

  v6 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 32LL);
  v41 = 0LL;
  v40 = 0LL;
  v8 = v6(a2, &v41);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v8,
      v23);
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 32LL))(a3, &v40);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v9,
      v23);
  v10 = *(_QWORD *)(a1 + 272);
  v11 = *(_DWORD *)(v10 + 72);
  if ( v11 < 0 && (v12 = (int *)(v10 + 80), v11 == v12[2]) && v12 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v14 = WindowManagementLogging::Provider(v13);
    if ( *(_DWORD *)v14 > 5u && tlgKeywordOn((__int64)v14, 0x400000000000LL) )
    {
      v17 = *(_QWORD *)(a1 + 272);
      v30[1] = &v40;
      v26[1] = a4;
      v30[2] = &v41;
      v31 = *((_QWORD *)v12 + 15);
      v32 = *((_QWORD *)v12 + 14);
      v27 = v12[26];
      v33 = *((_QWORD *)v12 + 12);
      v34 = *((_QWORD *)v12 + 11);
      v28 = v12[20];
      v35 = *((_QWORD *)v12 + 9);
      v29 = v12[8];
      v36 = *((_QWORD *)v12 + 3);
      v24 = *v12;
      v37 = *((_QWORD *)v12 + 16);
      v25 = v12[16];
      v38 = *((_QWORD *)v12 + 7);
      v26[0] = v12[2];
      v39 = 0x1000000LL;
      v30[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v15,
        (__int64)&unk_18081D0A3,
        v17 + 8,
        v16,
        (__int64)v30,
        (__int64)&v39,
        (__int64)v26,
        &v38,
        (__int64)&v25,
        &v37,
        (__int64)&v24,
        &v36,
        (__int64)&v29,
        &v35,
        (__int64)&v28,
        &v34,
        &v33,
        (__int64)&v27,
        &v32,
        &v31);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v19 = WindowManagementLogging::Provider(v18);
    v20 = (__int64)v19;
    if ( *(_DWORD *)v19 > 5u && tlgKeywordOn((__int64)v19, 0x400000000000LL) )
    {
      v26[0] = a4;
      CurrentThreadId = GetCurrentThreadId();
      v22 = *(_QWORD *)(a1 + 272);
      v25 = CurrentThreadId;
      v54 = 4LL;
      v52 = 16LL;
      v24 = *(_DWORD *)(v22 + 72);
      v53 = v26;
      v51 = &v40;
      v49 = &v41;
      v47 = &v25;
      v45 = &v24;
      v43 = v30;
      v30[0] = 50331648LL;
      v50 = 16LL;
      v48 = 4LL;
      v46 = 4LL;
      v44 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v20, byte_18081D00E, (const GUID *)(v22 + 8), 0LL, 8u, &v42);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
