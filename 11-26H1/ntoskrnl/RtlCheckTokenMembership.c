/*
 * XREFs of RtlCheckTokenMembership @ 0x140499FD0
 * Callers:
 *     NtFilterBootOption @ 0x140815AF0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x140827680 (EtwpUserInAdminOrLogUsersGroup.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 *     ExpCheckIRTimerAccess @ 0x140ABD214 (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x140B104C4 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x140B3EFE0 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x140B68A58 (PopNetUpdateStandbyRequest.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140499FF0 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}
