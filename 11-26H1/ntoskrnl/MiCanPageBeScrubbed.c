/*
 * XREFs of MiCanPageBeScrubbed @ 0x140710AE0
 * Callers:
 *     MiScrubLargePage @ 0x14071116C (MiScrubLargePage.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiHugeRangeFreeToZero @ 0x1404878B0 (MiHugeRangeFreeToZero.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiMovePageToFreeList @ 0x140711EC0 (MiMovePageToFreeList.c)
 */

__int64 __fastcall MiCanPageBeScrubbed(__int64 a1)
{
  _WORD *v1; // r14
  ULONG_PTR v2; // rbx
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rbp
  unsigned int v8; // edi
  int v9; // esi

  v1 = *(_WORD **)(a1 + 16);
  v2 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    v3 = v2 >> 18;
    v4 = *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (v3 & 0x3FFFFF));
    if ( ((v4 >> 4) & 0x7FF) == *v1 )
    {
      v5 = v4 & 7;
      if ( v5 == 1 )
      {
        MiHugeRangeFreeToZero(v3, 0, 0);
        return 1LL;
      }
      if ( v5 == 2 )
        return 1LL;
    }
    return 0LL;
  }
  v7 = 48 * v2 - 0x220000000000LL;
  v8 = *(_DWORD *)(v7 + 32);
  if ( (v8 & 0x70000) > 0x10000 )
    return 0LL;
  if ( (*(_DWORD *)(v7 + 32) & 0xC00000) == 0xC00000 )
    return 0LL;
  v9 = *(_DWORD *)(a1 + 12);
  if ( (unsigned int)MiGetPfnPageSizeIndex(48 * v2 - 0x220000000000LL) != v9
    || ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FF) != *v1 )
  {
    return 0LL;
  }
  if ( (_WORD)v8 )
    KeBugCheckEx(0x4Eu, 0x8DuLL, v2, v8, *(_QWORD *)(v7 + 8));
  return MiMovePageToFreeList(v2);
}
