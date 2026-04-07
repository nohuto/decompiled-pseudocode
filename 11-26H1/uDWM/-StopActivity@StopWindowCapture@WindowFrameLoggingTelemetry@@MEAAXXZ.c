/*
 * XREFs of ?StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x1800A2B10
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x18000157C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180025CFC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180075E1C (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StopWindowCapture::StopActivity(
        WindowFrameLoggingTelemetry::StopWindowCapture *this)
{
  __int64 v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+A0h] [rbp-19h] BYREF
  int v19; // [rsp+A4h] [rbp-15h] BYREF
  void *v20; // [rsp+A8h] [rbp-11h] BYREF
  const unsigned __int16 *v21; // [rsp+B0h] [rbp-9h] BYREF
  void *v22; // [rsp+B8h] [rbp-1h] BYREF
  const unsigned __int16 *v23; // [rsp+C0h] [rbp+7h] BYREF
  const unsigned __int16 *v24; // [rsp+C8h] [rbp+Fh] BYREF
  void *v25; // [rsp+D0h] [rbp+17h] BYREF
  const unsigned __int16 *v26; // [rsp+D8h] [rbp+1Fh] BYREF
  const unsigned __int16 *v27; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+2Fh] BYREF
  _QWORD v29[4]; // [rsp+F0h] [rbp+37h] BYREF
  DWORD v30; // [rsp+120h] [rbp+67h] BYREF
  int v31; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+130h] [rbp+77h] BYREF
  int v33; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && (v4 = (int *)(v1 + 80), v3 == v4[2]) && v4 )
  {
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v7 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(v6, v5) + 1);
    if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
    {
      v10 = *((_QWORD *)this + 34);
      v20 = (void *)*((_QWORD *)v4 + 15);
      v21 = (const unsigned __int16 *)*((_QWORD *)v4 + 14);
      v30 = v4[26];
      v22 = (void *)*((_QWORD *)v4 + 12);
      v23 = (const unsigned __int16 *)*((_QWORD *)v4 + 11);
      v31 = v4[20];
      v24 = (const unsigned __int16 *)*((_QWORD *)v4 + 9);
      LODWORD(v32) = v4[8];
      v25 = (void *)*((_QWORD *)v4 + 3);
      v33 = *v4;
      v26 = (const unsigned __int16 *)*((_QWORD *)v4 + 16);
      v18 = v4[16];
      v27 = (const unsigned __int16 *)*((_QWORD *)v4 + 7);
      v19 = v4[2];
      v28 = 0x1000000LL;
      v29[0] = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v8,
        (int)&unk_1800FFF1A,
        v10 + 8,
        v9,
        (__int64)v29,
        (__int64)&v28,
        (__int64)&v19,
        &v27,
        (__int64)&v18,
        &v26,
        (__int64)&v33,
        &v25,
        (__int64)&v32,
        &v24,
        (__int64)&v31,
        &v23,
        &v22,
        (__int64)&v30,
        &v21,
        &v20);
    }
  }
  else
  {
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = wil::details::static_lazy<WindowFrameLogging>::get(v12, v11);
    v14 = (_DWORD *)v13[1];
    if ( *v14 > 5u && tlgKeywordOn(v13[1], 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 34);
      v30 = CurrentThreadId;
      v31 = *(_DWORD *)(v16 + 72);
      v32 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v14,
        byte_180100043,
        v16 + 8,
        v17,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
