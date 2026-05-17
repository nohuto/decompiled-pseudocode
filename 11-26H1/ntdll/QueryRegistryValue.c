/*
 * XREFs of QueryRegistryValue @ 0x1800DF5EC
 * Callers:
 *     _GetOverlayPackagePathFromKey @ 0x180033318 (_GetOverlayPackagePathFromKey.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall QueryRegistryValue(__int64 a1, __int64 a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  int v9; // ebx
  _DWORD *Heap_0; // rdi
  int ValueKey; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  _DWORD v15[10]; // [rsp+30h] [rbp-28h] BYREF

  v15[0] = 0;
  if ( !a5 )
    return 3221225485LL;
  v9 = *a5 + 12;
  Heap_0 = (_DWORD *)RtlAllocateHeap_0();
  if ( Heap_0 )
  {
    ValueKey = NtQueryValueKey(a1, a2, 2LL, Heap_0, v9, v15);
    v12 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
        goto LABEL_12;
    }
    else
    {
      v13 = Heap_0[2];
      if ( !v13 )
      {
        v12 = -1073741811;
LABEL_12:
        RtlFreeHeap_0();
        return v12;
      }
      if ( v13 <= *a5 )
      {
        *a5 = v13;
        if ( a4 )
          memmove(a4, Heap_0 + 3, v13);
        if ( a3 )
          *a3 = Heap_0[1];
        goto LABEL_12;
      }
    }
    v12 = -1073741789;
    *a5 = Heap_0[2];
    goto LABEL_12;
  }
  return 3221225626LL;
}
