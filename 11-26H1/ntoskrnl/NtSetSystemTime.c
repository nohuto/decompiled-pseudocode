/*
 * XREFs of NtSetSystemTime @ 0x1408366B0
 * Callers:
 *     DifNtSetSystemTimeWrapper @ 0x14068DDA0 (DifNtSetSystemTimeWrapper.c)
 *     ExpSetTimeZoneInformation @ 0x14083337C (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x140215090 (ExSystemTimeToLocalTime.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetSystemTime @ 0x1403C1C20 (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14043919C (PoNotifySystemTimeSet.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     HalQueryRealTimeClock @ 0x140451480 (HalQueryRealTimeClock.c)
 *     RtlTimeToTimeFields @ 0x140451D20 (RtlTimeToTimeFields.c)
 *     RtlTimeFieldsToTime @ 0x1404522E0 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x1404C6E60 (ExLocalTimeToSystemTime.c)
 *     HalSetRealTimeClock @ 0x140578300 (HalSetRealTimeClock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     SeAuditSystemTimeChange @ 0x140812B38 (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A66A6C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A66AE4 (ExReleaseTimeRefreshLockExclusive.c)
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x140A91D70 (RtlIsMultiSessionSku.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     ExpSetSystemTime @ 0x140C09314 (ExpSetSystemTime.c)
 */

__int64 __fastcall NtSetSystemTime(void *Src, _QWORD *a2)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rsi
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned __int8 v11; // di
  LARGE_INTEGER v12; // rax
  int v13; // [rsp+28h] [rbp-70h]
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER Srca; // [rsp+50h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-30h] BYREF
  TIME_FIELDS TimeFields; // [rsp+78h] [rbp-20h] BYREF

  Srca.QuadPart = 0LL;
  SystemTime.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  *(_QWORD *)&String2.Length = 2228256LL;
  String2.Buffer = L"systemManagement";
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( Src )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.SystemCallNumber, PreviousMode) )
    {
      if ( !(unsigned __int8)RtlIsMultiSessionSku() )
        RtlCapabilityCheck(0LL, &String2);
      return 3221225569LL;
    }
    if ( PsIsCurrentThreadInServerSilo() )
      return 3221225569LL;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      SystemTime.QuadPart = RtlReadULong64FromUser(Src);
    }
    else
    {
      RtlCopyVolatileMemory(&SystemTime, Src, 8uLL);
    }
    if ( PreviousMode && a2 )
      ProbeForWrite(a2, 8uLL, 4u);
    if ( SystemTime.HighPart > 0x20000000u )
      return 3221225485LL;
    ExAcquireTimeRefreshLockExclusive(v7);
    LOBYTE(v8) = 1;
    ExpSetSystemTime(v8, 0, 1, SystemTime.LowPart, (__int64)&Srca);
    SeAuditSystemTimeChange(Srca.QuadPart, SystemTime.QuadPart);
    ExReleaseTimeRefreshLockExclusive();
    if ( a2 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a2, Srca.QuadPart);
      else
        RtlCopyVolatileMemory(a2, &Srca, 8uLL);
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
    Srca.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v11 )
      {
        ExLocalTimeToSystemTime(&Time, &SystemTime);
        KeSetSystemTime((__int64)&SystemTime, (__int64)&Srca, 0);
        goto LABEL_29;
      }
      ExSystemTimeToLocalTime(&Srca, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock((unsigned __int8 *)&TimeFields);
      v12 = Srca;
    }
    SystemTime = v12;
LABEL_29:
    PoNotifySystemTimeSet(
      (void **)&SystemTime,
      (__int64 *)&Srca,
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
