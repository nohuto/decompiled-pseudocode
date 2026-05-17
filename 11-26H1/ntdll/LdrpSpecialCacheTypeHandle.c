/*
 * XREFs of LdrpSpecialCacheTypeHandle @ 0x1801147C4
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0 (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpSpecialCacheTypeHandle(__int64 a1, char a2)
{
  __int64 result; // rax
  char v5; // dl
  void *v6; // rcx
  void *Heap_0; // rax
  unsigned __int64 v8; // rdi

  if ( !a1 )
    return 3221225485LL;
  v5 = gMUICacheType;
  result = 3221225473LL;
  if ( gMUICacheType )
  {
    if ( (gMUICacheType & 1) != 0 )
    {
      v6 = *(void **)(a1 + 40);
      if ( v6 )
      {
        NtClose(v6);
        v5 = gMUICacheType;
        result = 0LL;
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
    if ( (v5 & 6) != 0 )
    {
      if ( *(_QWORD *)(a1 + 32) && *(_QWORD *)(a1 + 32) != -1LL && (v5 & 4) == 0 && (v5 & 2) != 0 && a2 )
      {
        if ( *(_DWORD *)(a1 + 56) == -1073741799 )
          return 3221225497LL;
        Heap_0 = (void *)RtlAllocateHeap_0();
        v8 = (unsigned __int64)Heap_0;
        if ( !Heap_0 )
          return 3221225495LL;
        memmove(Heap_0, (const void *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL), *(_QWORD *)(a1 + 48));
        NtUnmapViewOfSection(-1LL, *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL);
        *(_DWORD *)(a1 + 56) = -1073741799;
        *(_QWORD *)(a1 + 32) = v8 | 1;
      }
      return 0LL;
    }
  }
  return result;
}
