/*
 * XREFs of ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140039044
 * Callers:
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitCommandToHwQueue @ 0x14000AED0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014A48 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x14004A8B0 (VidSchCreateHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x140108B90 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x140054528 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VidSchiFreeQueuePacket(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  char *v2; // rdi
  _DWORD *v3; // rbx
  __int64 v6; // r15
  struct VIDSCH_HW_QUEUE *v7; // rsi
  __int64 v8; // rcx
  struct VIDSCH_HW_QUEUE **v9; // rax
  _DWORD *v10; // rdi
  _QWORD **v11; // rbx
  struct VIDSCH_HW_QUEUE **v12; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // r8
  __int64 v18; // [rsp+28h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF

  v2 = (char *)a2 + 280;
  v3 = (_DWORD *)((char *)a2 + 896);
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 24LL);
  if ( *((_DWORD *)a2 + 154) || *v3 )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline();
    v17 = *((unsigned int *)a2 + 154);
    if ( IsEnabledDeviceUsageNoInline )
    {
      WdLogSingleEntry5(0LL, 275LL, 57LL, v2, v17, (unsigned int)*v3);
      WdLogGlobalForLineNumber = 2282;
    }
    else
    {
      WdLogSingleEntry3(1LL, v2, v17, (unsigned int)*v3);
      v18 = *((unsigned int *)a2 + 154);
      WdLogGlobalForLineNumber = 2290;
      DxgkLogInternalTriageEvent(v18, 0x40000LL);
    }
  }
  WdLogSingleEntry2(4LL, a2, a1);
  WdLogGlobalForLineNumber = 2298;
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a2 + 13) = 0;
  v7 = (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 2024), &LockHandle);
  v8 = *(_QWORD *)v7;
  if ( *(struct VIDSCH_HW_QUEUE **)(*(_QWORD *)v7 + 8LL) != v7 )
    goto LABEL_8;
  v9 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)v7 + 1);
  if ( *v9 != v7 )
    goto LABEL_8;
  *v9 = (struct VIDSCH_HW_QUEUE *)v8;
  *(_QWORD *)(v8 + 8) = v9;
  if ( a1 != (struct VIDSCH_HW_QUEUE *)-256LL )
    --*((_DWORD *)a1 + 64);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v10 = (_DWORD *)((char *)a1 + 232);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = (_QWORD **)((char *)a1 + 216);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 2024), &LockHandle);
  v12 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 28);
  if ( *v12 != (struct VIDSCH_HW_QUEUE *)((char *)a1 + 216) )
LABEL_8:
    __fastfail(3u);
  *(_QWORD *)v7 = v11;
  *((_QWORD *)v7 + 1) = v12;
  *v12 = v7;
  *((_QWORD *)a1 + 28) = v7;
  if ( a1 != (struct VIDSCH_HW_QUEUE *)-232LL )
    ++*v10;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v13 = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 2024), &LockHandle);
    v14 = *v11;
    if ( *v11 != v11 && *v10 > 0x10u )
    {
      if ( (_QWORD **)v14[1] != v11 )
        goto LABEL_8;
      v15 = (_QWORD *)*v14;
      if ( *(_QWORD **)(*v14 + 8LL) != v14 )
        goto LABEL_8;
      *v11 = v15;
      v13 = v14;
      v15[1] = v11;
      --*v10;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v13 )
      break;
    ExFreePoolWithTag(v13 - 1, 0);
  }
}
