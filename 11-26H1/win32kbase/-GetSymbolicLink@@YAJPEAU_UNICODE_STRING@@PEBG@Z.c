/*
 * XREFs of ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14011BB5C
 * Callers:
 *     GetWindowsDirectoryDevicePath @ 0x14011B9E0 (GetWindowsDirectoryDevicePath.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall GetSymbolicLink(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  WCHAR *v4; // rdi
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationStringa; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *LinkHandle; // [rsp+A0h] [rbp+30h] BYREF

  LinkHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationStringa = 0LL;
  LinkTarget = 0LL;
  v4 = (WCHAR *)Win32AllocPoolZInitImpl(256LL, 0x208uLL, 0x626B7355u);
  if ( !v4 )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationStringa, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationStringa;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenSymbolicLinkObject(&LinkHandle, 0x80000000, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    LinkTarget.Buffer = v4;
    *(_DWORD *)&LinkTarget.Length = 34078720;
    v6 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    ZwClose(LinkHandle);
    if ( v6 >= 0 )
      RtlCopyUnicodeString(DestinationString, &LinkTarget);
  }
  GreDeleteFastMutex((char *)v4, v5, v7, v8);
  return (unsigned int)v6;
}
