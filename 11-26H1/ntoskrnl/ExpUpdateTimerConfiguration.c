/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x14037BB10
 * Callers:
 *     ExpUpdateTimerResolution @ 0x140530A54 (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeSetPriorityBoost @ 0x14037D350 (KeSetPriorityBoost.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _GROUP_AFFINITY *p_PreviousAffinity; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int16 v15; // si
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h]
  _QWORD v28[33]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v29[272]; // [rsp+180h] [rbp+80h] BYREF

  memset_0(v28, 0, 0x100uLL);
  v27 = 2097153LL;
  v25 = 0LL;
  memset_0(v28, 0, 0x100uLL);
  v6 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + (unsigned int)KiClockTimerOwner) & 0x3F;
  v7 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                     + (unsigned int)KiClockTimerOwner) >> 6;
  if ( !(_DWORD)v7 )
    goto LABEL_2;
  if ( WORD1(v27) > (unsigned int)v7 )
  {
    LOWORD(v27) = v7 + 1;
LABEL_2:
    v8 = (unsigned int)v7;
    v9 = v28[v7];
    _bittestandset64(&v9, v6);
    v28[v8] = v9;
  }
  v24[0] = a1;
  v24[1] = a2;
  v24[2] = a3;
  Affinity = 0LL;
  memset_0(v29, 0, 0x108uLL);
  CurrentThread = KeGetCurrentThread();
  p_PreviousAffinity = &PreviousAffinity;
  *(_DWORD *)Affinity.Reserved = 0;
  PreviousAffinity = 0LL;
  CurrentPrcb = 0LL;
  Affinity.Reserved[2] = 0;
  KeSetPriorityBoost(CurrentThread, 15LL);
  v14 = v28[0];
  v15 = 0;
LABEL_4:
  v16 = (unsigned __int16)v27;
  while ( 1 )
  {
    if ( v14 )
    {
      _BitScanForward64(&v17, v14);
      Affinity.Group = v15;
      v14 &= ~(1LL << v17);
      Affinity.Mask = 1LL << v17;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      CurrentPrcb = KeGetCurrentPrcb();
      ExpUpdateTimerConfigurationWorker((__int64)CurrentPrcb, (__int64)v24);
      p_PreviousAffinity = 0LL;
      goto LABEL_4;
    }
    if ( ++v15 >= (unsigned int)(unsigned __int16)v27 )
      break;
    v14 = v28[v15];
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v16, 2LL);
  }
  CurrentPrcb->DpcRoutineActive = 1;
  KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentThread, v13);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  LOBYTE(v19) = CurrentIrql;
  CurrentPrcb->DpcRoutineActive = 0;
  KiCheckForThreadDispatch(CurrentPrcb, v19, v20, v21);
  return (unsigned int)v25;
}
