/*
 * XREFs of VidSchSubmitWaitToHwQueue @ 0x1400090D0
 * Callers:
 *     VidSchWaitForPagingFence @ 0x1401194D4 (VidSchWaitForPagingFence.c)
 * Callees:
 *     ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140009530 (-VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x140054528 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     VidSchiAllocateHwQueuePacket @ 0x140109138 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitWaitToHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 HwQueuePacket; // rax
  __int64 v10; // rbx
  _DWORD *v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v13; // r15d
  __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _DWORD *v18; // rdi
  _QWORD **v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  int v25; // ecx
  int v26; // r8d
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v28; // r8
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // [rsp+28h] [rbp-80h]
  __int64 v32; // [rsp+30h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+50h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-40h] BYREF

  v3 = *(_DWORD *)(a2 + 48) == 5;
  v6 = *(_QWORD *)(a1 + 40);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 24LL);
  if ( v3 && *(_BYTE *)(a2 + 29) )
    return 3221225760LL;
  HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, 0LL);
  v10 = HwQueuePacket;
  if ( HwQueuePacket )
  {
    *(_DWORD *)HwQueuePacket = 895576406;
    *(_DWORD *)(HwQueuePacket + 48) = 4;
    *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(HwQueuePacket + 52) = 2;
    v11 = (_DWORD *)(HwQueuePacket + 280);
    *(_QWORD *)(HwQueuePacket + 96) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v10 + 280) &= ~1u;
    *(_QWORD *)(v10 + 104) = CurrentThread;
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_QWORD *)(v10 + 328) = a3;
    WdLogSingleEntry3(4LL, a2, a3, a1);
    WdLogGlobalForLineNumber = 5296;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 2016), &LockHandle);
    *(_QWORD *)(v10 + 288) = a2;
    v13 = VidSchiAcquireSyncObjectForHwQueue((struct _VIDSCH_SYNC_OBJECT *)a2, (struct _VIDSCH_QUEUE_PACKET *)v10);
    if ( v13 < 0 || (*v11 & 1) != 0 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) + 24LL);
      if ( *(_DWORD *)(v10 + 616) || *(_DWORD *)(v10 + 896) )
      {
        IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline();
        v28 = *(unsigned int *)(v10 + 616);
        if ( IsEnabledDeviceUsageNoInline )
        {
          WdLogSingleEntry5(0LL, 275LL, 57LL, v10 + 280, v28, *(unsigned int *)(v10 + 896));
          WdLogGlobalForLineNumber = 2282;
        }
        else
        {
          WdLogSingleEntry3(1LL, v10 + 280, v28, *(unsigned int *)(v10 + 896));
          v32 = *(unsigned int *)(v10 + 896);
          v31 = *(unsigned int *)(v10 + 616);
          WdLogGlobalForLineNumber = 2290;
          DxgkLogInternalTriageEvent(
            v29,
            0x40000,
            v30,
            (unsigned int)L"dxgkrnl has detected a present queue reference leak.",
            v10 + 280,
            v31,
            v32,
            0LL);
        }
      }
      WdLogSingleEntry2(4LL, v10, a1);
      WdLogGlobalForLineNumber = 2298;
      *(_QWORD *)(v10 + 56) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(v10 + 52) = 0;
      v15 = (_QWORD *)(v10 + 8);
      memset(&v33, 0, sizeof(v33));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 2024), &v33);
      v16 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD **)(*v15 + 8LL) != v15 )
        goto LABEL_12;
      v17 = *(_QWORD **)(v10 + 16);
      if ( (_QWORD *)*v17 != v15 )
        goto LABEL_12;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      if ( a1 != -256 )
        --*(_DWORD *)(a1 + 256);
      KeReleaseInStackQueuedSpinLock(&v33);
      memset(&v33, 0, sizeof(v33));
      v18 = (_DWORD *)(a1 + 232);
      v19 = (_QWORD **)(a1 + 216);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 2024), &v33);
      v20 = *(_QWORD **)(a1 + 224);
      if ( *v20 != a1 + 216 )
LABEL_12:
        __fastfail(3u);
      *v15 = v19;
      v15[1] = v20;
      *v20 = v15;
      *(_QWORD *)(a1 + 224) = v15;
      if ( a1 != -232 )
        ++*v18;
      KeReleaseInStackQueuedSpinLock(&v33);
      while ( 1 )
      {
        memset(&v33, 0, sizeof(v33));
        v22 = 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 2024), &v33);
        v23 = *v19;
        if ( *v19 == v19 )
          break;
        if ( *v18 > 0x10u )
        {
          if ( (_QWORD **)v23[1] != v19 )
            goto LABEL_12;
          v24 = (_QWORD *)*v23;
          if ( *(_QWORD **)(*v23 + 8LL) != v23 )
            goto LABEL_12;
          *v19 = v24;
          v22 = v23;
          v24[1] = v19;
          --*v18;
        }
        KeReleaseInStackQueuedSpinLock(&v33);
        if ( !v22 )
          goto LABEL_23;
        ExFreePoolWithTag(v22 - 1, 0);
      }
      KeReleaseInStackQueuedSpinLock(&v33);
LABEL_23:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v13;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)v10);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741801LL);
    WdLogGlobalForLineNumber = 5268;
    DxgkLogInternalTriageEvent(
      v25,
      0x40000,
      v26,
      (unsigned int)L"Failed to allocate queue packet, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
