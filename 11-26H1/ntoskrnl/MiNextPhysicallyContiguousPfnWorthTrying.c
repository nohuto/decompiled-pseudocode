/*
 * XREFs of MiNextPhysicallyContiguousPfnWorthTrying @ 0x1404D94C0
 * Callers:
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiNextPhysicallyContiguousPfnWorthTrying(__int64 a1, unsigned int a2, int a3, ULONG_PTR a4)
{
  __int64 v4; // rbx
  unsigned int v8; // r14d
  __int64 v9; // rbp
  unsigned int v10; // ebx

  v4 = a2;
  if ( !_bittest64(&MiFlags, 0x1Fu) )
    return 0LL;
  if ( a4 > qword_140E2D920 )
    return 0LL;
  v8 = 0;
  if ( ((*(_QWORD *)(48 * a4 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    return 0LL;
  v9 = 48 * a4 - 0x220000000000LL;
  if ( (unsigned int)MiGetPfnPageSizeIndex(v9) != a2 )
    return 0LL;
  if ( (unsigned __int64)MiPageSizes[v4] > *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 72) )
    return 0LL;
  v10 = *(_DWORD *)(v9 + 32);
  if ( (v10 & 0x70000) > 0x10000
    || (unsigned int)MiPageToNode(a4) != *(_DWORD *)(a1 + 32)
    || *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != *(_QWORD *)(a1 + 8) )
  {
    return 0LL;
  }
  LOBYTE(v8) = ((v10 >> 22) & 3) == a3;
  return v8;
}
