/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x1800C497C
 * Callers:
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C4120 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180148080 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800C49B4 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  RtlpGetTargetRvaFlag(a1);
  return 0;
}
