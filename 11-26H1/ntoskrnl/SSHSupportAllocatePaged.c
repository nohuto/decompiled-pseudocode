/*
 * XREFs of SSHSupportAllocatePaged @ 0x140ABB050
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14042FCB0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14042FDA0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpWriteBlocker @ 0x1404C2C40 (SshpWriteBlocker.c)
 *     SshpCopyDataEntry @ 0x140616E10 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 SSHSupportAllocatePaged()
{
  return ExAllocatePool2(0x100uLL);
}
