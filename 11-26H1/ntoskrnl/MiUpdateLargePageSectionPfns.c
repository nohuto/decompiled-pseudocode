/*
 * XREFs of MiUpdateLargePageSectionPfns @ 0x1406F4F60
 * Callers:
 *     MiCreatePagingFileFinish @ 0x140988DEC (MiCreatePagingFileFinish.c)
 * Callees:
 *     MiConvertActiveLargePageToSmall @ 0x140206C98 (MiConvertActiveLargePageToSmall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 *     MiSetPfnNodeBlinkLow @ 0x140448AF0 (MiSetPfnNodeBlinkLow.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfns(__int64 a1, ULONG_PTR a2, int a3)
{
  char v3; // di
  __int64 v6; // r12
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 DemandZeroPte; // rdi
  unsigned __int64 ContainingPageTable; // r13
  __int64 result; // rax
  __int64 v11; // r14
  int v12; // edx
  unsigned __int8 CurrentIrql; // bp
  int v14; // r8d
  ULONG_PTR v15; // [rsp+60h] [rbp+8h]
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  v6 = (a1 + 0x220000000000LL) / 48;
  ValidPte = MiMakeValidPte(0LL, v6, a3 | 0x80000000);
  DemandZeroPte = MiMakeDemandZeroPte(v3);
  ContainingPageTable = -1LL;
  v15 = a2 + 8 * MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(a1)];
  result = MiConvertActiveLargePageToSmall(a1, 1);
  if ( a2 < v15 )
  {
    v11 = a1 + 32;
    do
    {
      if ( ContainingPageTable == -1LL || (a2 & 0xFFF) == 0 )
        ContainingPageTable = MiGetContainingPageTable(a2);
      v12 = (_DWORD)v6 << 12;
      ValidPte = (v6 << 12) ^ ((v6 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      *(_QWORD *)a2 = ValidPte;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
      }
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 - 8), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(__int64 *)(v11 - 8) < 0 );
      }
      MiSetPfnTbFlushStamp(v11 - 32, 0LL, 1);
      MiSetPfnNodeBlinkLow(v11 - 32, 0LL, v14);
      *(_QWORD *)(v11 - 8) = *(_QWORD *)(v11 - 8) & 0xC000000000000000uLL | 1;
      *(_DWORD *)v11 = *(_DWORD *)v11 & 0xFFFF0000 | 2;
      *(_QWORD *)(v11 - 16) = DemandZeroPte;
      *(_QWORD *)(v11 - 32) = 0LL;
      *(_QWORD *)(v11 + 8) |= 0x8000000000000000uLL;
      MiSetPfnContainingFrame(v11 - 32, ContainingPageTable);
      *(_QWORD *)(v11 - 24) = a2;
      *(_DWORD *)v11 = *(_DWORD *)v11 & 0xFFF8FFFF | 0x60000;
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v11 - 8), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      ++v6;
      v11 += 48LL;
      a2 += 8LL;
    }
    while ( a2 < v15 );
  }
  return result;
}
