/*
 * XREFs of MiMapSystemCachePage @ 0x1404F958C
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMapFrame @ 0x1402A00A0 (MiMapFrame.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMapSystemCachePage(unsigned __int64 a1, _QWORD *a2, __int64 a3)
{
  char v3; // bp
  ULONG_PTR v6; // r15
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rsi
  int v11; // ebx
  int v12; // r8d
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // r14
  __int64 v16; // rbp
  int v17; // eax
  int v18; // r10d

  v3 = a3;
  while ( 1 )
  {
    if ( (*a2 & 1) == 0 )
      return 0LL;
    v6 = (*a2 >> 12) & 0xFFFFFFFFFFLL;
    v7 = 48 * v6 - 0x220000000000LL;
    v8 = MiSafeLockPage(v6, (__int64)a2, a3);
    v10 = v8;
    if ( v8 == 17 )
      return 0LL;
    if ( (*a2 & 1) == 0 )
      goto LABEL_37;
    if ( ((*a2 >> 12) & 0xFFFFFFFFFFLL) == v6 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      __writecr8(v10);
    }
  }
  if ( !(unsigned int)MiAddLockedPageCharge(48 * v6 - 0x220000000000LL, 0, a3, v9) )
  {
LABEL_37:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v10 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      __writecr8(v10);
    }
    return 0LL;
  }
  if ( (v3 & 4) == 0 || (*(_QWORD *)(v7 + 40) & 0x20000000000000LL) == 0 )
  {
    v11 = *(_DWORD *)(v7 + 32);
    v12 = 1024;
    if ( *(__int64 *)(v7 + 40) < 0 && (*(_QWORD *)(v7 + 16) & 0x400000000000400LL) == 0x400 )
    {
      SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
        KeBugCheckEx(0x1Au, 0x8840uLL, 48 * v6 - 0x220000000000LL, 0LL, 1uLL);
    }
    if ( *(__int64 *)(v7 + 40) < 0
      && (*(_DWORD *)(v7 + 16) & v12) != 0
      && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
    {
      v14 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
      v15 = v14;
      if ( (*(_DWORD *)(*(_QWORD *)v14 + 56LL) & 0x20) == 0 && (v14[38] & 1) == 0 )
      {
        v16 = *(_QWORD *)v14;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v14 + 72LL));
        v17 = v15[38];
        if ( (v17 & 1) == 0 )
          v15[38] = v17 | 1;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
      }
    }
    v18 = 0x100000;
    if ( (v11 & 0x80000) != 0
      && MiCanPfnOriginalPteBeLost(48 * v6 - 0x220000000000LL)
      && (v11 & v18) == 0
      && (*(_DWORD *)(v7 + 16) & 8) != 0 )
    {
      *(_QWORD *)(v7 + 16) &= ~8uLL;
    }
    *(_DWORD *)(v7 + 32) = v18 | v11;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v10 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
  }
  return MiMapFrame(a1, v6);
}
