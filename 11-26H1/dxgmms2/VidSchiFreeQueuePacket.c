/*
 * XREFs of VidSchiFreeQueuePacket @ 0x14002E4FC
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x14002D178 (VidSchiCreateContextInternal.c)
 *     VidSchWaitForSingleSyncObject @ 0x14002D9C0 (VidSchWaitForSingleSyncObject.c)
 *     VidSchEnqueueCpuEvent @ 0x140108B90 (VidSchEnqueueCpuEvent.c)
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x140054528 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r14
  _QWORD *v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax
  KSPIN_LOCK *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v19; // r8
  int v20; // r8d
  __int64 v21; // [rsp+28h] [rbp-48h]
  __int64 v22; // [rsp+30h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF

  v2 = (_DWORD *)(a2 + 280);
  v3 = (_QWORD *)(a2 + 896);
  v5 = a1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( *(_DWORD *)(a2 + 616) || *(_DWORD *)v3 )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline();
    v19 = *(unsigned int *)(a2 + 616);
    if ( IsEnabledDeviceUsageNoInline )
    {
      WdLogSingleEntry5(0LL, 275LL, 57LL, v2, v19, *(unsigned int *)v3);
      WdLogGlobalForLineNumber = 19432;
    }
    else
    {
      WdLogSingleEntry3(1LL, v2, v19, *(unsigned int *)v3);
      v22 = *(unsigned int *)v3;
      v21 = *(unsigned int *)(a2 + 616);
      WdLogGlobalForLineNumber = 19440;
      DxgkLogInternalTriageEvent(
        v21,
        0x40000,
        v20,
        (unsigned int)L"dxgkrnl has detected a present queue reference leak.",
        (__int64)v2,
        v21,
        v22,
        0LL);
    }
  }
  if ( !*(_DWORD *)(a2 + 48) )
  {
    v13 = *(_QWORD *)(a2 + 624);
    if ( v13 || *(_QWORD *)(a2 + 272) )
    {
      v14 = *(_QWORD *)(a2 + 272);
      g_DxgMmsBugcheckExportIndex = 1;
      v11 = (_QWORD *)WdLogSingleEntry5(0LL, 281LL, 2560LL, a2, v13, v14);
      WdLogGlobalForLineNumber = 916;
      goto LABEL_18;
    }
  }
  WdLogSingleEntry2(4LL, a2, v5);
  WdLogGlobalForLineNumber = 19461;
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a2 + 52) = 0;
  v3 = (_QWORD *)(a2 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 2024), &LockHandle);
  v7 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v8 = *(_QWORD **)(a2 + 16), (_QWORD *)*v8 != v3) )
LABEL_10:
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( v5 != -784 )
    --*(_DWORD *)(v5 + 784);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = *(_DWORD *)(a2 + 64);
  v10 = (KSPIN_LOCK *)(v6 + 2024);
  LockHandle.LockQueue = 0LL;
  if ( (v9 & 0x40) == 0 )
  {
    v2 = (_DWORD *)(v5 + 736);
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    v5 += 720LL;
    KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
    v11 = *(_QWORD **)(v5 + 8);
    if ( *v11 == v5 )
    {
LABEL_18:
      *v3 = v5;
      v3[1] = v11;
      *v11 = v3;
      *(_QWORD *)(v5 + 8) = v3;
      if ( v2 )
        ++*v2;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_21;
    }
    goto LABEL_10;
  }
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
  v12 = *(_QWORD **)(v5 + 752);
  if ( *v12 != v5 + 744 )
    goto LABEL_10;
  *v3 = v5 + 744;
  *(_QWORD *)(a2 + 16) = v12;
  *v12 = v3;
  *(_QWORD *)(v5 + 752) = v3;
  if ( v5 != -760 )
    ++*(_DWORD *)(v5 + 760);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v2 = (_DWORD *)(v5 + 736);
  v5 += 720LL;
LABEL_21:
  if ( (*(_DWORD *)(a2 + 64) & 0x40) == 0 )
  {
    while ( 1 )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      v15 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 2024), &LockHandle);
      v16 = *(_QWORD **)v5;
      if ( *(_QWORD *)v5 != v5 && *v2 > 0x10u )
      {
        if ( v16[1] != v5 )
          goto LABEL_10;
        v17 = *v16;
        if ( *(_QWORD **)(*v16 + 8LL) != v16 )
          goto LABEL_10;
        *(_QWORD *)v5 = v17;
        v15 = v16;
        *(_QWORD *)(v17 + 8) = v5;
        --*v2;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v15 )
        return;
      ExFreePoolWithTag(v15 - 1, 0);
    }
  }
}
