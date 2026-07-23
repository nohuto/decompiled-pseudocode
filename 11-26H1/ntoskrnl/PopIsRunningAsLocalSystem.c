/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x140B11F04
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140493B20 (RtlCheckTokenMembership.c)
 */

BOOLEAN PopIsRunningAsLocalSystem()
{
  BOOLEAN IsMember; // [rsp+30h] [rbp+8h] BYREF

  IsMember = 0;
  RtlCheckTokenMembership(0LL, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), &IsMember);
  return IsMember;
}
