/*
 * XREFs of MxInitializePfnsForValidMappings @ 0x140CF70A8
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIssueFlushTbEntire @ 0x140250040 (MiIssueFlushTbEntire.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MxWalkBootPageTables @ 0x140CF8610 (MxWalkBootPageTables.c)
 */

__int64 __fastcall MxInitializePfnsForValidMappings(__int64 a1)
{
  unsigned __int64 v2; // r8
  int v3; // edx
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  __int64 result; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF

  MxWalkBootPageTables(a1, 2LL);
  MiIssueFlushTbEntire(0LL, (volatile _KAFFINITY_EX *)0xFFFFFFFFLL, v2);
  MiFlags |= 0x20000000000uLL;
  MxWalkBootPageTables(a1, 4LL);
  v4 = 48 * ((MEMORY[0xFFFFF6FBC0000000] >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v3);
  }
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  v6 = *(_DWORD *)(v4 + 32);
  v7 = v6 + 1;
  v8 = v6 ^ (v6 + 1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_DWORD *)(v4 + 32) = v7 ^ v8 & 0xFFFF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
