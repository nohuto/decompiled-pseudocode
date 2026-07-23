/*
 * XREFs of MiMapBackgroundPageToZero @ 0x1405217B4
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiWriteLargePte @ 0x1402A0630 (MiWriteLargePte.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiGetZeroingContext @ 0x140457050 (MiGetZeroingContext.c)
 */

__int64 __fastcall MiMapBackgroundPageToZero(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // rdx
  unsigned __int64 UltraMapping; // r13
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  int v13; // ecx
  int v14; // r9d
  __int64 ZeroingContext; // [rsp+50h] [rbp+8h]

  v2 = a2;
  ZeroingContext = MiGetZeroingContext((__int64)a1);
  v4 = MiPageSizes[v2];
  UltraMapping = MiGetUltraMapping((__int64)&a1[4 * v2 + 24], v5, v4, 0);
  v7 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)v2 <= 1 )
  {
    v8 = (unsigned int)(2 - v2);
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v8;
    }
    while ( v8 );
  }
  v9 = (*(_QWORD *)(ZeroingContext + 24) >> 12) & 0x3FFFFFFFFFLL;
  v10 = 48 * v9 - 0x220000000000LL;
  v11 = (unsigned __int8)MiSafeLockPage(v9, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL);
  if ( (*(_QWORD *)(ZeroingContext + 24) & 1) != 0 )
  {
    if ( (_BYTE)v11 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v11 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        __writecr8(v11);
      }
    }
    ++*(_DWORD *)(a1[10] + 424LL);
    return 0LL;
  }
  else
  {
    a1[4] = v7;
    v13 = 4;
    a1[5] = UltraMapping;
    a1[6] = UltraMapping + (v4 << 12) - 1;
    if ( (*(_DWORD *)(v10 + 32) & 0xC00000) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 32) & 0xC00000) == 0x800000 )
        v13 = 28;
    }
    else
    {
      v13 = 12;
    }
    v14 = -1543503872;
    if ( (unsigned int)v2 > 1 )
      v14 = -1610612736;
    MiWriteLargePte(UltraMapping, v9, v2, v13 | v14);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v11 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
    }
    return 1LL;
  }
}
