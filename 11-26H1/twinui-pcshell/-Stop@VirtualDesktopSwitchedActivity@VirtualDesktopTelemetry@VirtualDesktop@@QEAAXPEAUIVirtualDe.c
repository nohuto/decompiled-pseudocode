/*
 * XREFs of ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180262950
 * Callers:
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557284 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U5@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@7444@Z @ 0x18000CEF8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000CEF8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@5444@Z @ 0x18000D7F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U3@U2@U.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v17; // rdi
  int v18; // eax
  int *v19; // rdi
  __int64 v20; // rcx
  const struct _tlgProvider_t *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rcx
  const struct _tlgProvider_t *v24; // rax
  __int64 v25; // rdi
  int v26; // [rsp+20h] [rbp-130h]
  int v27; // [rsp+D0h] [rbp-80h] BYREF
  int v28; // [rsp+D4h] [rbp-7Ch] BYREF
  int v29; // [rsp+D8h] [rbp-78h] BYREF
  DWORD CurrentThreadId; // [rsp+DCh] [rbp-74h] BYREF
  int v31; // [rsp+E0h] [rbp-70h] BYREF
  int v32; // [rsp+E4h] [rbp-6Ch] BYREF
  int v33; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v34; // [rsp+F0h] [rbp-60h] BYREF
  int v35; // [rsp+F8h] [rbp-58h]
  int v36; // [rsp+FCh] [rbp-54h]
  int v37; // [rsp+100h] [rbp-50h]
  int v38; // [rsp+104h] [rbp-4Ch] BYREF
  __int64 v39; // [rsp+108h] [rbp-48h] BYREF
  __int64 v40; // [rsp+110h] [rbp-40h] BYREF
  _QWORD v41[3]; // [rsp+118h] [rbp-38h] BYREF
  __int64 v42; // [rsp+130h] [rbp-20h] BYREF
  __int64 v43; // [rsp+138h] [rbp-18h] BYREF
  __int64 v44; // [rsp+140h] [rbp-10h] BYREF
  __int64 v45; // [rsp+148h] [rbp-8h] BYREF
  __int64 v46; // [rsp+150h] [rbp+0h] BYREF
  __int64 v47; // [rsp+158h] [rbp+8h] BYREF
  __int64 v48; // [rsp+160h] [rbp+10h] BYREF
  __int128 v49; // [rsp+168h] [rbp+18h] BYREF
  __int128 v50; // [rsp+178h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+68h]

  v50 = 0LL;
  v49 = 0LL;
  v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int128 *))(*a2)[4])(a2, &v50);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v8,
      v26);
  v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int128 *))(*a3)[4])(a3, &v49);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v9,
      v26);
  v28 = 0;
  v27 = 0;
  v10 = *a3;
  v34 = 0LL;
  v11 = (*v10)((__int64)a3, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v34);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v11,
      v26);
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 56LL))(v34, &v27);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x54,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v12,
      v26);
  v13 = **a2;
  v14 = v34;
  v34 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = v13(a2, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v34);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x55,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v15,
      v26);
  v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 56LL))(v34, &v28);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v16,
      v26);
  v17 = *(_QWORD *)(a1 + 272);
  v18 = *(_DWORD *)(v17 + 72);
  if ( v18 < 0 && (v19 = (int *)(v17 + 80), v18 == v19[2]) && v19 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v21 = WindowManagementLogging::Provider(v20);
    if ( *(_DWORD *)v21 > 5u && tlgKeywordOn((__int64)v21, 0x400000000000LL) )
    {
      v35 = v27;
      v36 = v28;
      v37 = a4;
      v41[1] = &v49;
      v41[2] = &v50;
      v42 = *((_QWORD *)v19 + 15);
      v43 = *((_QWORD *)v19 + 14);
      v38 = v19[26];
      v44 = *((_QWORD *)v19 + 12);
      v45 = *((_QWORD *)v19 + 11);
      v29 = v19[20];
      v46 = *((_QWORD *)v19 + 9);
      CurrentThreadId = v19[8];
      v47 = *((_QWORD *)v19 + 3);
      v31 = *v19;
      v48 = *((_QWORD *)v19 + 16);
      v32 = v19[16];
      v39 = *((_QWORD *)v19 + 7);
      v33 = v19[2];
      v40 = 0x1000000LL;
      v41[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v22,
        (__int64)&unk_18081DDF5,
        *(_QWORD *)(a1 + 272) + 8LL,
        v22,
        (__int64)v41,
        (__int64)&v40,
        (__int64)&v33,
        &v39,
        (__int64)&v32,
        &v48,
        (__int64)&v31,
        &v47,
        (__int64)&CurrentThreadId,
        &v46,
        (__int64)&v29,
        &v45,
        &v44,
        (__int64)&v38,
        &v43,
        &v42);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v24 = WindowManagementLogging::Provider(v23);
    v25 = (__int64)v24;
    if ( *(_DWORD *)v24 > 5u && tlgKeywordOn((__int64)v24, 0x400000000000LL) )
    {
      v33 = v27;
      v32 = v28;
      v31 = a4;
      v41[0] = &v49;
      v40 = (__int64)&v50;
      CurrentThreadId = GetCurrentThreadId();
      v29 = *(_DWORD *)(*(_QWORD *)(a1 + 272) + 72LL);
      v39 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v25,
        (__int64)&unk_18081DD44);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
}
