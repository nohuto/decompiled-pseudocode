/*
 * XREFs of EtwpInitializeCoverage @ 0x14082A380
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverage()
{
  *(_DWORD *)(MmWriteableSharedUserData + 892) = 1;
  ExpSysDbgLock.AutoBoostThreadState = 0LL;
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E08FB8, EtwpCoverageProvEnableCallback, 0LL);
}
