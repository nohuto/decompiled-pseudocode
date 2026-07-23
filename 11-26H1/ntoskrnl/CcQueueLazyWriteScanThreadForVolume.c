/*
 * XREFs of CcQueueLazyWriteScanThreadForVolume @ 0x140389220
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1403881A0 (CcPostWorkQueue.c)
 *     CcIsLazyWriteScanQueuedInternal @ 0x1403894F0 (CcIsLazyWriteScanQueuedInternal.c)
 *     CcSetLazyWriteScanQueuedInternal @ 0x14038953C (CcSetLazyWriteScanQueuedInternal.c)
 *     CcAllocateWorkQueueEntry @ 0x140389900 (CcAllocateWorkQueueEntry.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     CcPostWorkQueueSpecial @ 0x1404E8124 (CcPostWorkQueueSpecial.c)
 *     CcNotifyExternalCachesInternal @ 0x1405007BC (CcNotifyExternalCachesInternal.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall CcQueueLazyWriteScanThreadForVolume(_QWORD *StartContext)
{
  __int64 v1; // r13
  char *v2; // r15
  unsigned int v3; // ebx
  NTSTATUS v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A0h] [rbp-60h] BYREF

  v1 = StartContext[4];
  v2 = (char *)(StartContext + 115);
  v3 = 0;
  v20 = 0LL;
  Object[2] = StartContext + 115;
  Object[0] = StartContext + 102;
  Object[1] = StartContext + 105;
  Object[3] = StartContext + 108;
  Object[4] = StartContext + 111;
  Object[5] = StartContext + 150;
  Object[6] = StartContext + 197;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    v5 = KeWaitForMultipleObjects(7u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    if ( !v5 )
    {
      v3 = 1;
      goto LABEL_6;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v3 = 2;
      goto LABEL_6;
    }
    v7 = v6 - 1;
    if ( v7 )
      break;
    v3 = 4;
LABEL_6:
    v8 = StartContext[8];
    if ( !v8 )
      KeBugCheckEx(0x34u, 0x6B7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( LODWORD(EmpParseLock.ReadOperationCount)
      && ((_QWORD *)StartContext[156] != StartContext + 156 || (_QWORD *)StartContext[158] != StartContext + 158) )
    {
      CcNotifyExternalCachesInternal(v3, v1, StartContext);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
    if ( (unsigned __int8)CcIsLazyWriteScanQueuedInternal(v2, v3) )
    {
LABEL_20:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      LOBYTE(v10) = 1;
      CcSetLazyWriteScanQueuedInternal(v9, v3, v10);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (int)CcAllocateWorkQueueEntry(v1, StartContext, v8, &v20) < 0 )
      {
        ++LODWORD(EmpParseLock.Spare35[0]);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
        v19 = v3;
        *((_BYTE *)StartContext + 985) = 0;
LABEL_19:
        CcSetLazyWriteScanQueuedInternal(v2, v19, 0LL);
        goto LABEL_20;
      }
      v13 = v20;
      v14 = 72LL;
      *(_DWORD *)(v20 + 128) = 3;
      if ( v3 != 8 )
        v14 = 104LL;
      *(_DWORD *)(v13 + 16) = v3;
      v15 = v14 + v8;
      if ( v3 == 32 )
      {
        if ( !(unsigned __int8)CcPostWorkQueueSpecial(v13, v15) )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
          v19 = 32LL;
          goto LABEL_19;
        }
      }
      else
      {
        CcPostWorkQueue((_QWORD *)v13, v15, v11, v12);
      }
    }
  }
  v16 = v7 - 1;
  if ( !v16 )
  {
    v3 = 8;
    goto LABEL_6;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v3 = 16;
    goto LABEL_6;
  }
  v18 = v17 - 1;
  if ( !v18 )
    return;
  if ( v18 == 1 )
  {
    v3 = 32;
    goto LABEL_6;
  }
  if ( v3 )
    goto LABEL_6;
}
