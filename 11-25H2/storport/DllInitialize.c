/*
 * XREFs of DllInitialize @ 0x1400A3DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_14006F09C @ 0x14006F09C (sub_14006F09C.c)
 *     sub_14006F6EC @ 0x14006F6EC (sub_14006F6EC.c)
 *     sub_14006F900 @ 0x14006F900 (sub_14006F900.c)
 *     sub_140070610 @ 0x140070610 (sub_140070610.c)
 *     sub_140070720 @ 0x140070720 (sub_140070720.c)
 *     sub_140070FE0 @ 0x140070FE0 (sub_140070FE0.c)
 *     sub_140089FC4 @ 0x140089FC4 (sub_140089FC4.c)
 *     sub_1400A5318 @ 0x1400A5318 (sub_1400A5318.c)
 *     sub_1400A5380 @ 0x1400A5380 (sub_1400A5380.c)
 *     sub_1400A53D4 @ 0x1400A53D4 (sub_1400A53D4.c)
 *     sub_1400A5428 @ 0x1400A5428 (sub_1400A5428.c)
 *     sub_1400A547C @ 0x1400A547C (sub_1400A547C.c)
 *     sub_1400A54D0 @ 0x1400A54D0 (sub_1400A54D0.c)
 *     sub_1400A5524 @ 0x1400A5524 (sub_1400A5524.c)
 *     sub_1400A5578 @ 0x1400A5578 (sub_1400A5578.c)
 *     sub_1400A55CC @ 0x1400A55CC (sub_1400A55CC.c)
 *     sub_1400A5620 @ 0x1400A5620 (sub_1400A5620.c)
 *     sub_1400A57FC @ 0x1400A57FC (sub_1400A57FC.c)
 *     sub_1400A5898 @ 0x1400A5898 (sub_1400A5898.c)
 *     sub_1400BC258 @ 0x1400BC258 (sub_1400BC258.c)
 *     sub_1401145C4 @ 0x1401145C4 (sub_1401145C4.c)
 *     sub_140121320 @ 0x140121320 (sub_140121320.c)
 *     sub_1401219EC @ 0x1401219EC (sub_1401219EC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_14017BC74 @ 0x14017BC74 (sub_14017BC74.c)
 *     sub_140182FF0 @ 0x140182FF0 (sub_140182FF0.c)
 *     sub_140183BB4 @ 0x140183BB4 (sub_140183BB4.c)
 *     sub_1401898D8 @ 0x1401898D8 (sub_1401898D8.c)
 *     sub_1401B9078 @ 0x1401B9078 (sub_1401B9078.c)
 */

