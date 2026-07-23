/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800C48A4
 * Callers:
 *     AVrfCallAPILookupCallback @ 0x1800C353C (AVrfCallAPILookupCallback.c)
 *     AVrfpSnapDllImports @ 0x1800C4600 (AVrfpSnapDllImports.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180148080 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800C49B4 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(void *a1)
{
  if ( (unsigned __int8)RtlpGetTargetRvaFlag(a1) )
    return 0;
  else
    return 0;
}
