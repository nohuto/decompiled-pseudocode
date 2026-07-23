/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x14045C880
 * Callers:
 *     MiDeleteAweInfo @ 0x14087F264 (MiDeleteAweInfo.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     FsRtlTeardownPerFileContexts @ 0x140A87D80 (FsRtlTeardownPerFileContexts.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExSaFree @ 0x14045C8AC (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
