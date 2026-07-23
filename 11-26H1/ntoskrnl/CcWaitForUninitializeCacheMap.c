/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x140485448
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CcWriteBehind @ 0x14038513C (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r12
  char v3; // si
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  char v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 *i; // rcx
  int v10; // eax
  int v11; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  _QWORD *v17; // [rsp+30h] [rbp-A8h] BYREF
  __int16 Object; // [rsp+38h] [rbp-A0h] BYREF
  char v19; // [rsp+3Ah] [rbp-9Eh]
  char v20; // [rsp+3Bh] [rbp-9Dh]
  int v21; // [rsp+3Ch] [rbp-9Ch]
  _QWORD v22[2]; // [rsp+40h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+50h] [rbp-88h] BYREF
  __int64 v24; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+78h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-48h] BYREF
  LARGE_INTEGER Timeout; // [rsp+E0h] [rbp+8h] BYREF

  v17 = 0LL;
  v20 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v24 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v23, 0, sizeof(v23));
  memset(&v26, 0, sizeof(v26));
  v5 = 0LL;
  v6 = 0;
  v25 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v19 = 6;
    v21 = 0;
    v22[1] = v22;
    v22[0] = v22;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    if ( v7 )
    {
      v5 = *(_QWORD *)(v7 + 536);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 768), &v23);
      v6 = 1;
      if ( *(_QWORD *)(v7 + 232) == v7 + 232 )
      {
        v10 = *(_DWORD *)(v7 + 152);
        if ( (v10 & 0x100) == 0 )
        {
          v2 = 1;
          *(_DWORD *)(v7 + 152) = v10 | 0x10000;
          v17 = *(_QWORD **)(v7 + 280);
          *(_QWORD *)(v7 + 280) = (char *)&v17 + 1;
          v11 = *(_DWORD *)(v7 + 152);
          if ( (v11 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v7 + 504) )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 832), &v26);
              v13 = *(_QWORD *)(v7 + 504);
              if ( v13 )
              {
                v4 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
                v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
                v15 = *(_QWORD **)((v13 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v14 + 8) != v4 || *v15 != v4 )
                  __fastfail(3u);
                *v15 = v14;
                *(_QWORD *)(v14 + 8) = v15;
                *(_QWORD *)(v4 + 8) = 0LL;
                *(_QWORD *)v4 = 0LL;
                *(_QWORD *)(v7 + 504) = 0LL;
                v3 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v26);
            }
          }
          else
          {
            *(_DWORD *)(v7 + 152) = v11 | 0x20;
            v3 = 1;
          }
        }
      }
    }
    if ( v6 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v25 = v4;
      CcWriteBehind(v7, (__int64)&v24, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v4 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v4);
    if ( v2 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v23);
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v8 )
        {
          for ( i = (unsigned __int64 *)(v8 + 280); ; i = (unsigned __int64 *)(v16 & 0xFFFFFFFFFFFFFFFEuLL) )
          {
            v16 = *i;
            if ( !*i )
              break;
            if ( (_QWORD **)v16 == (_QWORD **)((char *)&v17 + 1) )
            {
              *i = (unsigned __int64)v17;
              break;
            }
          }
          *(_DWORD *)(v8 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLock(&v23);
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&v23);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
