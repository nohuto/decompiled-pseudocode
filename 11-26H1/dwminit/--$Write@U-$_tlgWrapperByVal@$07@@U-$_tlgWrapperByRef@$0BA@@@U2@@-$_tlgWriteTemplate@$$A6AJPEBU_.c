/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180001008
 * Callers:
 *     DllMain @ 0x18000D6E8 (DllMain.c)
 *     DwmpShutdownWinlogonMouseThread @ 0x18000E010 (DwmpShutdownWinlogonMouseThread.c)
 *     DwmpStartWinlogonMouseThread @ 0x18000E120 (DwmpStartWinlogonMouseThread.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001350 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  __int64 v7; // rcx
  _QWORD v9[10]; // [rsp+30h] [rbp-68h] BYREF

  v9[9] = 16LL;
  v9[7] = 16LL;
  v9[5] = 8LL;
  v9[8] = *a7;
  v7 = *a6;
  v9[4] = a5;
  v9[6] = v7;
  return tlgWriteTransfer_EventWriteTransfer(&dword_18001A000, a2, 0LL, 0LL, 5, v9);
}
