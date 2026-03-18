/*
 * XREFs of ExpGetNextCallback @ 0x140AFA0E0
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExpUnlockCallbackListExclusive @ 0x1404DC800 (ExpUnlockCallbackListExclusive.c)
 *     ExpLockCallbackListShared @ 0x1404DE3FC (ExpLockCallbackListShared.c)
 */

unsigned __int64 __fastcall ExpGetNextCallback(_QWORD *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  int v6; // esi
  __int64 *v7; // rbp
  __int64 *v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = 0LL;
  ExpLockCallbackListShared((__int64)CurrentThread, a2, a3, a4);
  v8 = (__int64 *)qword_140EFEF80;
  if ( Object )
    v8 = (__int64 *)Object[5];
  while ( v8 != &qword_140EFEF80 )
  {
    v7 = v8 - 5;
    if ( ObReferenceObjectSafeWithTag((__int64)(v8 - 5), 0x6E457845u) )
    {
      v6 = 1;
      break;
    }
    v8 = (__int64 *)*v8;
  }
  ExpUnlockCallbackListExclusive((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)v7 & -(__int64)(v6 != 0);
}
