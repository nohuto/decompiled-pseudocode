/*
 * XREFs of ?StopActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x1801E4880
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180042A88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180058400 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1800908D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1800908D8.c)
 */

void __fastcall XamlExplorerHostTelemetry::XamlLaunchedOnThread::StopActivity(
        XamlExplorerHostTelemetry::XamlLaunchedOnThread *this)
{
  int *v1; // rax
  int v3; // ecx
  const struct _tlgProvider_t *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  int v7; // ecx
  int *v8; // rdi
  const struct _tlgProvider_t *v9; // r9
  const wchar_t *v10; // rcx
  __int64 v11; // r8
  const WCHAR *v12; // rax
  int v13; // [rsp+C0h] [rbp-80h] BYREF
  int v14; // [rsp+C4h] [rbp-7Ch] BYREF
  int v15; // [rsp+C8h] [rbp-78h] BYREF
  int v16; // [rsp+CCh] [rbp-74h] BYREF
  const wchar_t *v17; // [rsp+D0h] [rbp-70h] BYREF
  const WCHAR *v18; // [rsp+D8h] [rbp-68h] BYREF
  const wchar_t *v19; // [rsp+E0h] [rbp-60h] BYREF
  const WCHAR *v20; // [rsp+E8h] [rbp-58h] BYREF
  const wchar_t *v21; // [rsp+F0h] [rbp-50h] BYREF
  const wchar_t *v22; // [rsp+F8h] [rbp-48h] BYREF
  const WCHAR *v23; // [rsp+100h] [rbp-40h] BYREF
  const wchar_t *v24; // [rsp+108h] [rbp-38h] BYREF
  const wchar_t *v25; // [rsp+110h] [rbp-30h] BYREF
  __int64 v26; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v27[4]; // [rsp+120h] [rbp-20h] BYREF
  DWORD v28; // [rsp+150h] [rbp+10h] BYREF
  int v29; // [rsp+158h] [rbp+18h] BYREF
  __int64 v30; // [rsp+160h] [rbp+20h] BYREF
  int v31; // [rsp+168h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 34);
  v3 = v1[18];
  if ( v3 >= 0 || v3 != v1[22] || (v8 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v4 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 34);
      v28 = CurrentThreadId;
      v7 = *(_DWORD *)(v6 + 72);
      v30 = 0LL;
      v29 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v4,
        byte_1807CE7E0,
        (const GUID *)(v6 + 8),
        0LL,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      v10 = (const wchar_t *)*((_QWORD *)v8 + 6);
      v11 = *((_QWORD *)this + 34);
      LODWORD(v30) = v8[26];
      v12 = (const WCHAR *)*((_QWORD *)v8 + 12);
      v27[0] = 0LL;
      v20 = v12;
      v21 = (const wchar_t *)*((_QWORD *)v8 + 11);
      v31 = v8[20];
      v22 = (const wchar_t *)*((_QWORD *)v8 + 9);
      v13 = v8[8];
      v23 = (const WCHAR *)*((_QWORD *)v8 + 3);
      v14 = *v8;
      v24 = (const wchar_t *)*((_QWORD *)v8 + 16);
      v15 = v8[16];
      v25 = (const wchar_t *)*((_QWORD *)v8 + 7);
      v16 = v8[2];
      v17 = v10;
      v28 = v8[17];
      v29 = v8[4];
      v18 = (const WCHAR *)*((_QWORD *)v8 + 15);
      v19 = (const wchar_t *)*((_QWORD *)v8 + 14);
      v26 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v9,
        byte_1807CE835,
        (const GUID *)(v11 + 8),
        (__int64)v9,
        (__int64)v27,
        (__int64)&v26,
        (__int64)&v16,
        &v25,
        (__int64)&v15,
        &v24,
        (__int64)&v14,
        &v23,
        (__int64)&v13,
        &v22,
        (__int64)&v31,
        &v21,
        &v20,
        (__int64)&v30,
        &v19,
        &v18,
        (__int64)&v29,
        (__int64)&v28,
        &v17);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
