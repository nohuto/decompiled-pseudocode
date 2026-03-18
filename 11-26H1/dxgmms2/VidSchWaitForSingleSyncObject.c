/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x14002D9C0
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x140107850 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchWaitForPagingFence @ 0x1401194D4 (VidSchWaitForPagingFence.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAcquireSyncObject @ 0x14002DD6C (VidSchiAcquireSyncObject.c)
 *     VidSchiFreeQueuePacket @ 0x14002E4FC (VidSchiFreeQueuePacket.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiAllocateQueuePacket @ 0x140108F9C (VidSchiAllocateQueuePacket.c)
 *     ?VidMmGetCurrentPagingQueueFenceId@@YA_KPEBUVIDMM_PAGING_QUEUE@@@Z @ 0x140117D88 (-VidMmGetCurrentPagingQueueFenceId@@YA_KPEBUVIDMM_PAGING_QUEUE@@@Z.c)
 */

__int64 __fastcall VidSchWaitForSingleSyncObject(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  int v7; // eax
  const struct VIDMM_PAGING_QUEUE *v8; // rcx
  __int64 QueuePacket; // rax
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v12; // eax
  int v13; // esi
  unsigned int v15; // ebx
  void (*v16)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v20; // rdx
  unsigned __int64 CurrentPagingQueueFenceId; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r8d
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a1 || !a2 )
  {
    v15 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 11148;
    DxgkLogInternalTriageEvent(
      v26,
      0x40000,
      v27,
      (unsigned int)L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return v15;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 == 5 )
  {
    if ( *(_BYTE *)(a2 + 29) )
      return 3221225760LL;
  }
  else if ( v7 != 4 || *(_BYTE *)(a2 + 29) )
  {
    goto LABEL_7;
  }
  v8 = *(const struct VIDMM_PAGING_QUEUE **)(a2 + 88);
  if ( !v8 )
    goto LABEL_7;
  CurrentPagingQueueFenceId = VidMmGetCurrentPagingQueueFenceId(v8);
  v22 = CurrentPagingQueueFenceId;
  if ( *(_BYTE *)(v23 + 30) )
  {
    if ( a3 > CurrentPagingQueueFenceId )
    {
LABEL_26:
      if ( KdRefreshDebuggerNotPresent() )
      {
        WdLogSingleEntry3(1LL, a3, *(_QWORD *)(a2 + 88), v22);
        v28 = *(_QWORD *)(a2 + 88);
        WdLogGlobalForLineNumber = 11222;
        DxgkLogInternalTriageEvent(
          v24,
          0x40000,
          v25,
          (unsigned int)L"Invalid monitored fence 0x%I64x for paging queue 0x%p. PagingQueueFence=0x%I64x",
          a3,
          v28,
          v22,
          0LL);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "A request was made to wait on monitored fence 0x%I64x on paging queue 0x%p,\n"
          "but the paging queue has not generated that fence. This wait breaks the ordered wait\n"
          "contract imposed on paging queues, and cannot be placed in the queue. The paging\n"
          "queue's most recently generated fence value is 0x%I64x\n",
          a3,
          *(const void **)(a2 + 88),
          v22);
        __debugbreak();
      }
      return -1073741811LL;
    }
  }
  else if ( (int)a3 - (int)CurrentPagingQueueFenceId > 0 )
  {
    goto LABEL_26;
  }
LABEL_7:
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 804) == 0);
  v10 = QueuePacket;
  if ( !QueuePacket )
  {
    v15 = -1073741801;
    WdLogSingleEntry1(1LL, -1073741801LL);
    v16 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 11239;
    v16(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate queue packet, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v15;
  }
  *(_DWORD *)QueuePacket = 895576406;
  *(_DWORD *)(QueuePacket + 48) = 4;
  *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(QueuePacket + 52) = 2;
  *(_QWORD *)(QueuePacket + 88) = a1;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(v10 + 280) &= ~1u;
  *(_QWORD *)(v10 + 104) = CurrentThread;
  *(_QWORD *)(v10 + 72) = 0LL;
  v12 = *(_DWORD *)(a2 + 48);
  if ( v12 == 2 )
  {
    *(_QWORD *)(v10 + 328) = a3;
  }
  else if ( (unsigned int)(v12 - 4) <= 2 )
  {
    *(_QWORD *)(v10 + 328) = a3;
    WdLogSingleEntry3(4LL, a2, a3, a1);
    WdLogGlobalForLineNumber = 11276;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 2016), &LockHandle);
  *(_QWORD *)(v10 + 288) = a2;
  v13 = VidSchiAcquireSyncObject(a1, a2, v10);
  if ( v13 < 0 || (*(_DWORD *)(v10 + 280) & 1) != 0 )
  {
    VidSchiFreeQueuePacket(a1, v10);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (unsigned int)v13;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 27) )
    {
      v17 = MEMORY[0xFFFFF78000000320];
      v18 = *(_QWORD *)(v10 + 88);
      *(_DWORD *)(v10 + 64) |= 0x10u;
      *(_QWORD *)(v10 + 56) = v17;
      *(_DWORD *)(v10 + 52) = 17;
      v19 = (_QWORD *)(v10 + 32);
      v20 = *(_QWORD **)(v18 + 712);
      if ( *v20 != v18 + 704 )
        __fastfail(3u);
      *v19 = v18 + 704;
      v19[1] = v20;
      *v20 = v19;
      *(_QWORD *)(v18 + 712) = v19;
      ++*(_DWORD *)(v18 + 812);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToQueue(v10);
    }
    return 0LL;
  }
}
