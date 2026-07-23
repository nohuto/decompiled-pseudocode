/*
 * XREFs of MiLargeFreePageToMdl @ 0x1404C8C88
 * Callers:
 *     MiTradePageMarkedFreeZero @ 0x14028D864 (MiTradePageMarkedFreeZero.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiConvertLargeFreePageToActive @ 0x1404C8DD8 (MiConvertLargeFreePageToActive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiChangePageHeatImmediate @ 0x14052B92C (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, int a4, int a5)
{
  ULONG_PTR v8; // rsi
  ULONG_PTR v9; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  __int64 result; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // di

  v8 = BugCheckParameter2;
  v9 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v10 = MiPageSizes[a2];
  MiUnlinkFreeOrZeroedPage(BugCheckParameter2, 0LL, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v11 = (unsigned __int8)a5;
  if ( (unsigned __int8)a5 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a5);
    __writecr8(v11);
  }
  v12 = *(_QWORD *)(v9 + 16);
  if ( qword_140E2D8C0 && (v12 & 0x10) == 0 )
    HIDWORD(v12) &= HIDWORD(qword_140E2D8C8);
  if ( HIDWORD(v12) == -3 && (a4 & 0x3000000) == 0 )
  {
    MiChangePageHeatImmediate(v8, a2, 1LL);
    if ( (unsigned __int8)v11 < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = 2;
        LOBYTE(v16) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v16, v15);
      }
      a5 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a5);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
    }
    else
    {
      CurrentIrql = 17;
      a5 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a5);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
    }
    *(_QWORD *)(v9 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v9 + 16), 0);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  result = MiConvertLargeFreePageToActive(v9);
  if ( a3 )
  {
    v14 = (_QWORD *)(a3 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a3 + 40) >> 12));
    result = (unsigned int)(*(_DWORD *)(a3 + 40) + ((_DWORD)v10 << 12));
    *(_DWORD *)(a3 + 40) = result;
    do
    {
      *v14++ = v8++;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
