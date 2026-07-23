/*
 * XREFs of MiChangePageAttributeLargeFreeZeroPage @ 0x1403D1950
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x1403D3124 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiLargePfnPromoteCandidate @ 0x1403D3470 (MiLargePfnPromoteCandidate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiChangePageAttributeLargeFreeZeroPage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  unsigned __int64 v4; // r12
  __int64 v8; // rdx
  ULONG_PTR v9; // rbp
  __int64 CurrentIrql; // rcx
  __int64 v11; // r15
  unsigned int v12; // edi
  unsigned int v14; // eax
  __int64 v15; // r15
  __int64 v16; // r14
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rax
  int v20; // r13d
  signed __int64 v21; // rax
  unsigned __int64 v22; // rcx
  signed __int64 v23; // rtt
  int v24; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  v8 = (unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v9 = (a1 + 0x220000000000LL) / 48;
  if ( a4 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
    }
  }
  if ( MiSafeLockPageAtDpc(v9) == 17 )
    goto LABEL_16;
  v11 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  if ( !(unsigned int)MiLargePfnPromoteCandidate(v11, a1, a2) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_16:
    v12 = 0;
    goto LABEL_10;
  }
  if ( ((*(_DWORD *)(a1 + 32) >> 22) & 3) == a3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = 1;
  }
  else
  {
    v14 = MiPageToNode(v9);
    v15 = *(_QWORD *)(v11 + 16);
    v16 = 56320LL * v14;
    v17 = *(_QWORD *)(v16 + v15 + 14112);
    do
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v16 + v15 + 14112),
              (v17 + 1) ^ (v17 ^ (v17 + 1)) & 0xFFFFFFFFFFFF0000uLL,
              v17);
    }
    while ( v18 != v17 );
    MiUnlinkFreeOrZeroedPage(v9, 0LL, 0);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiChangePageAttribute(a1, a3);
    v12 = 1;
    v19 = *(_QWORD *)(a1 + 16) & 0x3E0LL;
    v24 = 0;
    v20 = (v19 != 0) + 1;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
    if ( (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPossiblyBadPage(v9, v20);
    }
    else
    {
      MiInsertPageInFreeOrZeroedList(v9);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v21 = *(_QWORD *)(v16 + v15 + 14112);
    do
    {
      v22 = (v21 - 1) ^ (v21 ^ (v21 - 1)) & 0xFFFFFFFFFFFF0000uLL;
      if ( (_WORD)v21 == 1 )
        v22 ^= (v22 ^ (v22 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
      v23 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + v15 + 14112), v22, v21);
    }
    while ( v23 != v21 );
  }
LABEL_10:
  if ( (unsigned __int8)v4 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
    __writecr8(v4);
  }
  return v12;
}
