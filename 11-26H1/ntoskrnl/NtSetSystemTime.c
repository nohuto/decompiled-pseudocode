/*
 * XREFs of NtSetSystemTime @ 0x14083C8F0
 * Callers:
 *     DifNtSetSystemTimeWrapper @ 0x140691980 (DifNtSetSystemTimeWrapper.c)
 *     ExpSetTimeZoneInformation @ 0x1408395BC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x1402153C0 (ExSystemTimeToLocalTime.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetSystemTime @ 0x1403CBB20 (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x140427DFC (PoNotifySystemTimeSet.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     HalQueryRealTimeClock @ 0x1404495B0 (HalQueryRealTimeClock.c)
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x14044A410 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x1404C0810 (ExLocalTimeToSystemTime.c)
 *     HalSetRealTimeClock @ 0x14057A830 (HalSetRealTimeClock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SeAuditSystemTimeChange @ 0x140818998 (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x140A968C0 (RtlIsMultiSessionSku.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     ExpSetSystemTime @ 0x140C0F524 (ExpSetSystemTime.c)
 */

NTSTATUS __cdecl NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rsi
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  unsigned __int8 v11; // di
  LARGE_INTEGER v12; // rax
  int v13; // [rsp+28h] [rbp-70h]
  BOOLEAN HasCapability[8]; // [rsp+40h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER Src; // [rsp+50h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+68h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-20h] BYREF

  Src.QuadPart = 0LL;
  SystemTimea.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  HasCapability[0] = 0;
  *(_QWORD *)&CapabilityName.Length = 2228256LL;
  CapabilityName.Buffer = L"systemManagement";
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( SystemTime )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    HasCapability[1] = PreviousMode;
    if ( !SeSinglePrivilegeCheck(*(LUID *)((char *)&PspSiloMonitorLock.116 + 4), PreviousMode)
      && (RtlIsMultiSessionSku() || RtlCapabilityCheck(0LL, &CapabilityName, HasCapability) < 0 || !HasCapability[0])
      || PsIsCurrentThreadInServerSilo() )
    {
      return -1073741727;
    }
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SystemTime & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      SystemTimea.QuadPart = RtlReadULong64FromUser(SystemTime);
    }
    else
    {
      RtlCopyVolatileMemory(&SystemTimea, SystemTime, 8uLL);
    }
    if ( PreviousMode && PreviousTime )
      ProbeForWrite(PreviousTime, 8uLL, 4u);
    if ( SystemTimea.HighPart > 0x20000000u )
      return -1073741811;
    ExAcquireTimeRefreshLockExclusive(v7);
    LOBYTE(v8) = 1;
    ExpSetSystemTime(v8, 0, 1, SystemTimea.LowPart, (__int64)&Src);
    SeAuditSystemTimeChange(Src.QuadPart, SystemTimea.QuadPart);
    ExReleaseTimeRefreshLockExclusive();
    if ( PreviousTime )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(PreviousTime, Src.QuadPart);
      else
        RtlCopyVolatileMemory(PreviousTime, &Src, 8uLL);
    }
    return 0;
  }
  if ( PsIsCurrentThreadInServerSilo() )
  {
    ExAcquireTimeRefreshLockExclusive(v9);
    ExpRefreshTimeZoneInformation(0LL);
    ExReleaseTimeRefreshLockExclusive();
    return 0;
  }
  v10 = -1073741811;
  ExAcquireTimeRefreshLockExclusive(v9);
  v11 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields)
    && RtlTimeFieldsToTime(&TimeFields, &Time)
    && (unsigned __int8)ExpRefreshTimeZoneInformation(0LL) )
  {
    v12.QuadPart = MEMORY[0xFFFFF78000000014];
    Src.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v11 )
      {
        ExLocalTimeToSystemTime(&Time, &SystemTimea);
        KeSetSystemTime((__int64)&SystemTimea, (__int64)&Src, 0);
        goto LABEL_30;
      }
      ExSystemTimeToLocalTime(&Src, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock((unsigned __int8 *)&TimeFields);
      v12 = Src;
    }
    SystemTimea = v12;
LABEL_30:
    PoNotifySystemTimeSet(
      (__int64 *)&SystemTimea,
      (__int64 *)&Src,
      3,
      (int)&Time,
      HIDWORD(CurrentServerSiloGlobals[76].Blink[27].Flink),
      v13,
      v11);
    v10 = 0;
  }
  ExReleaseTimeRefreshLockExclusive();
  return v10;
}
