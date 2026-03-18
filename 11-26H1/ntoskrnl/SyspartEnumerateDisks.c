/*
 * XREFs of SyspartEnumerateDisks @ 0x140894798
 * Callers:
 *     BiGetNtPartitionPath @ 0x1408923BC (BiGetNtPartitionPath.c)
 *     BiResolveLocate @ 0x140892F3C (BiResolveLocate.c)
 *     SiGetEfiSystemDevice @ 0x140894F48 (SiGetEfiSystemDevice.c)
 *     ExpTranslateNtPath @ 0x140B56AF4 (ExpTranslateNtPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140723EF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x140725DD0 (ZwQueryDirectoryObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     SiIsValidDiskDevice @ 0x1408946C0 (SiIsValidDiskDevice.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 SyspartEnumerateDisks()
{
  int DirectoryObject; // ebx
  int i; // edi
  wchar_t **Pool2; // rsi
  wchar_t *v3; // r14
  wchar_t **v4; // rdi
  int *v6; // [rsp+28h] [rbp-41h]
  __int64 v7; // [rsp+30h] [rbp-39h]
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v11; // [rsp+E0h] [rbp+77h] BYREF
  int v12; // [rsp+E8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v12 = 0;
  v11 = 0;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DirectoryObject = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( DirectoryObject >= 0 )
  {
    for ( i = 4096; ; i += 4096 )
    {
      Pool2 = (wchar_t **)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        DirectoryObject = -1073741801;
        goto LABEL_18;
      }
      v7 = 0LL;
      v6 = &v12;
      v12 = 0;
      DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
      if ( DirectoryObject != 261 )
        break;
      ExFreePoolWithTag(Pool2, 0);
    }
    ZwClose(DirectoryHandle);
    DirectoryHandle = 0LL;
    if ( (int)(DirectoryObject + 0x80000000) < 0 || DirectoryObject == -2147483622 )
    {
      v3 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( v3 )
      {
        DirectoryObject = 0;
        if ( *(_WORD *)Pool2 )
        {
          v4 = Pool2 + 1;
          do
          {
            if ( SiIsValidDiskDevice(*v4, v4[2], &v11) )
            {
              swprintf_s(v3, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", v11, 0LL, v6, v7);
              if ( (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)v3, v11) )
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
        DirectoryObject = -1073741801;
      }
    }
    ExFreePoolWithTag(Pool2, 0);
  }
LABEL_18:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)DirectoryObject;
}
