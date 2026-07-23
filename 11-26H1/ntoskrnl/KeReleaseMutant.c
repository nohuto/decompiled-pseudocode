/*
 * XREFs of KeReleaseMutant @ 0x1403E02A0
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DF598 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1403E0000 (LdrpGetFromMUIMemCache.c)
 *     EtwpEnableMetaProviderGuid @ 0x14044EE5C (EtwpEnableMetaProviderGuid.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A09C8 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404ABC54 (LdrUnloadAlternateResourceModuleEx.c)
 *     WmipBuildTraceDeviceList @ 0x1404C792C (WmipBuildTraceDeviceList.c)
 *     DifKeReleaseMutantWrapper @ 0x140666DB0 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x140666F40 (DifKeReleaseMutexWrapper.c)
 *     EtwpFixBootLoggers @ 0x140CE814C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  KeReleaseMutantEx((struct _KTHREAD *)Mutant);
  return 0;
}
