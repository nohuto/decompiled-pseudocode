/*
 * XREFs of MiDbgMarkPfnModified @ 0x1407031F0
 * Callers:
 *     MiDbgWriteCheck @ 0x140703A18 (MiDbgWriteCheck.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiPfnIsPageTable @ 0x1403A9540 (MiPfnIsPageTable.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiDbgIsPfn @ 0x140702CF4 (MiDbgIsPfn.c)
 */

__int64 __fastcall MiDbgMarkPfnModified(unsigned __int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // r15
  int v11; // r10d
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  int v14; // ecx
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 i; // rdx
  __int64 v18; // rbp
  bool v19; // zf
  signed __int64 v20; // rax
  char v21; // dl
  int v22; // ebx
  _DWORD *v23; // rax
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v25; // r15
  __int64 v26; // rbp
  int v27; // eax

  v3 = (a1 >> 12) & 0xFFFFFFFFFFLL;
  if ( (MiFlags & 0x40000000) == 0 )
    return 1LL;
  if ( !(unsigned int)MiDbgIsPfn((a1 >> 12) & 0xFFFFFFFFFFLL) )
    return 1LL;
  v4 = 48 * v3 - 0x220000000000LL;
  if ( (*(_BYTE *)(v4 + 34) & 0x10) != 0 )
    return 1LL;
  v5 = 0;
  CurrentIrql = 17;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  if ( (a2 & 3) == 0 && _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x400u;
    return 0LL;
  }
  if ( (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) != 0 )
  {
    v8 = *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL;
    v9 = v8 == 0x3FFFFFFFFELL;
    if ( v8 != 0x3FFFFFFFFELL )
    {
      stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x800u;
      v9 = v8 == 0x3FFFFFFFFELL;
    }
    LOBYTE(v5) = v9;
    goto LABEL_75;
  }
  if ( (*(_DWORD *)(v4 + 16) & 0x400LL) == 0 )
  {
    if ( !MiPfnIsPageTable(v4) )
    {
      if ( (*(_BYTE *)(v4 + 34) & 8) != 0 || (*(_DWORD *)(v4 + 16) & 8) == 0 )
      {
        v22 = *(_DWORD *)(v4 + 32);
        if ( *(__int64 *)(v4 + 40) >= 0
          || (*(_QWORD *)(v4 + 16) & 0x400000000000400LL) != 0x400
          || (v23 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v4 + 16)),
              (*(_DWORD *)(*(_QWORD *)v23 + 56LL) & 0x820) != 0x20)
          || (v23[8] & 0x20000) != 0 )
        {
          if ( *(__int64 *)(v4 + 40) < 0
            && (*(_DWORD *)(v4 + 16) & 0x400LL) != 0
            && (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) == 0 )
          {
            SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v4 + 16));
            v25 = SubsectionFromPte;
            if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x20) == 0 && (SubsectionFromPte[38] & 1) == 0 )
            {
              v26 = *(_QWORD *)SubsectionFromPte;
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)SubsectionFromPte + 72LL));
              v27 = v25[38];
              if ( (v27 & 1) == 0 )
                v25[38] = v27 | 1;
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 72));
            }
          }
          if ( (v22 & 0x80000) != 0
            && MiCanPfnOriginalPteBeLost(v4)
            && (*(_QWORD *)(v4 + 16) & 8LL) != 0
            && (v22 & 0x100000) == 0 )
          {
            *(_QWORD *)(v4 + 16) &= ~8uLL;
          }
          *(_DWORD *)(v4 + 32) = v22 | 0x100000;
          goto LABEL_74;
        }
        goto LABEL_60;
      }
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v18 = (unsigned int)i;
        v19 = (_DWORD)i == 32;
        if ( (unsigned int)i >= 0x20 )
          break;
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)&MiState + i + 1313, v4, 0LL);
        if ( !v20 )
        {
          v19 = (_DWORD)i == 32;
          break;
        }
        if ( (v20 | 1) == (v4 | 1) )
          goto LABEL_74;
      }
      if ( v19 )
      {
        stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x2000u;
        goto LABEL_75;
      }
      v21 = 5;
      if ( CurrentIrql != 17 )
        v21 = 1;
      MiAddLockedPageCharge(v4, v21, v15, v16);
      _InterlockedAdd64((volatile signed __int64 *)&MiState + v18 + 1313, 1uLL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
    }
LABEL_74:
    v5 = 1;
    goto LABEL_75;
  }
  if ( (*(_BYTE *)(v4 + 34) & 0x10) != 0 )
    goto LABEL_74;
  if ( (*(_QWORD *)(v4 + 40) & 0x20000000000000LL) == 0 )
  {
    v10 = *(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v4 + 16));
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v10 + 72)) )
    {
      stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x400u;
      goto LABEL_75;
    }
    v11 = *(_DWORD *)(v4 + 32);
    if ( *(__int64 *)(v4 + 40) >= 0
      || (*(_QWORD *)(v4 + 16) & 0x400000000000400LL) != 0x400
      || (v12 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v4 + 16)),
          (*(_DWORD *)(*(_QWORD *)v12 + 56LL) & 0x820) != 0x20)
      || (v12[8] & 0x20000) != 0 )
    {
      if ( *(__int64 *)(v4 + 40) < 0
        && (*(_DWORD *)(v4 + 16) & 0x400LL) != 0
        && (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) == 0 )
      {
        v13 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v4 + 16));
        if ( (*(_DWORD *)(*(_QWORD *)v13 + 56LL) & 0x20) == 0 && (v13[38] & 1) == 0 )
        {
          v14 = v13[38];
          if ( (v14 & 1) == 0 )
            v13[38] = v14 | 1;
        }
      }
      if ( (v11 & 0x80000) != 0
        && MiCanPfnOriginalPteBeLost(v4)
        && (*(_QWORD *)(v4 + 16) & 8LL) != 0
        && (v11 & 0x100000) == 0 )
      {
        *(_QWORD *)(v4 + 16) &= ~8uLL;
      }
      *(_DWORD *)(v4 + 32) = v11 | 0x100000;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
      goto LABEL_74;
    }
LABEL_60:
    KeBugCheckEx(0x1Au, 0x8840uLL, v4, 0LL, 1uLL);
  }
  stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x1000u;
LABEL_75:
  if ( (a2 & 3) == 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v5;
}
