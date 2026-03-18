/*
 * XREFs of SSHSupportAllocatePaged @ 0x140AB9B8C
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14043D400 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14043D4F0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpWriteBlocker @ 0x1404C9220 (SshpWriteBlocker.c)
 *     SshpCopyDataEntry @ 0x140613F50 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 SSHSupportAllocatePaged()
{
  return ExAllocatePool2(0x100uLL);
}
