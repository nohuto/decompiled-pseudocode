/*
 * XREFs of PiOpenDriverRedirectedStateRootKey @ 0x1407A40EC
 * Callers:
 *     PipHardwareConfigClearStartOverrides @ 0x14079E448 (PipHardwareConfigClearStartOverrides.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     PiGetStateRootPath @ 0x140A10E38 (PiGetStateRootPath.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall PiOpenDriverRedirectedStateRootKey(__int64 a1, HANDLE *a2)
{
  int StateRootPath; // ebx
  NTSTATUS v4; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a2 )
  {
    StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
    if ( StateRootPath >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      StateRootPath = v4;
      if ( v4 == -1073741772 )
      {
        StateRootPath = -1073741275;
      }
      else if ( v4 >= 0 )
      {
        *a2 = KeyHandle;
        KeyHandle = 0LL;
      }
    }
  }
  else
  {
    StateRootPath = -1073741811;
  }
  RtlFreeAnsiString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)StateRootPath;
}
