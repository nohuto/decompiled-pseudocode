/*
 * XREFs of ?StopActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x18007AB00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800186C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800709CC (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x18020D158 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18020D158.c)
 */

void __fastcall XamlExplorerHostTelemetry::XamlLaunchedOnThread::StopActivity(
        XamlExplorerHostTelemetry::XamlLaunchedOnThread *this)
{
  __int64 v1; // rdi
  int v3; // eax
  const struct _tlgProvider_t *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int *v10; // rdi
  int v11; // [rsp+C0h] [rbp-80h] BYREF
  int v12; // [rsp+C4h] [rbp-7Ch] BYREF
  int v13; // [rsp+C8h] [rbp-78h] BYREF
  int v14; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v15; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v17; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v18; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+100h] [rbp-40h] BYREF
  __int64 v22; // [rsp+108h] [rbp-38h] BYREF
  __int64 v23; // [rsp+110h] [rbp-30h] BYREF
  __int64 v24; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v25[4]; // [rsp+120h] [rbp-20h] BYREF
  DWORD v26; // [rsp+150h] [rbp+10h] BYREF
  int v27; // [rsp+158h] [rbp+18h] BYREF
  __int64 v28; // [rsp+160h] [rbp+20h] BYREF
  int v29; // [rsp+168h] [rbp+28h] BYREF

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && (v10 = (int *)(v1 + 80), v3 == v10[2]) && v10 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v7 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v8 = *((_QWORD *)v10 + 6);
      v9 = *((_QWORD *)this + 34);
      LODWORD(v28) = v10[26];
      v18 = *((_QWORD *)v10 + 12);
      v19 = *((_QWORD *)v10 + 11);
      v29 = v10[20];
      v20 = *((_QWORD *)v10 + 9);
      v11 = v10[8];
      v21 = *((_QWORD *)v10 + 3);
      v12 = *v10;
      v22 = *((_QWORD *)v10 + 16);
      v13 = v10[16];
      v23 = *((_QWORD *)v10 + 7);
      v14 = v10[2];
      v15 = v8;
      v26 = v10[17];
      v27 = v10[4];
      v16 = *((_QWORD *)v10 + 15);
      v17 = *((_QWORD *)v10 + 14);
      v24 = 0x1000000LL;
      v25[0] = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v7,
        (unsigned int)&unk_180803A36,
        v9 + 8,
        (_DWORD)v7,
        (__int64)v25,
        (__int64)&v24,
        (__int64)&v14,
        (__int64)&v23,
        (__int64)&v13,
        (__int64)&v22,
        (__int64)&v12,
        (__int64)&v21,
        (__int64)&v11,
        (__int64)&v20,
        (__int64)&v29,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v28,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v15);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v4 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 34);
      v26 = CurrentThreadId;
      v27 = *(_DWORD *)(v6 + 72);
      v28 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v4,
        byte_180803B85,
        (const GUID *)(v6 + 8),
        0LL,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
