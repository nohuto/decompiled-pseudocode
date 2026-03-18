/*
 * XREFs of PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E0808
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407DF44C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x140215090 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x140451D20 (RtlTimeToTimeFields.c)
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopAdaptiveStandbyTraceSessionMetadata @ 0x1407E0B28 (PopAdaptiveStandbyTraceSessionMetadata.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopAdaptiveStandbyTraceBatteryUpdate(__int64 a1, unsigned int *a2, int a3, int a4, int a5)
{
  __int64 v5; // r12
  __int64 v8; // r15
  __int64 Pool2; // rdi
  __int64 v10; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v12; // r9
  wchar_t *v13; // rcx
  wchar_t *v14; // rcx
  TIME_FIELDS TimeFields; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v18[608]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a3;
  v8 = a4;
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    if ( *(_DWORD *)(a1 + 232) == 1 )
    {
      v10 = *(_QWORD *)(a1 + 224);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 232) != 2 )
      {
LABEL_10:
        ExFreePoolWithTag((PVOID)Pool2, 0x64416F50u);
        return;
      }
      v10 = *(_QWORD *)(a1 + 224) - 1LL;
    }
    SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
    RtlTimeToTimeFields(&LocalTime, &TimeFields);
    RtlStringCchPrintfW(
      (NTSTRSAFE_PWSTR)(Pool2 + 12),
      0x48uLL,
      L"Settings.Hibernate.Battery Updates.Update %d.Timestamp",
      *(unsigned int *)(a1 + 220));
    RtlStringCchPrintfW(
      (NTSTRSAFE_PWSTR)(Pool2 + 172),
      0x20uLL,
      L"%04d-%02d-%02dT%02d:%02d:%02d",
      (unsigned int)TimeFields.Year,
      TimeFields.Month,
      TimeFields.Day,
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second);
    RtlStringCchPrintfW(
      (NTSTRSAFE_PWSTR)(Pool2 + 252),
      0x48uLL,
      L"Settings.Hibernate.Battery Updates.Update %d.Battery Percent",
      *(unsigned int *)(a1 + 220));
    RtlStringCchPrintfW((NTSTRSAFE_PWSTR)(Pool2 + 412), 0x20uLL, L"%d%%", a2[4]);
    RtlStringCchPrintfW(
      (NTSTRSAFE_PWSTR)(Pool2 + 492),
      0x48uLL,
      L"Settings.Hibernate.Battery Updates.Update %d.Full Charge Capacity",
      *(unsigned int *)(a1 + 220));
    RtlStringCchPrintfW((NTSTRSAFE_PWSTR)(Pool2 + 652), 0x20uLL, L"%d", a2[2]);
    RtlStringCchPrintfW(
      (NTSTRSAFE_PWSTR)(Pool2 + 732),
      0x48uLL,
      L"Settings.Hibernate.Battery Updates.Update %d.Remaining Charge Capacity",
      *(unsigned int *)(a1 + 220));
    RtlStringCchPrintfW((NTSTRSAFE_PWSTR)(Pool2 + 892), 0x20uLL, L"%d", a2[3]);
    RtlStringCchPrintfW(
      (NTSTRSAFE_PWSTR)(Pool2 + 972),
      0x48uLL,
      L"Settings.Hibernate.Battery Updates.Update %d.RS Reject Reason",
      *(unsigned int *)(a1 + 220));
    *(_QWORD *)(Pool2 + 1120) = (&PopAdaptiveStandbyRejectReasonStrings)[v5];
    IsEnabledDeviceUsageNoInline = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
    v12 = *(unsigned int *)(a1 + 220);
    v13 = (wchar_t *)(Pool2 + 1212);
    if ( IsEnabledDeviceUsageNoInline )
    {
      RtlStringCchPrintfW(v13, 0x48uLL, L"Settings.Hibernate.Battery Updates.Update %d.Hibernate Reject Reason", v12);
      *(_QWORD *)(Pool2 + 1360) = (&PopAdaptiveStandbyRejectReasonStrings)[v8];
      RtlStringCchPrintfW(
        (NTSTRSAFE_PWSTR)(Pool2 + 1452),
        0x48uLL,
        L"Settings.Hibernate.Battery Updates.Update %d.Battery Region",
        *(unsigned int *)(a1 + 220));
      v14 = (&PopAdaptiveStandbyRegionStrings)[*(int *)(a1 + 200)];
    }
    else
    {
      RtlStringCchPrintfW(
        v13,
        0x48uLL,
        L"Settings.Hibernate.Battery Updates.Update %d.Hibernate Reject Reason (Budget)",
        v12);
      *(_QWORD *)(Pool2 + 1360) = (&PopAdaptiveStandbyRejectReasonStrings)[v8];
      RtlStringCchPrintfW(
        (NTSTRSAFE_PWSTR)(Pool2 + 1452),
        0x48uLL,
        L"Settings.Hibernate.Battery Updates.Update %d.Hibernate Reject Reason (Reserve)",
        *(unsigned int *)(a1 + 220));
      v14 = (&PopAdaptiveStandbyRejectReasonStrings)[a5];
    }
    *(_QWORD *)(Pool2 + 1600) = v14;
    PopAdaptiveStandbyTraceSessionMetadata(v10, 7LL, Pool2, v18);
    goto LABEL_10;
  }
}
