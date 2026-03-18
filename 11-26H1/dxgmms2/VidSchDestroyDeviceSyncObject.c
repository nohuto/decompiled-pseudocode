/*
 * XREFs of VidSchDestroyDeviceSyncObject @ 0x14003AC20
 * Callers:
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400E1D88 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x14003AD38 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 */

void __fastcall VidSchDestroyDeviceSyncObject(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v9; // rax
  __int64 **v10; // rcx
  struct _KEVENT *v11; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-48h] BYREF
  char v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+3Ch] [rbp-34h]
  __int64 v15; // [rsp+40h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-28h] BYREF
  __int16 v17; // [rsp+60h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 8);
  v17 = 0;
  v15 = v4 + 2016;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 2016), &LockHandle);
  LOBYTE(v17) = 1;
  v11 = (struct _KEVENT *)v4;
  v13 = 0;
  v14 = 2;
  v12[1] = v12;
  v12[0] = v12;
  if ( a3 )
    VidSchiRundownMonitoredFenceCpuWaiters(&v11, a1, a2);
  if ( a4 )
  {
    v9 = *a4;
    if ( *a4 )
    {
      if ( *(__int64 **)(v9 + 8) != a4 || (v10 = (__int64 **)a4[1], *v10 != a4) )
        __fastfail(3u);
      *v10 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      a4[1] = 0LL;
      *a4 = 0LL;
    }
  }
  HwQueueStagingList::~HwQueueStagingList(&v11);
  if ( (_BYTE)v17 )
  {
    if ( HIBYTE(v17) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
