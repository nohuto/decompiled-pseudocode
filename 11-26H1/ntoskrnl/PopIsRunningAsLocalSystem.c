/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x140B104C4
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140499FD0 (RtlCheckTokenMembership.c)
 */

char PopIsRunningAsLocalSystem()
{
  RtlCheckTokenMembership(0LL, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags);
  return 0;
}
