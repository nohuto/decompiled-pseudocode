/*
 * XREFs of RIMReadDigitizerToMonitorMappings @ 0x1401E534C
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14002C2BC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401DA730 (RIMEnableMonitorMappingForDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x140156378 (rimReadSingleDigitizerToMonitorMappings.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall RIMReadDigitizerToMonitorMappings(const UNICODE_STRING *a1, __int64 a2)
{
  int result; // eax
  char *v5; // rax
  __int64 v6; // r9
  char *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+28h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1258);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1259);
  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1260);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\Pen\\Digimon");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v5 = (char *)Win32AllocPoolZInitImpl(256LL, 0x20CuLL, 0x6D707352u);
    v7 = v5;
    if ( v5 )
    {
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0xAu, v6, v5, v9, (unsigned __int16 *)(a2 + 276));
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 0x14u, v8, v7, v10, (unsigned __int16 *)(a2 + 20));
      GreDeleteFastMutex(v7);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
