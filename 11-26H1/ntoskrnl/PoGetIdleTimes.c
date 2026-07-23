/*
 * XREFs of PoGetIdleTimes @ 0x14021A3C0
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x140A75F30 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     PopGetIdleTimesCallback @ 0x14021A720 (PopGetIdleTimesCallback.c)
 *     PopQueueTargetDpc @ 0x14021AB1C (PopQueueTargetDpc.c)
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  __int64 Number; // rdx
  int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // bl
  int IdleTimesCallback; // esi
  signed __int64 v15; // rdx
  __int64 v16; // rtt
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 *v21; // rdx
  __int64 v22; // rcx
  __int64 Object; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+5Ah] [rbp-A6h]
  __int16 v28; // [rsp+5Eh] [rbp-A2h]
  __int64 (__fastcall *v29)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 *p_Object; // [rsp+78h] [rbp-88h]
  _QWORD *v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+8Ch] [rbp-74h]
  _OWORD v36[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v40[33]; // [rsp+E8h] [rbp-18h] BYREF

  memset_0(&v39, 0, 0x108uLL);
  if ( ProcNumber->Reserved )
    goto LABEL_30;
  if ( !ProcNumber->Group && !ProcNumber->Number )
  {
    v8 = 0;
    goto LABEL_9;
  }
  if ( ProcNumber->Group >= (unsigned __int16)KiActiveGroups
    || (Number = ProcNumber->Number, (unsigned __int8)Number >= 0x40u) )
  {
LABEL_30:
    v8 = -1;
    goto LABEL_9;
  }
  v7 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16
                                                                                 * (unsigned __int64)ProcNumber->Group].Flink
       + Number);
  if ( !v7 )
    v7 = -1;
  v8 = v7;
LABEL_9:
  if ( v8 >= (unsigned int)KeNumberProcessors_0 )
    v9 = 0LL;
  else
    v9 = KiProcessorBlock[v8];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire(&PpmIdlePolicyLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PpmIdlePolicyLock, 0LL, v12, &PpmIdlePolicyLock);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v12 + 33) |= 2u;
    else
      *(_BYTE *)(v12 + 10) = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
  }
  IdleTimesCallback = PopGetIdleTimesCallback(v9, a2, a3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    v39 = 2097153LL;
    memset_0(v40, 0, 0x100uLL);
    v18 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock
          + KeGetProcessorIndexFromNumber(ProcNumber));
    v19 = v18 & 0x3F;
    v20 = v18 >> 6;
    if ( (unsigned __int16)v39 <= (unsigned int)v20 )
    {
      if ( WORD1(v39) <= (unsigned int)v20 )
        goto LABEL_33;
      LOWORD(v39) = v20 + 1;
    }
    v21 = &v40[v20];
    v22 = *v21;
    _bittestandset64(&v22, v19);
    *v21 = v22;
LABEL_33:
    v35 = 0;
    v37 = 0LL;
    v38 = 0;
    v27 = 0;
    v28 = 0;
    v24[1] = v24;
    v24[0] = v24;
    v25[1] = v40[0];
    v25[0] = &v39;
    v29 = PopGetIdleTimesCallback;
    v33 = v25;
    p_Object = &Object;
    memset(v36, 0, sizeof(v36));
    Object = 393217LL;
    v26 = 0;
    v30 = a2;
    v31 = a3;
    v34 = 0;
    PopQueueTargetDpc((ULONG_PTR)v36);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  if ( PpmIdlePolicyLock.Header.WaitListHead.Flink )
    PpmIdlePolicyLock.Header.WaitListHead.Flink = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  v15 = *(_QWORD *)&PpmIdlePolicyLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&PpmIdlePolicyLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( (PpmIdlePolicyLock.Header.Type & 2) != 0
    || (v16 = *(_QWORD *)&PpmIdlePolicyLock.Header.Lock,
        v16 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&PpmIdlePolicyLock,
                 v15,
                 *(signed __int64 *)&PpmIdlePolicyLock.Header.Lock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock, v15);
  }
  KeAbPostRelease(&PpmIdlePolicyLock);
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
