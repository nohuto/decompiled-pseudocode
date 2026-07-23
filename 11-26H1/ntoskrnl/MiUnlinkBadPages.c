/*
 * XREFs of MiUnlinkBadPages @ 0x1406F6C4C
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x1406F7080 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiUnlinkPageFromBadList @ 0x1402A9E2C (MiUnlinkPageFromBadList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiIsPageInHugePfn @ 0x140315910 (MiIsPageInHugePfn.c)
 *     MiMarkHugePfnGood @ 0x1406F1A84 (MiMarkHugePfnGood.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 *     MiIsFileOnlyPfnImpendingRemoval @ 0x1406FF600 (MiIsFileOnlyPfnImpendingRemoval.c)
 */

__int64 __fastcall MiUnlinkBadPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rsi
  __int64 v14; // r14
  __int64 *v15; // rcx

  v3 = a1;
  v4 = 0LL;
  for ( i = 48 * a1 - 0x220000000000LL; v3 < a2; i += 48LL )
  {
    if ( MiIsPageInHugePfn(v3) )
    {
      v8 = MiMarkHugePfnGood(v3);
      v9 = i - 48;
      if ( v8 >= 0 )
        v9 = i;
      i = v9;
      v10 = v3 - 1;
      if ( v8 >= 0 )
        v10 = v3;
      v3 = v10;
      v11 = v4 + 1;
      if ( v8 != 274 )
        v11 = v4;
      v4 = v11;
    }
    else
    {
      v12 = MiSafeLockPage(v3, v6, v7);
      v13 = v12;
      if ( v12 != 17 )
      {
        v14 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(i + 40) >> 43) & 0x3FFLL));
        if ( (*(_DWORD *)(i + 32) & 0x40000000) != 0 )
        {
          MiSetPfnRemovalRequested(i, 0, 0LL);
          ++v4;
          *(_DWORD *)(i + 32) &= ~0x80000000;
          if ( _bittest64((const signed __int64 *)(i + 40), 0x35u) )
            MiIsFileOnlyPfnImpendingRemoval(i);
          else
            MiReleaseNonPagedResources(v14, 1LL);
        }
        else if ( MiIsPageOnBadList(i) )
        {
          *(_DWORD *)(i + 32) &= ~0x80000000;
          MiUnlinkPageFromBadList(v15, 0);
          *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
          MiInsertPageInFreeOrZeroedList(v3);
          MiReleaseNonPagedResources(v14, 1LL);
          ++v4;
        }
        _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v13 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
          __writecr8(v13);
        }
      }
    }
    ++v3;
  }
  return v4;
}
