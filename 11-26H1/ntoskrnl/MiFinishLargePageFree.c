/*
 * XREFs of MiFinishLargePageFree @ 0x1403CFEB0
 * Callers:
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFreeLargePageCharges @ 0x1403CE610 (MiFreeLargePageCharges.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFinishLargePageFree(__int64 a1, int a2, int a3, char a4)
{
  __int128 v8; // rax
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned int v11; // edx
  int v12; // r9d
  ULONG_PTR v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // [rsp+60h] [rbp+8h]
  int v17; // [rsp+68h] [rbp+10h] BYREF
  int PfnPageSizeIndex; // [rsp+70h] [rbp+18h]

  v16 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1);
  v8 = (a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL;
  v9 = *((_QWORD *)&v8 + 1) >> 63;
  if ( (a4 & 0x10) != 0 )
  {
    CurrentIrql = 2;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      BYTE8(v8) = 2;
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9, *((_QWORD *)&v8 + 1));
    }
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x50000;
  if ( a3 )
    v11 = 0;
  else
    v11 = -3;
  *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), v11);
  *(_DWORD *)(a1 + 32) = (v12 << 16) ^ (*(_DWORD *)(a1 + 32) ^ (v12 << 16)) & 0xFFF8FFFF;
  v13 = (a1 + 0x220000000000LL) / 48;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_DWORD *)(a1 + 32) &= 0xFFFF0000;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertPossiblyBadPage(v13, (unsigned int)(a2 != 0) + 1);
  }
  else
  {
    MiInsertPageInFreeOrZeroedList(v13);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v14 = MiPageSizes[PfnPageSizeIndex];
  if ( (a4 & 8) == 0 )
    MiFreeLargePageCharges(v16, MiPageSizes[PfnPageSizeIndex], a4);
  return v14;
}
