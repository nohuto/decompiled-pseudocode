/*
 * XREFs of ?WakeRit@Win32k@InputTraceLogging@@SAXK@Z @ 0x14020A714
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14020A778 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RitWakeReasonToString@InputTraceLogging@@CAPEBDK@Z @ 0x140275E10 (-RitWakeReasonToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::Win32k::WakeRit(unsigned int a1)
{
  const char *v1; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 2) != 0 && (qword_14039BB68 & 2) == qword_14039BB68 )
  {
    v1 = InputTraceLogging::RitWakeReasonToString(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (unsigned int)&dword_14039BB50,
      (unsigned int)&unk_140366BEB,
      0,
      0,
      (__int64)&v1);
  }
}
