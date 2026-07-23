/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x180148080
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x1801273B0 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800788B0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800C48A4 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800C48D4 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x1800C497C (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010FFAC (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlFailFast2 @ 0x1801275C0 (RtlFailFast2.c)
 */

int __fastcall RtlpHandleInvalidUserCallTarget(void *a1)
{
  int result; // eax

  if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    return RtlpGuardGrantSuppressedCallAccess((__int64)a1, 1u);
  if ( !LdrControlFlowGuardEnforcedWithExportSuppression()
    || !RtlGuardIsExportSuppressedAddress(a1)
    || (result = RtlpUnsuppressForwardReferencingCallTarget((__int64)a1), result < 0) )
  {
    RtlFailFast2(0xAu);
  }
  return result;
}
