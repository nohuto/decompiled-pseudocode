/*
 * XREFs of ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x18026A5DC
 * Callers:
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533884 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U5@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@7444@Z @ 0x18000B748 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000B748.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@5444@Z @ 0x18000C114 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U3@U2@U.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(__int64, GUID *, __int64 *),
        int a4)
{
  int v8; // eax
  int v9; // eax
  __int64 (__fastcall **v10)(__int64, GUID *, __int64 *); // rax
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  int *v17; // rax
  int v18; // ecx
  int *v19; // rdi
  const struct _tlgProvider_t *v20; // rax
  __int64 v21; // r9
  const struct _tlgProvider_t *v22; // rax
  __int64 v23; // rdi
  int v24; // [rsp+20h] [rbp-130h]
  int v25; // [rsp+D0h] [rbp-80h] BYREF
  int v26; // [rsp+D4h] [rbp-7Ch] BYREF
  int v27; // [rsp+D8h] [rbp-78h] BYREF
  DWORD CurrentThreadId; // [rsp+DCh] [rbp-74h] BYREF
  int v29; // [rsp+E0h] [rbp-70h] BYREF
  int v30; // [rsp+E4h] [rbp-6Ch] BYREF
  int v31; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-60h] BYREF
  int v33; // [rsp+F8h] [rbp-58h]
  int v34; // [rsp+FCh] [rbp-54h]
  int v35; // [rsp+100h] [rbp-50h]
  int v36; // [rsp+104h] [rbp-4Ch] BYREF
  __int64 v37; // [rsp+108h] [rbp-48h] BYREF
  __int64 v38; // [rsp+110h] [rbp-40h] BYREF
  _QWORD v39[3]; // [rsp+118h] [rbp-38h] BYREF
  __int64 v40; // [rsp+130h] [rbp-20h] BYREF
  __int64 v41; // [rsp+138h] [rbp-18h] BYREF
  __int64 v42; // [rsp+140h] [rbp-10h] BYREF
  __int64 v43; // [rsp+148h] [rbp-8h] BYREF
  __int64 v44; // [rsp+150h] [rbp+0h] BYREF
  __int64 v45; // [rsp+158h] [rbp+8h] BYREF
  __int64 v46; // [rsp+160h] [rbp+10h] BYREF
  __int128 v47; // [rsp+168h] [rbp+18h] BYREF
  __int128 v48; // [rsp+178h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+68h]

  v48 = 0LL;
  v47 = 0LL;
  v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int128 *))(*a2)[4])(a2, &v48);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v8,
      v24);
  v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int128 *))(*a3)[4])(a3, &v47);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v9,
      v24);
  v26 = 0;
  v25 = 0;
  v10 = *a3;
  v32 = 0LL;
  v11 = (*v10)((__int64)a3, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v32);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v11,
      v24);
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 56LL))(v32, &v25);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x54,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v12,
      v24);
  v13 = **a2;
  v14 = v32;
  v32 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = v13(a2, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v32);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x55,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v15,
      v24);
  v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 56LL))(v32, &v26);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v16,
      v24);
  v17 = *(int **)(a1 + 272);
  v18 = v17[18];
  if ( v18 >= 0 || v18 != v17[22] || (v19 = v17 + 20, v17 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v22 = WindowManagementLogging::Provider();
    v23 = (__int64)v22;
    if ( *(_DWORD *)v22 > 5u && tlgKeywordOn((__int64)v22, 0x400000000000LL) )
    {
      v31 = v25;
      v30 = v26;
      v29 = a4;
      v39[0] = &v47;
      v38 = (__int64)&v48;
      CurrentThreadId = GetCurrentThreadId();
      v27 = *(_DWORD *)(*(_QWORD *)(a1 + 272) + 72LL);
      v37 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v23,
        (__int64)&unk_1807E2A28);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v20 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v20 > 5u && tlgKeywordOn((__int64)v20, 0x400000000000LL) )
    {
      v33 = v25;
      v34 = v26;
      v35 = a4;
      v39[1] = &v47;
      v39[2] = &v48;
      v40 = *((_QWORD *)v19 + 15);
      v41 = *((_QWORD *)v19 + 14);
      v36 = v19[26];
      v42 = *((_QWORD *)v19 + 12);
      v43 = *((_QWORD *)v19 + 11);
      v27 = v19[20];
      v44 = *((_QWORD *)v19 + 9);
      CurrentThreadId = v19[8];
      v45 = *((_QWORD *)v19 + 3);
      v29 = *v19;
      v46 = *((_QWORD *)v19 + 16);
      v30 = v19[16];
      v37 = *((_QWORD *)v19 + 7);
      v31 = v19[2];
      v38 = 0x1000000LL;
      v39[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v21,
        (__int64)&unk_1807E2AD9,
        *(_QWORD *)(a1 + 272) + 8LL,
        v21,
        (__int64)v39,
        (__int64)&v38,
        (__int64)&v31,
        &v37,
        (__int64)&v30,
        &v46,
        (__int64)&v29,
        &v45,
        (__int64)&CurrentThreadId,
        &v44,
        (__int64)&v27,
        &v43,
        &v42,
        (__int64)&v36,
        &v41,
        &v40);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
}
