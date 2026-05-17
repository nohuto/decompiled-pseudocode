/*
 * XREFs of LdrpLogDllState @ 0x1800832E0
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x180042DA0 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     ApiSetQueryApiSetPresence @ 0x180082670 (ApiSetQueryApiSetPresence.c)
 *     LdrpLoadKnownDll @ 0x180082910 (LdrpLoadKnownDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMapDllNtFileName @ 0x1800833B0 (LdrpMapDllNtFileName.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 *     LdrpInitializeNode @ 0x18011A300 (LdrpInitializeNode.c)
 *     LdrpSendPostSnapNotifications @ 0x18011B220 (LdrpSendPostSnapNotifications.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 *     LdrpCorProcessImports @ 0x18011D1A0 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  _DWORD *SharedData; // r9
  __int64 result; // rax
  __int64 v8; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    result = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    result = 2147353476LL;
  if ( *(_BYTE *)result )
  {
    result = (__int64)NtCurrentPeb();
    if ( (*(_BYTE *)(result + 888) & 4) != 0 )
    {
      result = (__int64)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (__int64)NtCurrentPeb();
        v8 = *(_QWORD *)(result + 144) + 555LL;
      }
      else
      {
        v8 = 2147353477LL;
      }
      if ( (*(_BYTE *)v8 & 0x20) != 0 )
        return LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return result;
}
