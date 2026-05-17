/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x1800C71BC
 * Callers:
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1801481D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800C71F4 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlGuardIsExportSuppressedAddress(__int64 a1)
{
  char result; // al
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !(unsigned __int8)RtlpGetTargetRvaFlag(a1, &v2) )
    return 0;
  result = 1;
  if ( (v2 & 1) != 0 || (v2 & 2) == 0 )
    return 0;
  return result;
}
