/*
 * XREFs of LdrpLogDllState @ 0x18007A680
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     ApiSetQueryApiSetPresence @ 0x180079A10 (ApiSetQueryApiSetPresence.c)
 *     LdrpLoadKnownDll @ 0x180079CB0 (LdrpLoadKnownDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118B60 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 *     LdrpInitializeNode @ 0x18011A0B0 (LdrpInitializeNode.c)
 *     LdrpSendPostSnapNotifications @ 0x18011AFD0 (LdrpSendPostSnapNotifications.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     LdrpCorProcessImports @ 0x18011CF50 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 */

int __fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  _DWORD *SharedData; // r9
  __int64 v7; // rax
  __int64 v8; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 )
  {
    v7 = (__int64)NtCurrentPeb();
    if ( (*(_BYTE *)(v7 + 888) & 4) != 0 )
    {
      LODWORD(v7) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v7 )
      {
        v7 = (__int64)NtCurrentPeb();
        v8 = *(_QWORD *)(v7 + 144) + 555LL;
      }
      else
      {
        v8 = 2147353477LL;
      }
      if ( (*(_BYTE *)v8 & 0x20) != 0 )
        LODWORD(v7) = LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return v7;
}
