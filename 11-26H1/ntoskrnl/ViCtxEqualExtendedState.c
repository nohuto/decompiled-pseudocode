/*
 * XREFs of ViCtxEqualExtendedState @ 0x140C46EBC
 * Callers:
 *     ViCtxCheckAndReleaseIsrState @ 0x140C46D90 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

char __fastcall ViCtxEqualExtendedState(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // rcx

  v5 = MEMORY[0xFFFFF780000003D8] & *(_QWORD *)(a2 + 512) & *(_QWORD *)(a1 + 512);
  if ( (v5 & 1) != 0
    && !a3
    && (*(_WORD *)a1 != *(_WORD *)a2
     || *(_WORD *)(a1 + 2) != *(_WORD *)(a2 + 2)
     || *(_BYTE *)(a1 + 4) != *(_BYTE *)(a2 + 4)
     || memcmp((const void *)(a1 + 32), (const void *)(a2 + 32), 0x80uLL)) )
  {
    return 0;
  }
  v6 = 2;
  if ( (v5 & 2) != 0
    && (*(_DWORD *)(a1 + 24) != *(_DWORD *)(a2 + 24)
     || *(_DWORD *)(a1 + 28) != *(_DWORD *)(a2 + 28)
     || memcmp((const void *)(a1 + 256), (const void *)(a2 + 256), 0xA0uLL)) )
  {
    return 0;
  }
  while ( v6 < 0x40 )
  {
    if ( _bittest64(&v5, v6) )
    {
      v7 = *(unsigned int *)(8LL * v6 - 0x87FFFFFFC10LL);
      if ( memcmp((const void *)(a1 + v7), (const void *)(v7 + a2), *(unsigned int *)(8LL * v6 - 0x87FFFFFFC0CLL)) )
        return 0;
    }
    ++v6;
  }
  return 1;
}
