/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x1403BBEA0
 * Callers:
 *     MiFlushAllPages @ 0x140504838 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027F670 (MiUnlockVad.c)
 *     MiGetNextVad @ 0x140326018 (MiGetNextVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1403BBFA4 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1403BC004 (MiVadMapsLargeImage.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403BC020 (MiEmptyWorkingSetInitiate.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1404057B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140405820 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetFirstVad @ 0x1404B80E0 (MiGetFirstVad.c)
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
          (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12,
          ((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) << 12) | 0xFFF);
      }
      MiUnlockVad((__int64)CurrentThread, v13);
      FirstVad = MiGetNextVad(v13);
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  return v8;
}
