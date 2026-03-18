/*
 * XREFs of CmpEnumerateCallback @ 0x140A05280
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     CmpUnlockCallbackList @ 0x140A05350 (CmpUnlockCallbackList.c)
 *     CmpLockCallbackListShared @ 0x140A053C0 (CmpLockCallbackListShared.c)
 */

struct _LIST_ENTRY *__fastcall CmpEnumerateCallback(LIST_ENTRY **a1)
{
  LIST_ENTRY *v2; // rbx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *i; // rcx
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v8);
  CmpLockCallbackListShared();
  v2 = *a1;
  p_WaitListHead = &CmpCallbackListLock.Header.WaitListHead;
  if ( *a1 )
    p_WaitListHead = *a1;
  Blink = 0LL;
  for ( i = p_WaitListHead->Flink; i != &CmpCallbackListLock.Header.WaitListHead; i = i->Flink )
  {
    if ( SLODWORD(i[1].Flink) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&i[1]);
      Blink = i[2].Blink;
      *a1 = i;
      break;
    }
  }
  CmpUnlockCallbackList();
  if ( v2 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)&v2[1]) == 0x80000000 )
    {
      _InterlockedOr(v7, 0);
      if ( CmpCallbackListLock.QuantumTarget )
        ExfUnblockPushLock((volatile __int64 *)&CmpCallbackListLock.QuantumTarget, 0LL);
    }
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v8);
  return Blink;
}
