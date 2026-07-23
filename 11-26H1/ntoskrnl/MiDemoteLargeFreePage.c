/*
 * XREFs of MiDemoteLargeFreePage @ 0x14042B4F0
 * Callers:
 *     MiTradePageMarkedFreeZero @ 0x14028D864 (MiTradePageMarkedFreeZero.c)
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetBaseResidentPage @ 0x1402D3C20 (MiGetBaseResidentPage.c)
 *     MiObtainedPageIsGood @ 0x14042B75C (MiObtainedPageIsGood.c)
 *     MiInsertDemotedPages @ 0x14042B7D0 (MiInsertDemotedPages.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1, unsigned __int8 a2, int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v6; // rbx
  unsigned int IsGood; // ebp
  __int64 v8; // r13
  __int64 BaseResidentPage; // rdi
  __int64 v10; // r13
  __int64 v11; // r8
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // r8
  signed __int64 v15; // rax
  unsigned __int64 v16; // rcx
  signed __int64 v17; // rtt
  signed __int32 v19[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int PfnPageSizeIndex; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  v4 = 48 * a1;
  v6 = 48 * a1 - 0x220000000000LL;
  IsGood = 0;
  v8 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
  BaseResidentPage = MiGetBaseResidentPage(v6);
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
  if ( BaseResidentPage != v6 )
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(BaseResidentPage + 34) & 7u) > 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v10 = 56320LL * (unsigned int)MiPageToNode((BaseResidentPage + 0x220000000000LL) / 48) + *(_QWORD *)(v8 + 16);
    v11 = PfnPageSizeIndex < 2 ? 8 : 0;
    v12 = *(_QWORD *)(v11 + v10 + 14104);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v11 + v10 + 14104),
              (v12 + 1) ^ (v12 ^ (v12 + 1)) & 0xFFFFFFFFFFFF0000uLL,
              v12);
    }
    while ( v13 != v12 );
    _InterlockedOr(v19, 0);
    MiUnlinkFreeOrZeroedPage((BaseResidentPage + 0x220000000000LL) / 48, 0LL, a3 != 0 ? 0x100000 : 0);
    _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertDemotedPages(v10, BaseResidentPage, v6, 3LL);
    v14 = PfnPageSizeIndex < 2 ? 8 : 0;
    v15 = *(_QWORD *)(v14 + v10 + 14104);
    do
    {
      v16 = (v15 - 1) ^ (v15 ^ (v15 - 1)) & 0xFFFFFFFFFFFF0000uLL;
      if ( (_WORD)v15 == 1 )
        v16 ^= (v16 ^ (v16 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
      v17 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + v10 + 14104), v16, v15);
    }
    while ( v17 != v15 );
    if ( a3 )
    {
      PfnPageSizeIndex = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&PfnPageSizeIndex);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      MiInsertPageInFreeOrZeroedList(v4 / 48);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      IsGood = MiObtainedPageIsGood(v6);
    }
  }
  if ( (unsigned __int8)v3 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
  }
  return IsGood;
}
