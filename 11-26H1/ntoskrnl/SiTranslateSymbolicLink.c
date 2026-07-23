/*
 * XREFs of SiTranslateSymbolicLink @ 0x14089B018
 * Callers:
 *     SiGetFirmwareSystemPartition @ 0x14089A7B0 (SiGetFirmwareSystemPartition.c)
 *     SiGetSystemDisk @ 0x14089A8E0 (SiGetSystemDisk.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x14089BDAC (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiGetBootDeviceName @ 0x140B09BA0 (SiGetBootDeviceName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x14072A6E0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x14072AD40 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall SiTranslateSymbolicLink(PCWSTR SourceString, wchar_t **a2)
{
  NTSTATUS result; // eax
  unsigned __int16 v4; // di
  wchar_t *Buffer; // rax
  NTSTATUS v6; // ebx
  UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedLength; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE LinkHandle; // [rsp+A8h] [rbp+38h] BYREF

  *(_QWORD *)&LinkTarget.Length = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  LinkHandle = 0LL;
  LinkTarget.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&LinkTarget, 0LL);
    v4 = 0;
    ReturnedLength = 0;
    do
    {
      while ( 1 )
      {
        v6 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
        if ( v6 == -1073741789 )
          break;
        ZwClose(LinkHandle);
        Buffer = LinkTarget.Buffer;
        LinkHandle = 0LL;
        if ( v6 < 0 )
          goto LABEL_13;
        LinkTarget.Buffer[(unsigned __int64)LinkTarget.Length >> 1] = 0;
        ObjectAttributes.ObjectName = &LinkTarget;
        LinkTarget.MaximumLength = v4;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) < 0 )
        {
          Buffer = LinkTarget.Buffer;
          v6 = 0;
          *a2 = LinkTarget.Buffer;
          goto LABEL_10;
        }
      }
      if ( LinkTarget.Buffer )
        ExFreePoolWithTag(LinkTarget.Buffer, 0);
      LinkTarget.MaximumLength = ReturnedLength;
      v4 = ReturnedLength + 2;
      Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
      LinkTarget.Buffer = Buffer;
    }
    while ( Buffer );
    v6 = -1073741670;
LABEL_10:
    if ( LinkHandle )
    {
      ZwClose(LinkHandle);
      Buffer = LinkTarget.Buffer;
      LinkHandle = 0LL;
    }
    if ( v6 < 0 )
    {
LABEL_13:
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
    }
    return v6;
  }
  return result;
}
