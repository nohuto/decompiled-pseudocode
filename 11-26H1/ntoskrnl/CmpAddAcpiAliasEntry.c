/*
 * XREFs of CmpAddAcpiAliasEntry @ 0x1408581CC
 * Callers:
 *     CmSetAcpiHwProfile @ 0x140857958 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpAddAcpiAliasEntry(
        void *a1,
        unsigned __int16 *a2,
        int a3,
        wchar_t *a4,
        ULONG Disposition,
        HANDLE KeyHandle,
        __int64 a7,
        int Data)
{
  unsigned int v10; // edi
  NTSTATUS v13; // ebx
  NTSTATUS v14; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  Data = 0;
  v10 = 0;
  Disposition = 0;
  RtlInitUnicodeString(&DestinationString, L"AcpiAlias");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v13 == -1073741772 )
    v13 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v13 < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    if ( v10 >= 0xC8 )
      goto LABEL_10;
    swprintf_s(a4, 0x80uLL, L"%04d", ++v10);
    RtlInitUnicodeString(&DestinationString, a4);
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v14 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
    v13 = v14;
    if ( v14 < 0 )
      break;
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( v14 != -1073741772 )
  {
LABEL_9:
    Handle = 0LL;
    goto LABEL_12;
  }
LABEL_10:
  v13 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v13 < 0 )
    goto LABEL_9;
  Data = *a2;
  RtlInitUnicodeString(&DestinationString, L"DockingState");
  ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
  RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
  ZwSetValueKey(Handle, &DestinationString, 0, 3u, a2 + 2, a2[1]);
  Data = a3;
  RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
  v13 = ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
LABEL_12:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v13;
}
