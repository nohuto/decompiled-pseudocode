/*
 * XREFs of PopScanIdleList @ 0x1404BFF50
 * Callers:
 *     PopSystemIdleWorker @ 0x1409F7600 (PopSystemIdleWorker.c)
 * Callees:
 *     PopRequestPowerIrp @ 0x14026F334 (PopRequestPowerIrp.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x1404C0370 (PopDiagTraceDeviceIdleCheck.c)
 *     PopGetPowerSettingValue @ 0x1404C91BC (PopGetPowerSettingValue.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1404EFCF0 (PopDiagTraceDiskIdleCheck.c)
 *     PopCoalescingCheck @ 0x140609804 (PopCoalescingCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14060BC30 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1409FA3F0 (PopFindPowerSettingConfiguration.c)
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
  struct _KTHREAD *Object; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 Next_high; // rbx
  __int64 PowerSettingConfiguration; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned int v19; // r12d
  unsigned __int64 *v20; // rbx
  unsigned __int32 v21; // r15d
  signed __int32 v22; // eax
  unsigned __int32 v23; // esi
  unsigned __int32 *v24; // rdi
  unsigned __int32 v25; // r8d
  unsigned __int32 v26; // edi
  unsigned int v27; // eax
  unsigned int v28; // r9d
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned __int32 v31; // eax
  unsigned int v32; // edx
  int v33; // eax
  __int64 v34; // [rsp+30h] [rbp-48h]
  int v35; // [rsp+40h] [rbp-38h]
  unsigned int v36; // [rsp+44h] [rbp-34h]
  unsigned int v37; // [rsp+48h] [rbp-30h] BYREF
  int v38; // [rsp+4Ch] [rbp-2Ch]
  unsigned __int32 v39; // [rsp+50h] [rbp-28h]
  unsigned int v40; // [rsp+54h] [rbp-24h]
  unsigned int v41; // [rsp+58h] [rbp-20h]
  unsigned __int64 v42; // [rsp+60h] [rbp-18h]
  unsigned __int64 v43; // [rsp+68h] [rbp-10h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+58h]
  int v47; // [rsp+D8h] [rbp+60h] BYREF

  v2 = a1;
  v38 = *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[16];
  v3 = a2;
  v41 = *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[12];
  v4 = 0;
  v47 = 0;
  v5 = 0;
  v37 = 0;
  v6 = 0;
  v39 = *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 212);
  v40 = PopCurrentCoalescingSpindownTimeout;
  v35 = 0;
  v36 = 0;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v42 = (MEMORY[0xFFFFF78000000008] - qword_140F12AC0) / 0x989680uLL;
  v43 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  qword_140F12AC0 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160]);
  NewIrql = v8;
  if ( byte_140E676D4 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160], v8);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    Object = (struct _KTHREAD *)PpmIdlePolicyLock.WaitBlock[3].Object;
    v10 = 1LL;
    if ( PpmIdlePolicyLock.WaitBlock[3].Object != &PpmIdlePolicyLock.Spare18 )
    {
      v19 = v42;
      while ( 1 )
      {
        v20 = &Object[-1].Padding[1];
        v21 = _InterlockedExchange((volatile __int32 *)&Object[-1].Padding[1] + 1, 0);
        HIDWORD(Object[-1].Padding[2]) += v21;
        if ( v21 || *((_DWORD *)v20 + 2) )
          *(_DWORD *)v20 = 0;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)v20, v7, 0);
        v23 = v22;
        if ( !v22 || (v23 = v7 - v22, (_DWORD)v7 == v22) )
          *((_DWORD *)v20 + 14) = 1;
        v24 = (unsigned __int32 *)(v20 + 2);
        if ( v38 != 1 )
          v24 = (unsigned __int32 *)v20 + 5;
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
          && (v23 || (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v20 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v20[3], 1LL);
          LOBYTE(v10) = 2;
          if ( (int)PopRequestPowerIrp(
                      (struct _LIST_ENTRY *)v20[3],
                      v10,
                      *((_DWORD *)v20 + 13),
                      (__int64)PopDeviceIdleCompletion,
                      0LL,
                      0,
                      0LL) >= 0 )
          {
            v33 = *((_DWORD *)v20 + 13);
            ++dword_140E676D0;
            *((_DWORD *)v20 + 14) = v33;
            *((_DWORD *)v20 + 3) = 0;
          }
        }
        else if ( *((_DWORD *)v20 + 12) == 1 && !v23 )
        {
          v6 = 1;
        }
        PopDiagTraceDeviceIdleCheck(&Object[-1].Padding[1], v23, v21);
        if ( *((_DWORD *)v20 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(&Object[-1].Padding[1], v26, v36);
        Object = *(struct _KTHREAD **)&Object->Header.Lock;
        LODWORD(v7) = v43;
        if ( Object == (struct _KTHREAD *)&PpmIdlePolicyLock.Spare18 )
          break;
        v10 = 1LL;
      }
      v5 = v47;
      v4 = v35;
      v3 = a2;
      v2 = a1;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlockFill11[160], NewIrql);
    v12 = dword_140F12ACC;
    if ( dword_140F12ACC )
      v12 = --dword_140F12ACC;
    if ( dword_140F12AC8 )
      --dword_140F12AC8;
    if ( !v2
      || (v11 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v18 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v3 == v18) )
    {
      byte_140E676D8 = 1;
    }
    else if ( v3 < v18 )
    {
      byte_140E676D8 = 0;
    }
    if ( !v4 || v6 )
    {
      if ( !v12 && !HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) )
      {
        ExAcquireFastMutex(&PopSettingLock);
        Next_high = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
        PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_IDLE_BACKGROUND_TASK, 0xFFFFFFFFLL);
        if ( PowerSettingConfiguration )
        {
          v16 = *(_QWORD *)(PowerSettingConfiguration + 8 * Next_high + 64);
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
        KeReleaseGuardedMutex(&PopSettingLock);
        v47 = v5 + 1;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK, 4LL, &v47);
        v11 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        dword_140F12ACC = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( PopSIdle >= 50 && byte_140E676D8 && !dword_140F12AC8 && !HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) )
      {
        PopGetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, v11, 0LL, &v47, 4, &v37, v34);
        ++v47;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, 0xFFFFFFFFLL, 0LL, 4LL, &v47);
        byte_140E676D8 = 0;
        dword_140F12AC8 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
