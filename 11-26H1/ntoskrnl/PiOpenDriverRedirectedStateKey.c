/*
 * XREFs of PiOpenDriverRedirectedStateKey @ 0x140A3FA1C
 * Callers:
 *     PipHardwareConfigActivateService @ 0x140A3F950 (PipHardwareConfigActivateService.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1404D8620 (RtlUnicodeStringPrintfEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     IopAllocateUnicodeString @ 0x1409AFF18 (IopAllocateUnicodeString.c)
 *     PiGetStateRootPath @ 0x140A10E38 (PiGetStateRootPath.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiOpenDriverRedirectedStateKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  int StateRootPath; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  NTSTATUS v8; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v11 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v11, 0LL);
  if ( a1 && *((_QWORD *)a1 + 1) && *a1 >= 2u && a3 )
  {
    StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, LocationTypeRegistry, &DestinationString);
    if ( StateRootPath >= 0 )
    {
      v6 = *a1 + 2;
      v7 = v6 + DestinationString.Length;
      if ( v7 < v6 )
      {
        StateRootPath = -1073741675;
      }
      else if ( v7 <= 0xFFFE )
      {
        StateRootPath = IopAllocateUnicodeString((__int64)&v11, v7);
        if ( StateRootPath >= 0 )
        {
          StateRootPath = RtlUnicodeStringPrintfEx(&v11, 0LL, 0x800u, L"%wZ\\%wZ", &DestinationString, a1);
          if ( StateRootPath >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &v11;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v8 = ZwOpenKey(&KeyHandle, 0x30006u, &ObjectAttributes);
            StateRootPath = v8;
            if ( v8 == -1073741772 )
            {
              StateRootPath = -1073741275;
            }
            else if ( v8 >= 0 )
            {
              *a3 = KeyHandle;
              KeyHandle = 0LL;
            }
          }
        }
      }
      else
      {
        StateRootPath = -2147483643;
      }
    }
  }
  else
  {
    StateRootPath = -1073741811;
  }
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( v11.Buffer )
  {
    ExFreePool(v11.Buffer);
    v11 = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)StateRootPath;
}
