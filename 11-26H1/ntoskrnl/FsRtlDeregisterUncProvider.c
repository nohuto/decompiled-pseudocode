/*
 * XREFs of FsRtlDeregisterUncProvider @ 0x14078E140
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 */

void __stdcall FsRtlDeregisterUncProvider(HANDLE Handle)
{
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && ZwClose(Handle) >= 0 )
  {
    KeWaitForSingleObject(VslpReservedTransferLock.Padding, Executive, 0, 0, 0LL);
    --HIDWORD(ExpPlatformBinaryLock.Queue);
    KeReleaseSemaphore((PRKSEMAPHORE)VslpReservedTransferLock.Padding, 0, 1, 0);
  }
}
