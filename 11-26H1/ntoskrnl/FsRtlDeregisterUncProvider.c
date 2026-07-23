/*
 * XREFs of FsRtlDeregisterUncProvider @ 0x140790C70
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 */

void __stdcall FsRtlDeregisterUncProvider(HANDLE Handle)
{
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && ZwClose(Handle) >= 0 )
  {
    KeWaitForSingleObject(&FsRtlpUncSemaphore, Executive, 0, 0, 0LL);
    --HIDWORD(ExpPlatformBinaryLock.Queue);
    KeReleaseSemaphore(&FsRtlpUncSemaphore, 0, 1, 0);
  }
}
