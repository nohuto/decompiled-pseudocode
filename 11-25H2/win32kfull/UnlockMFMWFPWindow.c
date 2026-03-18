/*
 * XREFs of UnlockMFMWFPWindow @ 0x14026B510
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMNEndMenuStateInternal @ 0x14015D8C0 (xxxMNEndMenuStateInternal.c)
 *     NtUserMNDragLeave @ 0x14029B120 (NtUserMNDragLeave.c)
 *     LockMFMWFPWindow @ 0x1402BF34C (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1402BF3A8 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x140044744 (IsMFMWFPWindow.c)
 */

char __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  int v1; // eax
  _QWORD *v2; // r8

  LOBYTE(v1) = IsMFMWFPWindow(*a1);
  if ( v1 )
    LOBYTE(v1) = HMAssignmentUnlock(v2);
  else
    *v2 = 0LL;
  return v1;
}
