/*
 * XREFs of RtlpUpdateHeapRates @ 0x1800C9380
 * Callers:
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapRates(__int64 a1, int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  bool v4; // zf
  int v5; // edx

  if ( a2 == 1 )
  {
    v2 = *(_DWORD *)(a1 + 616) + 1;
    v3 = *(_DWORD *)(a1 + 620) + 1;
    *(_DWORD *)(a1 + 616) = v2;
    v4 = *(_BYTE *)(a1 + 418) == 2;
    *(_DWORD *)(a1 + 620) = v3;
    if ( !v4 )
    {
      if ( v2 >= v3 )
      {
        if ( v3 < v2 >> 4 )
          return;
      }
      else
      {
        *(_QWORD *)(a1 + 616) = 0LL;
      }
      *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
  }
  else
  {
    v5 = a2 - 2;
    if ( v5 )
    {
      if ( v5 == 1 )
        ++*(_DWORD *)(a1 + 628);
    }
    else
    {
      ++*(_DWORD *)(a1 + 624);
    }
  }
}
