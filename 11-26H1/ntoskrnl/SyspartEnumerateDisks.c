/*
 * XREFs of SyspartEnumerateDisks @ 0x14089AB98
 * Callers:
 *     BiGetNtPartitionPath @ 0x1408987B8 (BiGetNtPartitionPath.c)
 *     BiResolveLocate @ 0x14089933C (BiResolveLocate.c)
 *     SiGetEfiSystemDevice @ 0x14089B348 (SiGetEfiSystemDevice.c)
 *     ExpTranslateNtPath @ 0x140B597F4 (ExpTranslateNtPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140728AC0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14072A9A0 (ZwQueryDirectoryObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SiIsValidDiskDevice @ 0x14089AAC0 (SiIsValidDiskDevice.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 SyspartEnumerateDisks()
{
  NTSTATUS v0; // ebx
  ULONG i; // edi
  wchar_t **Pool2; // rsi
  wchar_t *v3; // r14
  wchar_t **v4; // rdi
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v9; // [rsp+E0h] [rbp+77h] BYREF
  ULONG Context; // [rsp+E8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Context = 0;
  v9 = 0;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    for ( i = 4096; ; i += 4096 )
    {
      Pool2 = (wchar_t **)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        v0 = -1073741801;
        goto LABEL_18;
      }
      Context = 0;
      v0 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, i, 0, 1u, &Context, 0LL);
      if ( v0 != 261 )
        break;
      ExFreePoolWithTag(Pool2, 0);
    }
    ZwClose(DirectoryHandle);
    DirectoryHandle = 0LL;
    if ( (int)(v0 + 0x80000000) < 0 || v0 == -2147483622 )
    {
      v3 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( v3 )
      {
        v0 = 0;
        if ( *(_WORD *)Pool2 )
        {
          v4 = Pool2 + 1;
          do
          {
            if ( SiIsValidDiskDevice(*v4, v4[2], (int *)&v9) )
            {
              swprintf_s(v3, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", v9, 0LL);
              if ( (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)v3, v9) )
                break;
            }
            v4 += 4;
          }
          while ( *((_WORD *)v4 - 4) );
        }
        ExFreePoolWithTag(v3, 0);
      }
      else
      {
        v0 = -1073741801;
      }
    }
    ExFreePoolWithTag(Pool2, 0);
  }
LABEL_18:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)v0;
}
