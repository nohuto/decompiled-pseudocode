/*
 * XREFs of LdrpInitMuiCrits @ 0x1403DD614
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DC3A8 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1403DCE10 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A7338 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404B2744 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1409E7CD0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS LdrpInitMuiCrits()
{
  void **Parameter; // [rsp+38h] [rbp+10h] BYREF

  Parameter = &NormalizationListLock.FirstArgument;
  return RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &Parameter, 0LL);
}
