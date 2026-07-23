/*
 * XREFs of CmpEnumerateCallback @ 0x1409F0A70
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     CmpUnlockCallbackList @ 0x1409F0B40 (CmpUnlockCallbackList.c)
 *     CmpLockCallbackListShared @ 0x1409F0BB0 (CmpLockCallbackListShared.c)
 */

struct _LIST_ENTRY *__fastcall CmpEnumerateCallback(struct _LIST_ENTRY ***a1)
{
  struct _LIST_ENTRY **v2; // rbx
  struct _LIST_ENTRY **p_Blink; // rax
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
  p_Blink = &CmpContextListLock.Header.WaitListHead.Blink;
  if ( *a1 )
    p_Blink = *a1;
  Blink = 0LL;
  for ( i = *p_Blink; i != (struct _LIST_ENTRY *)&CmpContextListLock.Header.WaitListHead.Blink; i = i->Flink )
  {
    if ( SLODWORD(i[1].Flink) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&i[1]);
      Blink = i[2].Blink;
      *a1 = &i->Flink;
      break;
    }
  }
  CmpUnlockCallbackList();
  if ( v2 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)v2 + 4) == 0x80000000 )
    {
      _InterlockedOr(v7, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v8);
  return Blink;
}
