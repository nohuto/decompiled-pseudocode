/*
 * XREFs of CiSchedulerWait @ 0x140001990
 * Callers:
 *     CiSchedulerThreadFunction @ 0x140001520 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x140001310 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1400027E0 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x140002DE0 (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     CiSchedulerSleep @ 0x1400031C0 (CiSchedulerSleep.c)
 *     CiSystemDetectPotentiallyStarvedProcessors @ 0x140003770 (CiSystemDetectPotentiallyStarvedProcessors.c)
 *     CiLogTurboEngaged @ 0x140004130 (CiLogTurboEngaged.c)
 *     WPP_SF_ @ 0x1400043B0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x140004844 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 */

char __fastcall CiSchedulerWait(__int64 a1, __int32 *a2)
{
  __int32 *v2; // r13
  __int64 DpcData_high; // rdx
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // esi
  struct _DEVICE_OBJECT *SystemArgument1; // r8
  struct _DEVICE_OBJECT *NextDevice; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 DeviceObjectExtension; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  __int32 v15; // r12d
  int v16; // esi
  int v17; // r14d
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  ULONGLONG v23; // rdi
  __int32 v25; // [rsp+38h] [rbp-69h] BYREF
  __int64 v26; // [rsp+40h] [rbp-61h] BYREF
  int v27; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-51h] BYREF
  __int32 v29; // [rsp+58h] [rbp-49h] BYREF
  __int32 *v30; // [rsp+60h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+78h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+88h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+98h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A8h] [rbp+7h] BYREF
  int *v36; // [rsp+B8h] [rbp+17h]
  __int64 v37; // [rsp+C0h] [rbp+1Fh]

  v2 = a2;
  v30 = a2;
  if ( !CiThreadsMovedUp )
  {
    CiSchedulerSleep(0LL, HIDWORD(WPP_MAIN_CB.SecurityDescriptor), a2);
    return 1;
  }
  if ( CiSchedulerInLazyMode )
  {
    DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
    v4 = 2LL;
  }
  else
  {
    DpcData_high = LODWORD(WPP_MAIN_CB.SecurityDescriptor);
    v4 = 1LL;
  }
  CiSchedulerSleep(v4, DpcData_high, v2);
  if ( (*v2 & 0xC) != 0 )
    return 0;
  while ( 1 )
  {
    CiSystemDetectPotentiallyStarvedProcessors();
    if ( !CiProcessorIdleHistoryBits )
      break;
    if ( CiProcessorIdleHistoryBits == CiSchedulerIdleCycleBitMask )
    {
      if ( !CiSchedulerInLazyMode )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            13LL,
            &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids,
            HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
        CiSchedulerInLazyMode = 1;
      }
      v5 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v6 = 4;
    }
    else
    {
      v5 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
      v6 = 3;
    }
    if ( byte_14000A0F0 )
    {
      v25 = *v2;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v25;
      EtwWrite(RegHandle, &CiSchedulerWakeupEvent, 0LL, 1u, &UserData);
    }
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    if ( CiSchedulerInLazyMode )
    {
      SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
        goto LABEL_23;
      while ( 1 )
      {
        NextDevice = SystemArgument1->NextDevice;
        if ( NextDevice != (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
          break;
LABEL_22:
        SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
        if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
LABEL_23:
          *v2 |= 0x80u;
          WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
          return 0;
        }
      }
      while ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
      {
        NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        if ( NextDevice == (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
          goto LABEL_22;
      }
    }
    if ( qword_14000A2D8 )
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
    v26 = 0LL;
    if ( CiSchedulerWaitStatus == 257 )
      v9 = KeQueryInterruptTimePrecise(&v26);
    else
      v9 = MEMORY[0xFFFFF78000000008];
    v10 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    byte_14000A2E4 = 0;
    qword_14000A2D8 = v9 + v5;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
      goto LABEL_32;
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    {
      v10 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
LABEL_32:
      LOBYTE(SystemArgument1) = 0;
      if ( !v10 )
        goto LABEL_39;
      while ( 1 )
      {
        if ( *(_QWORD *)(v10 + 24) > v9 + v5 )
        {
          v11 = *(_QWORD *)v10;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_39;
            v11 ^= v10;
          }
          if ( !v11 )
            goto LABEL_39;
        }
        else
        {
          v11 = *(_QWORD *)(v10 + 8);
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_38;
            v11 ^= v10;
          }
          if ( !v11 )
          {
LABEL_38:
            LOBYTE(SystemArgument1) = 1;
            goto LABEL_39;
          }
        }
        v10 = v11;
      }
    }
    v10 = 0LL;
    LOBYTE(SystemArgument1) = 0;
LABEL_39:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v10, SystemArgument1, &WPP_MAIN_CB.Reserved);
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
        goto LABEL_56;
      DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                   + 1);
    }
    else
    {
      DeviceObjectExtension = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
    }
    if ( DeviceObjectExtension )
    {
      if ( DeviceObjectExtension != CiSchedulerTimerNode )
      {
        v13 = *(_QWORD *)(DeviceObjectExtension + 24);
        if ( v9 <= v13 )
        {
          v14 = v9 - v13;
          if ( v14 < -2000 )
            v14 += 2000LL;
        }
        else
        {
          v14 = 0LL;
        }
        CiSchedulerTimerNode = DeviceObjectExtension;
        ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v14, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
      }
      goto LABEL_58;
    }
