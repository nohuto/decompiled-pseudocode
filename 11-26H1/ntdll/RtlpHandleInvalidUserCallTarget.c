/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1801481D0
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180127640 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800C70E4 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800C7114 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x1800C71BC (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18011041C (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlFailFast2 @ 0x180127850 (RtlFailFast2.c)
 */

__int64 __fastcall RtlpHandleInvalidUserCallTarget(__int64 a1)
{
  __int64 result; // rax

  if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    return RtlpGuardGrantSuppressedCallAccess(a1, 1u);
  if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
    || !RtlGuardIsExportSuppressedAddress(a1)
    || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), (int)result < 0) )
  {
    RtlFailFast2(0xAu);
  }
  return result;
}
