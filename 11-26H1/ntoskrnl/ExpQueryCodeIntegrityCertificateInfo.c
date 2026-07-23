/*
 * XREFs of ExpQueryCodeIntegrityCertificateInfo @ 0x140A7FF48
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1407284C0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140728500 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A80120 (IoConvertFileHandleToKernelHandle.c)
 *     SeValidateFileAsImageType @ 0x140B620D4 (SeValidateFileAsImageType.c)
 */

__int64 __fastcall ExpQueryCodeIntegrityCertificateInfo(__int64 a1, int a2)
{
  PVOID v2; // rsi
  unsigned int v3; // r12d
  struct _KTHREAD *CurrentThread; // rdx
  NTSTATUS v5; // edi
  NTSTATUS v6; // eax
  LARGE_INTEGER v8; // rbx
  PVOID Object; // [rsp+58h] [rbp-11h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  FileSize.QuadPart = 0LL;
  ViewSize = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v3 = 2;
    }
    else
    {
      if ( a2 != 2 )
      {
        v5 = -1073741811;
        goto LABEL_8;
      }
      v3 = 3;
    }
  }
  else
  {
    v3 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  v5 = IoConvertFileHandleToKernelHandle(a1, CurrentThread, 1LL);
  if ( v5 >= 0 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(0LL, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v2 = Object;
    v5 = v6;
    if ( v6 < 0 )
    {
      v2 = 0LL;
    }
    else if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
    {
      v5 = -1073741757;
    }
    else
    {
      v5 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
      if ( v5 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, 0LL);
        if ( v5 >= 0 )
        {
          v8 = FileSize;
          ViewSize = FileSize.QuadPart;
          v5 = ZwMapViewOfSection(
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
          if ( v5 < 0 )
          {
            BaseAddress = 0LL;
            goto LABEL_10;
          }
          v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeValidateFileAsImageType)(
                 v3,
                 BaseAddress,
                 (LARGE_INTEGER)v8.QuadPart);
        }
        else
        {
          SectionHandle = 0LL;
        }
      }
    }
  }
LABEL_8:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_10:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v5;
}
