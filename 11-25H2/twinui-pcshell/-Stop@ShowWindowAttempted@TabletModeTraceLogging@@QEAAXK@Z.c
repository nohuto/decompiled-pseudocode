/*
 * XREFs of ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1804FA4B0
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1804F9580 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454@Z @ 0x180001FE8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180001FE8.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180058400 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18014CEEC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall TabletModeTraceLogging::ShowWindowAttempted::Stop(
        TabletModeTraceLogging::ShowWindowAttempted *this,
        int a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  const struct _tlgProvider_t *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  const struct _tlgProvider_t *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // ecx
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  int v17; // [rsp+C8h] [rbp-78h] BYREF
  int v18; // [rsp+CCh] [rbp-74h] BYREF
  int v19; // [rsp+D0h] [rbp-70h] BYREF
  int v20; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v21; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  __int64 v30; // [rsp+120h] [rbp-20h] BYREF
  __int64 v31[3]; // [rsp+128h] [rbp-18h] BYREF
  int v32; // [rsp+150h] [rbp+10h] BYREF
  DWORD v33; // [rsp+160h] [rbp+20h] BYREF
  int v34; // [rsp+168h] [rbp+28h] BYREF

  v2 = (int *)*((_QWORD *)this + 34);
  v5 = v2[18];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v11 > 5u )
    {
      v32 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 34);
      v33 = CurrentThreadId;
      v14 = *(_DWORD *)(v13 + 72);
      v21 = 0LL;
      v34 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        byte_1807E051E,
        (const GUID *)(v13 + 8),
        0LL,
        (__int64)&v21,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v7 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v8 = *((_QWORD *)v6 + 6);
      v24 = *((_QWORD *)v6 + 14);
      v15 = v6[26];
      v9 = *((_QWORD *)v6 + 12);
      v21 = 0LL;
      v10 = *((_QWORD *)this + 34);
      v25 = v9;
      v26 = *((_QWORD *)v6 + 11);
      v16 = v6[20];
      v27 = *((_QWORD *)v6 + 9);
      v17 = v6[8];
      v28 = *((_QWORD *)v6 + 3);
      v18 = *v6;
      v29 = *((_QWORD *)v6 + 16);
      v19 = v6[16];
      v30 = *((_QWORD *)v6 + 7);
      v20 = v6[2];
      v22 = v8;
      v33 = v6[17];
      v34 = v6[4];
      v23 = *((_QWORD *)v6 + 15);
      v32 = a2;
      v31[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        (__int64)&unk_1807E03B5,
        v10 + 8,
        (__int64)v7,
        (__int64)&v21,
        (__int64)v31,
        (__int64)&v20,
        &v30,
        (__int64)&v19,
        &v29,
        (__int64)&v18,
        &v28,
        (__int64)&v17,
        &v27,
        (__int64)&v16,
        &v26,
        &v25,
        (__int64)&v15,
        &v24,
        &v23,
        (__int64)&v34,
        (__int64)&v33,
        &v22);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
