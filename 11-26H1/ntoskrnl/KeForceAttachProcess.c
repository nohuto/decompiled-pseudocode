/*
 * XREFs of KeForceAttachProcess @ 0x14045D2E0
 * Callers:
 *     MiSharePageAttach @ 0x1403080F8 (MiSharePageAttach.c)
 *     MiTrimViewPrepare @ 0x14046C4BC (MiTrimViewPrepare.c)
 *     MmQueryCommitReleaseState @ 0x1404C804C (MmQueryCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E4858 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406E54FC (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall KeForceAttachProcess(_KPROCESS *BugCheckParameter1, _OWORD *a2, char a3)
{
  _OWORD *v4; // r8
  struct _KTHREAD *CurrentThread; // r8
  _OWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a2;
  memset(v7, 0, sizeof(v7));
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcStateIndex )
      KeBugCheckEx(
        5u,
        (ULONG_PTR)BugCheckParameter1,
        (ULONG_PTR)CurrentThread->ApcState.Process,
        CurrentThread->ApcStateIndex,
        0LL);
    v4 = v7;
  }
  return KiStackAttachProcess(BugCheckParameter1, 2 * (a3 & 1) + 1, (__int64)v4);
}
