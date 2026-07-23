/*
 * XREFs of FsRtlAllocateResource @ 0x140790310
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
