/*
 * XREFs of ?Stop@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_NW4SwitcherType@3@@Z @ 0x1805559A8
 * Callers:
 *     ?SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180554BE0 (-SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18000D4FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18000D4FC.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180016000 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007E240 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::Stop(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4)
{
  void (__fastcall *v7)(__int64, __int128 *); // rax
  __int64 v8; // rdi
  int v9; // eax
  int *v10; // rdi
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  const struct _tlgProvider_t *v17; // rax
  __int64 v18; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v20; // r8
  char v21; // [rsp+C0h] [rbp-80h] BYREF
  int v22; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v23; // [rsp+C8h] [rbp-78h] BYREF
  _DWORD v24[2]; // [rsp+CCh] [rbp-74h] BYREF
  int v25; // [rsp+D4h] [rbp-6Ch] BYREF
  int v26; // [rsp+D8h] [rbp-68h] BYREF
  int v27; // [rsp+DCh] [rbp-64h] BYREF
  _QWORD v28[2]; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+100h] [rbp-40h] BYREF
  __int64 v32; // [rsp+108h] [rbp-38h] BYREF
  __int64 v33; // [rsp+110h] [rbp-30h] BYREF
  __int64 v34; // [rsp+118h] [rbp-28h] BYREF
  __int64 v35; // [rsp+120h] [rbp-20h] BYREF
  __int64 v36; // [rsp+128h] [rbp-18h] BYREF
  __int64 v37; // [rsp+130h] [rbp-10h] BYREF
  __int128 v38; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+150h] [rbp+10h] BYREF
  _QWORD *v40; // [rsp+170h] [rbp+30h]
  __int64 v41; // [rsp+178h] [rbp+38h]
  int *v42; // [rsp+180h] [rbp+40h]
  __int64 v43; // [rsp+188h] [rbp+48h]
  DWORD *v44; // [rsp+190h] [rbp+50h]
  __int64 v45; // [rsp+198h] [rbp+58h]
  __int128 *v46; // [rsp+1A0h] [rbp+60h]
  __int64 v47; // [rsp+1A8h] [rbp+68h]
  char *v48; // [rsp+1B0h] [rbp+70h]
  __int64 v49; // [rsp+1B8h] [rbp+78h]
  _DWORD *v50; // [rsp+1C0h] [rbp+80h]
  __int64 v51; // [rsp+1C8h] [rbp+88h]

  v7 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 32LL);
  v38 = 0LL;
  v7(a2, &v38);
  v8 = *(_QWORD *)(a1 + 272);
  v9 = *(_DWORD *)(v8 + 72);
  if ( v9 < 0 && (v10 = (int *)(v8 + 80), v9 == v10[2]) && v10 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v12 = WindowManagementLogging::Provider(v11);
    if ( *(_DWORD *)v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
    {
      v15 = *(_QWORD *)(a1 + 272);
      v28[1] = &v38;
      v29 = *((_QWORD *)v10 + 15);
      v30 = *((_QWORD *)v10 + 14);
      v25 = v10[26];
      v31 = *((_QWORD *)v10 + 12);
      v32 = *((_QWORD *)v10 + 11);
      v26 = v10[20];
      v33 = *((_QWORD *)v10 + 9);
      v27 = v10[8];
      v34 = *((_QWORD *)v10 + 3);
      v22 = *v10;
      v35 = *((_QWORD *)v10 + 16);
      v23 = v10[16];
      v36 = *((_QWORD *)v10 + 7);
      v24[0] = v10[2];
      v24[1] = a4;
      v21 = a3;
      v37 = 0x1000000LL;
      v28[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v13,
        (__int64)&unk_18081D272,
        v15 + 8,
        v14,
        (__int64)v28,
        (__int64)&v37,
        (__int64)v24,
        &v36,
        (__int64)&v23,
        &v35,
        (__int64)&v22,
        &v34,
        (__int64)&v27,
        &v33,
        (__int64)&v26,
        &v32,
        &v31,
        (__int64)&v25,
        &v30,
        &v29);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v17 = WindowManagementLogging::Provider(v16);
    v18 = (__int64)v17;
    if ( *(_DWORD *)v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v24[0] = a4;
      v21 = a3;
      CurrentThreadId = GetCurrentThreadId();
      v20 = *(_QWORD *)(a1 + 272);
      v23 = CurrentThreadId;
      v51 = 4LL;
      v49 = 1LL;
      v22 = *(_DWORD *)(v20 + 72);
      v50 = v24;
      v48 = &v21;
      v46 = &v38;
      v44 = &v23;
      v42 = &v22;
      v40 = v28;
      v28[0] = 50331648LL;
      v47 = 16LL;
      v45 = 4LL;
      v43 = 4LL;
      v41 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v18, byte_18081D6FD, (const GUID *)(v20 + 8), 0LL, 8u, &v39);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
