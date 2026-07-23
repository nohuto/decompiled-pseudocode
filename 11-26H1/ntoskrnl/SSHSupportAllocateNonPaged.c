/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x1404BB7D8
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140B66F90 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 SSHSupportAllocateNonPaged()
{
  return ExAllocatePool2(0x40uLL);
}
