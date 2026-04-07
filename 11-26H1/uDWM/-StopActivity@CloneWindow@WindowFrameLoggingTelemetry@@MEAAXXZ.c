/*
 * XREFs of ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180024760
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180001B70 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180001B70.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800249B8 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180025CFC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StopActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  __int64 v1; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  int *v15; // rdi
  int v16; // [rsp+C0h] [rbp-80h] BYREF
  int v17; // [rsp+C4h] [rbp-7Ch] BYREF
  int v18; // [rsp+C8h] [rbp-78h] BYREF
  int v19; // [rsp+CCh] [rbp-74h] BYREF
  const unsigned __int16 *v20; // [rsp+D0h] [rbp-70h] BYREF
  void *v21; // [rsp+D8h] [rbp-68h] BYREF
  const unsigned __int16 *v22; // [rsp+E0h] [rbp-60h] BYREF
  void *v23; // [rsp+E8h] [rbp-58h] BYREF
  const unsigned __int16 *v24; // [rsp+F0h] [rbp-50h] BYREF
  const unsigned __int16 *v25; // [rsp+F8h] [rbp-48h] BYREF
  void *v26; // [rsp+100h] [rbp-40h] BYREF
  const unsigned __int16 *v27; // [rsp+108h] [rbp-38h] BYREF
  const unsigned __int16 *v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  _QWORD v30[4]; // [rsp+120h] [rbp-20h] BYREF
  DWORD v31; // [rsp+150h] [rbp+10h] BYREF
  int v32; // [rsp+158h] [rbp+18h] BYREF
  __int64 v33; // [rsp+160h] [rbp+20h] BYREF
  __int64 v34; // [rsp+168h] [rbp+28h] BYREF

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && (v15 = (int *)(v1 + 80), v3 == v15[2]) && v15 )
  {
    wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v12 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(v11, v10) + 1);
    if ( *v12 > 5u )
    {
      v20 = (const unsigned __int16 *)*((_QWORD *)v15 + 6);
      v31 = v15[17];
      v32 = v15[4];
      v21 = (void *)*((_QWORD *)v15 + 15);
      v22 = (const unsigned __int16 *)*((_QWORD *)v15 + 14);
      v14 = *((_QWORD *)this + 34);
      LODWORD(v33) = v15[26];
      v23 = (void *)*((_QWORD *)v15 + 12);
      v24 = (const unsigned __int16 *)*((_QWORD *)v15 + 11);
      LODWORD(v34) = v15[20];
      v25 = (const unsigned __int16 *)*((_QWORD *)v15 + 9);
      v16 = v15[8];
      v26 = (void *)*((_QWORD *)v15 + 3);
      v17 = *v15;
      v27 = (const unsigned __int16 *)*((_QWORD *)v15 + 16);
      v18 = v15[16];
      v28 = (const unsigned __int16 *)*((_QWORD *)v15 + 7);
      v19 = v15[2];
      v29 = 0x1000000LL;
      v30[0] = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v12,
        (int)&unk_180100EEF,
        v14 + 8,
        v13,
        (__int64)v30,
        (__int64)&v29,
        (__int64)&v19,
        &v28,
        (__int64)&v18,
        &v27,
        (__int64)&v17,
        &v26,
        (__int64)&v16,
        &v25,
        (__int64)&v34,
        &v24,
        &v23,
        (__int64)&v33,
        &v22,
        &v21,
        (__int64)&v32,
        (__int64)&v31,
        &v20);
    }
  }
  else
  {
    wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v6 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(v5, v4) + 1);
    if ( *v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 34);
      v31 = CurrentThreadId;
      v32 = *(_DWORD *)(v8 + 72);
      v33 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v6,
        (unsigned int)&unk_180101035,
        v8 + 8,
        v9,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
