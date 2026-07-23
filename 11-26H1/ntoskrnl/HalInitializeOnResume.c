/*
 * XREFs of HalInitializeOnResume @ 0x140512000
 * Callers:
 *     PopHiberCheckResume @ 0x140C008A0 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x1405894D4 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalpDeviceBlockUnblockPushLock.WaitBlockFill6[72] )
    return HalpEfiInitializeOnResume();
  return result;
}
