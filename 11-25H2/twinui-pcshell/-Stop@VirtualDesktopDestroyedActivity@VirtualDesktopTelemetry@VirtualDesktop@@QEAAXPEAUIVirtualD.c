/*
 * XREFs of ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180531B2C
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180530B00 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@74@Z @ 0x18000B44C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000B44C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@54@Z @ 0x18000C04C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U3@U2@@.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int *v10; // rax
  int v11; // ecx
  int *v12; // rdi
  const struct _tlgProvider_t *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-120h]
  int v22; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v23; // [rsp+C4h] [rbp-7Ch] BYREF
  _DWORD v24[2]; // [rsp+C8h] [rbp-78h] BYREF
  int v25; // [rsp+D0h] [rbp-70h] BYREF
  int v26; // [rsp+D4h] [rbp-6Ch] BYREF
  int v27; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-58h] BYREF
  _QWORD v30[3]; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+108h] [rbp-38h] BYREF
  __int64 v32; // [rsp+110h] [rbp-30h] BYREF
  __int64 v33; // [rsp+118h] [rbp-28h] BYREF
  __int64 v34; // [rsp+120h] [rbp-20h] BYREF
  __int64 v35; // [rsp+128h] [rbp-18h] BYREF
  __int64 v36; // [rsp+130h] [rbp-10h] BYREF
  __int64 v37; // [rsp+138h] [rbp-8h] BYREF
  __int128 v38; // [rsp+140h] [rbp+0h] BYREF
  __int128 v39; // [rsp+150h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+48h]

  v6 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 32LL);
  v39 = 0LL;
  v38 = 0LL;
  v8 = v6(a2, &v39);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v8,
      v21);
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 32LL))(a3, &v38);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v9,
      v21);
  v10 = *(int **)(a1 + 272);
  v11 = v10[18];
  if ( v11 >= 0 || v11 != v10[22] || (v12 = v10 + 20, v10 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v17 = WindowManagementLogging::Provider();
    v18 = (__int64)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v24[0] = a4;
      v30[0] = &v38;
      v29 = (__int64)&v39;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *(_QWORD *)(a1 + 272);
      v23 = CurrentThreadId;
      v22 = *(_DWORD *)(v20 + 72);
      v28 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v18,
        (__int64)&unk_1807E1FA2);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v13 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v16 = *(_QWORD *)(a1 + 272);
      v30[1] = &v38;
      v24[1] = a4;
      v30[2] = &v39;
      v31 = *((_QWORD *)v12 + 15);
      v32 = *((_QWORD *)v12 + 14);
      v25 = v12[26];
      v33 = *((_QWORD *)v12 + 12);
      v34 = *((_QWORD *)v12 + 11);
      v26 = v12[20];
      v35 = *((_QWORD *)v12 + 9);
      v27 = v12[8];
      v36 = *((_QWORD *)v12 + 3);
      v22 = *v12;
      v37 = *((_QWORD *)v12 + 16);
      v23 = v12[16];
      v28 = *((_QWORD *)v12 + 7);
      v24[0] = v12[2];
      v29 = 0x1000000LL;
      v30[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v14,
        (__int64)&unk_1807E2037,
        v16 + 8,
        v15,
        (__int64)v30,
        (__int64)&v29,
        (__int64)v24,
        &v28,
        (__int64)&v23,
        &v37,
        (__int64)&v22,
        &v36,
        (__int64)&v27,
        &v35,
        (__int64)&v26,
        &v34,
        &v33,
        (__int64)&v25,
        &v32,
        &v31);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
