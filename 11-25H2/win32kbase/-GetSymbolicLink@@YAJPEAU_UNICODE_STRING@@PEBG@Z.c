/*
 * XREFs of ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14011D4A4
 * Callers:
 *     GetWindowsDirectoryDevicePath @ 0x14011D32C (GetWindowsDirectoryDevicePath.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall GetSymbolicLink(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  WCHAR *v4; // rdi
  NTSTATUS v5; // ebx
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
  v5 = ZwOpenSymbolicLinkObject(&LinkHandle, 0x80000000, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    LinkTarget.Buffer = v4;
    *(_DWORD *)&LinkTarget.Length = 34078720;
    v5 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    ZwClose(LinkHandle);
    if ( v5 >= 0 )
      RtlCopyUnicodeString(DestinationString, &LinkTarget);
  }
  GreDeleteFastMutex((char *)v4);
  return (unsigned int)v5;
}
