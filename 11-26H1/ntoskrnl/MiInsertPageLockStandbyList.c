/*
 * XREFs of MiInsertPageLockStandbyList @ 0x1402C0C30
 * Callers:
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 * Callees:
 *     MiLockPageListAndLastPage @ 0x14029ADA0 (MiLockPageListAndLastPage.c)
 *     MiRebuildStandbyLookasideList @ 0x1402AD184 (MiRebuildStandbyLookasideList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402B0720 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403E8DF0 (MiUpdateAvailableEventsAtDpc.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403E8E7C (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiIsStandbyPageCorrupted @ 0x140503ABC (MiIsStandbyPageCorrupted.c)
 */

__int64 __fastcall MiInsertPageLockStandbyList(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r12
  int v5; // r13d
  unsigned int v6; // r8d
  __int64 v7; // r8
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r14
  int v11; // eax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  struct _KEVENT *v16; // rdi

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a2 + 32) & 0x40000000) != 0 && v5 == 9 )
  {
    MiRestoreTransitionPte(a2);
    MiInsertPageInList(a2, 0x20u);
    return 0LL;
  }
  if ( (dword_140FBF210 & 2) != 0 && (*(_DWORD *)a1 & 4) == 0 && v5 == 9 && (*(_DWORD *)(v3 + 4) & 0x20) == 0 )
  {
    v14 = *(_QWORD *)(a2 + 16);
    if ( (v14 & 0x400) == 0
      && (v14 & 8) != 0
      && (*(_DWORD *)(a2 + 32) & 0x40000000) == 0
      && (MiGetPagePrivilege(a2) & 0x10) == 0
      && (unsigned int)MiIsStandbyPageCorrupted((__int64)(a2 + 0x220000000000LL) / 48) )
    {
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 32) & 0xFFF8FFFF | 0x20000;
      MiRestoreTransitionPte(a2);
      MiInsertPageInFreeOrZeroedList((__int64)(a2 + 0x220000000000LL) / 48);
      return 0LL;
    }
  }
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 32) & 0xFFF8FFFF | 0x20000;
    return 0LL;
  }
  v6 = *(_DWORD *)(a2 + 32);
  if ( (*(_QWORD *)(a2 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_23;
  if ( (*(_DWORD *)(a2 + 32) & 0x8000000) == 0 )
  {
LABEL_6:
    v7 = HIBYTE(v6) & 7;
    goto LABEL_7;
  }
  if ( a2 < 0xFFFFDE0000000000uLL
    || a2 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || (unsigned int)MiIsDecayPfn((__int64)(a2 + 0x220000000000LL) / 48) )
  {
LABEL_23:
    v7 = 5LL;
  }
  else
  {
    if ( (v6 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(a2) != 9 )
      goto LABEL_6;
    v7 = 5LL;
  }
LABEL_7:
  if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v8 = v3 + 88LL * (unsigned int)v7 + 3648;
    if ( (*(_DWORD *)a1 & 4) == 0 && v5 == 9 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(((*(__int64 *)(a2 + 40) >> 63) & 0xFFFFFFFFFFFFDC80uLL)
                                                        + v3
                                                        + 16704));
      v9 = _InterlockedIncrement64((volatile signed __int64 *)(v3 + 22464));
      if ( v9 <= 0x420 )
      {
        if ( v9 == 50 )
        {
          v15 = 16616LL;
        }
        else if ( v9 == 1056 )
        {
          v15 = 16648LL;
        }
        else
        {
          if ( v9 != 34 )
          {
            if ( v9 == 288 )
              MiSlabDemotionLowMemoryConditionUpdate(v3, 1LL);
            goto LABEL_11;
          }
          v15 = 16584LL;
        }
        v16 = (struct _KEVENT *)(v3 + v15);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 16576));
        KeSetEvent(v16, 0, 0);
        ++v16[1].Header.LockNV;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 16576));
      }
LABEL_11:
      v10 = v9 - 1;
      if ( v10 == *(_QWORD *)(v3 + 17024) || v10 == *(_QWORD *)(v3 + 17032) )
        MiUpdateAvailableEventsAtDpc(v3);
    }
  }
  v11 = *(_DWORD *)(a1 + 4);
  if ( (v11 & 0x80u) == 0 )
  {
    if ( v5 < 9 && (v11 & 0x800) != 0 )
    {
      MiLockPageListAndLastPage(v8, a1 + 32, v7);
    }
    else
    {
      MiSynchronizeFastPageInsert(v3, v8, a2, v5, 0LL, a1 + 32);
      if ( !*(_BYTE *)(a1 + 32) )
      {
        v13 = *(unsigned __int8 *)(a1 + 34);
        if ( v13 != 3 )
          MiRebuildStandbyLookasideList(a2, v13, *(_BYTE *)(a1 + 33));
      }
    }
  }
  *(_QWORD *)(a1 + 24) = v8;
  return 1LL;
}
