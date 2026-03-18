/*
 * XREFs of KeReleaseMutant @ 0x1403DD0B0
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DC3A8 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1403DCE10 (LdrpGetFromMUIMemCache.c)
 *     EtwpEnableMetaProviderGuid @ 0x1404575EC (EtwpEnableMetaProviderGuid.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A7338 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404B2744 (LdrUnloadAlternateResourceModuleEx.c)
 *     WmipBuildTraceDeviceList @ 0x1404CDEFC (WmipBuildTraceDeviceList.c)
 *     DifKeReleaseMutantWrapper @ 0x1406631D0 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x140663360 (DifKeReleaseMutexWrapper.c)
 *     EtwpFixBootLoggers @ 0x140CE1DAC (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  KeReleaseMutantEx((struct _KTHREAD *)Mutant);
  return 0;
}