__int64 DllInitialize()
{
  int v0; // ebx
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rax
  void *v7; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  int OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v12; // [rsp+5Ch] [rbp-ACh] BYREF
  int v13; // [rsp+60h] [rbp-A8h] BYREF
  int v14; // [rsp+64h] [rbp-A4h] BYREF
  int v15; // [rsp+68h] [rbp-A0h] BYREF
  int v16; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING v18; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE SystemInformation[12]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+C4h] [rbp-44h]
  unsigned int v21; // [rsp+CCh] [rbp-3Ch]
  struct _OSVERSIONINFOW VersionInformation; // [rsp+F8h] [rbp-10h] BYREF
  char v23; // [rsp+212h] [rbp+10Ah]
  _BYTE KeyValueInformation[4]; // [rsp+218h] [rbp+110h] BYREF
  int v25; // [rsp+21Ch] [rbp+114h]
  unsigned int Buffer[65]; // [rsp+224h] [rbp+11Ch] BYREF

  v0 = 0;
  memset(DestinationString, 0, sizeof(DestinationString));
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  v18 = 0LL;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  LOBYTE(OutputBuffer) = 0;
  memset_0(SystemInformation, 0, 0x40uLL);
  v15 = 0;
  v12 = 4;
  v13 = 0;
  v16 = 0;
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u) >= 0 && (_BYTE)OutputBuffer )
    byte_1401688AA = 1;
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
  {
    qword_140168410 = (unsigned __int64)v21 << 12;
    qword_140168818 = (unsigned __int64)v20 << 12;
  }
  byte_140168D81 = sub_140089FC4();
  byte_140168D65 = sub_1400A57FC();
  sub_1400A5620();
  byte_140168D64 = sub_1400A5898();
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  if ( (unsigned __int8)(v23 - 2) > 1u )
    byte_140168D80 = 1;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"SMR-HostManaged-Enabled");
  if ( (int)ZwQueryLicenseValue(&DestinationString[1], &v15, &v13, v12, &v12) >= 0 && v13 == 1 )
    byte_1401687E8 = 1;
  if ( !_InterlockedExchangeAdd(&dword_140168D70, 1u) )
  {
    sub_140183BB4();
    qword_140169498 = (__int64)&qword_140169490;
    qword_140169490 = &qword_140169490;
    ExInitializeResourceLite(&stru_140169420);
    sub_14006F900();
    stru_1401692A0.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)&stru_1401692A0.SectorSize;
    *(_QWORD *)&stru_1401692A0.SectorSize = &stru_1401692A0.SectorSize;
    ExInitializeResourceLite((PERESOURCE)&stru_1401692A0.DeviceExtension);
    sub_14006F6EC();
    qword_140169298 = (__int64)&qword_140169290;
    qword_140169290 = &qword_140169290;
    ExInitializeResourceLite(&Resource);
    RtlInitializeGenericTable(
      &Table,
      (PRTL_GENERIC_COMPARE_ROUTINE)CompareRoutine,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)AllocateRoutine,
      (PRTL_GENERIC_FREE_ROUTINE)FreeRoutine,
      0LL);
    ExInitializeResourceLite((PERESOURCE)&stru_1401692A0.DeviceQueue.32);
    sub_14006F09C();
    sub_14017BC74();
    sub_1401898D8();
    sub_1401B9078();
    byte_140168860 = (unsigned int)sub_1400A55CC() != 0;
    byte_140168748 = (unsigned int)sub_1400A5524() != 0;
    byte_14016875C = (unsigned int)sub_1400A54D0() != 0;
    byte_1401687D1 = (unsigned int)sub_1400A5578() != 0;
    byte_1401688AC = (unsigned int)sub_1400A53D4() != 0;
    byte_140168778 = (unsigned int)sub_1400A5428() != 0;
    byte_1401687D0 = (unsigned int)sub_1400A547C() != 0;
    byte_1401688BD = (unsigned int)sub_1400A5380() != 0;
    if ( (unsigned int)sub_1400567A0() )
      KeInitializeSpinLock(&qword_140169200);
  }
  dword_1401688B0 = KeQueryMaximumProcessorCountEx(0xFFFFu);
  dword_1401687C0 = KeGetRecommendedSharedDataAlignment();
  RtlInitUnicodeString(&v18, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v18;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DpcCompletionLimit");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      dword_140168440 = Buffer[0];
      if ( !Buffer[0] )
        dword_140168440 = -1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 3 )
    {
      word_140168464 = sub_1400BC258((PUCHAR)Buffer);
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbAllocationPolicy");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4 )
    {
      dword_140168418 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbMaximumSizeInBytes");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) < 0 )
    {
      LODWORD(v1) = 0x4000000;
      v2 = (unsigned __int64)qword_140168818 >> 6;
      if ( (unsigned __int64)qword_140168818 >> 6 >= 0x4000000 )
      {
        LODWORD(v1) = 0x40000000;
        if ( v2 <= 0x40000000 )
        {
          v1 = (unsigned __int64)qword_140168818 >> 6;
          if ( (v2 & 0xFFF) != 0 )
            LODWORD(v1) = v2 & 0x7FFFF000;
        }
      }
    }
    else
    {
      if ( v25 != 4 )
        goto LABEL_36;
      LODWORD(v1) = 0x40000000;
      dword_140168424 = Buffer[0];
      if ( Buffer[0] <= 0x40000000 )
      {
        if ( (Buffer[0] & 0xFFF) != 0 )
          dword_140168424 = Buffer[0] & 0x7FFFF000;
        goto LABEL_36;
      }
    }
    dword_140168424 = v1;
LABEL_36:
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MiniportBugActionPolicy");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4 )
    {
      dword_140168400 = Buffer[0];
      if ( Buffer[0] >= 3 )
        dword_140168400 = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"AsyncStart");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4 )
    {
      byte_1401688A8 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1401684AC = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1401684A8 = Buffer[0];
    }
    if ( dword_1401684A8 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryIoSizeDistributionEnabled");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v25 == 4
        && ResultLength[0] >= 4 )
      {
        dword_140168DB4 = Buffer[0];
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformancePeriod");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      v3 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v3 = 24LL;
        qword_140168480 = 36000000000LL * v3;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryErrorDataEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      dword_140168478 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      dword_140168498 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthPeriod");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      v4 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v4 = 24LL;
        dword_14016849C = v4;
        qword_140168490 = 36000000000LL * v4;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryCriticalEventEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      dword_140168DBC = Buffer[0];
      byte_140168DB8 = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryCriticalEventMaximum");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      dword_140168488 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ExtendedDSMCommandsSupported");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_140168789 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"FUAEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1401688BC = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ForwardedIo");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      sub_1400A5318();
      byte_1401688A9 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"QoSFlags");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1401691F8 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MaxPreAllocatedIoResourceCount");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4
      && Buffer[0] )
    {
      dword_140168438 = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DFxEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_140168449 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"OverrideDeviceUniqueIDCapability");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_14016841C = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableRuntimePower");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1401687E9 = Buffer[0] != 0;
    }
    dword_1401688A4 = 8;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ProcsPerGateway");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      dword_1401688A4 = Buffer[0];
      if ( Buffer[0] >= 4 )
      {
        if ( Buffer[0] > 0x10 )
          dword_1401688A4 = 16;
      }
      else
      {
        dword_1401688A4 = 4;
      }
    }
    if ( dword_1401688A4 > (unsigned int)dword_1401688B0 )
      dword_1401688A4 = dword_1401688B0;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MFNDEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1401688B6 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"CreateControlObject");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1401687B0 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableIEEE1667");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_1401688B4 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableNativeTcg");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_140168788 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableRegistryWatch");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_140168448 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KsrPowerDownOptimizationEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_14016841D = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableNVMeICE");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      v5 = Buffer[0];
      byte_140168466 = Buffer[0] != 0;
      if ( (unsigned int)sub_1400567A0() )
        byte_140168467 = v5 >= 2;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableNativeNVMeStack");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v25 == 4
      && ResultLength[0] >= 4 )
    {
      byte_14016874A = Buffer[0] != 0;
    }
    sub_140070720(DestinationString[0]);
    if ( byte_140168448 && (v6 = (_QWORD *)sub_1400143E0(64LL, 192LL, 1465016658LL, 0LL), (qword_140168808 = v6) != 0LL) )
    {
      *v6 = DestinationString[0];
      v6[1] = sub_140070720;
      sub_140070610((__int64)DestinationString[0], (__int64)v6);
      sub_140070FE0((__int64)qword_140168808);
      v7 = 0LL;
      DestinationString[0] = 0LL;
    }
    else
    {
      v7 = DestinationString[0];
    }
    if ( v7 )
      ZwClose(v7);
  }
  sub_1401145C4();
  if ( dword_140168D8C != -1 )
  {
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\Verifier");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"VerifyLevel");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v25 == 4
        && ResultLength[0] >= 4 )
      {
        dword_140168D8C |= Buffer[0];
        if ( dword_140168D8C != -1 && !dword_140168D88 && (unsigned __int8)sub_140182FF0() )
        {
          dword_140168D88 = 1;
          dword_140168D84 = 1;
        }
      }
      ZwClose(DestinationString[0]);
    }
    v14 = 1;
    EmClientQueryRuleState(&unk_14014EF50, &v14);
    if ( v14 == 2 && byte_140168D80 )
      byte_1401688B5 = 1;
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"StorageD3InModernStandby");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v25 == 4
        && ResultLength[0] >= 4 )
      {
        LOBYTE(v0) = Buffer[0] != 0;
        dword_140168460 = v0;
      }
      ZwClose(DestinationString[0]);
    }
    ExQueryTimerResolution(&dword_140168D60, &dword_140168D68, &v16);
    sub_140121320();
    sub_1401219EC();
  }
  return 0LL;
}
