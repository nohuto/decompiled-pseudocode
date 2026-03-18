/*
 * XREFs of bNotIsKeySymbolicLink @ 0x14022BEA0
 * Callers:
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 *     bReadUserSystemEUDCRegistry @ 0x140206EE4 (bReadUserSystemEUDCRegistry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x14030DB0C (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     IsRegNameEqual @ 0x140225F14 (IsRegNameEqual.c)
 */

__int64 __fastcall bNotIsKeySymbolicLink(PCWSTR SourceString, PHANDLE KeyHandle, PHANDLE a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  v4 = 0;
  *KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *a3 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(KeyHandle, 0xF003Fu, &ObjectAttributes) < 0 )
    return 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 832;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes) < 0 )
    return 0LL;
  LOBYTE(v4) = (int)IsRegNameEqual(*KeyHandle, *a3, a4) >= 0;
  return v4;
}
