/*
 * XREFs of MiReadyLargePageToFree @ 0x1403CF82C
 * Callers:
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLargePageHasNoDanglingReferences @ 0x1403D00CC (MiLargePageHasNoDanglingReferences.c)
 *     MiBadRefCount @ 0x140500054 (MiBadRefCount.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140716E28 (MiPrepareLargePageSubPageForFree.c)
 */

__int64 __fastcall MiReadyLargePageToFree(unsigned __int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // rbp
  __int64 v11; // r15
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // bp
  __int64 v16; // rbx
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v4 = a1;
  v5 = MiPageSizes[a2];
  v6 = 48 * a1 - 0x220000000000LL;
  v8 = 0;
  if ( (unsigned int)MiLargePageHasNoDanglingReferences(v6) )
    return 1LL;
  v10 = v6;
  v11 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v7, 2LL);
  }
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  v13 = 0xFFFFFF0000000000uLL;
  *(_QWORD *)v6 = v5 ^ (v5 ^ *(_QWORD *)v6) & 0xFFFFFF0000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v14 = v5 + v4;
  while ( v4 < v14 )
  {
    if ( (unsigned int)MiPrepareLargePageSubPageForFree(v10) )
    {
      ++v11;
    }
    else if ( (a3 & 4) != 0 )
    {
      MiBadRefCount(v10);
    }
    v10 += 48LL;
    ++v4;
  }
  if ( !v11 )
    return 0LL;
  if ( v11 == v5 )
    return 1LL;
  v15 = KeGetCurrentIrql();
  if ( v15 != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = v15;
    KiRaiseIrqlProcessIrqlFlags(v13, 2LL);
  }
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  v16 = (*(_QWORD *)v6 & 0xFFFFFFFFFFLL) - v11;
  *(_QWORD *)v6 = v16 ^ (*(_QWORD *)v6 ^ v16) & 0xFFFFFF0000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v15 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
    __writecr8(v15);
  }
  LOBYTE(v8) = v16 == 0;
  return v8;
}
