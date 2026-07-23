/*
 * XREFs of PopSetHiberPersistedRegValue @ 0x140B1C110
 * Callers:
 *     PopSetHiberFileType @ 0x14077A2FC (PopSetHiberFileType.c)
 *     PopSetHiberFileSize @ 0x1407D3928 (PopSetHiberFileSize.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 */

__int64 __fastcall PopSetHiberPersistedRegValue(int a1, int a2, int *a3)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  NTSTATUS v6; // ebx
  int v7; // edi
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  int Data; // [rsp+C0h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+7Fh] BYREF

  Data = a2;
  v3 = a1;
  v4 = -1LL;
  *(&ObjectAttributes.Length + 1) = 0;
  KeyHandle = (HANDLE)-1LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ValueName = 0LL;
  DestinationString = 0LL;
  if ( PopHibernatePersistedRegLocation )
  {
    RtlInitUnicodeString(&DestinationString, PopHibernatePersistedRegLocation);
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v7 = (v6 >> 31) & 8;
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&ValueName, (&PopHiberPersistedRegValueDatabase)[3 * v3]);
      v7 = 0;
      v6 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
      if ( v6 < 0 )
        v7 = 10;
    }
    v4 = (__int64)KeyHandle;
  }
  else
  {
    v7 = 7;
    v6 = -1073741811;
  }
  if ( v4 != -1 )
    ZwClose((HANDLE)v4);
  if ( v6 < 0 && a3 )
    *a3 = v7;
  return (unsigned int)v6;
}
