/*
 * XREFs of VidSchiAdjustWorkerThreadPriority @ 0x1400303B0
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140055344 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiAdjustWorkerThreadPriorityDirectSubmitAware @ 0x14004BC94 (VidSchiAdjustWorkerThreadPriorityDirectSubmitAware.c)
 */

void __fastcall VidSchiAdjustWorkerThreadPriority(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v5; // bp
  int v6; // esi
  int v7; // eax
  __int64 v8; // r15
  __int64 v9; // rax
  KPRIORITY v10; // r15d
  int v11; // ecx
  KSPIN_LOCK *SpinLock; // [rsp+20h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF
  __int16 v15; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v3 = *(_DWORD *)(v2 + 2824);
  if ( (v3 & 2) != 0 )
  {
    VidSchiAdjustWorkerThreadPriorityDirectSubmitAware();
    return;
  }
  if ( (v3 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread == *(struct _KTHREAD **)(v2 + 184) || CurrentThread == *(struct _KTHREAD **)(v2 + 192) )
    {
      v5 = 1;
      if ( *(_DWORD *)(a1 + 788) )
        return;
      v6 = 16;
    }
    else
    {
      v5 = 0;
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
      {
        v6 = 31;
      }
      else
      {
        v6 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        if ( v6 <= 16 )
          return;
      }
    }
    SpinLock = (KSPIN_LOCK *)(v2 + 2752);
    v15 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 2752), &LockHandle);
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1 + 788);
      LOBYTE(v15) = 1;
      if ( v5 )
      {
        if ( v7 )
          goto LABEL_13;
      }
      else if ( !v7 )
      {
        goto LABEL_13;
      }
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
      v9 = *(int *)(a1 + 400);
      if ( (_DWORD)v9 != v6 )
      {
        v11 = 0;
        if ( (int)v9 > 16 && (*(_DWORD *)(v8 + 4 * v9 + 2696))-- == 1 )
        {
          v11 = 1;
          *(_DWORD *)(v8 + 2760) &= ~(1 << *(_DWORD *)(a1 + 400));
        }
        if ( (unsigned int)v6 > 0x10 && (++*(_DWORD *)(v8 + 4LL * v6 + 2696), *(_DWORD *)(v8 + 4LL * v6 + 2696) == 1) )
        {
          *(_DWORD *)(v8 + 2760) |= 1 << v6;
          *(_DWORD *)(a1 + 400) = v6;
        }
        else
        {
          *(_DWORD *)(a1 + 400) = v6;
          if ( !v11 )
            goto LABEL_17;
        }
        if ( *(_DWORD *)(v8 + 2760) )
          *(_DWORD *)(v8 + 244) = RtlFindMostSignificantBit(*(unsigned int *)(v8 + 2760));
        else
          *(_DWORD *)(v8 + 244) = 16;
      }
LABEL_17:
      v10 = *(_DWORD *)(v8 + 244);
      if ( v10 == KeQueryPriorityThread(*(PKTHREAD *)(v2 + 184)) )
      {
        if ( !(_BYTE)v15 )
          return;
LABEL_13:
        if ( HIBYTE(v15) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        return;
      }
      if ( (_BYTE)v15 )
      {
        if ( HIBYTE(v15) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        LOBYTE(v15) = 0;
      }
      KeSetPriorityThread(*(PKTHREAD *)(v2 + 184), v10);
      if ( HIBYTE(v15) )
        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
      else
        KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    }
  }
}
