/*
 * XREFs of MiIsStandbyPageCorrupted @ 0x140503ABC
 * Callers:
 *     MiInsertPageLockStandbyList @ 0x1402C0C30 (MiInsertPageLockStandbyList.c)
 * Callees:
 *     MiArePagefileContentsCorrupted @ 0x1402BD7B0 (MiArePagefileContentsCorrupted.c)
 */

__int64 __fastcall MiIsStandbyPageCorrupted(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax

  v1 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(v1 + 4) & 0x20) != 0 )
    v1 = **(_QWORD **)(v1 + 21400);
  v2 = *(_QWORD *)(48 * a1 - 0x220000000000LL + 16);
  if ( (v2 & 8) != 0 && (unsigned __int16)v2 >> 12 == *(_DWORD *)(v1 + 1300)
    || !*(_QWORD *)(*(_QWORD *)(v1
                              + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(48 * a1 - 0x220000000000LL + 16)) >> 4)
                              + 22304)
                  + 184LL) )
  {
    return 0LL;
  }
  else
  {
    return MiArePagefileContentsCorrupted(a1, 0LL, 0);
  }
}
