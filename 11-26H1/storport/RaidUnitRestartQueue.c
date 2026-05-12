/*
 * XREFs of RaidUnitRestartQueue @ 0x140029650
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x140028050 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaUnitUnlockQueueSrb @ 0x140028080 (RaUnitUnlockQueueSrb.c)
 *     RaidAdapterResumeUnit @ 0x140028A9C (RaidAdapterResumeUnit.c)
 *     RaidSetUnitPauseTimer @ 0x140028BD4 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterDeviceReady @ 0x140060B5C (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x14006C160 (RaidCompletionDpcRoutine.c)
 *     RaUnitReleaseQueueSrb @ 0x14009E89C (RaUnitReleaseQueueSrb.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1400A6948 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1400A94B0 (RaidUnitRestartQueueDpcRoutine.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x140022EC0 (RiNormalizeDeviceQueue.c)
 *     RaidAdapterRestartGateway @ 0x14002F760 (RaidAdapterRestartGateway.c)
 *     StorSubmitIoGatewayItem @ 0x1400563B0 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidUnitRestartQueue(__int64 a1, unsigned __int8 a2)
{
  KIRQL v3; // r15
  int v4; // r14d
  KIRQL v5; // al
  signed __int64 v6; // rsi
  KIRQL v7; // r13
  signed __int64 v8; // rax
  char *v9; // rax
  signed __int64 v10; // rdi
  char v11; // r8
  char *v12; // rsi
  __int64 v13; // rax
  signed __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rdx
  bool v19; // zf
  KSPIN_LOCK *v20; // rcx
  __int64 v21; // rcx
  KIRQL v22; // al
  __int64 v23; // rdx
  int v24; // ecx
  __int128 v25; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h]
  int v27; // [rsp+48h] [rbp-30h]

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v3 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v3 = KfRaiseIrql(2u);
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792));
  v6 = *(_QWORD *)(a1 + 808);
  v7 = v5;
  if ( (v6 & 1) == 0 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 800));
    ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 800));
    do
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v6 | 1, v6);
      v19 = v6 == v8;
      v6 = v8;
    }
    while ( !v19 && (v8 & 1) == 0 );
  }
  v9 = RiNormalizeDeviceQueue(a1 + 720, 0);
  v10 = *(_QWORD *)(a1 + 808);
  v11 = 0;
  v12 = v9;
  if ( (v10 & 3) != 0 )
  {
    while ( !*(_DWORD *)(a1 + 748)
         && !*(_DWORD *)(a1 + 736)
         && !*(_DWORD *)(a1 + 752)
         && !*(_BYTE *)(a1 + 757)
         && !*(_BYTE *)(a1 + 759)
         && !*(_BYTE *)(a1 + 756)
         && *(int *)(a1 + 744) <= 0
         && !*(_BYTE *)(a1 + 758) )
    {
      v13 = v10;
      if ( (v10 & 1) != 0 )
      {
        if ( !v11 )
        {
          ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
          v11 = 1;
        }
        v13 = v10 ^ 1;
      }
      v14 = v13 ^ 2;
      if ( (v10 & 2) == 0 )
        v14 = v13;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v14, v10);
      v19 = v10 == v15;
      v10 = v15;
      if ( v19 )
      {
        if ( *(_BYTE *)(a1 + 757) || *(_BYTE *)(a1 + 759) || *(_BYTE *)(a1 + 756) || *(int *)(a1 + 744) > 0 )
        {
          v16 = *(_QWORD *)(a1 + 808);
          if ( (v16 & 3) == 0 )
          {
            do
            {
              v17 = v16;
              v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v16 | 2, v16);
            }
            while ( v17 != v16 && (v16 & 3) == 0 );
          }
        }
        break;
      }
      if ( (v15 & 3) == 0 )
        break;
    }
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792), v7);
  if ( v12 )
  {
    if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 728), v12, &v25) )
    {
      (*(void (__fastcall **)(_QWORD, char *, __int128 *, _QWORD))(a1 + 712))(
        *(_QWORD *)(a1 + 704),
        v12 - 120,
        &v25,
        a2);
      goto LABEL_46;
    }
    v18 = *(_QWORD *)(a1 + 728);
    if ( (*(_BYTE *)(*(_QWORD *)(v18 + 48) + 112LL) & 4) != 0 )
    {
      if ( FeatureFixKcsanRacyAccessV2 )
      {
        if ( *(_DWORD *)(v18 + 40) != 1699901262 || !*(_DWORD *)(v18 + 24) )
          goto LABEL_46;
        v19 = *(_DWORD *)(v18 + 192) == 0;
      }
      else
      {
        if ( *(_DWORD *)(v18 + 40) != 1699901262 || !*(_DWORD *)(v18 + 24) )
          goto LABEL_46;
        v19 = *(_DWORD *)(v18 + 192) == 0;
      }
      if ( v19 )
      {
        v20 = *(KSPIN_LOCK **)(a1 + 728);
        *(_DWORD *)(v18 + 40) = 0;
        RaidAdapterRestartGateway(v20);
      }
    }
  }
LABEL_46:
  if ( !v4 )
    KeLowerIrql(v3);
  if ( !*(_BYTE *)(a1 + 759) )
  {
    v21 = *(_QWORD *)(a1 + 32);
    if ( v21 )
    {
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 24));
      v23 = *(_QWORD *)(a1 + 32);
      v24 = *(_DWORD *)(v23 + 80);
      if ( (v24 & 8) != 0 )
      {
        *(_DWORD *)(v23 + 80) = v24 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x10u;
        KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v22);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL) = 0LL;
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 32) + 64LL),
          RaAcquirePowerRefWorkRoutine,
          CriticalWorkQueue,
          (PVOID)(*(_QWORD *)(a1 + 32) + 64LL));
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 24), v22);
      }
    }
  }
}
