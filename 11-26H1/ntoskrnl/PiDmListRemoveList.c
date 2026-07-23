/*
 * XREFs of PiDmListRemoveList @ 0x140B6F648
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectAcquireSharedLock @ 0x140967DB8 (PiDmObjectAcquireSharedLock.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1409A9FC0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListRemoveObjectWorker @ 0x140B16674 (PiDmListRemoveObjectWorker.c)
 */

__int64 __fastcall PiDmListRemoveList(__int64 a1, __int64 a2, __int64 a3, signed __int64 *a4)
{
  unsigned __int64 *v5; // rdi
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  unsigned __int64 *v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned __int64 *p_EntryLock; // r15
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  unsigned __int64 *i; // r14

  v5 = (unsigned __int64 *)a2;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  p_EntryLock = &v9->Entries[0].EntryLock;
  v11 = (__int64)ObjectManagerForObjectType;
  if ( v7 >= (unsigned __int64 *)v9 )
  {
    if ( v7 > (unsigned __int64 *)v9 )
      PiDmObjectAcquireSharedLock(a4, (__int64)v7, v8, v9);
    KsepCacheLock(v5, (__int64)v7, v8, v9);
  }
  else
  {
    KsepCacheLock(v7, (__int64)v7, v8, v9);
    PiDmObjectAcquireSharedLock(a4, v12, v13, v14);
  }
  for ( i = (unsigned __int64 *)*p_EntryLock; i != p_EntryLock; i = (unsigned __int64 *)*i )
  {
    PiDmObjectAcquireSharedLock((signed __int64 *)i - 8, v15, v16, v17);
    PiDmListRemoveObjectWorker(2, v11, (unsigned int *)v5, (__int64)(i - 8), 0LL);
    CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)(i - 8));
  }
  if ( v5 >= (unsigned __int64 *)a4 )
  {
    if ( v5 > (unsigned __int64 *)a4 )
    {
      CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)v5);
      v5 = (unsigned __int64 *)a4;
    }
  }
  else
  {
    CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)a4);
  }
  return CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)v5);
}
