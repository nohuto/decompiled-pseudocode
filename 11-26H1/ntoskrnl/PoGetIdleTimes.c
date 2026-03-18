/*
 * XREFs of PoGetIdleTimes @ 0x1404280E0
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x140A68F60 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     PopGetIdleTimesCallback @ 0x140428440 (PopGetIdleTimesCallback.c)
 *     PopQueueTargetDpc @ 0x14042883C (PopQueueTargetDpc.c)
 *     KeGetProcessorIndexFromNumber @ 0x140428990 (KeGetProcessorIndexFromNumber.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 Number; // rdx
  int v8; // edx
  unsigned int v9; // ecx
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  LegacyAutoBoost *v13; // rbx
  unsigned __int8 CurrentIrql; // bl
  int IdleTimesCallback; // esi
  char *v16; // rdx
  void *AutoBoostThreadState; // rtt
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 *v24; // rdx
  __int64 v25; // rcx
  __int64 Object; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v27[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ah] [rbp-A6h]
  __int16 v31; // [rsp+5Eh] [rbp-A2h]
  __int64 (__fastcall *v32)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int64 *p_Object; // [rsp+78h] [rbp-88h]
  _QWORD *v36; // [rsp+80h] [rbp-80h]
  int v37; // [rsp+88h] [rbp-78h]
  int v38; // [rsp+8Ch] [rbp-74h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-50h]
  __int128 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v45[33]; // [rsp+E8h] [rbp-18h] BYREF

  memset_0(&v44, 0, 0x108uLL);
  if ( ProcNumber->Reserved )
    goto LABEL_30;
  if ( !ProcNumber->Group && !ProcNumber->Number )
  {
    v9 = 0;
    goto LABEL_9;
  }
  if ( ProcNumber->Group >= (unsigned __int16)KiActiveGroups
    || (Number = ProcNumber->Number, (unsigned __int8)Number >= 0x40u) )
  {
LABEL_30:
    v9 = -1;
    goto LABEL_9;
  }
  v8 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
       + 64 * (unsigned __int64)ProcNumber->Group
       + Number);
  if ( !v8 )
    v8 = -1;
  v9 = v8;
LABEL_9:
  if ( v9 >= (unsigned int)KeNumberProcessors_0 )
    v10 = 0LL;
  else
    v10 = KiProcessorBlock[v9];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F10070.1136, 0LL, 0LL, v6);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F10070.AutoBoostThreadState, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140F10070.1136, 0, v13, (struct _KTHREAD *)&stru_140F10070.1136);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v13 + 33) |= 2u;
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
  }
  IdleTimesCallback = PopGetIdleTimesCallback(v10, a2, a3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v44 = 2097153LL;
    memset_0(v45, 0, 0x100uLL);
    v21 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                    + 4LL * KeGetProcessorIndexFromNumber(ProcNumber));
    v22 = v21 & 0x3F;
    v23 = v21 >> 6;
    if ( (unsigned __int16)v44 <= (unsigned int)v23 )
    {
      if ( WORD1(v44) <= (unsigned int)v23 )
        goto LABEL_33;
      LOWORD(v44) = v23 + 1;
    }
    v24 = &v45[v23];
    v25 = *v24;
    _bittestandset64(&v25, v22);
    *v24 = v25;
LABEL_33:
    v38 = 0;
    v42 = 0LL;
    v43 = 0;
    v30 = 0;
    v31 = 0;
    v27[1] = v27;
    v27[0] = v27;
    v28[1] = v45[0];
    v28[0] = &v44;
    v32 = PopGetIdleTimesCallback;
    v36 = v28;
    p_Object = &Object;
    *(_OWORD *)BugCheckParameter2 = 0LL;
    Object = 393217LL;
    v40 = 0LL;
    v29 = 0;
    v41 = 0LL;
    v33 = a2;
    v34 = a3;
    v37 = 0;
    PopQueueTargetDpc((ULONG_PTR)BugCheckParameter2);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  if ( stru_140F10070.Spare32 )
    stru_140F10070.Spare32 = 0LL;
  _m_prefetchw(&stru_140F10070.1136);
  v16 = (char *)stru_140F10070.AutoBoostThreadState - 16;
  if ( ((unsigned __int64)stru_140F10070.AutoBoostThreadState & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v16 = 0LL;
  if ( ((__int64)stru_140F10070.AutoBoostThreadState & 2) != 0
    || (AutoBoostThreadState = stru_140F10070.AutoBoostThreadState,
        AutoBoostThreadState != (void *)_InterlockedCompareExchange64(
                                          (volatile signed __int64 *)&stru_140F10070.AutoBoostThreadState,
                                          (signed __int64)v16,
                                          (signed __int64)stru_140F10070.AutoBoostThreadState)) )
  {
    ExfReleasePushLock(&stru_140F10070.AutoBoostThreadState);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F10070.1136);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19);
}
