/*
 * XREFs of ?HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z @ 0x14026249C
 * Callers:
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140279114 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1400010C4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Keyboard::HotkeyInvoked()
{
  __int64 v0; // r8
  int v1; // r9d
  char v2; // r10
  int v3; // r11d
  __int64 v4; // r9
  int v5; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v6[5]; // [rsp+44h] [rbp-14h] BYREF
  char v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 0x4000LL) )
    {
      v7 = v2;
      v6[0] = v3;
      v4 = v1 ^ 1u;
      v5 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AA9C0,
        (__int64)&unk_1403755DA,
        v0,
        v4,
        (__int64)v6,
        (__int64)&v7,
        (__int64)&v5);
    }
  }
}
