/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1404638C0
 * Callers:
 *     MiDeleteAweInfo @ 0x140878E84 (MiDeleteAweInfo.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     FsRtlTeardownPerFileContexts @ 0x140A81F10 (FsRtlTeardownPerFileContexts.c)
 *     MmDeleteProcessAddressSpace @ 0x140B3F940 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExSaFree @ 0x1404638EC (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
