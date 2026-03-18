/*
 * XREFs of ?CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1401E8EE0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1401E9A44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@@-$_tl.c)
 */

void __fastcall InputTraceLogging::Delivery::CallShellHandwritingDelegateThread(
        const struct tagQMSG *a1,
        __int64 a2,
        int a3,
        int a4)
{
  __int64 v4; // [rsp+50h] [rbp-18h] BYREF
  __int64 v5; // [rsp+58h] [rbp-10h] BYREF
  __int16 v6; // [rsp+78h] [rbp+10h] BYREF
  int v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 0x10) != 0 && (qword_1403AA9D8 & 0x10) == qword_1403AA9D8 )
  {
    v7 = *((_DWORD *)a1 + 6);
    v8 = *((unsigned __int16 *)a1 + 17);
    v4 = *((_QWORD *)a1 + 5);
    v6 = *((_WORD *)a1 + 16);
    v5 = *((_QWORD *)a1 + 18);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_14037504E,
      a3,
      a4,
      (__int64)&v5,
      (__int64)&v6,
      (__int64)&v4,
      (__int64)&v8,
      (__int64)&v7);
  }
}
