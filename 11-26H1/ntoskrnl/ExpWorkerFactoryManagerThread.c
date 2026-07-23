/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x1406D73E0
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403E28A0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1403E2A14 (KeRegisterObjectNotification.c)
 *     KeTimeOutQueueWaiters @ 0x1403E3298 (KeTimeOutQueueWaiters.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x1404CC738 (ExpWorkerFactoryDeferredThreadCreation.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rdi
  PLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int Blink; // eax
  unsigned int v5; // r8d
  char v6; // si
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PLIST_ENTRY EntryArray; // [rsp+68h] [rbp+10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    while ( 1 )
    {
      EntryArray = 0LL;
      KeRemoveQueueEx((PKQUEUE)&WheapConfigTableLock.SavedApcStateFill[40], 0, 0, 0LL, &EntryArray, 1u);
      v1 = EntryArray;
      if ( EntryArray != (PLIST_ENTRY)&WheapConfigTableLock.Affinity )
        break;
      ExpWorkerFactoryDeferredThreadCreation();
      KeRegisterObjectNotification(
        (__int64)&WheapConfigTableLock.512,
        (__int64)&WheapConfigTableLock.SavedApcStateFill[40],
        (__int64)&WheapConfigTableLock.Affinity);
    }
    if ( !LODWORD(EntryArray[3].Flink) )
      break;
    v2 = EntryArray - 35;
    Flink = EntryArray[-34].Flink;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Flink, &LockHandle);
    if ( !LODWORD(v2[25].Flink) )
    {
      Blink = (unsigned int)v2[23].Blink;
      v5 = (unsigned int)v2[24].Flink;
      if ( v5 > Blink )
        KeTimeOutQueueWaiters((__int64)Flink->Blink, -(__int64)v2[7].Flink, v5 - Blink);
    }
    if ( BYTE1(Flink[2].Flink) )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      KeRegisterObjectNotification(
        (__int64)&v2[26].Blink,
        (__int64)&WheapConfigTableLock.SavedApcStateFill[40],
        (__int64)v1);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 )
LABEL_16:
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  v2 = (PLIST_ENTRY)((char *)EntryArray - 616);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)EntryArray[-38].Blink, &LockHandle);
  LODWORD(v2[25].Blink) &= ~0x400u;
  if ( ((__int64)v2[25].Blink & 0x200) != 0 && ExpTryEnterWorkerFactoryAwayMode(&v1[-39].Blink) )
    ExpWorkerFactoryCheckCreate((ULONG_PTR)&v1[-39].Blink, (__int64)&LockHandle, 0LL);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  goto LABEL_16;
}
