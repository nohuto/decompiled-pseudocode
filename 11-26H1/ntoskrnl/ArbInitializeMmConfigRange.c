/*
 * XREFs of ArbInitializeMmConfigRange @ 0x140CBB840
 * Callers:
 *     HalpPciReportMmConfigAddressRange @ 0x140CB92C8 (HalpPciReportMmConfigAddressRange.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall ArbInitializeMmConfigRange(ULONG *Data)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  ULONG DataSize; // [rsp+28h] [rbp-48h]
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = &ValueName;
  *(_QWORD *)&ValueName.Length = 7733366LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    *(_DWORD *)&ValueName.Length = 2228258;
    ValueName.Buffer = L"ReservedResources";
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &ValueName;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    if ( v3 >= 0 )
    {
      ValueName.Buffer = L"MmConfigRange";
      DataSize = *Data;
      *(_DWORD *)&ValueName.Length = 1703962;
      v3 = ZwSetValueKey(Handle, &ValueName, 0, 0xAu, Data, DataSize);
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
    return v3;
  }
  return result;
}
