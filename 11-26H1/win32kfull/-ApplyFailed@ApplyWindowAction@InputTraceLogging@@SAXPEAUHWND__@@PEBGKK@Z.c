/*
 * XREFs of ?ApplyFailed@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKK@Z @ 0x1402E1ACC
 * Callers:
 *     ?ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@AdvancedWindowPos@@@Z @ 0x1402E1B58 (-ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@Advance.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1400038F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::ApplyWindowAction::ApplyFailed(HWND a1, const unsigned __int16 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  const wchar_t *v6; // r11
  int v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+44h] [rbp-24h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-20h] BYREF
  HWND v10[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 0x80000LL) )
    {
      v7 = v4;
      v8 = v5;
      v9 = v6;
      v10[0] = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AA9C0,
        (__int64)&unk_14037804E,
        v3,
        v4,
        (__int64)v10,
        &v9,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
}
