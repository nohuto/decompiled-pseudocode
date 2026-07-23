/*
 * XREFs of NtInitiatePowerAction @ 0x1409F2FC0
 * Callers:
 *     IopWarmEjectDevice @ 0x1407B7CB0 (IopWarmEjectDevice.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140C03500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14052B4C8 (PopThermalEventTransitionEnableDeepSleep.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x1409F42B8 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE LightestSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  struct _KTHREAD *CurrentThread; // rax
  SYSTEM_POWER_STATE v7; // r15d
  __int64 v9; // rdi
  char PreviousMode; // r12
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
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
  v7 = LightestSystemState;
  v9 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( SystemAction == PowerActionWarmEject )
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
  if ( v7 > PowerSystemMaximum
    || SystemAction > PowerActionWarmEject
    || (Flags & 0x10000000) != 0
    || SystemAction == PowerActionSleep && v7 >= PowerSystemHibernate
    || (Flags & 0xCFFFFC0) != 0 )
  {
    goto LABEL_27;
  }
  if ( (unsigned int)(SystemAction - 4) > 2 && PsIsCurrentThreadInServerSilo() )
  {
    v12 = -1073741637;
    goto LABEL_20;
  }
  v34[2] = 0;
  LOBYTE(LightestSystemState) = PreviousMode;
  v34[0] = SystemAction;
  v34[1] = Flags;
  DWORD1(v35) = 128;
  v12 = PoCaptureReasonContext(0LL, *(__int64 *)&LightestSystemState, 0LL, 0, 0LL, P);
  v15 = 0LL;
  v16 = P[0];
  if ( v12 < 0 )
    v16 = 0LL;
  P[0] = v16;
  if ( !PreviousMode && SystemAction == PowerActionShutdownOff && (Flags & 0x3000000) != 0 )
  {
    LODWORD(v35) = 15;
  }
  else
  {
    LODWORD(v35) = 4;
    PopDiagTracePolicyInitiatePowerActionApiCall((unsigned int)SystemAction, (unsigned int)v7);
  }
  if ( !Asynchronous )
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
  if ( (unsigned int)(SystemAction - 4) <= 2 && (stru_140E67200.ReservedPreviousReadyTimeValue & 8) == 0 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, v11, v13, v14);
    LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) |= 8u;
    LOBYTE(stru_140E67200.Spare35[0]) = dword_140F10434;
    PopBsdHandleRequest(0xBu);
    PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
  }
  PopAcquirePolicyLock(v15, v11);
  PopExecutePowerAction((unsigned int)&v35, 0, (unsigned int)v34, v7, 1);
  PopReleasePolicyLock(v18, v17, v19, v20, Timeouta);
  PopThermalEventTransitionEnableDeepSleep(SystemAction);
  if ( v9 )
  {
    v21 = v9 + 32;
    if ( *(_QWORD *)(v9 + 32) )
    {
      v12 = KeWaitForSingleObject((PVOID)v9, Suspended, 0, 1u, &v33);
      if ( v12 == 258 && (byte_140F10421 & 3) != 0 )
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
  return v12;
}
