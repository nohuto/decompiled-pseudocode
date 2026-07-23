/*
 * XREFs of ExpDeleteCallback @ 0x140840A70
 * Callers:
 *     <none>
 * Callees:
 *     ExpUnlockCallbackListExclusive @ 0x1404D5EE0 (ExpUnlockCallbackListExclusive.c)
 *     ExpLockCallbackListExclusive @ 0x1404FEBCC (ExpLockCallbackListExclusive.c)
 */

void __fastcall ExpDeleteCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  ExpLockCallbackListExclusive((__int64)CurrentThread, a2, a3, a4);
  v6 = (_QWORD *)(a1 + 40);
  v7 = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  ExpUnlockCallbackListExclusive((__int64)CurrentThread);
}
