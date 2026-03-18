/*
 * XREFs of ?StrugglingInputQueueStop@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z @ 0x14018A704
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@53@Z @ 0x14018AB90 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U3@U1@@-$_tl.c)
 */

void __fastcall InputTraceLogging::Mouse::StrugglingInputQueueStop(const struct tagQ *a1)
{
  unsigned __int64 v2; // rtt
  int v3; // r8d
  int v4; // r9d
  unsigned __int64 v5; // [rsp+50h] [rbp-18h] BYREF
  const struct tagQ *v6; // [rsp+58h] [rbp-10h] BYREF
  __int16 v7; // [rsp+78h] [rbp+10h] BYREF
  __int16 v8; // [rsp+80h] [rbp+18h] BYREF
  int v9; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 0x40) != 0 && (qword_1403AA9D8 & 0x40) == qword_1403AA9D8 )
  {
    v2 = 1000LL * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *((_QWORD *)a1 + 69));
    v6 = a1;
    v5 = v2 / gliQpcFreq;
    v7 = *((_WORD *)a1 + 274);
    v8 = *((_WORD *)a1 + 275);
    v9 = *((_DWORD *)a1 + 136);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_140375236,
      v3,
      v4,
      (__int64)&v6,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v5);
  }
}
