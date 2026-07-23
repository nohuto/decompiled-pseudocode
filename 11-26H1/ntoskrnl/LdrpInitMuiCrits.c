/*
 * XREFs of LdrpInitMuiCrits @ 0x1403E0804
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DF598 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1403E0000 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A09C8 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404ABC54 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1409D46E0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS LdrpInitMuiCrits()
{
  void **Parameter; // [rsp+38h] [rbp+10h] BYREF

  Parameter = &NormalizationListLock.FirstArgument;
  return RtlRunOnceExecuteOnce(&LdrpInitOnceMuiLock, NtdllRunOnceInitMuiCrits, &Parameter, 0LL);
}
