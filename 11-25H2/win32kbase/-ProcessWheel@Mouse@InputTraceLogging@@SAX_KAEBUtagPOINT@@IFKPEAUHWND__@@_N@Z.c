/*
 * XREFs of ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1400B9464
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$01@@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$01@@434@Z @ 0x140009A14 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$01@@U2@U1@.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessWheel(
        __int64 a1,
        const struct tagPOINT *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        HWND a6,
        bool a7)
{
  _WORD v7[2]; // [rsp+60h] [rbp+Fh] BYREF
  BOOL v8; // [rsp+64h] [rbp+13h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+17h] BYREF
  int v10; // [rsp+6Ch] [rbp+1Bh] BYREF
  LONG y; // [rsp+70h] [rbp+1Fh] BYREF
  LONG x; // [rsp+74h] [rbp+23h] BYREF
  HWND v13; // [rsp+78h] [rbp+27h] BYREF
  __int64 v14; // [rsp+80h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && (qword_14029EE30 & 0x40) != 0 && (qword_14029EE38 & 0x40) == qword_14029EE38 )
  {
    v8 = a7;
    v13 = a6;
    v9 = a5;
    y = a2->y;
    x = a2->x;
    v14 = a1;
    v7[0] = a4;
    v10 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_1402820F6,
      a3,
      a4,
      (__int64)&v14,
      (__int64)&x,
      (__int64)&y,
      (__int64)&v10,
      (__int64)v7,
      (__int64)&v9,
      (__int64)&v13,
      (__int64)&v8);
  }
}
