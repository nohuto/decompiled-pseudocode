/*
 * XREFs of ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x1400C33B0
 * Callers:
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     UpdateDCEInUseCount @ 0x1400C3150 (UpdateDCEInUseCount.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14007B648 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall TraceLoggingProcessDCsInUse(unsigned int a1, int a2, __int64 a3)
{
  __int64 v3[3]; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+70h] [rbp+18h] BYREF
  __int64 v5; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029EE58 > 5
    && (qword_14029EE68 & 0x400000000000LL) != 0
    && (qword_14029EE70 & 0x400000000000LL) == qword_14029EE70 )
  {
    v5 = a1;
    v4 = a2;
    v3[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE58,
      byte_140278F84,
      a3,
      0x400000000000LL,
      (__int64)v3,
      (__int64)&v5,
      (__int64)&v4);
  }
}
