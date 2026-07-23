/*
 * XREFs of MiFreeLargeInitializationCodePages @ 0x140522D3C
 * Callers:
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiAddExpansionNonPagedPool @ 0x140523104 (MiAddExpansionNonPagedPool.c)
 */

__int64 __fastcall MiFreeLargeInitializationCodePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v12; // rax
  unsigned __int64 DemandZeroPte; // rax
  int v14; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 )
    return MiAddExpansionNonPagedPool(v7, a3);
  result = 48 * a3;
  v9 = 48 * a3 + a1;
  if ( a3 )
  {
    v10 = v9 + 24;
    do
    {
      v9 -= 48LL;
      v10 -= 48LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = 2;
        LOBYTE(v6) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v6, v5);
      }
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v14);
        while ( *(__int64 *)v10 < 0 );
      }
      if ( (MiFlags & 0x20000) != 0 && (MiFlags & 0x10000) != 0 && ((*(_QWORD *)(v10 + 16) >> 60) & 7) == 3 )
        MiSetPfnIdentity(v9, 0);
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(v10 + 8) & 0xFFF8FFFF | 0x50000;
      *(_QWORD *)(v10 - 8) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v12 = *(_QWORD *)(v10 - 8);
      if ( v12 )
        DemandZeroPte = v12 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      else
        DemandZeroPte = MiMakeDemandZeroPte(4);
      *(_QWORD *)(v10 - 8) = DemandZeroPte;
      MiReturnFreeZeroPage(v9, 0);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      --a3;
    }
    while ( a3 );
  }
  return result;
}
