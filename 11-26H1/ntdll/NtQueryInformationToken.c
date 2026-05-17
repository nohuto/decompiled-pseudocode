/*
 * XREFs of NtQueryInformationToken @ 0x18015F360
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18000B504 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlCheckTokenCapability @ 0x18000DB10 (RtlCheckTokenCapability.c)
 *     EtwpWriteToPrivateBuffers @ 0x18000F710 (EtwpWriteToPrivateBuffers.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003C8F0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180058660 (RtlpGetTokenNamedObjectPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180059320 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005AD80 (RtlpValidOwnerSubjectContext.c)
 *     RtlpValidLabelSubjectContext @ 0x18005B27C (RtlpValidLabelSubjectContext.c)
 *     RtlDefaultNpAcl @ 0x18005B710 (RtlDefaultNpAcl.c)
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18005D7C0 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18005DBF0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 *     WerEscalationLazyInit @ 0x1800D6160 (WerEscalationLazyInit.c)
 *     RtlCheckSandboxedToken @ 0x180107F60 (RtlCheckSandboxedToken.c)
 *     RtlRemovePrivileges @ 0x180109960 (RtlRemovePrivileges.c)
 *     AVrfpAppendCurrentUserSid @ 0x18010C5FC (AVrfpAppendCurrentUserSid.c)
 *     RtlNewSecurityGrantedAccess @ 0x180112C60 (RtlNewSecurityGrantedAccess.c)
 *     RtlpIsAppContainer @ 0x180115654 (RtlpIsAppContainer.c)
 *     RtlNewInstanceSecurityObject @ 0x18013A1D0 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationToken()
{
  __int64 result; // rax

  result = 33LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
