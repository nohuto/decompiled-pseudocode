/*
 * XREFs of MiInitializeEnclavePfn @ 0x140343B28
 * Callers:
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v5; // r14
  _KPROCESS *Process; // rbx
  ULONG_PTR v7; // rdi
  unsigned __int8 CurrentIrql; // si
  int v9; // r8d
  int v10; // ebx
  __int64 result; // rax
  _DWORD *v12; // rax
  _DWORD *SubsectionFromPte; // rax
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 48 * a1 - 0x220000000000LL;
  if ( a4 )
  {
    CurrentIrql = 17;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  v9 = 1024;
  *(_QWORD *)v7 = ((unsigned __int64)Process >> 3) ^ (*(_QWORD *)v7 ^ ((unsigned __int64)Process >> 3)) & 0xFFFFF00000000001uLL;
  *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFF8FFFF | 0x60000;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xC000000000000000uLL | 1;
  *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFFF0000 | 1;
  v10 = *(_DWORD *)(v7 + 32);
  if ( *(__int64 *)(v7 + 40) < 0 && (*(_QWORD *)(v7 + 16) & 0x400000000000400LL) == 0x400 )
  {
    SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
      KeBugCheckEx(0x1Au, 0x8840uLL, v7, 0LL, 1uLL);
  }
  if ( *(__int64 *)(v7 + 40) < 0
    && (*(_DWORD *)(v7 + 16) & v9) != 0
    && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
  {
    v12 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v7 + 16));
    if ( (*(_DWORD *)(*(_QWORD *)v12 + 56LL) & 0x20) == 0 && (v12[38] & 1) == 0 )
      MiSetSubsectionModified(v12, 0LL);
  }
  if ( (v10 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(v7)
    && (*(_QWORD *)(v7 + 16) & 8LL) != 0
    && (v10 & 0x100000) == 0 )
  {
    *(_QWORD *)(v7 + 16) &= ~8uLL;
  }
  *(_DWORD *)(v7 + 32) = v10 | 0x100000;
  *(_QWORD *)(v7 + 8) = v5;
  *(_QWORD *)(v7 + 16) = MiMakeDemandZeroPte(a3);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
