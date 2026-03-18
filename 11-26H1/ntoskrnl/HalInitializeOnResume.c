/*
 * XREFs of HalInitializeOnResume @ 0x140518590
 * Callers:
 *     PopHiberCheckResume @ 0x140BFA8A0 (PopHiberCheckResume.c)
 * Callees:
 *     HalpEfiInitializeOnResume @ 0x140586FB4 (HalpEfiInitializeOnResume.c)
 */

__int64 HalInitializeOnResume()
{
  __int64 result; // rax

  result = 0LL;
  if ( HalpDeviceBlockUnblockPushLock.WaitBlockFill6[104] )
    return HalpEfiInitializeOnResume();
  return result;
}
