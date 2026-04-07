/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180025AB4
 * Callers:
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002403C (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800241BC (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001E84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180001F80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180001F80.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 */

__int64 __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        __int64 a2)
{
  int v2; // esi
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdi
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD *v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+A0h] [rbp-19h] BYREF
  int v19; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-11h] BYREF
  void *v21; // [rsp+B0h] [rbp-9h] BYREF
  const unsigned __int16 *v22; // [rsp+B8h] [rbp-1h] BYREF
  void *v23; // [rsp+C0h] [rbp+7h] BYREF
  const unsigned __int16 *v24; // [rsp+C8h] [rbp+Fh] BYREF
  const unsigned __int16 *v25; // [rsp+D0h] [rbp+17h] BYREF
  void *v26; // [rsp+D8h] [rbp+1Fh] BYREF
  const unsigned __int16 *v27; // [rsp+E0h] [rbp+27h] BYREF
  const unsigned __int16 *v28; // [rsp+E8h] [rbp+2Fh] BYREF
  int v29; // [rsp+120h] [rbp+67h] BYREF
  DWORD v30; // [rsp+128h] [rbp+6Fh] BYREF
  void *v31; // [rsp+130h] [rbp+77h] BYREF
  const unsigned __int16 *v32; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (int)a2 < 0 )
  {
    v5 = a1[34];
    v6 = *(_DWORD *)(v5 + 72);
    if ( v6 < 0 && (v7 = v5 + 80, v6 == *(_DWORD *)(v7 + 8)) && v7 )
    {
      v8 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get((__int64)a1, a2) + 1);
      if ( *v8 > 2u && (unsigned __int8)tlgKeywordOn(v8, 0x200000000000LL) )
      {
        v11 = a1[34];
        v21 = *(void **)(v7 + 120);
        v22 = *(const unsigned __int16 **)(v7 + 112);
        v30 = *(_DWORD *)(v7 + 104);
        v23 = *(void **)(v7 + 96);
        v24 = *(const unsigned __int16 **)(v7 + 88);
        v29 = *(_DWORD *)(v7 + 80);
        v25 = *(const unsigned __int16 **)(v7 + 72);
        LODWORD(v31) = *(_DWORD *)(v7 + 32);
        v26 = *(void **)(v7 + 24);
        LODWORD(v32) = *(_DWORD *)v7;
        v27 = *(const unsigned __int16 **)(v7 + 128);
        v18 = *(_DWORD *)(v7 + 64);
        v28 = *(const unsigned __int16 **)(v7 + 56);
        v19 = *(_DWORD *)(v7 + 8);
        v20 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v9,
          (int)&unk_180101128,
          v11 + 8,
          v10,
          (__int64)&v20,
          (__int64)&v19,
          &v28,
          (__int64)&v18,
          &v27,
          (__int64)&v32,
          &v26,
          (__int64)&v31,
          &v25,
          (__int64)&v29,
          &v24,
          &v23,
          (__int64)&v30,
          &v22,
          &v21);
      }
    }
    else
    {
      v12 = wil::details::static_lazy<WindowFrameLogging>::get((__int64)a1, a2);
      v13 = (_DWORD *)v12[1];
      if ( *v13 > 2u && (unsigned __int8)tlgKeywordOn(v12[1], 0x200000000000LL) )
      {
        v14 = a1[34];
        v31 = *(void **)(v14 + 56);
        v32 = *(const unsigned __int16 **)(v14 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v16 = a1[34];
        v30 = CurrentThreadId;
        v29 = v2;
        v20 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          (int)v13,
          (int)&unk_1801010AD,
          v16 + 8,
          v17,
          (__int64)&v20,
          (__int64)&v29,
          (__int64)&v30,
          &v32,
          &v31);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
