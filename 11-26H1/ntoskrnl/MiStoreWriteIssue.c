/*
 * XREFs of MiStoreWriteIssue @ 0x140400FE8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiStoreWriteModifiedPagePostIssue @ 0x140401104 (MiStoreWriteModifiedPagePostIssue.c)
 *     SmPageWrite @ 0x140402BD4 (SmPageWrite.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiStoreWriteIssue(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebp
  unsigned int v7; // edi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = a2;
  SmPageWrite(*(_QWORD *)(*a1 + 256LL), a1[4], a2);
  v6 = 0;
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, v4);
  }
  v9 = a1[4];
  v10 = v9 + (v3 << 6);
  if ( v9 < v10 )
  {
    do
    {
      if ( (++v6 & 0xF) == 0 && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v14) = 2;
          LOBYTE(v15) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v15, v14);
        }
      }
      v11 = MiStoreWriteModifiedPagePostIssue(a1);
      v12 = v7 + 1;
      if ( !v11 )
        v12 = v7;
      a1[4] += 64LL;
      v7 = v12;
    }
    while ( a1[4] < v10 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v7;
}
