/*
 * XREFs of PfProcessExitNotification @ 0x140A43B50
 * Callers:
 *     PspExitProcess @ 0x140A43620 (PspExitProcess.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     PfpLogApplicationEvent @ 0x140446FB0 (PfpLogApplicationEvent.c)
 *     PfLockExclusiveAcquire @ 0x1404C3BA0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C761C (PfLockExclusiveRelease.c)
 *     PfSnAltProfileCleanup @ 0x14077CA90 (PfSnAltProfileCleanup.c)
 *     PfSnAltProfileFindByProcess @ 0x140A43BF8 (PfSnAltProfileFindByProcess.c)
 *     PfSnEndProcessTrace @ 0x140A43CB4 (PfSnEndProcessTrace.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfProcessExitNotification(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 v5; // rax
  void *v6; // rbx

  PfpLogApplicationEvent(a1, 0LL);
  PfLockExclusiveAcquire((unsigned __int64 *)&stru_140E66FF0.WaitBlock[1].Thread, v2, v3, v4);
  v5 = PfSnAltProfileFindByProcess(a1);
  v6 = (void *)v5;
  if ( v5 )
  {
    RtlRbRemoveNode((__int64)&stru_140E66FF0.WaitBlock[0].SparePtr, v5);
    RtlRbRemoveNode((__int64)&stru_140E66FF0.WaitBlock[1].WaitListEntry.Blink, (__int64)v6 + 24);
  }
  PfLockExclusiveRelease((struct _KTHREAD *)&stru_140E66FF0.WaitBlockFill11[72]);
  if ( v6 )
  {
    PfSnAltProfileCleanup((__int64)v6);
    ExFreePoolWithTag(v6, 0x66506343u);
  }
  if ( LODWORD(stru_140E66FF0.ThreadLock) )
    PfSnEndProcessTrace(a1, 2LL, 0LL);
}
