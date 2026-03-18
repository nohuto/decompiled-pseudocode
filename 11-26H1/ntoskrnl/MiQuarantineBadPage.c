/*
 * XREFs of MiQuarantineBadPage @ 0x1406F15B8
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14086A430 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiIsPageOnBadList @ 0x14028F9D0 (MiIsPageOnBadList.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiSetPfnContainingFrame @ 0x14033BC10 (MiSetPfnContainingFrame.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     MiFreeContiguousPages @ 0x1403C3858 (MiFreeContiguousPages.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

__int64 __fastcall MiQuarantineBadPage(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // r14
  __int64 v7; // rbx
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  AutoBoost *v10; // rsi
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 12) = 1;
  v7 = 48 * v4 - 0x220000000000LL;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E37DC8, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E37DC8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E37DC8, v8, (__int64)&stru_140E37DC8);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v9) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v9, 1);
    }
    else
    {
      *((_BYTE *)v10 + 10) = 1;
    }
  }
  v11 = MiSafeLockPage(v4, (__int64)v9);
  v12 = v11;
  if ( v11 == 17 )
  {
    *(_DWORD *)(a1 + 8) = 2;
    a2 = -1073740748;
    goto LABEL_25;
  }
  if ( a2 < 0 )
  {
    if ( MiIsPageOnBadList(48 * v4 - 0x220000000000LL) )
    {
      a2 = 0;
    }
    else if ( (*(_DWORD *)(v7 + 32) & 0x40000000) != 0 )
    {
      LOBYTE(stru_140E2EB88.AffinityPrimaryGroup) = 1;
      a2 = 259;
      *(_BYTE *)(a1 + 13) = 1;
    }
    goto LABEL_21;
  }
  if ( (*(_DWORD *)(v7 + 32) & 0x40000000) != 0 )
  {
    *(_DWORD *)(v7 + 32) &= 0xFFFF0000;
    MiSetPfnContainingFrame(48 * v4 - 0x220000000000LL, 0LL);
    MiInsertPageInList(48 * v4 - 0x220000000000LL, 0x20u);
LABEL_21:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v12 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      __writecr8(v12);
    }
    goto LABEL_25;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v11 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    __writecr8(v12);
  }
  --*(_QWORD *)(a1 + 40);
  MiFreeContiguousPages(v4, 1uLL, 0);
LABEL_25:
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
  {
    MiReleaseNonPagedResources(*(_QWORD *)(a1 + 16), v13);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 24));
  result = (unsigned int)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
