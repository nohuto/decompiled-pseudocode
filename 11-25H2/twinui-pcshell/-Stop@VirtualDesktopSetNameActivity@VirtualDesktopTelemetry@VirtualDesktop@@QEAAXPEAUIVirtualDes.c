/*
 * XREFs of ?Stop@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_NW4SwitcherType@3@@Z @ 0x180531E68
 * Callers:
 *     ?SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180531130 (-SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18000BD54 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000BD54.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001773C (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18008EEEC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::Stop(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4)
{
  void (__fastcall *v7)(__int64, __int128 *); // rax
  int *v8; // rax
  int v9; // ecx
  int *v10; // rdi
  const struct _tlgProvider_t *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  char v19; // [rsp+C0h] [rbp-80h] BYREF
  int v20; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v21; // [rsp+C8h] [rbp-78h] BYREF
  _DWORD v22[2]; // [rsp+CCh] [rbp-74h] BYREF
  int v23; // [rsp+D4h] [rbp-6Ch] BYREF
  int v24; // [rsp+D8h] [rbp-68h] BYREF
  int v25; // [rsp+DCh] [rbp-64h] BYREF
  _QWORD v26[2]; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+100h] [rbp-40h] BYREF
  __int64 v30; // [rsp+108h] [rbp-38h] BYREF
  __int64 v31; // [rsp+110h] [rbp-30h] BYREF
  __int64 v32; // [rsp+118h] [rbp-28h] BYREF
  __int64 v33; // [rsp+120h] [rbp-20h] BYREF
  __int64 v34; // [rsp+128h] [rbp-18h] BYREF
  __int64 v35; // [rsp+130h] [rbp-10h] BYREF
  __int128 v36; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+150h] [rbp+10h] BYREF
  _QWORD *v38; // [rsp+170h] [rbp+30h]
  int v39; // [rsp+178h] [rbp+38h]
  int v40; // [rsp+17Ch] [rbp+3Ch]
  int *v41; // [rsp+180h] [rbp+40h]
  int v42; // [rsp+188h] [rbp+48h]
  int v43; // [rsp+18Ch] [rbp+4Ch]
  DWORD *v44; // [rsp+190h] [rbp+50h]
  int v45; // [rsp+198h] [rbp+58h]
  int v46; // [rsp+19Ch] [rbp+5Ch]
  __int128 *v47; // [rsp+1A0h] [rbp+60h]
  int v48; // [rsp+1A8h] [rbp+68h]
  int v49; // [rsp+1ACh] [rbp+6Ch]
  char *v50; // [rsp+1B0h] [rbp+70h]
  int v51; // [rsp+1B8h] [rbp+78h]
  int v52; // [rsp+1BCh] [rbp+7Ch]
  _DWORD *v53; // [rsp+1C0h] [rbp+80h]
  int v54; // [rsp+1C8h] [rbp+88h]
  int v55; // [rsp+1CCh] [rbp+8Ch]

  v7 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 32LL);
  v36 = 0LL;
  v7(a2, &v36);
  v8 = *(int **)(a1 + 272);
  v9 = v8[18];
  if ( v9 >= 0 || v9 != v8[22] || (v10 = v8 + 20, v8 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v15 = WindowManagementLogging::Provider();
    v16 = (__int64)v15;
    if ( *(_DWORD *)v15 > 5u && tlgKeywordOn((__int64)v15, 0x400000000000LL) )
    {
      v22[0] = a4;
      v19 = a3;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *(_QWORD *)(a1 + 272);
      v55 = 0;
      v52 = 0;
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v40 = 0;
      v21 = CurrentThreadId;
      v20 = *(_DWORD *)(v18 + 72);
      v53 = v22;
      v50 = &v19;
      v47 = &v36;
      v44 = &v21;
      v41 = &v20;
      v38 = v26;
      v54 = 4;
      v45 = 4;
      v42 = 4;
      v26[0] = 50331648LL;
      v51 = 1;
      v48 = 16;
      v39 = 8;
      tlgWriteTransfer_EventWriteTransfer(v16, byte_1807E2304, (const GUID *)(v18 + 8), 0LL, 8u, &v37);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v11 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v11 > 5u && tlgKeywordOn((__int64)v11, 0x400000000000LL) )
    {
      v14 = *(_QWORD *)(a1 + 272);
      v26[1] = &v36;
      v27 = *((_QWORD *)v10 + 15);
      v28 = *((_QWORD *)v10 + 14);
      v23 = v10[26];
      v29 = *((_QWORD *)v10 + 12);
      v30 = *((_QWORD *)v10 + 11);
      v24 = v10[20];
      v31 = *((_QWORD *)v10 + 9);
      v25 = v10[8];
      v32 = *((_QWORD *)v10 + 3);
      v20 = *v10;
      v33 = *((_QWORD *)v10 + 16);
      v21 = v10[16];
      v34 = *((_QWORD *)v10 + 7);
      v22[0] = v10[2];
      v22[1] = a4;
      v19 = a3;
      v35 = 0x1000000LL;
      v26[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v12,
        (__int64)&unk_1807E21A3,
        v14 + 8,
        v13,
        (__int64)v26,
        (__int64)&v35,
        (__int64)v22,
        &v34,
        (__int64)&v21,
        &v33,
        (__int64)&v20,
        &v32,
        (__int64)&v25,
        &v31,
        (__int64)&v24,
        &v30,
        &v29,
        (__int64)&v23,
        &v28,
        &v27);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
