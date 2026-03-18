/*
 * XREFs of PopAssociatePowerLimitRequest @ 0x1407CA800
 * Callers:
 *     PoCreatePowerLimitRequest @ 0x1407CA2A0 (PoCreatePowerLimitRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x140438170 (PopGetDope.c)
 *     PopCleanPowerLimitExtension @ 0x1406039E0 (PopCleanPowerLimitExtension.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140607C84 (PopThermalUpdateTelemetryClientCount.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PopAcquirePowerLimitInterface @ 0x1407CA744 (PopAcquirePowerLimitInterface.c)
 *     PopQueryPowerLimitAttributes @ 0x1407CB278 (PopQueryPowerLimitAttributes.c)
 *     PopRegisterTargetDeviceProtection @ 0x1407CB3E4 (PopRegisterTargetDeviceProtection.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407D3F9C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D4330 (PopDiagTracePowerLimitRequest.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopAssociatePowerLimitRequest(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *v4; // rdi
  __int64 v5; // rdx
  __int64 Dope; // rbp
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 Pool2; // rax
  int PowerLimitAttributes; // ebx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  struct _LIST_ENTRY *Blink; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  __int64 i; // r10
  __int64 v28; // rdx

  v4 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10828.SchedulerApc.Type, v5, v7, v8);
  if ( *(_QWORD *)(Dope + 72) )
    goto LABEL_11;
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.648);
  Pool2 = ExAllocatePool2(0x100uLL);
  v4 = (struct _LIST_ENTRY *)Pool2;
  if ( Pool2 )
  {
    v14 = (_QWORD *)(Pool2 + 16);
    v14[1] = v14;
    *v14 = v14;
    v4[2].Blink = 0LL;
    v4[2].Flink = 0LL;
    v4[3].Blink = (struct _LIST_ENTRY *)a2;
    PowerLimitAttributes = PopAcquirePowerLimitInterface((__int64)v4);
    if ( PowerLimitAttributes < 0 )
      goto LABEL_22;
    PowerLimitAttributes = PopQueryPowerLimitAttributes(v4);
    if ( PowerLimitAttributes < 0 )
      goto LABEL_22;
    PowerLimitAttributes = PopRegisterTargetDeviceProtection(v4);
    if ( PowerLimitAttributes < 0 )
      goto LABEL_22;
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10828.SchedulerApc.Type, v15, v16, v17);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      Blink = stru_140F10828.SchedulerApc.ApcListEntry.Blink;
      if ( stru_140F10828.SchedulerApc.ApcListEntry.Blink->Flink != (struct _LIST_ENTRY *)&stru_140F10828.SchedulerApcFill5[16] )
        goto LABEL_17;
      v4->Flink = &stru_140F10828.SchedulerApc.ApcListEntry;
      v4->Blink = Blink;
      Blink->Flink = v4;
      stru_140F10828.SchedulerApc.ApcListEntry.Blink = v4;
      *(_QWORD *)(Dope + 72) = v4;
      LOBYTE(v4[3].Flink) = 1;
      PopDiagTracePowerLimitExtension(v4, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_ADD);
      v4 = 0LL;
    }
LABEL_11:
    PopAcquireRwLockExclusive((unsigned __int64 *)(*(_QWORD *)(Dope + 72) + 32LL), v9, v10, v11);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(Dope + 72) + 72LL);
    v19 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 40) = v19;
    if ( !v19 || (v20 = ExAllocatePool2(0x100uLL), (*(_QWORD *)(a1 + 56) = v20) == 0LL) )
    {
      v21 = *(_QWORD *)(Dope + 72);
      PowerLimitAttributes = -1073741670;
      if ( v21 )
        PopReleaseRwLock((struct _KTHREAD *)(v21 + 32));
      PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.648);
      goto LABEL_21;
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(Dope + 72);
    v22 = *(_QWORD *)(Dope + 72) + 16LL;
    v23 = *(_QWORD **)(*(_QWORD *)(Dope + 72) + 24LL);
    if ( *v23 == v22 )
    {
      *(_QWORD *)a1 = v22;
      *(_QWORD *)(a1 + 8) = v23;
      *v23 = a1;
      *(_QWORD *)(v22 + 8) = a1;
      memmove(*(void **)(a1 + 40), *(const void **)(*(_QWORD *)(a1 + 64) + 88LL), 16LL * *(unsigned int *)(a1 + 32));
      v26 = 0LL;
      for ( i = MEMORY[0xFFFFF78000000008];
            (unsigned int)v26 < *(_DWORD *)(a1 + 32);
            *(_QWORD *)(104 * v25 + *(_QWORD *)(a1 + 56)) = i )
      {
        v28 = 2LL * (unsigned int)v26;
        v25 = (unsigned int)v26;
        v26 = (struct _KLOCK_ENTRIES *)(unsigned int)((_DWORD)v26 + 1);
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v28 + 8) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v28 + 12) = -1;
        v24 = 104 * v25;
      }
      *(_BYTE *)(a1 + 16) = 1;
      *(_BYTE *)(a1 + 48) = 1;
      PopThermalUpdateTelemetryClientCount(1, v24, v25, v26);
      PopDiagTracePowerLimitRequest(a1, POP_ETW_EVENT_POWER_LIMIT_REQUEST_ADD);
      PopReleaseRwLock((struct _KTHREAD *)(*(_QWORD *)(Dope + 72) + 32LL));
      PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.648);
      PowerLimitAttributes = 0;
LABEL_21:
      if ( !v4 )
        return (unsigned int)PowerLimitAttributes;
LABEL_22:
      PopCleanPowerLimitExtension(v4, v15);
      return (unsigned int)PowerLimitAttributes;
    }
LABEL_17:
    __fastfail(3u);
  }
  return (unsigned int)-1073741670;
}
