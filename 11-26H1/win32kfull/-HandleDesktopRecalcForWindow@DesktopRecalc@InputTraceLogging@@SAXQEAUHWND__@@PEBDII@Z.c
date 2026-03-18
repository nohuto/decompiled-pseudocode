/*
 * XREFs of ?HandleDesktopRecalcForWindow@DesktopRecalc@InputTraceLogging@@SAXQEAUHWND__@@PEBDII@Z @ 0x140245D98
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x14025C83C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 */

void __fastcall InputTraceLogging::DesktopRecalc::HandleDesktopRecalcForWindow(HWND a1, const char *a2)
{
  int v3; // r8d
  int v4; // r9d
  int v5; // r10d
  __int64 v6; // r11
  int v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+44h] [rbp-24h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  HWND v10[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AA9C0, 0x80000LL) )
    {
      v7 = v4;
      v8 = v5;
      v9 = v6;
      v10[0] = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1403AA9C0,
        (unsigned int)&unk_140377F83,
        v3,
        v4,
        (__int64)v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
}
