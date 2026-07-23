/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x140494B10
 * Callers:
 *     DifExReleaseResourceForThreadLiteWrapper @ 0x1406583F0 (DifExReleaseResourceForThreadLiteWrapper.c)
 *     CcUnpinDataForThread @ 0x14078CD90 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpReleaseResourceForThreadLite @ 0x140304020 (ExpReleaseResourceForThreadLite.c)
 *     ExpFastResourceLegacyRelease @ 0x140464DC0 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  __int64 CurrentThread; // r8
  unsigned __int8 CurrentIrql; // al

  LOBYTE(CurrentThread) = Resource->ReservedLowFlags;
  if ( (CurrentThread & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (CurrentThread & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = (__int64)KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (*(_DWORD *)(CurrentThread + 116) & 0x400) == 0 && !*(_DWORD *)(CurrentThread + 484) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (Resource->ReservedLowFlags & 1) != 0 )
  {
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    ExpFastResourceLegacyRelease((struct _KTHREAD *)Resource, ResourceThreadId);
  }
  else
  {
    ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, ResourceThreadId, CurrentThread);
  }
}
