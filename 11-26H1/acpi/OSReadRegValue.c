/*
 * XREFs of OSReadRegValue @ 0x1400C8470
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006D900 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIInitGlobalHeapSize @ 0x1400AAC9C (ACPIInitGlobalHeapSize.c)
 *     ACPIOverrideUsb4Control @ 0x1400AB060 (ACPIOverrideUsb4Control.c)
 *     AcpiUseFlexibleOscHandoff @ 0x1400B3D60 (AcpiUseFlexibleOscHandoff.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400B6AA8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1400B6D14 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     ACPIInitShutdownNotification @ 0x1400B9A40 (ACPIInitShutdownNotification.c)
 *     ACPIThermalGetParameter @ 0x1400C7DF4 (ACPIThermalGetParameter.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400C89FC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitializeAMLI @ 0x1400D7A1C (ACPIInitializeAMLI.c)
 *     ACPIInitReadRegistryKeys @ 0x1400D7F6C (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1400D8B98 (AcpiDiagInitialize.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x14004EF4C (WPP_RECORDER_SF_LL.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  int v7; // edx
  unsigned int v8; // ebx
  NTSTATUS v10; // eax
  int v11; // edx
  NTSTATUS v12; // eax
  int v13; // edx
  unsigned int v14; // r13d
  WCHAR *Pool2; // rdi
  ULONG Length; // ebx
  int v17; // edx
  NTSTATUS v18; // eax
  int v19; // edx
  unsigned int v20; // eax
  const WCHAR *v21; // r15
  ULONG v22; // esi
  unsigned int v23; // ebx
  __int64 v24; // rcx
  NTSTATUS v25; // eax
  int v26; // edx
  int v27; // edx
  NTSTATUS v28; // [rsp+40h] [rbp-30h]
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+38h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  if ( !a2 )
  {
    v8 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        11,
        19,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v8);
    }
    return v8;
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v10 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  v8 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        11,
        20,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v10);
    }
    if ( !a2 )
      ZwClose(a2);
    return v8;
  }
  v12 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  v14 = -2147483643;
  v8 = v12;
  if ( v12 != -2147483643 && v12 != -1073741789 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        11,
        21,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v12);
    }
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(a2);
    if ( (v8 & 0x80000000) == 0 )
      return (unsigned int)-1073741823;
    return v8;
  }
  while ( 1 )
  {
    if ( v8 != -2147483643 )
    {
      Pool2 = 0LL;
      if ( v8 != -1073741789 )
        goto LABEL_31;
    }
    Length = ResultLength;
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, ResultLength, 1299211073LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_L(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          22,
          22,
          (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
          ResultLength);
      }
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(a2);
      return 3221225626LL;
    }
    v18 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformationAlign64, Pool2, Length, &ResultLength);
    v8 = v18;
    if ( v18 != -2147483643 && v18 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( v18 >= 0 )
  {
LABEL_31:
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(a2);
    if ( *(_DWORD *)Pool2 == 1 || *(_DWORD *)Pool2 == 7 )
    {
      v21 = Pool2 + 4;
      v22 = (ResultLength - 8) >> 1;
      v23 = 0;
      if ( v22 )
      {
        do
        {
          v24 = v22 - 1;
          if ( !v21[v24] )
            break;
          --v22;
        }
        while ( (_DWORD)v24 );
      }
      while ( v22 && *v21 )
      {
        RtlInitUnicodeString(&ValueName, v21);
        v25 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
        v28 = v25;
        if ( v25 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 2;
            WPP_RECORDER_SF_L(
              WPP_GLOBAL_Control->DeviceExtension,
              v26,
              22,
              24,
              (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
              v25);
            v25 = v28;
          }
          v14 = v25;
          goto LABEL_52;
        }
        v23 += DestinationString.MaximumLength;
        if ( *a4 >= v23 )
        {
          memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
          a3 += DestinationString.MaximumLength;
        }
        RtlFreeAnsiString(&DestinationString);
        v22 -= ValueName.Length >> 1;
        v21 += (unsigned __int64)ValueName.Length >> 1;
        if ( *(_DWORD *)Pool2 == 7 )
        {
          if ( !v22 )
            break;
          ++v21;
          --v22;
        }
      }
      if ( !v23 )
      {
        v23 = 1;
        if ( *a4 )
          *a3++ = 0;
      }
      if ( *(_DWORD *)Pool2 == 7 && *a4 >= ++v23 )
        *a3 = 0;
      ExFreePoolWithTag(Pool2, 0);
      if ( *a4 >= v23 )
      {
        *a4 = v23;
        return 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 2;
        WPP_RECORDER_SF_LL(
          WPP_GLOBAL_Control->DeviceExtension,
          v27,
          11,
          25,
          (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
          *a4,
          v23);
      }
      *a4 = v23;
    }
    else
    {
      v20 = *((_DWORD *)Pool2 + 1);
      if ( *a4 >= v20 )
      {
        memmove(a3, Pool2 + 4, v20);
        *a4 = *((_DWORD *)Pool2 + 1);
        ExFreePoolWithTag(Pool2, 0);
        return 0LL;
      }
      *a4 = v20;
LABEL_52:
      ExFreePoolWithTag(Pool2, 0);
    }
    return v14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 2;
    WPP_RECORDER_SF_L(
      WPP_GLOBAL_Control->DeviceExtension,
      v19,
      21,
      23,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      v18);
  }
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(a2);
  ExFreePoolWithTag(Pool2, 0);
  return v8;
}
