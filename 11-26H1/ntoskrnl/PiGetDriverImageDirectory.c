/*
 * XREFs of PiGetDriverImageDirectory @ 0x140B01014
 * Callers:
 *     IoGetDriverDirectory @ 0x140B00ED0 (IoGetDriverDirectory.c)
 * Callees:
 *     IoQueryFullDriverPath @ 0x14040DCA0 (IoQueryFullDriverPath.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiGetDriverImageDirectory(__int64 a1, HANDLE *a2)
{
  int v4; // ebx
  unsigned __int16 Length; // ax
  unsigned __int64 v6; // rcx
  wchar_t v7; // dx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  DestinationString = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = IoQueryFullDriverPath(a1, &DestinationString);
  if ( v4 >= 0 )
  {
    Length = DestinationString.Length;
    do
    {
      if ( Length < 2u )
        goto LABEL_14;
      Length -= 2;
      v6 = (unsigned __int64)Length >> 1;
      DestinationString.Length = Length;
      v7 = DestinationString.Buffer[v6];
    }
    while ( v7 != 47 && v7 != 92 );
    DestinationString.Buffer[v6] = 0;
    if ( DestinationString.Length <= 2u )
    {
LABEL_14:
      v4 = -1073741811;
      goto LABEL_9;
    }
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    if ( v4 >= 0 )
    {
      *a2 = FileHandle;
      FileHandle = 0LL;
    }
  }
LABEL_9:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
