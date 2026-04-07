/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18004D408
 * Callers:
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004C680 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004C7F8 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001E8C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180001F88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_180001F88.c)
 *     ?Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004DA1C (-Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 */

__int64 __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdi
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  void *v10; // rcx
  __int64 v11; // r8
  const struct _tlgProvider_t *v12; // rax
  int v13; // edi
  __int64 v14; // rax
  void *v15; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+A0h] [rbp-19h] BYREF
  int v20; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-11h] BYREF
  void *v22; // [rsp+B0h] [rbp-9h] BYREF
  const unsigned __int16 *v23; // [rsp+B8h] [rbp-1h] BYREF
  void *v24; // [rsp+C0h] [rbp+7h] BYREF
  const unsigned __int16 *v25; // [rsp+C8h] [rbp+Fh] BYREF
  const unsigned __int16 *v26; // [rsp+D0h] [rbp+17h] BYREF
  void *v27; // [rsp+D8h] [rbp+1Fh] BYREF
  const unsigned __int16 *v28; // [rsp+E0h] [rbp+27h] BYREF
  const unsigned __int16 *v29; // [rsp+E8h] [rbp+2Fh] BYREF
  int v30; // [rsp+120h] [rbp+67h] BYREF
  DWORD v31; // [rsp+128h] [rbp+6Fh] BYREF
  void *v32; // [rsp+130h] [rbp+77h] BYREF
  const unsigned __int16 *v33; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v5 = a1[34];
    v6 = *(_DWORD *)(v5 + 72);
    if ( v6 >= 0 || v6 != *(_DWORD *)(v5 + 88) || (v7 = v5 + 80, v5 == -80) )
    {
      v12 = WindowFrameLogging::Provider();
      v13 = (int)v12;
      if ( *(_DWORD *)v12 > 2u && (unsigned __int8)tlgKeywordOn(v12, 0x200000000000LL) )
      {
        v14 = a1[34];
        v15 = *(void **)(v14 + 56);
        v33 = *(const unsigned __int16 **)(v14 + 48);
        v32 = v15;
        CurrentThreadId = GetCurrentThreadId();
        v17 = a1[34];
        v31 = CurrentThreadId;
        v30 = a2;
        v21 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v13,
          (int)&unk_180105AA0,
          v17 + 8,
          v18,
          (__int64)&v21,
          (__int64)&v30,
          (__int64)&v31,
          &v33,
          &v32);
      }
    }
    else
    {
      v8 = WindowFrameLogging::Provider();
      if ( *(_DWORD *)v8 > 2u && (unsigned __int8)tlgKeywordOn(v8, 0x200000000000LL) )
      {
        v10 = *(void **)(v7 + 120);
        v11 = a1[34];
        v23 = *(const unsigned __int16 **)(v7 + 112);
        v31 = *(_DWORD *)(v7 + 104);
        v24 = *(void **)(v7 + 96);
        v25 = *(const unsigned __int16 **)(v7 + 88);
        v30 = *(_DWORD *)(v7 + 80);
        v26 = *(const unsigned __int16 **)(v7 + 72);
        LODWORD(v32) = *(_DWORD *)(v7 + 32);
        v27 = *(void **)(v7 + 24);
        LODWORD(v33) = *(_DWORD *)v7;
        v28 = *(const unsigned __int16 **)(v7 + 128);
        v19 = *(_DWORD *)(v7 + 64);
        v29 = *(const unsigned __int16 **)(v7 + 56);
        v20 = *(_DWORD *)(v7 + 8);
        v22 = v10;
        v21 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v9,
          (int)&unk_180105989,
          v11 + 8,
          v9,
          (__int64)&v21,
          (__int64)&v20,
          &v29,
          (__int64)&v19,
          &v28,
          (__int64)&v33,
          &v27,
          (__int64)&v32,
          &v26,
          (__int64)&v30,
          &v25,
          &v24,
          (__int64)&v31,
          &v23,
          &v22);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
