/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x1404C1F88
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140A89550 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140B63EF0 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 SSHSupportAllocateNonPaged()
{
  return ExAllocatePool2(0x40uLL);
}
