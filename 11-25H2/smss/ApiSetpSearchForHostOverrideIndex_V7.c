/*
 * XREFs of ApiSetpSearchForHostOverrideIndex_V7 @ 0x140019EA4
 * Callers:
 *     ApiSetpResolveHost @ 0x14001990C (ApiSetpResolveHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForHostOverrideIndex_V7(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const WCHAR *a4,
        unsigned __int16 a5)
{
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rbp

  if ( !a3 )
    return 0xFFFFLL;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(unsigned __int16 *)(a1 + 18);
    v11 = *(unsigned int *)(a1 + 104) + a2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v10;
    if ( !RtlCompareUnicodeStrings(
            a4,
            a5,
            (PCWCH)(a1 + *(unsigned int *)(a1 + 36) + (unsigned __int64)*(unsigned int *)(v11 + a1 + 4) - v10),
            *(unsigned __int16 *)(v11 + a1 + 12),
            1u) )
      break;
    a2 = *(unsigned __int16 *)(v11 + a1);
    if ( ++v9 >= a3 )
      return 0xFFFFLL;
  }
  return a2;
}
