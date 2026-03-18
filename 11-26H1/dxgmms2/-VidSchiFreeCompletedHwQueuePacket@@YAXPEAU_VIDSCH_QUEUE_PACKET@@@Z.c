/*
 * XREFs of ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014A48
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1400136F8 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400160B0 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AC8C (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AD98 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140039044 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x140054528 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VidSchiFreeCompletedHwQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  char *v2; // rbp
  _DWORD *v3; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  KIRQL v14; // bp
  struct _KEVENT *i; // rbx
  KIRQL v16; // bp
  struct _KEVENT *j; // rbx
  int Flink; // ecx
  BOOL v19; // eax
  int v20; // ecx
  BOOL v21; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v23; // r8
  int v24; // r8d
  __int64 v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 12);
  v2 = (char *)a1 + 280;
  v3 = (_DWORD *)((char *)a1 + 896);
  v5 = *(_QWORD *)(v1 + 40);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v6 + 24);
  if ( *((_DWORD *)a1 + 154) || *v3 )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline();
    v23 = *((unsigned int *)a1 + 154);
    if ( IsEnabledDeviceUsageNoInline )
    {
      WdLogSingleEntry5(0LL, 275LL, 57LL, v2, v23, (unsigned int)*v3);
      WdLogGlobalForLineNumber = 676;
    }
    else
    {
      WdLogSingleEntry3(1LL, v2, v23, (unsigned int)*v3);
      v26 = (unsigned int)*v3;
      v25 = *((unsigned int *)a1 + 154);
      WdLogGlobalForLineNumber = 684;
      DxgkLogInternalTriageEvent(
        v25,
        0x40000,
        v24,
        (unsigned int)L"dxgkrnl has detected a present queue reference leak.",
        (__int64)v2,
        v25,
        v26,
        0LL);
    }
  }
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v9 = (_QWORD *)((char *)a1 + 32);
  *((_DWORD *)a1 + 13) = 16;
  v10 = *((_QWORD *)a1 + 4);
  if ( *(struct _VIDSCH_QUEUE_PACKET **)(v10 + 8) != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32)
    || (v11 = (_QWORD *)*((_QWORD *)a1 + 5), (_QWORD *)*v11 != v9) )
  {
    __fastfail(3u);
  }
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  *v9 = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  v12 = *(_QWORD *)(v1 + 160);
  v13 = *(_DWORD *)(v1 + 124);
  if ( v12 == v1 + 160 )
  {
    if ( v13 )
    {
      if ( v13 == 1 && !*(_BYTE *)(*(_QWORD *)(v1 + 40) + 152LL) )
        VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)v1);
      *(_DWORD *)(v1 + 124) = 0;
    }
  }
  else if ( v12 == *(_QWORD *)(v1 + 208) )
  {
    if ( v13 != 2 )
    {
      if ( v13 == 1 && !*(_BYTE *)(*(_QWORD *)(v1 + 40) + 152LL) )
        VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)v1);
      *(_DWORD *)(v1 + 124) = 2;
    }
  }
  else if ( v13 != 1 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(v1 + 40) + 152LL) )
      VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)v1);
    *(_DWORD *)(v1 + 124) = 1;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 788));
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 3012));
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 1844));
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 148));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 312));
  VidSchiProfilePerformanceTick(9, v8, v6, 0, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v7);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v14 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 2032), &LockHandle);
  for ( i = *(struct _KEVENT **)(v6 + 424); i != (struct _KEVENT *)(v6 + 424); i = *(struct _KEVENT **)&i->Header.Lock )
  {
    if ( LODWORD(i->Header.WaitListHead.Blink) == 4 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 4LL * LODWORD(i[1].Header.WaitListHead.Blink) + 1708) < *(_DWORD *)(*(_QWORD *)&i[1].Header.Lock + 252LL);
LABEL_15:
      if ( !v19 )
        continue;
      goto LABEL_16;
    }
    if ( ((__int64)i[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      Flink = (int)i[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(i[5].Header.WaitListHead.Blink) = Flink;
      v19 = Flink == 0;
      goto LABEL_15;
    }
LABEL_16:
    ++i[5].Header.LockNV;
    KeSetEvent(i + 4, 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v14);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v16 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 2032), &LockHandle);
  for ( j = *(struct _KEVENT **)(v8 + 1928); j != (struct _KEVENT *)(v8 + 1928); j = *(struct _KEVENT **)&j->Header.Lock )
  {
    if ( LODWORD(j->Header.WaitListHead.Blink) == 4 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)&j[1].Header.Lock + 4LL * LODWORD(j[1].Header.WaitListHead.Blink) + 1708) < *(_DWORD *)(*(_QWORD *)&j[1].Header.Lock + 252LL);
LABEL_21:
      if ( !v21 )
        continue;
      goto LABEL_22;
    }
    if ( ((__int64)j[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v20 = (int)j[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(j[5].Header.WaitListHead.Blink) = v20;
      v21 = v20 == 0;
      goto LABEL_21;
    }
LABEL_22:
    ++j[5].Header.LockNV;
    KeSetEvent(j + 4, 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v16);
  *(_QWORD *)(v6 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 296), 0, 0);
  *(_QWORD *)(v8 + 1776) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v8 + 1744), 0, 0);
  VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v1, a1);
}
