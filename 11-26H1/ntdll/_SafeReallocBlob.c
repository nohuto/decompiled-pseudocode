/*
 * XREFs of _SafeReallocBlob @ 0x180001008
 * Callers:
 *     RtlpMuiRegConfigListAddLanguage @ 0x1800E8D28 (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegResizeLanguageList @ 0x1801110B0 (RtlpMuiRegResizeLanguageList.c)
 *     RtlpMuiRegGrowLanguages @ 0x18014D884 (RtlpMuiRegGrowLanguages.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SafeReallocBlob(
        PVOID BaseAddress,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned __int64 v7; // r8
  unsigned int v8; // eax

  if ( !BaseAddress )
    return 0LL;
  v7 = a4 * (unsigned __int64)a3;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  v8 = v7 + a2;
  if ( (unsigned int)v7 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v8;
  return RtlReAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress, v8);
}
