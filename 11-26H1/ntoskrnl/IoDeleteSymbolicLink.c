/*
 * XREFs of IoDeleteSymbolicLink @ 0x140B39700
 * Callers:
 *     DifIoDeleteSymbolicLinkWrapper @ 0x14065B780 (DifIoDeleteSymbolicLinkWrapper.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x140725710 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x140725B10 (ZwOpenSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName)
{
  int TemporaryObject; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+10h] BYREF

  ObjectAttributes.ObjectName = SymbolicLinkName;
  LinkHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  TemporaryObject = ZwOpenSymbolicLinkObject(&LinkHandle, 0x10000u, &ObjectAttributes);
  if ( TemporaryObject >= 0 )
  {
    TemporaryObject = ZwMakeTemporaryObject(LinkHandle);
    if ( TemporaryObject >= 0 )
      ZwClose(LinkHandle);
  }
  return TemporaryObject;
}
