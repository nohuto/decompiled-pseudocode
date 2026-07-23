/*
 * XREFs of ExCheckSingleFilter @ 0x14042D60C
 * Callers:
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     EtwTraceObjectOperation @ 0x14042D490 (EtwTraceObjectOperation.c)
 *     EtwpCheckPoolTagFilters @ 0x1406C7464 (EtwpCheckPoolTagFilters.c)
 *     EtwTraceObject @ 0x14082DD04 (EtwTraceObject.c)
 *     EtwpObjectHandleEnumCallback @ 0x140835860 (EtwpObjectHandleEnumCallback.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140C3A6F4 (VfFaultsInjectPoolAllocationFailure.c)
 *     ViFaultsIsTagPresentInList @ 0x140C3AFB8 (ViFaultsIsTagPresentInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExCheckSingleFilter(int a1, int a2)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  char v4; // dl
  int v6; // [rsp+8h] [rbp+8h]
  int v7; // [rsp+10h] [rbp+10h]

  v2 = 0;
  v6 = a1;
  v3 = 0LL;
  v7 = a2;
  while ( v2 < 4 )
  {
    v4 = *((_BYTE *)&v7 + v3);
    if ( v4 != 63 )
    {
      if ( v4 == 42 )
        return 1LL;
      if ( *((_BYTE *)&v6 + v3) != v4 )
        return 0LL;
    }
    ++v2;
    ++v3;
  }
  return 1LL;
}
