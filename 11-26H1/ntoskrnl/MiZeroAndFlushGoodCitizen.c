/*
 * XREFs of MiZeroAndFlushGoodCitizen @ 0x1404F9384
 * Callers:
 *     MiClearMappingAndDereferenceIoSpace @ 0x140282A34 (MiClearMappingAndDereferenceIoSpace.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiReduceShareCount @ 0x1402DAC20 (MiReduceShareCount.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 */

void __fastcall MiZeroAndFlushGoodCitizen(__int64 a1, _QWORD *a2, char a3, unsigned int a4, int a5)
{
  __int64 v5; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = a4;
  if ( a4 )
  {
    v12 = 48 * ((*a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    MiReduceShareCount(v12, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  MiUnlockPageTableInternal(a1, (unsigned __int64)a2);
  LOBYTE(v9) = a3;
  MiUnlockWorkingSetShared(a1, v9);
  if ( a5 )
  {
    if ( a3 == 17 )
      MiLockWorkingSetSharedAtDpc(a1);
    else
      MiLockWorkingSetShared(a1, v10, v11);
  }
}
