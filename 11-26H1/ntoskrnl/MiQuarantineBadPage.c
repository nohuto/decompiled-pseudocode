/*
 * XREFs of MiQuarantineBadPage @ 0x1406F6228
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140870810 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

__int64 __fastcall MiQuarantineBadPage(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // r14
  __int64 v7; // rbx
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  __int64 v10; // r8
  AutoBoost *v11; // rsi
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 12) = 1;
  v7 = 48 * v4 - 0x220000000000LL;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E37F48, 0LL, 0LL, a4);
  v11 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E37F48, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E37F48, v8, (__int64)&stru_140E37F48);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v9) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v11 + 33), v9, 1);
    }
    else
    {
      *((_BYTE *)v11 + 10) = 1;
    }
  }
  v12 = MiSafeLockPage(v4, (__int64)v9, v10);
  v13 = v12;
  if ( v12 == 17 )
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
      LOBYTE(stru_140E2ED08.AffinityPrimaryGroup) = 1;
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
    if ( (unsigned __int8)v13 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      __writecr8(v13);
    }
    goto LABEL_25;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v13);
  }
  --*(_QWORD *)(a1 + 40);
  MiFreeContiguousPages(v4, 1uLL, 0);
LABEL_25:
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 )
  {
    MiReleaseNonPagedResources(*(_QWORD *)(a1 + 16), v14);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 24));
  result = (unsigned int)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
