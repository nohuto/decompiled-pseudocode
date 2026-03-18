/*
 * XREFs of MiOpenHotPatchFile @ 0x140873028
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     MiCreatePatchSectionRequest @ 0x14086F788 (MiCreatePatchSectionRequest.c)
 *     MiLoadHotPatch @ 0x140870D5C (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408712F4 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     MiCreateSystemSection @ 0x14038A4C0 (MiCreateSystemSection.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlFindHotPatchBase @ 0x1408AAFD4 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x1408AB074 (RtlFindHotPatchInformation.c)
 *     IoCreateFileEx @ 0x1409B37C0 (IoCreateFileEx.c)
 *     MiMapImageInSystemSpace @ 0x1409CC82C (MiMapImageInSystemSpace.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

__int64 __fastcall MiOpenHotPatchFile(
        UNICODE_STRING *a1,
        int a2,
        char a3,
        HANDLE *a4,
        PVOID *a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r9
  int v14; // ebx
  int v15; // esi
  int v16; // r15d
  int SessionId; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  __int16 v21; // ax
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  _DWORD *v24; // r10
  __int64 v25; // r11
  ULONG CreateOptions; // [rsp+40h] [rbp-F8h]
  int EaBuffer; // [rsp+48h] [rbp-F0h]
  HANDLE FileHandle; // [rsp+88h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter1[2]; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int64 v31; // [rsp+A0h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-90h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp-38h] BYREF
  PVOID Object; // [rsp+140h] [rbp+8h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  BugCheckParameter1[1] = 0LL;
  v31 = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  BugCheckParameter1[0] = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset(&DriverContext, 0, sizeof(DriverContext));
  DriverContext.Size = 40;
  v34 = HalSystemVectorDispatchEntry();
  v12 = IoCreateFileEx(
          &FileHandle,
          0x20u,
          &ObjectAttributes,
          &IoStatusBlock,
          0LL,
          0x80u,
          5u,
          1u,
          0x60u,
          0LL,
          0,
          CreateFileTypeNone,
          0LL,
          0,
          &DriverContext);
  if ( v12 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a2 )
    {
      v14 = 2;
      v15 = 285212672;
      v16 = 0;
      SessionId = -1;
    }
    else
    {
      v14 = 16;
      v15 = 0x1000000;
      v16 = 1;
      SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    v12 = MiCreateSystemSection(
            &Object,
            v11,
            (int)&ObjectAttributes,
            v13,
            v14,
            v15,
            0,
            (__int64)FileHandle,
            CreateOptions,
            EaBuffer,
            SessionId,
            v16,
            a3);
    if ( v12 >= 0 )
    {
      v18 = MiSectionControlArea((__int64)Object);
      v12 = MiMapImageInSystemSpace(v18, 1LL, BugCheckParameter1);
      if ( v12 >= 0 )
      {
        v19 = (unsigned __int64)LODWORD(BugCheckParameter1[1]) << 12;
        v12 = RtlImageNtHeaderEx(0, BugCheckParameter1[0], v19, &v31);
        if ( v12 >= 0 )
        {
          v20 = v31;
          if ( v31 + 24 < v31 || v31 + 24 > v19 + BugCheckParameter1[0] )
          {
            v12 = -1073741701;
          }
          else
          {
            if ( v19 >= 0xFFFFFFFF )
            {
              v12 = -1073739516;
              goto LABEL_28;
            }
            v21 = *(_WORD *)(v31 + 4);
            if ( v21 != -31132 && v21 != 332 && v21 != -21916 )
            {
              v12 = -1073741701;
              goto LABEL_28;
            }
            HotPatchInformation = RtlFindHotPatchInformation(BugCheckParameter1[0], a8);
            if ( !HotPatchInformation )
            {
              v12 = -1073741701;
              goto LABEL_28;
            }
            if ( a7 )
            {
              HotPatchBase = RtlFindHotPatchBase(HotPatchInformation, 0LL);
              if ( !HotPatchBase )
              {
                v12 = -1073741701;
                goto LABEL_28;
              }
              *v24 = *(_DWORD *)(HotPatchBase + 12);
              v24[1] = *(_DWORD *)(HotPatchBase + 8);
              v24[3] = *(_DWORD *)(v20 + 88);
              v24[4] = *(_DWORD *)(v20 + 8);
              v24[6] = *(_DWORD *)(v25 + 8);
            }
            *a4 = FileHandle;
            FileHandle = 0LL;
            if ( a5 )
            {
              *a5 = Object;
              Object = 0LL;
            }
            if ( a6 )
            {
              *a6 = *(_OWORD *)BugCheckParameter1;
              BugCheckParameter1[0] = 0LL;
            }
            v12 = 0;
          }
        }
      }
    }
  }
LABEL_28:
  if ( BugCheckParameter1[0] )
    MiRemoveFromSystemSpace(BugCheckParameter1[0]);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)v12;
}
