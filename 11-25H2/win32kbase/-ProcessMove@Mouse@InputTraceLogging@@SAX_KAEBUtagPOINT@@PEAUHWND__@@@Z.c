/*
 * XREFs of ?ProcessMove@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@PEAUHWND__@@@Z @ 0x1400375C8
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x14013F2E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessMove(__int64 a1, const struct tagPOINT *a2, HWND a3, int a4)
{
  LONG x; // [rsp+40h] [rbp-28h] BYREF
  HWND v5; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+50h] [rbp-18h] BYREF
  LONG y; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && (qword_14029EE30 & 0x40) != 0 && (qword_14029EE38 & 0x40) == qword_14029EE38 )
  {
    y = a2->y;
    x = a2->x;
    v6[0] = a1;
    v5 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_140282078,
      (_DWORD)a3,
      a4,
      (__int64)v6,
      (__int64)&x,
      (__int64)&y,
      (__int64)&v5);
  }
}
