/*
 * XREFs of sub_14005A440 @ 0x14005A440
 * Callers:
 *     sub_140089AD4 @ 0x140089AD4 (sub_140089AD4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14005A440(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  _QWORD **v6; // rbx
  _QWORD *i; // rcx
  __int64 v8; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v6 = (_QWORD **)(a1 + 144);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v5 = i - 8;
    v8 = i[255] - *a2;
    if ( !v8 )
      v8 = v5[264] - a2[1];
    if ( !v8 )
      break;
  }
  if ( i != v6 )
    v4 = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
