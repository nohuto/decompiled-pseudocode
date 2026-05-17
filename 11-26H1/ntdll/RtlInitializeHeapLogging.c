/*
 * XREFs of RtlInitializeHeapLogging @ 0x1800598A0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventRegister @ 0x180057A10 (EtwEventRegister.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 RtlInitializeHeapLogging()
{
  unsigned int v0; // ebx

  v0 = EtwEventRegister(
         &WindowsHeapSnapshotProvider,
         (_SLIST_ENTRY *)RtlpHpStackTraceEtwCallback,
         0LL,
         (unsigned __int64 *)&RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 0x10) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C5680);
  return v0;
}
