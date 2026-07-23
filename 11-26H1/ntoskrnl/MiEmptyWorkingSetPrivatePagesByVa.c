/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10
 * Callers:
 *     MiFlushAllPages @ 0x1404FE17C (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1403C5E14 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1403C5E74 (MiVadMapsLargeImage.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetFirstVad @ 0x1404B1910 (MiGetFirstVad.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned int v8; // edi
  unsigned __int64 FirstVad; // rax
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process, a3, a4);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v8 = -1073741558;
  }
  else
  {
    FirstVad = MiGetFirstVad(Process);
    v8 = 0;
    while ( 1 )
    {
      v13 = FirstVad;
      if ( !FirstVad )
        break;
      MiLockVad((__int64)CurrentThread, FirstVad, v11, v12);
      if ( (*(_DWORD *)(v13 + 48) & 1) == 0
        && (unsigned int)MiVadSupportsPrivateCommit(v13)
        && !(unsigned int)MiVadMapsLargeImage(v14) )
      {
        MiEmptyWorkingSetInitiate(
          a1,
          a2 | 2u,
          (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12);
      }
      MiUnlockVad((__int64)CurrentThread, v13);
      FirstVad = MiGetNextVad(v13);
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  return v8;
}
