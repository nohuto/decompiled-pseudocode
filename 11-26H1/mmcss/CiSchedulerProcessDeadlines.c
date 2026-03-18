/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x140002280
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1400021C0 (CiSchedulerDeepSleep.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x140001310 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1400027E0 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x140002DE0 (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     CiLogTurboEngaged @ 0x140004130 (CiLogTurboEngaged.c)
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 */

char __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  char result; // al
  int v3; // ebp
  int v4; // r14d
  unsigned __int64 v5; // r15
  __int64 v6; // rcx
  unsigned __int64 DeviceObjectExtension; // rbx
  bool v8; // zf
  char v9; // cl
  _BYTE *v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // eax
  ULONGLONG v14; // rbx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  int v17; // eax
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-48h] BYREF

  result = WPP_MAIN_CB.SectorSize;
  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    return result;
  v3 = 0;
  v4 = 0;
  v18.Ptr = 0LL;
  if ( CiSchedulerWaitStatus == 257 )
    v5 = KeQueryInterruptTimePrecise(&v18);
  else
    v5 = MEMORY[0xFFFFF78000000008];
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
    {
LABEL_41:
      CiSchedulerUpdateTimer(v5);
      goto LABEL_42;
    }
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( !DeviceObjectExtension )
    goto LABEL_41;
  do
  {
    if ( *(_QWORD *)(DeviceObjectExtension + 24) > v5 + 2000 )
      break;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
    v8 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
    *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
    if ( v8 )
    {
      v9 = *(_BYTE *)(DeviceObjectExtension + 36);
      v10 = (_BYTE *)(DeviceObjectExtension + 36);
      v11 = 96LL;
      if ( !v9 )
        v11 = 56LL;
      v12 = DeviceObjectExtension - v11;
      if ( v9 )
      {
        *(_DWORD *)(v12 + 184) |= 0x10u;
      }
      else
      {
        v13 = *(_DWORD *)(v12 + 184) | 0x30;
        *(_DWORD *)(v12 + 184) = v13;
        if ( (v13 & 1) != 0 )
          v4 = 1;
        ++CiTotalTasksDeadlineExpired;
      }
      CiSchedulerUpdateTaskIndexPriorities(v12);
      CiSchedulerRefreshTaskIndexQosProperties(v12);
      if ( byte_14000A0F0 )
      {
        v14 = v12 + 144;
        if ( *v10 )
        {
          v19[0] = v14;
          UserData = (struct _EVENT_DATA_DESCRIPTOR *)v19;
          v19[1] = 4LL;
          v16 = &CiTaskIndexPreDeadlineExpiredEvent;
        }
        else
        {
          v18.Ptr = v14;
          UserData = &v18;
          *(_QWORD *)&v18.Size = 4LL;
          v16 = &CiTaskIndexDeadlineExpiredEvent;
        }
        EtwWrite(RegHandle, v16, 0LL, 1u, UserData);
      }
      v17 = 32;
    }
    else
    {
      v17 = 16;
    }
    v3 |= v17;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
        break;
      DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                   + 1);
    }
    else
    {
      DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
    }
  }
  while ( DeviceObjectExtension );
  if ( (v3 & 0x20) != 0 )
  {
    if ( v4 )
    {
      if ( !CiCurrentMediaBufferingState )
        goto LABEL_40;
      CiCurrentMediaBufferingState = 0;
      v6 = 0LL;
      goto LABEL_39;
    }
    LOBYTE(v6) = CiTotalTasksBuffering != 0;
    if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
      && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
    {
      CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
LABEL_39:
      PoNotifyMediaBuffering(v6);
    }
  }
LABEL_40:
  if ( (v3 & 0x10) == 0 )
    goto LABEL_41;
LABEL_42:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v4 )
  {
    if ( byte_14000A0F0 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  *a1 |= v3 | _InterlockedExchange(&CiSchedulerWakeupReason, 0);
  return (*a1 & 0xFFFFFFDF) != 0;
}
