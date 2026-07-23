/*
 * XREFs of MiCommitInitialVadMetadataBits @ 0x140A08D44
 * Callers:
 *     MiMapProcessExecutable @ 0x140A08810 (MiMapProcessExecutable.c)
 * Callees:
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiGetFirstVad @ 0x1404B1910 (MiGetFirstVad.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 */

__int64 MiCommitInitialVadMetadataBits()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  int v2; // eax
  int v3; // ecx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  int v6; // r14d
  int v7; // ebp
  __int64 i; // rax
  volatile signed __int32 *v9; // rbx
  ULONG_PTR v10; // rcx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = HalSystemVectorDispatchEntry();
  v6 = v3 | 4;
  if ( !v2 )
    v6 = v3;
  if ( !v6 )
    return 0LL;
  v7 = 0;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process, v4, v5);
  for ( i = (__int64)MiGetFirstVad(Process); ; i = MiGetNextVad((unsigned __int64)v9) )
  {
    v9 = (volatile signed __int32 *)i;
    if ( !i )
      break;
    if ( (MiReadVadFlags(i) & 0x1C) == 8 )
    {
      MiReferenceVad(v10);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
      MiLockVad((__int64)CurrentThread, (__int64)v9, v11, v12);
      v7 = MiCommitVadMetadataBits((__int64)v9, 0LL, v6);
      MiUnlockAndDereferenceVad(v9);
      if ( v7 < 0 )
        return (unsigned int)v7;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process, v13, v14);
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return (unsigned int)v7;
}
