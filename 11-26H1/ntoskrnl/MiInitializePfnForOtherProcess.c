/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x14033D818
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeShadowPageTable @ 0x14087B9A8 (MiInitializeShadowPageTable.c)
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v4; // bp
  __int64 v7; // r12
  ULONG_PTR v8; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rax
  int v11; // ebx
  int v12; // r8d
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _DWORD *v18; // rax
  _DWORD *SubsectionFromPte; // rax
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v4 = a4;
  v7 = a1;
  v8 = 48 * a1 - 0x220000000000LL;
  if ( (a4 & 0x10) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
  }
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  *(_QWORD *)(v8 + 8) = a2;
  *(_QWORD *)(v8 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v8 + 16) = MiMakeDemandZeroPte(4);
  *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFFF0000 | 1;
  v10 = *(_QWORD *)(v8 + 24);
  if ( (v4 & 0x80u) != 0 )
    *(_QWORD *)(v8 + 24) = (v10 + 1) ^ (v10 ^ (v10 + 1)) & 0xC000000000000000uLL;
  else
    *(_QWORD *)(v8 + 24) = v10 & 0xC000000000000000uLL | 1;
  v11 = *(_DWORD *)(v8 + 32);
  v12 = 1024;
  if ( *(__int64 *)(v8 + 40) < 0 && (*(_QWORD *)(v8 + 16) & 0x400000000000400LL) == 0x400 )
  {
    SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v8 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
      KeBugCheckEx(0x1Au, 0x8840uLL, v8, 0LL, 1uLL);
  }
  if ( *(__int64 *)(v8 + 40) < 0
    && (*(_DWORD *)(v8 + 16) & v12) != 0
    && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 )
  {
    v18 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v8 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)v18 + 56LL) & 0x20) == 0 && (v18[38] & 1) == 0 )
      MiSetSubsectionModified(v18, 0LL);
  }
  if ( (v11 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(v8)
    && (*(_QWORD *)(v8 + 16) & 8LL) != 0
    && (v11 & 0x100000) == 0 )
  {
    *(_QWORD *)(v8 + 16) &= ~8uLL;
  }
  *(_DWORD *)(v8 + 32) = v11 | 0x100000;
  if ( (v4 & 0x200) != 0 )
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x60000;
  result = MiSetPfnContainingFrame(v8, a3);
  if ( a3 == v7 && (v4 & 0x800) == 0 )
  {
    result = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 24) = (result + 1) ^ (result ^ (result + 1)) & 0xC000000000000000uLL;
    v4 |= 0x800u;
  }
  *(_DWORD *)(v8 + 36) = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v4 & 0x800) == 0 )
  {
    v14 = 48 * a3;
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 - 0x220000000000LL + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(__int64 *)(v14 - 0x220000000000LL + 24) < 0 );
    }
    v15 = *(_QWORD *)(v14 - 0x220000000000LL + 24);
    v16 = v15 + 1;
    v17 = v15 ^ (v15 + 1);
    result = 0xC000000000000000uLL;
    *(_QWORD *)(v14 - 0x220000000000LL + 24) = v16 ^ v17 & 0xC000000000000000uLL;
    if ( (v4 & 0x1000) != 0 )
      result = MiIncreaseUsedPtes(v16, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v14 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
