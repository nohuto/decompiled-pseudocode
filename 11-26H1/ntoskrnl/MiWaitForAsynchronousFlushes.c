/*
 * XREFs of MiWaitForAsynchronousFlushes @ 0x140506F20
 * Callers:
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiWaitForAsynchronousFlushes(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // di
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int i; // edx

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  v4 = 0;
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 1;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v5 = v2 + 16;
  v6 = 8LL;
  do
  {
    if ( *(_QWORD *)v5 && !*(_DWORD *)(v5 + 36) )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      KeWaitForSingleObject((PVOID)(v5 + 32), WrPageOut, 0, 0, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 1 )
        __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = 1;
        LOBYTE(v8) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v8, v7);
      }
    }
    v5 += 264LL;
    --v6;
  }
  while ( v6 );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  for ( i = 0; i < 8; ++i )
  {
    if ( *(int *)(264LL * i + v2) < 0 )
      return *(unsigned int *)(264LL * i + v2);
  }
  return v4;
}
