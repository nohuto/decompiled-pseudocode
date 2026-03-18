/*
 * XREFs of ?CallLowLevelHooks@Keyboard@InputTraceLogging@@SAXK@Z @ 0x1401E5DE8
 * Callers:
 *     EditionKeyEventLLHook @ 0x14024FFF0 (EditionKeyEventLLHook.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401E5E48 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::Keyboard::CallLowLevelHooks(int a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4
    && (qword_14039BB60 & 0x4000) != 0
    && (qword_14039BB68 & 0x4000) == qword_14039BB68 )
  {
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14039BB50,
      (unsigned int)&unk_14036925E,
      0x4000,
      a4,
      (__int64)&v4);
  }
}
