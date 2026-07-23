/*
 * XREFs of MiOpenHotPatchFile @ 0x140879388
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiCreatePatchSectionRequest @ 0x140875B58 (MiCreatePatchSectionRequest.c)
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140877654 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiCreateSystemSection @ 0x14038C270 (MiCreateSystemSection.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlFindHotPatchBase @ 0x1408B1444 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x1408B14E4 (RtlFindHotPatchInformation.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     IoCreateFileEx @ 0x140984880 (IoCreateFileEx.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 */

__int64 __fastcall MiOpenHotPatchFile(
        UNICODE_STRING *a1,
        int a2,
        char a3,
        HANDLE *a4,
        PVOID *a5,
        _OWORD *a6,
        __int64 a7)
{
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r9
  int v13; // ebx
  int v14; // esi
  int v15; // r15d
  int SessionId; // eax
  unsigned __int64 v17; // rax
  ULONG64 v18; // rsi
  PIMAGE_NT_HEADERS v19; // rbx
  unsigned __int16 Machine; // ax
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  _DWORD *v23; // r10
  __int64 v24; // r11
  ULONG CreateOptions; // [rsp+40h] [rbp-F8h]
  int EaBuffer; // [rsp+48h] [rbp-F0h]
  HANDLE FileHandle; // [rsp+88h] [rbp-B0h] BYREF
  PVOID BaseOfImage[2]; // [rsp+90h] [rbp-A8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+A0h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-90h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp-38h] BYREF
  PVOID Object; // [rsp+140h] [rbp+8h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  BaseOfImage[1] = 0LL;
  OutHeaders = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  BaseOfImage[0] = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset(&DriverContext, 0, sizeof(DriverContext));
  DriverContext.Size = 40;
  v33 = HalSystemVectorDispatchEntry();
  v11 = IoCreateFileEx(
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
  if ( v11 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a2 )
    {
      v13 = 2;
      v14 = 285212672;
      v15 = 0;
      SessionId = -1;
    }
    else
    {
      v13 = 16;
      v14 = 0x1000000;
      v15 = 1;
      SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    v11 = MiCreateSystemSection(
            &Object,
            v10,
            (int)&ObjectAttributes,
            v12,
            v13,
            v14,
            0,
            (__int64)FileHandle,
            CreateOptions,
            EaBuffer,
            SessionId,
            v15,
            a3);
    if ( v11 >= 0 )
    {
      v17 = MiSectionControlArea((__int64)Object);
      v11 = MiMapImageInSystemSpace(v17, 1LL, BaseOfImage);
      if ( v11 >= 0 )
      {
        v18 = (unsigned __int64)LODWORD(BaseOfImage[1]) << 12;
        v11 = RtlImageNtHeaderEx(0, BaseOfImage[0], v18, &OutHeaders);
        if ( v11 >= 0 )
        {
          v19 = OutHeaders;
          if ( &OutHeaders->OptionalHeader < (_IMAGE_OPTIONAL_HEADER64 *)OutHeaders
            || &OutHeaders->OptionalHeader > (_IMAGE_OPTIONAL_HEADER64 *)((char *)BaseOfImage[0] + v18) )
          {
            v11 = -1073741701;
          }
          else
          {
            if ( v18 >= 0xFFFFFFFF )
            {
              v11 = -1073739516;
              goto LABEL_28;
            }
            Machine = OutHeaders->FileHeader.Machine;
            if ( Machine != 0x8664 && Machine != 332 && Machine != 0xAA64 )
            {
              v11 = -1073741701;
              goto LABEL_28;
            }
            HotPatchInformation = RtlFindHotPatchInformation(BaseOfImage[0]);
            if ( !HotPatchInformation )
            {
              v11 = -1073741701;
              goto LABEL_28;
            }
            if ( a7 )
            {
              HotPatchBase = RtlFindHotPatchBase(HotPatchInformation, 0LL);
              if ( !HotPatchBase )
              {
                v11 = -1073741701;
                goto LABEL_28;
              }
              *v23 = *(_DWORD *)(HotPatchBase + 12);
              v23[1] = *(_DWORD *)(HotPatchBase + 8);
              v23[3] = v19->OptionalHeader.CheckSum;
              v23[4] = v19->FileHeader.TimeDateStamp;
              v23[6] = *(_DWORD *)(v24 + 8);
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
              *a6 = *(_OWORD *)BaseOfImage;
              BaseOfImage[0] = 0LL;
            }
            v11 = 0;
          }
        }
      }
    }
  }
LABEL_28:
  if ( BaseOfImage[0] )
    MiRemoveFromSystemSpace((ULONG_PTR)BaseOfImage[0]);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)v11;
}
