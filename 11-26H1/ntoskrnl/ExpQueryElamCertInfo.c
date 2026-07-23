/*
 * XREFs of ExpQueryElamCertInfo @ 0x140A80900
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1407284C0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140728500 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     SeRegisterElamCertResources @ 0x1408156C0 (SeRegisterElamCertResources.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A80120 (IoConvertFileHandleToKernelHandle.c)
 *     SeValidateFileAsImageType @ 0x140B620D4 (SeValidateFileAsImageType.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryElamCertInfo(void *a1)
{
  PVOID v1; // r14
  void *v2; // r15
  int v3; // esi
  HANDLE FileHandle; // r12
  LARGE_INTEGER v5; // rbx
  void *Pool2; // rax
  __int64 v7; // rdx
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-68h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp+10h] BYREF
  HANDLE SectionHandle; // [rsp+E0h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+20h] BYREF

  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FileSize.QuadPart = 0LL;
  ViewSize = 0LL;
  v1 = 0LL;
  SectionHandle = 0LL;
  v2 = 0LL;
  BaseAddress = 0LL;
  v3 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1, 0, &Handle);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    FileHandle = Handle;
    v3 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v1 = Object;
    if ( v3 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
      {
        v3 = -1073741757;
      }
      else
      {
        v3 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
        if ( v3 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v3 >= 0 )
          {
            v5 = FileSize;
            ViewSize = FileSize.QuadPart;
            v3 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   &ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v3 >= 0 )
            {
              v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeValidateFileAsImageType)(
                     0LL,
                     BaseAddress,
                     (LARGE_INTEGER)v5.QuadPart);
              if ( v3 >= 0 )
              {
                Pool2 = (void *)ExAllocatePool2(0x101uLL);
                v2 = Pool2;
                FileSize.QuadPart = (LONGLONG)Pool2;
                if ( Pool2 )
                {
                  RtlCopyFromUser(Pool2, BaseAddress, v5.QuadPart);
                  v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeValidateFileAsImageType)(
                         0LL,
                         v2,
                         (LARGE_INTEGER)v5.QuadPart);
                  if ( v3 >= 0 )
                  {
                    v3 = SeRegisterElamCertResources((int)v2, v7, 1);
                    if ( v3 >= 0 )
                      v3 = 0;
                  }
                }
                else
                {
                  v3 = -1073741670;
                }
              }
            }
            else
            {
              BaseAddress = 0LL;
            }
          }
          else
          {
            SectionHandle = 0LL;
          }
        }
      }
    }
    else
    {
      v1 = 0LL;
    }
  }
  else
  {
    FileHandle = 0LL;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4D414C45u);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v1 )
    ObfDereferenceObject(v1);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
