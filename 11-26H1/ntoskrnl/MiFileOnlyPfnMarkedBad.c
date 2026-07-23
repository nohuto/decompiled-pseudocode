/*
 * XREFs of MiFileOnlyPfnMarkedBad @ 0x1406FE828
 * Callers:
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiRemoveLockedPageCharge @ 0x14031F1B0 (MiRemoveLockedPageCharge.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiPurgeFileOnlyPfn @ 0x1404C54C4 (MiPurgeFileOnlyPfn.c)
 */

__int64 __fastcall MiFileOnlyPfnMarkedBad(ULONG_PTR a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // r14d
  char v6; // al
  __int64 SubsectionFromPte; // rax
  __int64 v8; // rbx
  volatile LONG *v9; // r15
  unsigned int *v10; // rcx
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx

  v3 = a3;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
  {
    v5 = 259;
    v6 = *(_BYTE *)(a1 + 34) & 7;
    if ( v6 == 6 )
    {
      MiTrimSharedPage(a1, a3, a2);
    }
    else
    {
      if ( v6 == 7 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 && (unsigned __int16)*(_DWORD *)(a1 + 32) == 1 )
      {
        SubsectionFromPte = MiGetSubsectionFromPte(*(_QWORD *)(a1 + 16));
        v8 = *(_QWORD *)SubsectionFromPte;
        if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x20) != 0
          && (*(_DWORD *)(v8 + 56) & 0x30000000) == 0x10000000 )
        {
          v9 = (volatile LONG *)(v8 + 72);
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
          v10 = *(unsigned int **)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 48);
          if ( v10 )
          {
            v11 = (unsigned __int64 *)(v10 + 2);
            v12 = (unsigned __int64)&v10[2 * *v10 + 2];
            while ( (unsigned __int64)v11 < v12 )
            {
              if ( (*v11 & 1) == 0 && *v11 == a1 )
              {
                if ( v11 )
                {
                  v13 = *(_QWORD *)(a1 + 8);
                  MiRemoveLockedPageCharge(a1);
                  MiPurgeFileOnlyPfn(a1, 7);
                  v5 = 0;
                  *v11 = v13 | 0x8000000000000001uLL;
                }
                goto LABEL_23;
              }
              ++v11;
            }
          }
          v11 = 0LL;
LABEL_23:
          ExReleaseSpinLockExclusiveFromDpcLevel(v9);
          if ( v11 )
            MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x220000000000LL) / 48);
        }
      }
      if ( (_BYTE)v3 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v3 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
          __writecr8(v3);
        }
      }
    }
  }
  else
  {
    MiUnlinkPageFromListEx(a1, 0);
    MiInsertPageInList(a1, 4u);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v3 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
      __writecr8(v3);
    }
    return 0;
  }
  return v5;
}
