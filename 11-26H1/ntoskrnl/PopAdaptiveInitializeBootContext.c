/*
 * XREFs of PopAdaptiveInitializeBootContext @ 0x140CD6684
 * Callers:
 *     PopInitializeAdpm @ 0x140CD671C (PopInitializeAdpm.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140CD1C18 (PopDiagTraceAdaptiveBootOverride.c)
 */

__int64 PopAdaptiveInitializeBootContext()
{
  __int64 v0; // rcx
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v0 = *(_QWORD *)(KeLoaderBlock_0 + 240);
  if ( (*(_DWORD *)(v0 + 3856) & 2) != 0 )
  {
    *(_QWORD *)&ExpPlatformBinaryLock.Timer.Processor = *(_QWORD *)(v0 + 3912);
    PopDiagTraceAdaptiveBootOverride(
      ExpPlatformBinaryLock.Timer.Processor & 7,
      (ExpPlatformBinaryLock.Timer.Processor & 8) != 0);
    BYTE1(ExpPlatformBinaryLock.Timer.Dpc) = 1;
    if ( (ExpPlatformBinaryLock.Timer.Processor & 7) != 0 )
      LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) = 1;
  }
  v2 = 0;
  if ( LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) )
    v2 = 2;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_INITIAL_GLOBAL_USER_PRESENCE, (__int64)&v2);
}
