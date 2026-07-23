/*
 * XREFs of ZwDuplicateToken @ 0x140728800
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1404C97D0 (RtlCheckTokenCapability.c)
 *     DifZwDuplicateTokenWrapper @ 0x1406A8BC0 (DifZwDuplicateTokenWrapper.c)
 *     RtlpIsAppContainer @ 0x14080A3BC (RtlpIsAppContainer.c)
 *     RtlImpersonateSelfEx @ 0x1409A3280 (RtlImpersonateSelfEx.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(ExistingTokenHandle);
}
