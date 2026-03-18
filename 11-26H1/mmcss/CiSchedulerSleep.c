/*
 * XREFs of CiSchedulerSleep @ 0x1400031C0
 * Callers:
 *     CiSchedulerWait @ 0x140001990 (CiSchedulerWait.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x140001310 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1400027E0 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x140002DE0 (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     CiLogTurboEngaged @ 0x140004130 (CiLogTurboEngaged.c)
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 */

__int64 __fastcall CiSchedulerSleep(int a1, unsigned int a2, __int32 *a3)
{
  __int32 *v3; // r13
  __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 DeviceObjectExtension; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  __int32 v12; // r12d
  int v13; // esi
  int v14; // r14d
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  ULONGLONG v20; // rdi
  __int64 result; // rax
  __int32 v22; // [rsp+30h] [rbp-59h]
  __int64 v23; // [rsp+38h] [rbp-51h] BYREF
  int v24; // [rsp+40h] [rbp-49h] BYREF
  int v25; // [rsp+48h] [rbp-41h] BYREF
  __int64 v26; // [rsp+50h] [rbp-39h] BYREF
  __int32 *v27; // [rsp+58h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+60h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+70h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+80h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp+7h] BYREF
  int *v32; // [rsp+A0h] [rbp+17h]
  __int64 v33; // [rsp+A8h] [rbp+1Fh]

  v3 = a3;
  v27 = a3;
  v4 = a2;
  if ( qword_14000A2D8 )
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
  v23 = 0LL;
  if ( CiSchedulerWaitStatus == 257 )
    v6 = KeQueryInterruptTimePrecise(&v23);
  else
    v6 = MEMORY[0xFFFFF78000000008];
  v7 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  qword_14000A2D8 = v6 + v4;
  byte_14000A2E4 = 0;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
  {
LABEL_9:
    LOBYTE(a3) = 0;
    if ( !v7 )
      goto LABEL_16;
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 24) > v6 + v4 )
      {
        v8 = *(_QWORD *)v7;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_16;
          v8 ^= v7;
        }
        if ( !v8 )
          goto LABEL_16;
      }
      else
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_15;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_15:
          LOBYTE(a3) = 1;
          goto LABEL_16;
        }
      }
      v7 = v8;
    }
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    v7 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    goto LABEL_9;
  }
  v7 = 0LL;
  LOBYTE(a3) = 0;
LABEL_16:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v7, a3, &WPP_MAIN_CB.Reserved);
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_33;
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
      v10 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( v6 <= v10 )
      {
        v11 = v6 - v10;
        if ( v11 < -2000 )
          v11 += 2000LL;
      }
      else
      {
        v11 = 0LL;
      }
      CiSchedulerTimerNode = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v11, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    goto LABEL_35;
  }
LABEL_33:
  if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
LABEL_35:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( byte_14000A0F0 )
  {
    UserData.Ptr = (ULONGLONG)&v24;
    v25 = v4;
    v32 = &v25;
    v24 = a1;
    *(_QWORD *)&UserData.Size = 4LL;
    v33 = 4LL;
    EtwWrite(RegHandle, &CiSchedulerSleepEvent, 0LL, 2u, &UserData);
  }
  v12 = _InterlockedExchange(&CiSchedulerWakeupReason, 0);
  v22 = v12;
  if ( v12 )
    goto LABEL_39;
  while ( 1 )
  {
    CiSchedulerWaitStatus = KeWaitForSingleObject(
                              *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                              Executive,
                              0,
                              1u,
                              0LL);
LABEL_39:
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      break;
LABEL_81:
    if ( byte_14000A0F0 )
    {
      v28.Ptr = (ULONGLONG)&v23;
      LODWORD(v23) = v12;
      *(_QWORD *)&v28.Size = 4LL;
      EtwWrite(RegHandle, &CiSchedulerWakeupEvent, 0LL, 1u, &v28);
    }
    v12 = 0;
    v22 = 0;
  }
  v13 = 0;
  v14 = 0;
  v26 = 0LL;
  if ( CiSchedulerWaitStatus == 257 )
    v15 = KeQueryInterruptTimePrecise(&v26);
  else
    v15 = MEMORY[0xFFFFF78000000008];
  v16 = v15 + 2000;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_75;
    v18 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
  }
  else
  {
    v18 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( v18 )
  {
    do
    {
      if ( *(_QWORD *)(v18 + 24) > v16 )
        break;
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v18);
      *(_QWORD *)(v18 + 24) = 0LL;
      if ( *(_DWORD *)(v18 + 32) == 1 )
      {
        v13 |= 0x20u;
        if ( *(_BYTE *)(v18 + 36) )
        {
          *(_DWORD *)(v18 + 88) |= 0x10u;
          v19 = v18 - 96;
        }
        else
        {
          *(_DWORD *)(v18 + 128) |= 0x30u;
          v19 = v18 - 56;
          if ( (*(_DWORD *)(v18 - 56 + 184) & 1) != 0 )
            v14 = 1;
          ++CiTotalTasksDeadlineExpired;
        }
        CiSchedulerUpdateTaskIndexPriorities(v19);
        CiSchedulerRefreshTaskIndexQosProperties(v19);
        if ( byte_14000A0F0 )
        {
          v20 = v19 + 144;
          if ( *(_BYTE *)(v18 + 36) )
          {
            v30.Ptr = v20;
            *(_QWORD *)&v30.Size = 4LL;
            EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &v30);
          }
          else
          {
            v29.Ptr = v20;
            *(_QWORD *)&v29.Size = 4LL;
            EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &v29);
          }
        }
      }
      else
      {
        v13 |= 0x10u;
      }
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
          break;
        v18 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
      }
      else
      {
        v18 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
      }
    }
    while ( v18 );
    v12 = v22;
    v3 = v27;
    if ( (v13 & 0x20) != 0 )
    {
      if ( v14 )
      {
        if ( !CiCurrentMediaBufferingState )
          goto LABEL_74;
        CiCurrentMediaBufferingState = 0;
        v17 = 0LL;
        goto LABEL_73;
      }
      LOBYTE(v17) = CiTotalTasksBuffering != 0;
      if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
        && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
      {
        CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
LABEL_73:
        PoNotifyMediaBuffering(v17);
      }
    }
LABEL_74:
    if ( (v13 & 0x10) != 0 )
      goto LABEL_76;
  }
LABEL_75:
  CiSchedulerUpdateTimer(v16 - 2000);
LABEL_76:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v14 )
  {
    if ( byte_14000A0F0 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  result = v13 | (unsigned int)_InterlockedExchange(&CiSchedulerWakeupReason, 0);
  v12 |= result;
  if ( (v12 & 0xFFFFFFDF) == 0 )
    goto LABEL_81;
  *v3 = v12;
  return result;
}
