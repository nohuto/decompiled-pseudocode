/*
 * XREFs of ApiSetpSearchForHostOverrideIndex_V7 @ 0x180104824
 * Callers:
 *     ApiSetpResolveHost @ 0x180031880 (ApiSetpResolveHost.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForHostOverrideIndex_V7(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const WCHAR *a4,
        unsigned __int16 a5)
{
  unsigned int i; // ebx
  __int64 v10; // rcx
  __int64 v11; // r14

  if ( a3 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v10 = *(unsigned __int16 *)(a1 + 18);
      v11 = *(unsigned int *)(a1 + 104) + a2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v10;
      if ( !RtlCompareUnicodeStrings(
              a4,
              a5,
              (PCWCH)(a1 + *(unsigned int *)(a1 + 36) + (unsigned __int64)*(unsigned int *)(v11 + a1 + 4) - v10),
              *(unsigned __int16 *)(v11 + a1 + 12),
              1u) )
        return a2;
      a2 = *(unsigned __int16 *)(v11 + a1);
    }
  }
  return 0xFFFFLL;
}
