/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x1402053F4
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402055E0 (PsBoostThreadIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     PsGetBaseIoPriorityThread @ 0x14026C7A0 (PsGetBaseIoPriorityThread.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402D2680 (PsBoostThreadOutstandingIoQoS.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, LegacyAutoBoost *a2, unsigned int a3)
{
  char v3; // r9
  __int64 v4; // r14
  int v7; // edx
  int v8; // edi
  __int64 v9; // rsi
  LegacyAutoBoost *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  int v16; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+70h] [rbp+8h]
  int v19; // [rsp+78h] [rbp+10h]

  v3 = *(_BYTE *)(a1 + 26);
  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v3 & 8) == 0 )
  {
    v7 = 0;
    if ( (v3 & 4) != 0 && (int)PsGetBaseIoPriorityThread(a2, 0LL) < 2 )
      v7 = 4;
    v8 = v7 | 2;
    if ( (v3 & 2) == 0 )
      v8 = v7;
    if ( v8 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
      v9 = a1 + 48;
      v10 = *(LegacyAutoBoost **)(a1 + 48);
      if ( v10 != a2 )
      {
        v11 = v10 != 0LL;
        if ( !(_DWORD)v4
          || (v12 = *(_QWORD *)(a1 + 16)) == 0
          || (unsigned int)v4 >= *(_DWORD *)(v12 + 8)
          || (v9 = v12 + 16 * v4, *(LegacyAutoBoost **)v9 != a2) )
        {
          v13 = *(_QWORD *)(a1 + 16);
          v14 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
          if ( v13 && (v15 = v13 + 16LL * *(unsigned int *)(v13 + 8), v9 = v13 + 16, v11 < v14) )
          {
            while ( *(LegacyAutoBoost **)v9 != a2 )
            {
              if ( !*(_QWORD *)v9 || (++v11, v11 != v14) )
              {
                v9 += 16LL;
                if ( v9 != v15 )
                  continue;
              }
              goto LABEL_13;
            }
            KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v9 - *(_DWORD *)(a1 + 16)) >> 4;
          }
          else
          {
LABEL_13:
            v9 = 0LL;
          }
        }
      }
      v19 = *(_DWORD *)(v9 + 8);
      v16 = v19;
      v18 = v19;
      if ( (v8 & 4) != 0 )
      {
        if ( (v19 & 1) != 0 )
        {
          v8 &= ~4u;
        }
        else
        {
          PsBoostThreadIo(a2);
          v16 = v19 | 1;
          v18 = v19 | 1;
        }
      }
      if ( (v8 & 2) != 0 )
      {
        if ( (v16 & 4) != 0 )
        {
          v8 &= ~2u;
        }
        else
        {
          PsBoostThreadIoQoS(a2);
          v18 = v16 | 4;
        }
      }
      if ( v18 != v19 )
        *(_DWORD *)(v9 + 8) = v18;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v8 )
      {
        if ( (v8 & 4) != 0 )
          IoBoostThreadIoPriority(a2, 2LL, 0LL);
        if ( (v8 & 2) != 0 )
          PsBoostThreadOutstandingIoQoS(a2);
      }
    }
  }
}
