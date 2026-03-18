/*
 * XREFs of ?RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z @ 0x140093BBC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x140093C3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InputTraceLogging::Mouse::RedirectForCapture(const struct tagQMSG *a1, HWND a2, int a3, int a4)
{
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF
  HWND v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 0x40) != 0 && (qword_1403AA9D8 & 0x40) == qword_1403AA9D8 )
  {
    v5 = *((_DWORD *)a1 + 6);
    v4[0] = *((_QWORD *)a1 + 18);
    v6 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_140374428,
      a3,
      a4,
      (__int64)v4,
      (__int64)&v5,
      (__int64)&v6);
  }
}
