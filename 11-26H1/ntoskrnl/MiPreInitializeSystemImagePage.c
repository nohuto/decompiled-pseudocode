/*
 * XREFs of MiPreInitializeSystemImagePage @ 0x14052282C
 * Callers:
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiPreInitializeSystemImagePage(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
  *(_DWORD *)(v2 + 32) &= 0xFFFF0000;
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 24) &= 0xFFFFFF0000000000uLL;
  MiClearPfnReuseFields(v2);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v4 = *(_QWORD *)(v2 + 16);
  if ( v4 )
    DemandZeroPte = v4 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(v2 + 16) = DemandZeroPte;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
