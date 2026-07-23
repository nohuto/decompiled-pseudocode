/*
 * XREFs of PopBootLoaderTraceCopyPfnList @ 0x140BEF388
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140BFFC6C (PopBuildMemoryImageHeader.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall PopBootLoaderTraceCopyPfnList(_QWORD *MemoryMap, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rbx
  PVOID *v6; // rsi

  v2 = MemoryMap[29];
  if ( v2 )
  {
    v5 = (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
    v6 = (PVOID *)(v2 + 48);
    memmove((void *)(a2 + 920), v6, 8 * v5);
    for ( *(_DWORD *)(a2 + 916) = v5; v5; --v5 )
      PoSetHiberRange(MemoryMap, 0xC000u, *v6++, 1uLL, 0x644D6946u);
  }
  else
  {
    *(_DWORD *)(a2 + 916) = 0;
  }
}
