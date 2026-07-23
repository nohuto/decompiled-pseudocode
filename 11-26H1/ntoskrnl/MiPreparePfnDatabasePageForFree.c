/*
 * XREFs of MiPreparePfnDatabasePageForFree @ 0x1406EECD0
 * Callers:
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiPreparePfnDatabasePageForFree(_QWORD *a1, int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int64 result; // rax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v5 = 48 * ((*a1 >> 12) & 0xFFFFFFFFFFLL);
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 - 0x220000000000LL + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(__int64 *)(v5 - 0x220000000000LL + 24) < 0 );
  }
  if ( (*(_QWORD *)(v5 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    *(_QWORD *)(v5 - 0x220000000000LL + 24) = *(_QWORD *)(v5 - 0x220000000000LL + 24) & 0xC000000000000000uLL | 1;
  if ( !a2 && a3 == 3 )
    *(_DWORD *)(v5 - 0x220000000000LL + 32) ^= (unsigned __int16)(*(_DWORD *)(v5 - 0x220000000000LL + 32) ^ (*(_DWORD *)(v5 - 0x220000000000LL + 32) - 1));
  *(_QWORD *)(v5 - 0x220000000000LL + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( a2 )
  {
    v6 = *(_QWORD *)(v5 - 0x220000000000LL + 16);
    if ( v6 )
      DemandZeroPte = v6 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      DemandZeroPte = MiMakeDemandZeroPte(4);
    *(_QWORD *)(v5 - 0x220000000000LL + 16) = DemandZeroPte;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
