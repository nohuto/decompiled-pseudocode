/*
 * XREFs of NtQueryInformationToken @ 0x18015F260
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x180026E60 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180042BE0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1800438A0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpValidOwnerSubjectContext @ 0x180045300 (RtlpValidOwnerSubjectContext.c)
 *     RtlpValidLabelSubjectContext @ 0x1800457FC (RtlpValidLabelSubjectContext.c)
 *     RtlDefaultNpAcl @ 0x180045C90 (RtlDefaultNpAcl.c)
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180047D40 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180048170 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180056C34 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlCheckTokenCapability @ 0x180059240 (RtlCheckTokenCapability.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005AE40 (EtwpWriteToPrivateBuffers.c)
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 *     RtlCheckSandboxedToken @ 0x180107960 (RtlCheckSandboxedToken.c)
 *     RtlRemovePrivileges @ 0x180109300 (RtlRemovePrivileges.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010C14C (AVrfpAppendCurrentUserSid.c)
 *     RtlNewSecurityGrantedAccess @ 0x180112710 (RtlNewSecurityGrantedAccess.c)
 *     RtlpIsAppContainer @ 0x180114E34 (RtlpIsAppContainer.c)
 *     RtlNewInstanceSecurityObject @ 0x180139F40 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationToken(
        HANDLE TokenHandle,
        ULONG TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 33;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
