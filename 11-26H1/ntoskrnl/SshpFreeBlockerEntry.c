/*
 * XREFs of SshpFreeBlockerEntry @ 0x140AAB60C
 * Callers:
 *     SshpDereferenceBlocker @ 0x1404955E0 (SshpDereferenceBlocker.c)
 *     SleepstudyHelperDestroyLibrary @ 0x140616EC0 (SleepstudyHelperDestroyLibrary.c)
 *     SshpPurgeBlockersWorker @ 0x140AAB2F0 (SshpPurgeBlockersWorker.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x1404A2608 (SshpTracingWriteBlockerStateRundown.c)
 */

void __fastcall SshpFreeBlockerEntry(PKSPIN_LOCK SpinLock)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = *(_QWORD *)(SpinLock[38] + 32);
  SshpTracingWriteBlockerStateRundown(&SLEEPSTUDY_EVT_BLOCKER_DELETED, SpinLock);
  v3 = (_QWORD *)SpinLock[38];
  v4 = (void *)v3[11];
  if ( v4 )
    CmpFreeTransientPoolWithTag(v4, *(_DWORD *)(v2 + 24));
  v5 = (void *)v3[12];
  if ( v5 )
    CmpFreeTransientPoolWithTag(v5, *(_DWORD *)(v2 + 24));
  v6 = (void *)v3[13];
  if ( v6 )
    CmpFreeTransientPoolWithTag(v6, *(_DWORD *)(v2 + 24));
  CmpFreeTransientPoolWithTag(v3, *(_DWORD *)(v2 + 24));
  CmpFreeTransientPoolWithTag(SpinLock, *(_DWORD *)(v2 + 24));
}
