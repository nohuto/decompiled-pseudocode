/*
 * XREFs of PopScanIdleList @ 0x1404C65A0
 * Callers:
 *     PopSystemIdleWorker @ 0x140A3BBE0 (PopSystemIdleWorker.c)
 * Callees:
 *     PopRequestPowerIrp @ 0x14026FDC4 (PopRequestPowerIrp.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1404C69C0 (PopDiagTraceDeviceIdleCheck.c)
 *     PopGetPowerSettingValue @ 0x1404CF78C (PopGetPowerSettingValue.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1404F66E0 (PopDiagTraceDiskIdleCheck.c)
 *     PopCoalescingCheck @ 0x140606D04 (PopCoalescingCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140609070 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PopSetPowerSettingValueAcDc @ 0x140A3E450 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140A3E9D0 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopScanIdleList(int a1, unsigned __int64 a2)
{
  int v2; // r15d
  unsigned __int64 v3; // rsi
  int v4; // ebx
  int v5; // r12d
  char v6; // r13
  unsigned __int64 v7; // rdi
  KIRQL v8; // al
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int PriorityFloorSummary; // r8d
  __int64 v14; // rbx
  __int64 PowerSettingConfiguration; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned int v19; // r12d
  __int64 *v20; // rbx
  unsigned __int32 v21; // r15d
  signed __int32 v22; // eax
  unsigned __int32 v23; // esi
  unsigned int *v24; // rdi
  unsigned __int32 v25; // r8d
  unsigned int v26; // edi
  unsigned int v27; // eax
  unsigned int v28; // r9d
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // eax
  __int64 v34; // [rsp+30h] [rbp-48h]
  int v35; // [rsp+40h] [rbp-38h]
  unsigned int v36; // [rsp+44h] [rbp-34h]
  unsigned int v37; // [rsp+48h] [rbp-30h] BYREF
  int v38; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v39; // [rsp+50h] [rbp-28h]
  unsigned int v40; // [rsp+54h] [rbp-24h]
  unsigned int v41; // [rsp+58h] [rbp-20h]
  unsigned __int64 v42; // [rsp+60h] [rbp-18h]
  unsigned __int64 v43; // [rsp+68h] [rbp-10h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+58h]
  int v47; // [rsp+D8h] [rbp+60h] BYREF

  v2 = a1;
  v38 = dword_140F106E8;
  v3 = a2;
  v41 = dword_140F106E4;
  v4 = 0;
  v47 = 0;
  v5 = 0;
  v37 = 0;
  v6 = 0;
  v39 = *((_DWORD *)qword_140F105C0 + 53);
  v40 = PopCurrentCoalescingSpindownTimeout;
  v35 = 0;
  v36 = 0;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v42 = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)&stru_140F12420.AbCompletedIoQoSBoostCount) / 0x989680uLL;
  v43 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  *(_QWORD *)&stru_140F12420.AbCompletedIoQoSBoostCount = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc(&qword_140F10808);
  NewIrql = v8;
  if ( BYTE4(stru_140E66FF0.KcsanThread) )
  {
    KeReleaseSpinLock(&qword_140F10808, v8);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v9 = (__int64 *)qword_140F10810;
    v10 = 1LL;
    if ( (__int64 *)qword_140F10810 != &qword_140F10810 )
    {
      v19 = v42;
      while ( 1 )
      {
        v20 = v9 - 4;
        v21 = _InterlockedExchange((volatile __int32 *)v9 - 7, 0);
        *((_DWORD *)v9 - 5) += v21;
        if ( v21 || *((_DWORD *)v20 + 2) )
          *(_DWORD *)v20 = 0;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)v20, v7, 0);
        v23 = v22;
        if ( !v22 || (v23 = v7 - v22, (_DWORD)v7 == v22) )
          *((_DWORD *)v20 + 14) = 1;
        v24 = (unsigned int *)(v20 + 2);
        if ( v38 != 1 )
          v24 = (unsigned int *)v20 + 5;
        v25 = v23;
        v26 = *v24;
        if ( *((_DWORD *)v20 + 12) == 1 )
        {
          if ( v26 == -1 )
            v26 = v39;
          v27 = PopCoalescingCheck(v40, v26, v23);
          v26 = v27;
          if ( v27 )
            ++v35;
          v28 = v41;
          v29 = *((_DWORD *)v20 + 25);
          if ( v41 > v27 )
            v28 = v27;
          v25 = v19 + *((_DWORD *)v20 + 24);
          v36 = v28;
          if ( v23 )
          {
            if ( v29 <= v19 )
              v32 = 0;
            else
              v32 = v29 - v19;
          }
          else
          {
            v30 = v29 + v19;
            v31 = v28;
            v32 = v28;
            if ( v30 <= v28 )
            {
              v31 = v19 + *((_DWORD *)v20 + 24);
              v32 = v30;
            }
            v25 = v31;
          }
          *((_DWORD *)v20 + 25) = v32;
          v10 = 1LL;
          *((_DWORD *)v20 + 24) = v25;
        }
        if ( v26
          && v25 >= v26
          && *((_DWORD *)v20 + 14) == 1
          && (v23 || (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v20 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v20[3], 1LL);
          LOBYTE(v10) = 2;
          if ( (int)PopRequestPowerIrp(
                      (void *)v20[3],
                      v10,
                      *((_DWORD *)v20 + 13),
                      (__int64)PopDeviceIdleCompletion,
                      0LL,
                      0,
                      0LL) >= 0 )
          {
            v33 = *((_DWORD *)v20 + 13);
            ++LODWORD(stru_140E66FF0.KcsanThread);
            *((_DWORD *)v20 + 14) = v33;
            *((_DWORD *)v20 + 3) = 0;
          }
        }
        else if ( *((_DWORD *)v20 + 12) == 1 && !v23 )
        {
          v6 = 1;
        }
        PopDiagTraceDeviceIdleCheck(v9 - 4, v23, v21);
        if ( *((_DWORD *)v20 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v9 - 4, v26, v36);
        v9 = (__int64 *)*v9;
        LODWORD(v7) = v43;
        if ( v9 == &qword_140F10810 )
          break;
        v10 = 1LL;
      }
      v5 = v47;
      v4 = v35;
      v3 = a2;
      v2 = a1;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KeReleaseSpinLock(&qword_140F10808, NewIrql);
    PriorityFloorSummary = stru_140F12420.PriorityFloorSummary;
    if ( stru_140F12420.PriorityFloorSummary )
      PriorityFloorSummary = --stru_140F12420.PriorityFloorSummary;
    if ( stru_140F12420.AbCompletedIoBoostCount )
      --stru_140F12420.AbCompletedIoBoostCount;
    if ( !v2
      || (v11 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v18 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v3 == v18) )
    {
      LOBYTE(stru_140E66FF0.AutoBoostThreadState) = 1;
    }
    else if ( v3 < v18 )
    {
      LOBYTE(stru_140E66FF0.AutoBoostThreadState) = 0;
    }
    if ( !v4 || v6 )
    {
      if ( !PriorityFloorSummary && !dword_140F106CC )
      {
        ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
        v14 = dword_140F106CC;
        PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_IDLE_BACKGROUND_TASK, 0xFFFFFFFFLL);
        if ( PowerSettingConfiguration )
        {
          v16 = *(_QWORD *)(PowerSettingConfiguration + 8 * v14 + 64);
          if ( v16 )
          {
            v17 = *(_DWORD *)(v16 + 4);
            v37 = v17;
            if ( v17 <= 4 )
            {
              memmove(&v47, (const void *)(v16 + 12), v17);
              v5 = v47;
            }
          }
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
        v47 = v5 + 1;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK, 4LL, &v47);
        v11 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        stru_140F12420.PriorityFloorSummary = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( *(int *)&stru_140F0F620.ResourceIndex >= 50
        && LOBYTE(stru_140E66FF0.AutoBoostThreadState)
        && !stru_140F12420.AbCompletedIoBoostCount
        && !dword_140F106CC )
      {
        PopGetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, v11, 0LL, &v47, 4, &v37, v34);
        ++v47;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, 0xFFFFFFFFLL, 0LL, 4LL, &v47);
        LOBYTE(stru_140E66FF0.AutoBoostThreadState) = 0;
        stru_140F12420.AbCompletedIoBoostCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
