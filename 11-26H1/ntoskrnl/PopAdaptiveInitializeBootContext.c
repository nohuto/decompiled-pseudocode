/*
 * XREFs of PopAdaptiveInitializeBootContext @ 0x140CDC9D8
 * Callers:
 *     PopInitializeAdpm @ 0x140CDCA70 (PopInitializeAdpm.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140CD7DC0 (PopDiagTraceAdaptiveBootOverride.c)
 */

NTSTATUS PopAdaptiveInitializeBootContext()
{
  __int64 v0; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

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
  Buffer = 0;
  if ( LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) )
    Buffer = 2;
  return ZwUpdateWnfStateData(&WNF_PO_INITIAL_GLOBAL_USER_PRESENCE, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
