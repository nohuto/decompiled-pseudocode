/*
 * XREFs of ExpGetNextCallback @ 0x140AFC570
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExpUnlockCallbackListExclusive @ 0x1404D5EE0 (ExpUnlockCallbackListExclusive.c)
 *     ExpLockCallbackListShared @ 0x1404D7ADC (ExpLockCallbackListShared.c)
 */

unsigned __int64 __fastcall ExpGetNextCallback(_QWORD *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  int v6; // esi
  unsigned __int64 *Padding; // rbp
  struct _KTHREAD *Blink; // rbx

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  Padding = 0LL;
  ExpLockCallbackListShared((__int64)CurrentThread, a2, a3, a4);
  Blink = (struct _KTHREAD *)stru_140EFF2C0.Header.WaitListHead.Blink;
  if ( Object )
    Blink = (struct _KTHREAD *)Object[5];
  while ( Blink != (struct _KTHREAD *)&stru_140EFF2C0.Header.WaitListHead.Blink )
  {
    Padding = Blink[-1].Padding;
    if ( ObReferenceObjectSafeWithTag((__int64)Blink[-1].Padding, 0x6E457845u) )
    {
      v6 = 1;
      break;
    }
    Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
  }
  ExpUnlockCallbackListExclusive((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)Padding & -(__int64)(v6 != 0);
}
