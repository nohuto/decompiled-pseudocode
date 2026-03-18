/*
 * XREFs of ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1402D2298
 * Callers:
 *     ?ReportPenKey@@YAXIE@Z @ 0x140259668 (-ReportPenKey@@YAXIE@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140090B44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall TraceLoggingPenHotkey(char a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  if ( (a1 & 0xA) == 0xA && (unsigned int)(a2 - 130) <= 1 && (unsigned int)dword_1403AAA30 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AAA30, 0x400000000000LL) )
    {
      v5 = v3;
      v6 = v4;
      v7 = 2048LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAA30,
        (__int64)&unk_1403770BA,
        v2,
        v3,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
