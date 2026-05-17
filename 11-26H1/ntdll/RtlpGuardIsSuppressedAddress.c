/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800C70E4
 * Callers:
 *     AVrfCallAPILookupCallback @ 0x1800C5D7C (AVrfCallAPILookupCallback.c)
 *     AVrfpSnapDllImports @ 0x1800C6E40 (AVrfpSnapDllImports.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1801481D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800C71F4 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(__int64 a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)RtlpGetTargetRvaFlag(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
