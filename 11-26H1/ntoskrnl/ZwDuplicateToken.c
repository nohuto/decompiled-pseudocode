/*
 * XREFs of ZwDuplicateToken @ 0x140723C30
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140499FF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1404CFDA0 (RtlCheckTokenCapability.c)
 *     DifZwDuplicateTokenWrapper @ 0x1406A4FE0 (DifZwDuplicateTokenWrapper.c)
 *     RtlpIsAppContainer @ 0x14080491C (RtlpIsAppContainer.c)
 *     RtlImpersonateSelfEx @ 0x1409D22A0 (RtlImpersonateSelfEx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle, *(_QWORD *)&DesiredAccess);
}
