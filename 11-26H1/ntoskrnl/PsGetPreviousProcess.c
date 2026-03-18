/*
 * XREFs of PsGetPreviousProcess @ 0x140AEFB30
 * Callers:
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListShared @ 0x14027D690 (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x14043D700 (PspLockProcessListShared.c)
 */

unsigned __int64 __fastcall PsGetPreviousProcess(_QWORD *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  LIST_ENTRY *p_WaitListHead; // rbp
  int v7; // esi
  struct _KTHREAD *Flink; // rbx

  CurrentThread = KeGetCurrentThread();
  p_WaitListHead = 0LL;
  v7 = 0;
  PspLockProcessListShared((__int64)CurrentThread, a2, a3, a4);
  Flink = (struct _KTHREAD *)PsAltSystemCallRegistrationLock.WaitBlock[0].Object;
  if ( Object )
    Flink = (struct _KTHREAD *)Object[60];
  while ( Flink != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[24] )
  {
    p_WaitListHead = &Flink[-1].SuspendEvent.Header.WaitListHead;
    if ( ObReferenceObjectSafeWithTag((__int64)&Flink[-1].SuspendEvent.Header.WaitListHead, 0x6E457350u) )
    {
      v7 = 1;
      break;
    }
    Flink = (struct _KTHREAD *)Flink->Header.WaitListHead.Flink;
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)p_WaitListHead & -(__int64)(v7 != 0);
}
