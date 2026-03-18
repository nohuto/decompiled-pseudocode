/*
 * XREFs of NtInitiatePowerAction @ 0x140A37400
 * Callers:
 *     IopWarmEjectDevice @ 0x1407B4C50 (IopWarmEjectDevice.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140BFD500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PoCaptureReasonContext @ 0x140436EC8 (PoCaptureReasonContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x140528ED8 (PopThermalEventTransitionEnableDeepSleep.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140A386F8 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtInitiatePowerAction(int a1, __int64 a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r15d
  __int64 v9; // rdi
  char PreviousMode; // r12
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 v15; // rcx
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 Pool2; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-50h]
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-50h]
  LARGE_INTEGER v33; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v34[4]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v35; // [rsp+48h] [rbp-28h] BYREF
  PVOID P[3]; // [rsp+58h] [rbp-18h] BYREF

  v33.QuadPart = -1500000000LL;
  v35 = 0LL;
  *(_OWORD *)P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a2;
  v9 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 == 7 )
    {
LABEL_27:
      v12 = -1073741811;
      goto LABEL_20;
    }
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, CurrentThread->PreviousMode) )
    {
      v12 = -1073741727;
      goto LABEL_20;
    }
  }
  if ( v7 > 7 || a1 > 7 || (a3 & 0x10000000) != 0 || a1 == 2 && v7 >= 5 || (a3 & 0xCFFFFC0) != 0 )
    goto LABEL_27;
  if ( (unsigned int)(a1 - 4) > 2 && PsIsCurrentThreadInServerSilo() )
  {
    v12 = -1073741637;
    goto LABEL_20;
  }
  v34[2] = 0;
  LOBYTE(a2) = PreviousMode;
  v34[0] = a1;
  v34[1] = a3;
  DWORD1(v35) = 128;
  v12 = PoCaptureReasonContext(0LL, a2, 0LL, 0, 0LL, P);
  v15 = 0LL;
  v16 = P[0];
  if ( v12 < 0 )
    v16 = 0LL;
  P[0] = v16;
  if ( !PreviousMode && a1 == 6 && (a3 & 0x3000000) != 0 )
  {
    LODWORD(v35) = 15;
  }
  else
  {
    LODWORD(v35) = 4;
    PopDiagTracePolicyInitiatePowerActionApiCall((unsigned int)a1, (unsigned int)v7);
  }
  if ( !a4 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v9 = Pool2;
    if ( !Pool2 )
    {
      v12 = -1073741670;
      goto LABEL_20;
    }
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_QWORD *)(Pool2 + 48) = &v35;
    KeInitializeEvent((PRKEVENT)Pool2, NotificationEvent, 0);
    DWORD1(v35) |= 0x20u;
    *((_QWORD *)&v35 + 1) = v9;
  }
  if ( (unsigned int)(a1 - 4) <= 2 && (stru_140E66FF0.SavedApcStateFill[32] & 8) == 0 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, v11, v13, v14);
    stru_140E66FF0.SavedApcStateFill[32] |= 8u;
    stru_140E66FF0.PriorityFloorCounts[24] = dword_140F0FB74;
    PopBsdHandleRequest(0xBu);
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
  }
  PopAcquirePolicyLock(v15, v11);
  PopExecutePowerAction((unsigned int)&v35, 0, (unsigned int)v34, v7, 1);
  PopReleasePolicyLock(v18, v17, v19, v20, Timeouta);
  PopThermalEventTransitionEnableDeepSleep(a1);
  if ( v9 )
  {
    v21 = v9 + 32;
    if ( *(_QWORD *)(v9 + 32) )
    {
      v12 = KeWaitForSingleObject((PVOID)v9, Suspended, 0, 1u, &v33);
      if ( v12 == 258 && (byte_140F0FB61 & 3) != 0 )
        v12 = KeWaitForSingleObject((PVOID)v9, Suspended, 0, 1u, 0LL);
      PopAcquirePolicyLock(v25, v24);
      v29 = *(_QWORD *)v21;
      if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 || (v30 = *(_QWORD **)(v9 + 40), *v30 != v21) )
        __fastfail(3u);
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      PopReleasePolicyLock(v29, v26, v27, v28, Timeout);
    }
    if ( v12 >= 0 )
    {
      v12 = *(_DWORD *)(v9 + 24);
      if ( v12 >= 0 )
        v12 = 0;
    }
    ExFreePoolWithTag((PVOID)v9, 0);
  }
LABEL_20:
  if ( P[0] )
    PoDestroyReasonContext((_QWORD *)P[0]);
  return (unsigned int)v12;
}
