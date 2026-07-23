/*
 * XREFs of RtlCheckTokenMembership @ 0x140493B20
 * Callers:
 *     NtFilterBootOption @ 0x14081BCA0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14082D8C0 (EtwpUserInAdminOrLogUsersGroup.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 *     ExpCheckIRTimerAccess @ 0x140ABF674 (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x140B11F04 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x140B41010 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x140B6B9E8 (PopNetUpdateStandbyRequest.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
