/*
 * XREFs of ?ProcessButton@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IPEAUHWND__@@@Z @ 0x14008A0BC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443@Z @ 0x14019BFDC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessButton(__int64 a1, const struct tagPOINT *a2, int a3, HWND a4)
{
  int v4; // [rsp+50h] [rbp-28h] BYREF
  LONG y; // [rsp+54h] [rbp-24h] BYREF
  LONG x; // [rsp+58h] [rbp-20h] BYREF
  HWND v7; // [rsp+60h] [rbp-18h] BYREF
  __int64 v8; // [rsp+68h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x40) != 0 && (qword_1402A9E58 & 0x40) == qword_1402A9E58 )
  {
    y = a2->y;
    x = a2->x;
    v8 = a1;
    v7 = a4;
    v4 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_14028C7DA,
      a3,
      (_DWORD)a4,
      (__int64)&v8,
      (__int64)&x,
      (__int64)&y,
      (__int64)&v4,
      (__int64)&v7);
  }
}
