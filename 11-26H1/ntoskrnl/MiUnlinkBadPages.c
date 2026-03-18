/*
 * XREFs of MiUnlinkBadPages @ 0x1406F1FDC
 * Callers:
 *     MmMarkPhysicalMemoryAsGood @ 0x1406F2410 (MmMarkPhysicalMemoryAsGood.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiIsPageOnBadList @ 0x14028F9D0 (MiIsPageOnBadList.c)
 *     MiUnlinkPageFromBadList @ 0x1402C8074 (MiUnlinkPageFromBadList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiIsPageInHugePfn @ 0x1403138E0 (MiIsPageInHugePfn.c)
 *     MiMarkHugePfnGood @ 0x1406ECDE4 (MiMarkHugePfnGood.c)
 *     MiSetPfnRemovalRequested @ 0x1406F1D98 (MiSetPfnRemovalRequested.c)
 *     MiIsFileOnlyPfnImpendingRemoval @ 0x1406FA930 (MiIsFileOnlyPfnImpendingRemoval.c)
 */

__int64 __fastcall MiUnlinkBadPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rsi
  __int64 v13; // r14
  __int64 *v14; // rcx

  v3 = a1;
  v4 = 0LL;
  for ( i = 48 * a1 - 0x220000000000LL; v3 < a2; i += 48LL )
  {
    if ( MiIsPageInHugePfn(v3) )
    {
      v7 = MiMarkHugePfnGood(v3);
      v8 = i - 48;
      if ( v7 >= 0 )
        v8 = i;
      i = v8;
      v9 = v3 - 1;
      if ( v7 >= 0 )
        v9 = v3;
      v3 = v9;
      v10 = v4 + 1;
      if ( v7 != 274 )
        v10 = v4;
      v4 = v10;
    }
    else
    {
      v11 = MiSafeLockPage(v3, v6);
      v12 = v11;
      if ( v11 != 17 )
      {
        v13 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(i + 40) >> 43) & 0x3FFLL));
        if ( (*(_DWORD *)(i + 32) & 0x40000000) != 0 )
        {
          MiSetPfnRemovalRequested(i, 0, 0LL);
          ++v4;
          *(_DWORD *)(i + 32) &= ~0x80000000;
          if ( _bittest64((const signed __int64 *)(i + 40), 0x35u) )
            MiIsFileOnlyPfnImpendingRemoval(i);
          else
            MiReleaseNonPagedResources(v13, 1LL);
        }
        else if ( MiIsPageOnBadList(i) )
        {
          *(_DWORD *)(i + 32) &= ~0x80000000;
          MiUnlinkPageFromBadList(v14, 0);
          *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
          MiInsertPageInFreeOrZeroedList(v3);
          MiReleaseNonPagedResources(v13, 1LL);
          ++v4;
        }
        _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v12 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
          __writecr8(v12);
        }
      }
    }
    ++v3;
  }
  return v4;
}
