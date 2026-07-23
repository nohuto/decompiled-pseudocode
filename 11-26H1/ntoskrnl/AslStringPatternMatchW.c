/*
 * XREFs of AslStringPatternMatchW @ 0x1409D59A0
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140718E64 (SdbpCheckApplicationTypeAttributes.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchW(__int64 a1, __int64 a2)
{
  return AslStringPatternMatchExW(a1, a2);
}
