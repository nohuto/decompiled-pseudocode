/*
 * XREFs of MiLockControlAreaSectionExtend @ 0x1404A8244
 * Callers:
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall MiLockControlAreaSectionExtend(struct _KTHREAD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int64 *p_CycleTime; // rdi
  _QWORD *v6; // r13
  unsigned __int64 v7; // rbp
  KIRQL v8; // al
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 *v10; // rcx
  KIRQL v11; // si
  __int64 *v12; // r12
  AutoBoost *v13; // rax
  struct _KLOCK_ENTRY *v14; // rdx
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  volatile unsigned __int8 *v19; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a2 + 8) == 16 )
    --CurrentThread->SpecialApcDisable;
  else
    --CurrentThread->KernelApcDisable;
  p_CycleTime = &a1->CycleTime;
  v6 = (_QWORD *)(a2 + 32);
  while ( 1 )
  {
    v7 = 0LL;
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)p_CycleTime);
    v10 = *(__int64 **)&a1->CurrentRunTime;
    v11 = v8;
    if ( v10 )
    {
      while ( 1 )
      {
        v12 = v10;
        if ( (*(_DWORD *)(a2 + 8) & (_DWORD)v10[1]) != 0 )
          break;
        v10 = (__int64 *)*v10;
        if ( !v10 )
          goto LABEL_11;
      }
      v13 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v9);
      v7 = (unsigned __int64)v13;
      v10 = v12;
      if ( v13 )
      {
        KeAbPreWait(v13, v14);
        v10 = v12;
      }
    }
LABEL_11:
    *(_WORD *)(a2 + 24) = 263;
    *(_BYTE *)(a2 + 26) = 6;
    *(_DWORD *)(a2 + 28) = 0;
    *(_QWORD *)(a2 + 40) = v6;
    *v6 = v6;
    *(_QWORD *)a2 = *(_QWORD *)&a1->CurrentRunTime;
    *(_QWORD *)&a1->CurrentRunTime = a2;
    if ( !v10 )
      break;
    if ( v11 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)p_CycleTime);
    else
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)p_CycleTime, v11);
    KeWaitForGate(a2 + 24, 18LL);
    if ( v7 )
    {
      KeAbPreAcquire((__int64)a1, v7, 0LL, v15);
      KeAbPostReleaseEx(a1, v7, v16, v17);
    }
  }
  v18 = KeAbPreAcquire((__int64)a1, 0LL, 0LL, v9);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v19) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v18 + 33), v19, 1);
    }
    else
    {
      *(_BYTE *)(v18 + 10) = 1;
    }
  }
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)p_CycleTime);
  else
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)p_CycleTime, v11);
}
