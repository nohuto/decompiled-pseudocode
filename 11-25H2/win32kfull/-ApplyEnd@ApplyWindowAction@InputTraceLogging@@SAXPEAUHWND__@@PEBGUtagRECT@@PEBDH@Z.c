/*
 * XREFs of ?ApplyEnd@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGUtagRECT@@PEBDH@Z @ 0x1402D3DB0
 * Callers:
 *     ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402D4838 (-LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x14000533C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@U2@U-$_tlgW.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::ApplyWindowAction::ApplyEnd(
        HWND a1,
        const unsigned __int16 *a2,
        struct tagRECT *a3,
        const char *a4,
        int a5)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int *v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+60h] [rbp+1Fh] BYREF
  int v11; // [rsp+64h] [rbp+23h] BYREF
  int v12; // [rsp+68h] [rbp+27h] BYREF
  int v13; // [rsp+6Ch] [rbp+2Bh] BYREF
  int v14; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v15; // [rsp+78h] [rbp+37h] BYREF
  __int64 v16; // [rsp+80h] [rbp+3Fh] BYREF
  HWND v17; // [rsp+88h] [rbp+47h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_14039BB50, 0x80000LL) )
    {
      v10 = a5;
      v11 = v8[3];
      v12 = v8[2];
      v13 = v8[1];
      v14 = *v8;
      v15 = v9;
      v16 = v7;
      v17 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (__int64)&dword_14039BB50,
        (__int64)&unk_14036AADA,
        v6,
        v7,
        (__int64)&v17,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        &v16,
        (__int64)&v10,
        &v15);
    }
  }
}
