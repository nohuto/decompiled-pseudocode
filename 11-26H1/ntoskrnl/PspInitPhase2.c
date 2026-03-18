/*
 * XREFs of PspInitPhase2 @ 0x140CD842C
 * Callers:
 *     PsInitSystem @ 0x140C7FD24 (PsInitSystem.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     RtlGetSystemTimePrecise @ 0x14021C830 (RtlGetSystemTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407EE148 (PspInitializeProtectedProcessParameters.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     RtlRandom @ 0x140AEAE20 (RtlRandom.c)
 *     PspInitializeSystemDlls @ 0x140CD8B80 (PspInitializeSystemDlls.c)
 */

bool PspInitPhase2()
{
  PEPROCESS v0; // rbx
  _KSCHEDULING_GROUP *UnbiasedInterruptTime; // rax
  _QWORD *v2; // rdx
  char v3; // al
  __int64 v4; // rcx
  char v5; // al
  void *ServerSiloGlobals; // rax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 0LL, 0LL);
  v0 = PsInitialSystemProcess;
  v0[1].ThreadListHead.Flink = (struct _LIST_ENTRY *)RtlGetSystemTimePrecise();
  PsInitialSystemProcess[3].ContextSwitches = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = (_KSCHEDULING_GROUP *)KiQueryUnbiasedInterruptTime();
  v2 = PsIdleProcess;
  PsInitialSystemProcess[3].SchedulingGroup = UnbiasedInterruptTime;
  v2[63] = PsInitialSystemProcess[1].ThreadListHead.Flink;
  v2[208] = PsInitialSystemProcess[3].ContextSwitches;
  v2[209] = PsInitialSystemProcess[3].SchedulingGroup;
  RtlGetSystemTimePrecise();
  PspSiloMonitorLock.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)((unsigned __int64)RtlRandom(&Seed) << 32);
  PspSiloMonitorLock.SavedApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)((__int64)PspSiloMonitorLock.SavedApcState.ApcListHead[0].Blink | RtlRandom(&Seed));
  if ( PspSehValidationPolicy )
  {
    if ( PspSehValidationPolicy == 2 )
      v3 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xF3 | 8;
    else
      v3 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xF3 | 4;
    *(_BYTE *)(MmWriteableSharedUserData + 725) = v3;
  }
  else
  {
    *(_BYTE *)(MmWriteableSharedUserData + 725) &= 0xF3u;
  }
  switch ( PspCurDirDevicesSkippedForDlls )
  {
    case 1:
      v4 = MmWriteableSharedUserData;
      v5 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xCF | 0x10;
      goto LABEL_14;
    case 2:
      v4 = MmWriteableSharedUserData;
      v5 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xCF | 0x20;
LABEL_14:
      *(_BYTE *)(v4 + 725) = v5;
      break;
    case -1:
      *(_BYTE *)(MmWriteableSharedUserData + 725) |= 0x30u;
      break;
    default:
      *(_BYTE *)(MmWriteableSharedUserData + 725) &= 0xCFu;
      break;
  }
  PspInitializeSystemDlls();
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  return (int)PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals) >= 0;
}
