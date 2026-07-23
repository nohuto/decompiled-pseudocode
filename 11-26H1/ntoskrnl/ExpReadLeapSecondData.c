/*
 * XREFs of ExpReadLeapSecondData @ 0x14083C19C
 * Callers:
 *     ExInitializeLeapSecondData @ 0x14083B934 (ExInitializeLeapSecondData.c)
 *     ExpLeapSecondDataRegistryNotifyHandler @ 0x14083BEB0 (ExpLeapSecondDataRegistryNotifyHandler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x14072A440 (ZwNotifyChangeKey.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x14082DAF0 (EtwTraceLeapSecondDataParseFailure.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x14082DBC8 (EtwTraceLeapSecondDataUpdate.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x14083BE14 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x14083C0A0 (ExpParseAndUpdateLeapSecondData.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpReadLeapSecondData(bool *a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rsi
  void *Pool2; // r14
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rdi
  struct _LIST_ENTRY *Flink; // rdi
  bool v13; // r15
  int v14; // r15d
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  int updated; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF
  int v21; // [rsp+64h] [rbp-1Ch]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]

  ResultLength = 0;
  CurrentThread = KeGetCurrentThread();
  KeyHandle = 0LL;
  Blink = 0LL;
  Pool2 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue,
      v9,
      (__int64)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( PspSiloMonitorLock.Timer.TimerListEntry.Blink )
  {
    Flink = PspSiloMonitorLock.Timer.TimerListEntry.Blink->Flink;
    Blink = PspSiloMonitorLock.Timer.TimerListEntry.Blink;
  }
  else
  {
    if ( ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle) < 0
      || (Blink = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL)) == 0LL )
    {
      Flink = (struct _LIST_ENTRY *)KeyHandle;
      goto LABEL_29;
    }
    Flink = (struct _LIST_ENTRY *)KeyHandle;
  }
  Blink[1].Blink = (struct _LIST_ENTRY *)ExpLeapSecondDataRegistryNotifyHandler;
  Blink[2].Flink = 0LL;
  Blink->Blink = 0LL;
  if ( ZwNotifyChangeKey(
         Flink,
         0LL,
         (PIO_APC_ROUTINE)&Blink->Blink,
         (PVOID)1,
         (PIO_STATUS_BLOCK)&Blink[2].Blink,
         4u,
         0,
         0LL,
         0,
         1u) >= 0 )
  {
    v13 = 1;
    if ( ZwQueryValueKey(
           Flink,
           (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v21 == 4
      && v22 == 4 )
    {
      v13 = v23 != 0;
    }
    *a1 = v13;
    v14 = *((_DWORD *)a1 + 1);
    v15 = ZwQueryValueKey(
            Flink,
            (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
            KeyValuePartialInformation,
            0LL,
            0,
            &ResultLength);
    if ( v15 == -1073741789 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
LABEL_24:
        if ( a2 )
        {
          ExAcquireTimeRefreshLockExclusive(v16);
          ExpRefreshTimeZoneInformation(0LL);
          ExReleaseTimeRefreshLockExclusive();
        }
        EtwTraceLeapSecondDataUpdate(1, *a1, *((_DWORD *)a1 + 1), v14);
        if ( !PspSiloMonitorLock.Timer.TimerListEntry.Blink )
        {
          PspSiloMonitorLock.Timer.TimerListEntry.Blink = Blink;
          Blink->Flink = Flink;
        }
        Blink = 0LL;
        Flink = 0LL;
        goto LABEL_29;
      }
      v15 = ZwQueryValueKey(
              Flink,
              (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
              KeyValuePartialInformation,
              Pool2,
              ResultLength,
              &ResultLength);
    }
    if ( v15 >= 0 )
    {
      updated = ExpParseAndUpdateLeapSecondData((__int64)Pool2, (__int64)a1);
      HIDWORD(PspSiloMonitorLock.KernelStack) = updated;
      if ( updated )
        EtwTraceLeapSecondDataParseFailure(updated);
    }
    goto LABEL_24;
  }
LABEL_29:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue);
  KeLeaveCriticalRegion();
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x6453704Cu);
  if ( Blink )
  {
    ExFreePoolWithTag(Blink, 0x6453704Cu);
    PspSiloMonitorLock.Timer.TimerListEntry.Blink = 0LL;
  }
  if ( Flink )
    ZwClose(Flink);
}
