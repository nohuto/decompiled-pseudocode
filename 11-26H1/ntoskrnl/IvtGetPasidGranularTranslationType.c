/*
 * XREFs of IvtGetPasidGranularTranslationType @ 0x14052623C
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1405001A0 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtAllocateTranslationStructures @ 0x140509968 (IvtAllocateTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140BEFC90 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetPasidGranularTranslationType(__int64 a1, char a2, char a3)
{
  if ( a2 )
    return 1LL;
  else
    return a3 != 0 ? 2 : 4;
}
