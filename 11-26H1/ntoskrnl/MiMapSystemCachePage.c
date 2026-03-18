/*
 * XREFs of MiMapSystemCachePage @ 0x1404FFD9C
 * Callers:
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiMapFrame @ 0x1402A0B50 (MiMapFrame.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMapSystemCachePage(unsigned __int64 a1, _QWORD *a2, char a3)
{
  ULONG_PTR v6; // r15
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rsi
  int v12; // ebx
  int v13; // r8d
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // r14
  __int64 v17; // rbp
  int v18; // eax
  int v19; // r10d

  while ( 1 )
  {
    if ( (*a2 & 1) == 0 )
      return 0LL;
    v6 = (*a2 >> 12) & 0xFFFFFFFFFFLL;
    v7 = 48 * v6 - 0x220000000000LL;
    v8 = MiSafeLockPage(v6, (__int64)a2);
    v11 = v8;
    if ( v8 == 17 )
      return 0LL;
    if ( (*a2 & 1) == 0 )
      goto LABEL_36;
    if ( ((*a2 >> 12) & 0xFFFFFFFFFFLL) == v6 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      __writecr8(v11);
    }
  }
  if ( !(unsigned int)MiAddLockedPageCharge(48 * v6 - 0x220000000000LL, 0, v9, v10) )
  {
LABEL_36:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v11 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
    }
    return 0LL;
  }
  if ( (a3 & 4) == 0 || (*(_QWORD *)(v7 + 40) & 0x20000000000000LL) == 0 )
  {
    v12 = *(_DWORD *)(v7 + 32);
    v13 = 1024;
    if ( *(__int64 *)(v7 + 40) < 0 && (*(_QWORD *)(v7 + 16) & 0x400000000000400LL) == 0x400 )
    {
      SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
        KeBugCheckEx(0x1Au, 0x8840uLL, 48 * v6 - 0x220000000000LL, 0LL, 1uLL);
    }
    if ( *(__int64 *)(v7 + 40) < 0
      && (*(_DWORD *)(v7 + 16) & v13) != 0
      && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
    {
      v15 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
      v16 = v15;
      if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x20) == 0 && (v15[38] & 1) == 0 )
      {
        v17 = *(_QWORD *)v15;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v15 + 72LL));
        v18 = v16[38];
        if ( (v18 & 1) == 0 )
          v16[38] = v18 | 1;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
      }
    }
    v19 = 0x100000;
    if ( (v12 & 0x80000) != 0
      && MiCanPfnOriginalPteBeLost(48 * v6 - 0x220000000000LL)
      && (v12 & v19) == 0
      && (*(_DWORD *)(v7 + 16) & 8) != 0 )
    {
      *(_QWORD *)(v7 + 16) &= ~8uLL;
    }
    *(_DWORD *)(v7 + 32) = v19 | v12;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v11 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    __writecr8(v11);
  }
  return MiMapFrame(a1, v6);
}
