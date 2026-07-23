/*
 * XREFs of IoCreateUnprotectedSymbolicLink @ 0x140798E90
 * Callers:
 *     DifIoCreateUnprotectedSymbolicLinkWrapper @ 0x14065EF30 (DifIoCreateUnprotectedSymbolicLinkWrapper.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1407298C0 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateUnprotectedSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int v2; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+10h] BYREF

  ObjectAttributes.ObjectName = SymbolicLinkName;
  LinkHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 592LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, DeviceName);
  if ( v2 >= 0 )
    ZwClose(LinkHandle);
  return v2;
}
