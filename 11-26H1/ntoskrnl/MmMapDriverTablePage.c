/*
 * XREFs of MmMapDriverTablePage @ 0x14045569C
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetSecurePageState @ 0x1405343D0 (MiGetSecurePageState.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MmMapDriverTablePage(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v5; // al
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 *v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int8 CurrentIrql; // r12
  __int64 PteShadow; // rdi
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // ebx
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v16; // rax
  unsigned __int64 ContainingPageTable; // rbx
  __int64 v18; // rbx
  unsigned __int64 DemandZeroPte; // rax
  unsigned int v20; // edx
  unsigned __int64 v21; // r11
  int v22; // r10d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 result; // rax
  char v26; // [rsp+80h] [rbp+18h]
  int v27; // [rsp+88h] [rbp+20h] BYREF

  v5 = 1;
  if ( a4 != 2 )
    v5 = 3;
  v6 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v26 = v5;
  v7 = 0xFFFFF68000000000uLL;
  v8 = (__int64 *)(v6 - 0x98000000000LL);
  v9 = (((unsigned __int64)(v6 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 2;
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, v7);
  }
  MiLockWorkingSetSharedAtDpc((__int64)&unk_140E36F80);
  MiLockPageTableInternal((signed __int64)&unk_140E36F80, v9, 0);
  PteShadow = *v8;
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)v8, *v8);
  v12 = 48 * a2 - 0x220000000000LL;
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v27);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  v13 = 1024;
  *(_QWORD *)(v12 + 24) &= ~0x4000000000000000uLL;
  v14 = *(_DWORD *)(v12 + 32);
  if ( *(__int64 *)(v12 + 40) < 0 && (*(_QWORD *)(v12 + 16) & 0x400000000000400LL) == 0x400 )
  {
    SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v12 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
      KeBugCheckEx(0x1Au, 0x8840uLL, 48 * a2 - 0x220000000000LL, 0LL, 1uLL);
  }
  if ( *(__int64 *)(v12 + 40) < 0
    && (*(_DWORD *)(v12 + 16) & v13) != 0
    && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 )
  {
    v16 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v12 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)v16 + 56LL) & 0x20) == 0 && (v16[38] & 1) == 0 )
      MiSetSubsectionModified(v16, 0LL);
  }
  if ( (v14 & 0x80000) != 0
    && MiCanPfnOriginalPteBeLost(48 * a2 - 0x220000000000LL)
    && (*(_QWORD *)(v12 + 16) & 8LL) != 0
    && (v14 & 0x100000) == 0 )
  {
    *(_QWORD *)(v12 + 16) &= ~8uLL;
  }
  *(_DWORD *)(v12 + 32) = v14 | 0x100000;
  ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)v8);
  MiSetPfnContainingFrame(48 * a2 - 0x220000000000LL, ContainingPageTable);
  v18 = 48 * ContainingPageTable;
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 - 0x220000000000LL + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v27);
    while ( *(__int64 *)(v18 - 0x220000000000LL + 24) < 0 );
  }
  *(_QWORD *)(v18 - 0x220000000000LL + 24) = (*(_QWORD *)(v18 - 0x220000000000LL + 24) + 1LL) ^ (*(_QWORD *)(v18 - 0x220000000000LL + 24) ^ (*(_QWORD *)(v18 - 0x220000000000LL + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiGetSecurePageState(48 * a2 - 0x220000000000LL);
  DemandZeroPte = MiMakeDemandZeroPte(v26);
  *(_QWORD *)(v12 + 16) = DemandZeroPte;
  *(_QWORD *)(v12 + 16) = MiUpdatePageFileHighInPte(DemandZeroPte, v20);
  *(_QWORD *)(v12 + 8) = v8;
  *(_DWORD *)(v12 + 32) = (*(_DWORD *)(v12 + 32) + 1) ^ (*(_DWORD *)(v12 + 32) ^ (*(_DWORD *)(v12 + 32) + 1)) & 0xFFFF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), v21);
  *v8 = MiMakeValidPte((unsigned __int64)v8, a2, v22 | 0x20000000u);
  if ( !PteShadow )
    MiIncreaseUsedPtes(v23, v9, 1u, 2);
  MiUnlockPageTableInternal((__int64)&unk_140E36F80, v9);
  LOBYTE(v24) = 17;
  MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v24);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
