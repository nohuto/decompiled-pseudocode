/*
 * XREFs of PpmIdleRegisterDefaultStates @ 0x1407CCAF4
 * Callers:
 *     PopNewProcessorCallback @ 0x1407CB5A0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PpmHvUseNativeAlgorithms @ 0x1404E55AC (PpmHvUseNativeAlgorithms.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PpmIdleRegisterDefaultStates()
{
  bool v0; // di
  __int64 v1; // rsi
  __int64 Pool2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9

  v0 = 0;
  v1 = 1LL;
  if ( !PpmHvUseNativeAlgorithms() && (HvlEnlightenments & 0x10000000) == 0 )
    v0 = (HvlEnlightenments & 0x200) != 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 19) = 1;
    *(_DWORD *)(Pool2 + 96) = v0 + 1;
    *(_DWORD *)(Pool2 + 104) = *(_DWORD *)(Pool2 + 104) & 0x7FFFFF00 | 0x8000008F;
    RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 120), L"HLT");
    *(_BYTE *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 64) = PpmIdleDefaultExecute;
    *(_QWORD *)(v3 + 72) = xHalTimerWatchdogStop;
    *(_QWORD *)(v3 + 80) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    *(_QWORD *)(v3 + 88) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    if ( v0 )
    {
      *(_QWORD *)(v3 + 24) = PpmIdleGuestPreselect;
      *(_QWORD *)(v3 + 32) = PpmIdleGuestTest;
      *(_QWORD *)(v3 + 48) = PpmIdleGuestPreExecute;
      *(_QWORD *)(v3 + 64) = PpmIdleGuestExecute;
      *(_QWORD *)(v3 + 72) = PpmIdleGuestComplete;
      *(_DWORD *)(v3 + 136) = *(_DWORD *)(v3 + 136) & 0x7FFFFF00 | 0x97;
      RtlInitUnicodeString((PUNICODE_STRING)(v3 + 152), L"Enlightened Idle");
      v1 = 2LL;
    }
    PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, v5, v6, v7);
    v4 = PopExecuteOnTargetProcessors(
           (__int64)&stru_140FC11F0.WaitRegister,
           (__int64)PpmIdleInstallDefaultStates,
           v3,
           v1);
    PopReleaseRwLock(&PpmIdlePolicyLock);
    ExFreePoolWithTag((PVOID)v3, 0x694D5050u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
