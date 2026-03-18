/*
 * XREFs of ?SetDeviceInputMode@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1400D6850
 * Callers:
 *     RIMSetDeviceInputMode @ 0x140180708 (RIMSetDeviceInputMode.c)
 * Callees:
 *     ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1400D68C8 (-InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1400D78AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall InputTraceLogging::RIM::SetDeviceInputMode(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  int v3; // r8d
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4
    && (qword_14029EE30 & 0x100) != 0
    && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v4 = InputTraceLogging::InputModeToString(a2);
    v5 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_14027B370,
      v3,
      v2,
      (__int64)&v5,
      (__int64)&v4);
  }
}
