/*
 * XREFs of _SafeReallocBlob @ 0x18003826C
 * Callers:
 *     RtlpMuiRegConfigListAddLanguage @ 0x1800E9B18 (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegResizeLanguageList @ 0x180111530 (RtlpMuiRegResizeLanguageList.c)
 *     RtlpMuiRegGrowLanguages @ 0x18014D9D4 (RtlpMuiRegGrowLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeReallocBlob(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  unsigned __int64 v7; // r8

  if ( !a1 )
    return 0LL;
  v7 = a4 * (unsigned __int64)a3;
  if ( v7 > 0xFFFFFFFF || (unsigned int)v7 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v7 + a2;
  return RtlReAllocateHeap_0();
}
