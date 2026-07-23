/*
 * XREFs of EtwpInitializeCoverage @ 0x1408305C0
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverage()
{
  *(_DWORD *)(MmWriteableSharedUserData + 892) = 1;
  ExpSysDbgLock.Padding[2] = 0LL;
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E09028, EtwpCoverageProvEnableCallback, 0LL);
}
