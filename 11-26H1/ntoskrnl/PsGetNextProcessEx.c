/*
 * XREFs of PsGetNextProcessEx @ 0x140AC8A10
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListShared @ 0x14027D690 (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x14043D700 (PspLockProcessListShared.c)
 */

unsigned __int64 __fastcall PsGetNextProcessEx(_QWORD *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  LIST_ENTRY *p_WaitListHead; // rbp
  int v7; // esi
  struct _KTHREAD *Thread; // rbx

  CurrentThread = KeGetCurrentThread();
  p_WaitListHead = 0LL;
  v7 = 0;
  PspLockProcessListShared((__int64)CurrentThread, a2, a3, a4);
  Thread = PsAltSystemCallRegistrationLock.WaitBlock[0].Thread;
  if ( Object )
    Thread = (struct _KTHREAD *)Object[59];
  while ( Thread != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[24] )
  {
    p_WaitListHead = &Thread[-1].SuspendEvent.Header.WaitListHead;
    if ( ObReferenceObjectSafeWithTag((__int64)&Thread[-1].SuspendEvent.Header.WaitListHead, 0x746C6644u) )
    {
      v7 = 1;
      break;
    }
    Thread = *(struct _KTHREAD **)&Thread->Header.Lock;
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned __int64)p_WaitListHead & -(__int64)(v7 != 0);
}
