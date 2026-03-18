/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x1402994DC
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A703C (MiPartitionPeriodicTick.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207BF0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiRelinkStandbyPage @ 0x140299860 (MiRelinkStandbyPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiDecayNodeNowEmpty @ 0x140462438 (MiDecayNodeNowEmpty.c)
 *     MiUnlinkDecayClusterTimer @ 0x140462634 (MiUnlinkDecayClusterTimer.c)
 *     MiRelinkDecayClusterTimer @ 0x140480A78 (MiRelinkDecayClusterTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

ULONG64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  ULONG64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned int v7; // r12d
  unsigned __int8 v8; // di
  __int64 v9; // rax
  ULONG_PTR v10; // r15
  __int64 v11; // rbp
  volatile signed __int64 *v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  volatile LONG *v15; // rcx
  unsigned int v16; // ebx
  unsigned __int8 CurrentIrql; // bl
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  result = KeQueryUnbiasedInterruptTimePrecise(&v19);
  v3 = result - *(_QWORD *)(a1 + 16488);
  if ( v3 < 0x989680 )
    return result;
  *(_QWORD *)(a1 + 16488) = result;
  v4 = 2LL;
  v5 = *(_DWORD *)(a1 + 16480) & 3;
  v6 = (unsigned int)v5;
  v7 = ((*(_BYTE *)(a1 + 16480) & 3) + 1) & 3;
  if ( *(_QWORD *)(a1 + 8 * v5 + 16448) >> 33 != 0x7FFFFFFFLL )
    goto LABEL_3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 2;
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, v3);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E347D0);
  if ( *(_QWORD *)(a1 + 8 * v6 + 16448) >> 33 != 0x7FFFFFFFLL )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E347D0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v4 = 2LL;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_3:
        v8 = KeGetCurrentIrql();
        if ( v8 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v3) = 2;
          LOBYTE(v4) = v8;
          KiRaiseIrqlProcessIrqlFlags(v4, v3);
        }
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 4120));
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E347D0);
        v9 = *(_QWORD *)(a1 + 8 * v6 + 16448) >> 33;
        if ( v9 == 0x7FFFFFFF )
        {
          *(_DWORD *)(a1 + 16480) = v7;
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E347D0);
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 4120));
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
          result = v8;
          goto LABEL_29;
        }
        v10 = v9 + qword_140E347B0;
        v11 = 48 * (v9 + qword_140E347B0) - 0x220000000000LL;
        v12 = (volatile signed __int64 *)(v11 + 24);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          break;
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E347D0);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 4120));
        if ( KiIrqlFlags )
          goto LABEL_22;
LABEL_23:
        v4 = 2LL;
LABEL_24:
        __writecr8(v8);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E347D0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E347D0, retaddr);
      v13 = *(_QWORD *)(v11 + 16);
      if ( qword_140E2D740 && (v13 & 0x10) == 0 )
        v13 &= qword_140E2D748;
      v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
      if ( v14 == v10 )
      {
        if ( (*(_DWORD *)(v11 + 32) & 0x8000000) != 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E347D0);
          MiUnlinkDecayClusterTimer(v11);
          MiRelinkDecayClusterTimer(v11, v7);
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E347D0);
        }
        else
        {
          MiDecayNodeNowEmpty(v10);
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 4120));
      }
      else
      {
        v11 = 48 * v14 - 0x220000000000LL;
        v15 = (volatile LONG *)(a1 + 4120);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(v15);
          _InterlockedAnd64(v12, 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_20;
        }
        _InterlockedAnd64(v12, 0x7FFFFFFFFFFFFFFFuLL);
        v16 = *(_DWORD *)(v11 + 32);
        ExReleaseSpinLockSharedFromDpcLevel(v15);
        MiRelinkStandbyPage(v11, HIBYTE(v16) & 7);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_20:
      v4 = 2LL;
      if ( v8 < 2u )
      {
        if ( !KiIrqlFlags )
          goto LABEL_24;
LABEL_22:
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
        goto LABEL_23;
      }
    }
  }
  *(_DWORD *)(a1 + 16480) = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E347D0);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
LABEL_29:
  __writecr8(result);
  return result;
}
