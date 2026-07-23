/*
 * XREFs of RtlpUpdateHeapWatermarks @ 0x18000C5B0
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapWatermarks(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v2; // r8
  unsigned int v3; // eax

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    ++*(_DWORD *)(a1 + 640);
    v1 = *(_DWORD *)(a1 + 648);
    if ( *(_DWORD *)(a1 + 640) > v1 )
    {
      v2 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 640) = 0;
      if ( v2 > *(_QWORD *)(a1 + 672) )
        *(_QWORD *)(a1 + 672) = v2;
      *(_QWORD *)(a1 + 680) = v2;
    }
    if ( ++*(_DWORD *)(a1 + 652) >= 0x1000u )
    {
      if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 656) > 0x10u )
        v3 = 256;
      else
        v3 = 16;
      if ( *(_DWORD *)(a1 + 644) > v3 && v1 < 0x10000 )
        *(_DWORD *)(a1 + 648) = 2 * v1;
      *(_DWORD *)(a1 + 644) = 0;
      *(_DWORD *)(a1 + 652) = 0;
    }
  }
}
