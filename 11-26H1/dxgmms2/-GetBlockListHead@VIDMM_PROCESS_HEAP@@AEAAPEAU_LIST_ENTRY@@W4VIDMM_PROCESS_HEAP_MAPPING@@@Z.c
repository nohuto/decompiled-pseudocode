/*
 * XREFs of ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1400BB304
 * Callers:
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@_N@Z @ 0x1400B9644 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_H.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400BA5B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::GetBlockListHead(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = a2 - 1;
  if ( !v2 )
    return a1 + 192;
  v3 = v2 - 1;
  if ( !v3 )
    return a1 + 208;
  v4 = v3 - 1;
  if ( !v4 )
    return a1 + 224;
  v5 = v4 - 1;
  if ( !v5 )
    return a1 + 240;
  v6 = v5 - 1;
  if ( !v6 )
    return a1 + 256;
  if ( v6 == 1 )
    return a1 + 272;
  return 0LL;
}
