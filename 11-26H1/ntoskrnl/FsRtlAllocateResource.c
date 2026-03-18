/*
 * XREFs of FsRtlAllocateResource @ 0x14078D7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PERESOURCE FsRtlAllocateResource(void)
{
  PERESOURCE result; // rax

  result = (PERESOURCE)(104LL * (ExpPlatformBinaryLock.WaitBlockFill7[120] & 0xF) + FsRtlPagingIoResources);
  ++*(_DWORD *)&ExpPlatformBinaryLock.WaitBlockFill11[120];
  return result;
}
