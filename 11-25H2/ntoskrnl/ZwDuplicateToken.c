/*
 * XREFs of ZwDuplicateToken @ 0x14069B980
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     DifZwDuplicateTokenWrapper @ 0x140633590 (DifZwDuplicateTokenWrapper.c)
 *     RtlpIsAppContainer @ 0x1407728AC (RtlpIsAppContainer.c)
 *     RtlImpersonateSelfEx @ 0x140A28334 (RtlImpersonateSelfEx.c)
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
