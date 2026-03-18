/*
 * XREFs of ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1401104C8
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@343@Z @ 0x140007BB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U1@U2@U1@.c)
 */

void __fastcall InputTraceLogging::Pointer::GenerateMessage(
        const struct CPointerInputFrame *a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        HWND a5)
{
  _WORD v5[2]; // [rsp+60h] [rbp+1Fh] BYREF
  int v6; // [rsp+64h] [rbp+23h] BYREF
  int v7; // [rsp+68h] [rbp+27h] BYREF
  HWND v8; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v9; // [rsp+78h] [rbp+37h] BYREF
  __int64 v10; // [rsp+80h] [rbp+3Fh] BYREF
  __int64 v11; // [rsp+88h] [rbp+47h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && (qword_14029EE30 & 0x20) != 0 && (qword_14029EE38 & 0x20) == qword_14029EE38 )
  {
    v8 = a5;
    v7 = *((_DWORD *)a1 + 10);
    v10 = *((_QWORD *)a1 + 9);
    v11 = *((_QWORD *)a1 + 27);
    v5[0] = a2;
    v6 = a4;
    v9 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_14027EA7B,
      a3,
      a4,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v7,
      (__int64)v5,
      (__int64)&v9,
      (__int64)&v6,
      (__int64)&v8);
  }
}