LABEL_56:
    if ( CiSchedulerTimerNode != 1 )
    {
      CiSchedulerTimerNode = 1LL;
      ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
    }
LABEL_58:
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( byte_14000A0F0 )
    {
      v35.Ptr = (ULONGLONG)&v27;
      v28 = v5;
      v36 = (int *)&v28;
      v27 = v6;
      *(_QWORD *)&v35.Size = 4LL;
      v37 = 4LL;
      EtwWrite(RegHandle, &CiSchedulerSleepEvent, 0LL, 2u, &v35);
    }
    v15 = _InterlockedExchange(&CiSchedulerWakeupReason, 0);
    v25 = v15;
    if ( !v15 )
      goto LABEL_61;
    while ( 2 )
    {
      if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
        goto LABEL_104;
      v16 = 0;
      v17 = 0;
      v26 = 0LL;
      if ( CiSchedulerWaitStatus == 257 )
        v18 = KeQueryInterruptTimePrecise(&v26);
      else
        v18 = MEMORY[0xFFFFF78000000008];
      v19 = v18 + 2000;
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
      CiSchedulerTimerNode = 2LL;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
          goto LABEL_98;
        v21 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
      }
      else
      {
        v21 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
      }
      if ( v21 )
      {
        do
        {
          if ( *(_QWORD *)(v21 + 24) > v19 )
            break;
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v21);
          *(_QWORD *)(v21 + 24) = 0LL;
          if ( *(_DWORD *)(v21 + 32) == 1 )
          {
            v16 |= 0x20u;
            if ( *(_BYTE *)(v21 + 36) )
            {
              *(_DWORD *)(v21 + 88) |= 0x10u;
              v22 = v21 - 96;
            }
            else
            {
              *(_DWORD *)(v21 + 128) |= 0x30u;
              v22 = v21 - 56;
              if ( (*(_DWORD *)(v21 - 56 + 184) & 1) != 0 )
                v17 = 1;
              ++CiTotalTasksDeadlineExpired;
            }
            CiSchedulerUpdateTaskIndexPriorities(v22);
            CiSchedulerRefreshTaskIndexQosProperties(v22);
            if ( byte_14000A0F0 )
            {
              v23 = v22 + 144;
              if ( *(_BYTE *)(v21 + 36) )
              {
                v34.Ptr = v23;
                *(_QWORD *)&v34.Size = 4LL;
                EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v34);
              }
              else
              {
                v33.Ptr = v23;
                *(_QWORD *)&v33.Size = 4LL;
                EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &v33);
              }
            }
          }
          else
          {
            v16 |= 0x10u;
          }
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
              break;
            v21 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
          }
          else
          {
            v21 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
          }
        }
        while ( v21 );
        v15 = v25;
        v2 = v30;
        if ( (v16 & 0x20) != 0 )
        {
          if ( v17 )
          {
            if ( CiCurrentMediaBufferingState )
            {
              CiCurrentMediaBufferingState = 0;
              v20 = 0LL;
              goto LABEL_96;
            }
          }
          else
          {
            LOBYTE(v20) = CiTotalTasksBuffering != 0;
            if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
              && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
            {
              CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
LABEL_96:
              PoNotifyMediaBuffering(v20);
            }
          }
        }
        if ( (v16 & 0x10) != 0 )
          goto LABEL_99;
      }
LABEL_98:
      CiSchedulerUpdateTimer(v19 - 2000);
LABEL_99:
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      if ( v17 )
      {
        if ( byte_14000A0F0 )
          CiLogTurboEngaged();
        PoLatencySensitivityHint(4LL);
      }
      v15 |= v16 | _InterlockedExchange(&CiSchedulerWakeupReason, 0);
      if ( (v15 & 0xFFFFFFDF) == 0 )
      {
LABEL_104:
        if ( byte_14000A0F0 )
        {
          v32.Ptr = (ULONGLONG)&v29;
          v29 = v15;
          *(_QWORD *)&v32.Size = 4LL;
          EtwWrite(RegHandle, &CiSchedulerWakeupEvent, 0LL, 1u, &v32);
        }
        v15 = 0;
        v25 = 0;
LABEL_61:
        CiSchedulerWaitStatus = KeWaitForSingleObject(
                                  *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                  Executive,
                                  0,
                                  1u,
                                  0LL);
        continue;
      }
      break;
    }
    *v2 = v15;
    if ( (v15 & 0xC) != 0 )
      return 0;
  }
  if ( CiSchedulerInLazyMode )
  {
    CiSchedulerInLazyMode = 0;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  }
  return 0;
}
