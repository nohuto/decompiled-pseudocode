/*
 * XREFs of ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@W4SwitcherType@3@@Z @ 0x1805317B0
 * Callers:
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18052F0B0 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x18000AE50 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000AE50.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int a4)
{
  __int64 (__fastcall *v7)(__int64, __int128 *); // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rdi
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-120h]
  int v23; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v24; // [rsp+C4h] [rbp-7Ch] BYREF
  int v25; // [rsp+C8h] [rbp-78h] BYREF
  _DWORD v26[3]; // [rsp+CCh] [rbp-74h] BYREF
  int v27; // [rsp+D8h] [rbp-68h] BYREF
  int v28; // [rsp+DCh] [rbp-64h] BYREF
  _QWORD v29[2]; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+100h] [rbp-40h] BYREF
  __int64 v33; // [rsp+108h] [rbp-38h] BYREF
  __int64 v34; // [rsp+110h] [rbp-30h] BYREF
  __int64 v35; // [rsp+118h] [rbp-28h] BYREF
  __int64 v36; // [rsp+120h] [rbp-20h] BYREF
  __int64 v37; // [rsp+128h] [rbp-18h] BYREF
  __int64 v38; // [rsp+130h] [rbp-10h] BYREF
  __int128 v39; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+150h] [rbp+10h] BYREF
  _QWORD *v41; // [rsp+170h] [rbp+30h]
  int v42; // [rsp+178h] [rbp+38h]
  int v43; // [rsp+17Ch] [rbp+3Ch]
  int *v44; // [rsp+180h] [rbp+40h]
  int v45; // [rsp+188h] [rbp+48h]
  int v46; // [rsp+18Ch] [rbp+4Ch]
  DWORD *v47; // [rsp+190h] [rbp+50h]
  int v48; // [rsp+198h] [rbp+58h]
  int v49; // [rsp+19Ch] [rbp+5Ch]
  __int128 *v50; // [rsp+1A0h] [rbp+60h]
  int v51; // [rsp+1A8h] [rbp+68h]
  int v52; // [rsp+1ACh] [rbp+6Ch]
  int *v53; // [rsp+1B0h] [rbp+70h]
  int v54; // [rsp+1B8h] [rbp+78h]
  int v55; // [rsp+1BCh] [rbp+7Ch]
  _DWORD *v56; // [rsp+1C0h] [rbp+80h]
  int v57; // [rsp+1C8h] [rbp+88h]
  int v58; // [rsp+1CCh] [rbp+8Ch]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+C8h]

  v7 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 32LL);
  v39 = 0LL;
  v8 = v7(a2, &v39);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v8,
      v22);
  v9 = *(_QWORD *)(a1 + 272);
  v10 = *(_DWORD *)(v9 + 72);
  if ( v10 >= 0 || v10 != *(_DWORD *)(v9 + 88) || (v11 = v9 + 80, v9 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v17 = WindowManagementLogging::Provider();
    v18 = (__int64)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v19 = *a3;
      v26[0] = a4;
      v25 = (*(__int64 (__fastcall **)(__int64 *))(v19 + 24))(a3);
      CurrentThreadId = GetCurrentThreadId();
      v21 = *(_QWORD *)(a1 + 272);
      v58 = 0;
      v55 = 0;
      v52 = 0;
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v24 = CurrentThreadId;
      v23 = *(_DWORD *)(v21 + 72);
      v56 = v26;
      v53 = &v25;
      v50 = &v39;
      v47 = &v24;
      v44 = &v23;
      v41 = v29;
      v57 = 4;
      v54 = 4;
      v48 = 4;
      v45 = 4;
      v29[0] = 50331648LL;
      v51 = 16;
      v42 = 8;
      tlgWriteTransfer_EventWriteTransfer(v18, byte_1807E29A5, (const GUID *)(v21 + 8), 0LL, 8u, &v40);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v12 = WindowManagementLogging::Provider();
    v13 = (__int64)v12;
    if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
    {
      v14 = *a3;
      v26[1] = a4;
      v26[2] = (*(__int64 (__fastcall **)(__int64 *))(v14 + 24))(a3);
      v15 = *(_QWORD *)(a1 + 272);
      v29[1] = &v39;
      v30 = *(_QWORD *)(v11 + 120);
      v31 = *(_QWORD *)(v11 + 112);
      v27 = *(_DWORD *)(v11 + 104);
      v32 = *(_QWORD *)(v11 + 96);
      v33 = *(_QWORD *)(v11 + 88);
      v28 = *(_DWORD *)(v11 + 80);
      v34 = *(_QWORD *)(v11 + 72);
      v23 = *(_DWORD *)(v11 + 32);
      v35 = *(_QWORD *)(v11 + 24);
      v24 = *(_DWORD *)v11;
      v36 = *(_QWORD *)(v11 + 128);
      v25 = *(_DWORD *)(v11 + 64);
      v37 = *(_QWORD *)(v11 + 56);
      v26[0] = *(_DWORD *)(v11 + 8);
      v38 = 0x1000000LL;
      v29[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        (__int64)&unk_1807E284B,
        v15 + 8,
        v16,
        (__int64)v29,
        (__int64)&v38,
        (__int64)v26,
        &v37,
        (__int64)&v25,
        &v36,
        (__int64)&v24,
        &v35,
        (__int64)&v23,
        &v34,
        (__int64)&v28,
        &v33,
        &v32,
        (__int64)&v27,
        &v31,
        &v30);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
