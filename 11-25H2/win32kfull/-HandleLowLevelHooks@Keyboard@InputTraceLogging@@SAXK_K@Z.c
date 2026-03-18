/*
 * XREFs of ?HandleLowLevelHooks@Keyboard@InputTraceLogging@@SAXK_K@Z @ 0x1401DF1FC
 * Callers:
 *     EditionKeyEventLLHook @ 0x14024FFF0 (EditionKeyEventLLHook.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1401DF29C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall InputTraceLogging::Keyboard::HandleLowLevelHooks(int a1, int a2, int a3)
{
  __int16 v3; // [rsp+50h] [rbp+18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4
    && (qword_14039BB60 & 0x4000) != 0
    && (qword_14039BB68 & 0x4000) == qword_14039BB68 )
  {
    v4 = a1;
    v3 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>>(
      (unsigned int)&dword_14039BB50,
      (unsigned int)&unk_14036921A,
      a3,
      a2,
      (__int64)&v4,
      (__int64)&v3);
  }
}
