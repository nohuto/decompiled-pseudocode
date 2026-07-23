/*
 * XREFs of PiDrvDbEnumDriverStoreNodes @ 0x1407B8488
 * Callers:
 *     PiDrvDbInit @ 0x1407B889C (PiDrvDbInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140728AC0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14072A9A0 (ZwQueryDirectoryObject.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407BA098 (PiDrvDbRegisterNodeCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbEnumDriverStoreNodes(__int64 a1)
{
  _WORD *Pool2; // rbx
  NTSTATUS v2; // edi
  BOOLEAN RestartScan; // al
  NTSTATUS v4; // eax
  PCWSTR *v5; // rdi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ReturnLength; // [rsp+B0h] [rbp+30h] BYREF
  int v10; // [rsp+B4h] [rbp+34h]
  ULONG Context; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE DirectoryHandle; // [rsp+C8h] [rbp+48h] BYREF

  v10 = HIDWORD(a1);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  Context = 0;
  ReturnLength = 0;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      for ( RestartScan = 1; ; RestartScan = 0 )
      {
        v4 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, 0x400u, 1u, RestartScan, &Context, &ReturnLength);
        v2 = v4;
        if ( v4 == -2147483622 )
          break;
        if ( v4 < 0 )
          goto LABEL_12;
        v5 = (PCWSTR *)Pool2;
        if ( *Pool2 )
        {
          do
          {
            if ( !(unsigned __int8)PiDrvDbRegisterNodeCallback(v5[1]) )
              break;
            v5 += 4;
          }
          while ( *(_WORD *)v5 );
        }
      }
      v2 = 0;
    }
    else
    {
      v2 = -1073741670;
    }
  }
LABEL_12:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v2;
}
