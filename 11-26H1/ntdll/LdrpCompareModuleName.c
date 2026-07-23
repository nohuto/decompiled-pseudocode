/*
 * XREFs of LdrpCompareModuleName @ 0x18007B1FC
 * Callers:
 *     LdrpCheckForRetryLoading @ 0x18007AEA0 (LdrpCheckForRetryLoading.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 */

LONG __fastcall LdrpCompareModuleName(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 264);
  if ( !result )
    return RtlCompareUnicodeStrings(
             *(PCWCH *)(a2 - 144),
             (unsigned __int64)*(unsigned __int16 *)(a2 - 152) >> 1,
             *(PCWCH *)(a1 + 80),
             (unsigned __int64)*(unsigned __int16 *)(a1 + 72) >> 1,
             1u);
  return result;
}
