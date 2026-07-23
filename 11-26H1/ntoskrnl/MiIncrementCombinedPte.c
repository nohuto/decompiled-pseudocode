/*
 * XREFs of MiIncrementCombinedPte @ 0x14036C478
 * Callers:
 *     MiCreateCombineAnchor @ 0x1402E9BD4 (MiCreateCombineAnchor.c)
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkProtoPte @ 0x1402F0C18 (MiHandleForkProtoPte.c)
 *     MiMapImageScpCfgPages @ 0x14036C1F0 (MiMapImageScpCfgPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiLockCloneBlockAtDpc @ 0x14036C5A0 (MiLockCloneBlockAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiIncrementCombinedPte(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned int v9; // esi

  v4 = a1;
  v5 = *(_QWORD *)(((a2 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a3 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
  }
  v7 = *(_QWORD *)v5;
  MiLockCloneBlockAtDpc(a2);
  if ( *(_QWORD *)(a2 + 24) )
  {
    v8 = *(unsigned __int16 *)(v4 + 174);
    v9 = 1;
    if ( *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v8) == v7 )
    {
LABEL_8:
      ++*(_QWORD *)(a2 + 24);
      goto LABEL_9;
    }
    if ( *(_QWORD *)(a2 + 8) || (unsigned int)MiGetCloneCharges(v7, 5) )
    {
      ++*(_QWORD *)(a2 + 8);
      goto LABEL_8;
    }
  }
  v9 = 0;
LABEL_9:
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 16), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 392));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v9;
}
