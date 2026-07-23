/*
 * XREFs of PsGetNextProcessEx @ 0x140ACA600
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListShared @ 0x14027CC00 (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x14042FFB0 (PspLockProcessListShared.c)
 */

unsigned __int64 __fastcall PsGetNextProcessEx(_QWORD *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  LIST_ENTRY *p_WaitListHead; // rbp
  int v7; // esi
  struct _KTHREAD *Flink; // rbx

  CurrentThread = KeGetCurrentThread();
  p_WaitListHead = 0LL;
  v7 = 0;
  PspLockProcessListShared((__int64)CurrentThread, a2, a3, a4);
  Flink = (struct _KTHREAD *)PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Flink;
  if ( Object )
    Flink = (struct _KTHREAD *)Object[59];
  while ( Flink != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[96] )
  {
    p_WaitListHead = &Flink[-1].SuspendEvent.Header.WaitListHead;
    if ( ObReferenceObjectSafeWithTag((__int64)&Flink[-1].SuspendEvent.Header.WaitListHead, 0x746C6644u) )
    {
      v7 = 1;
      break;
    }
    Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned __int64)p_WaitListHead & -(__int64)(v7 != 0);
}
