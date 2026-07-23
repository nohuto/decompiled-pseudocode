/*
 * XREFs of IopValidateJunctionTarget @ 0x140B62430
 * Callers:
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     FsRtlValidateReparsePointBuffer @ 0x14046D2C0 (FsRtlValidateReparsePointBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IoVolumeDeviceToDosName @ 0x1409205E0 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     IoVolumeDeviceToGuidPath @ 0x140A2FD20 (IoVolumeDeviceToGuidPath.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopValidateJunctionTarget(int a1, _OWORD *a2, unsigned int a3, __int64 a4, _QWORD *a5, _DWORD *a6)
{
  size_t v6; // rbx
  void *v9; // r15
  unsigned __int16 *v10; // r14
  ULONG v11; // r12d
  _REPARSE_DATA_BUFFER *Pool2; // rax
  _REPARSE_DATA_BUFFER *v13; // rsi
  int appended; // ebx
  _REPARSE_DATA_BUFFER *v15; // rax
  PVOID *v16; // r12
  char v17; // r13
  int v18; // r12d
  int v19; // r8d
  unsigned int v20; // ecx
  __int16 v21; // bx
  _OWORD *v22; // rax
  _OWORD *v23; // r12
  unsigned int Length; // ecx
  __int64 v25; // rcx
  UNICODE_STRING v27; // [rsp+40h] [rbp-118h] BYREF
  __int64 v28; // [rsp+50h] [rbp-108h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-E8h]
  PVOID Object; // [rsp+78h] [rbp-E0h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-D8h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+A0h] [rbp-B8h] BYREF
  UNICODE_STRING String1; // [rsp+B0h] [rbp-A8h] BYREF
  UNICODE_STRING v36; // [rsp+C0h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+D0h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp-48h] BYREF
  __int16 v41; // [rsp+160h] [rbp+8h]

  v6 = a3;
  String2 = 0LL;
  *(_QWORD *)&Source.Length = 1572886LL;
  Source.Buffer = L"\\??\\Global\\";
  *(_QWORD *)&v36.Length = 2359330LL;
  v36.Buffer = L"\\??\\Global\\Volume";
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Destination = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)&String1.Length = 1441812LL;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v9 = 0LL;
  FileHandle = 0LL;
  Object = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a1 == 590860 )
  {
    v11 = v6 - 32;
    Pool2 = (_REPARSE_DATA_BUFFER *)ExAllocatePool2(0x43uLL);
    v13 = Pool2;
    v28 = (__int64)Pool2;
    if ( !Pool2 )
    {
LABEL_3:
      appended = -1073741670;
      goto LABEL_47;
    }
    RtlCopyFromUser(Pool2, a2 + 2, v11);
  }
  else
  {
    v11 = v6;
    v15 = (_REPARSE_DATA_BUFFER *)ExAllocatePool2(0x43uLL);
    v13 = v15;
    v28 = (__int64)v15;
    if ( !v15 )
      goto LABEL_3;
    RtlCopyFromUser(v15, a2, v6);
  }
  if ( v13->ReparseTag != -1610612733 )
    goto LABEL_8;
  appended = FsRtlValidateReparsePointBuffer(v11, v13);
  if ( appended >= 0 )
  {
    String2.Buffer = v13->MountPointReparseBuffer.PathBuffer;
    String2.Length = v13->SymbolicLinkReparseBuffer.SubstituteNameLength & 0xFFFE;
    String2.MaximumLength = String2.Length;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1536;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 7u, 1u);
    if ( appended >= 0 )
    {
      appended = IopReferenceFileObject(FileHandle, 0, 0, (ULONG_PTR *)&Object, 0LL);
      if ( appended >= 0 )
      {
        v16 = (PVOID *)Object;
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) != 0 )
        {
LABEL_8:
          appended = -1073741811;
          goto LABEL_47;
        }
        v17 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v36, &String2, 1u)
          || (appended = IoVolumeDeviceToDosName(v16[1], &DestinationString), appended < 0) )
        {
          v17 = 1;
        }
        if ( v17 )
          appended = IoVolumeDeviceToGuidPath((PDEVICE_OBJECT)v16[1], (__int64)&DestinationString);
        if ( appended >= 0 )
        {
          v18 = String2.Length + 8;
          while ( 1 )
          {
            v10 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
            if ( !v10 )
              goto LABEL_3;
            appended = IopQueryXxxInformation((struct _FILE_OBJECT *)Object, 9, v18, 0, (__int64)v10, &v28, 1);
            if ( appended != -2147483643 )
            {
              if ( appended < 0 )
                goto LABEL_47;
              if ( !*(_DWORD *)v10 || v10[2] != 92 )
                goto LABEL_8;
              v19 = DestinationString.Length + *(_DWORD *)v10 + 14;
              if ( !v17 )
                v19 = DestinationString.Length + *(_DWORD *)v10 + 22;
              v20 = v19 - 2;
              if ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92 )
                v20 = v19;
              v30 = v20;
              if ( v20 >= 0xFFFD )
                goto LABEL_8;
              v21 = v20 - String2.Length + a3;
              LODWORD(v28) = v20 - String2.Length + a3;
              v22 = (_OWORD *)ExAllocatePool2(0x41uLL);
              v9 = v22;
              if ( !v22 )
                goto LABEL_3;
              if ( a1 == 590860 )
              {
                *v22 = *a2;
                v22[1] = a2[1];
                v23 = v22 + 2;
                v21 -= 32;
              }
              else
              {
                v23 = v22;
              }
              v41 = v21;
              Destination.Buffer = (wchar_t *)(v23 + 1);
              Destination.Length = 0;
              Destination.MaximumLength = v30;
              appended = RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( appended >= 0 )
              {
                v27 = DestinationString;
                if ( v17 )
                {
                  v27.Length = DestinationString.Length - 8;
                  v27.Buffer += 4;
                }
                if ( v27.Buffer[((unsigned __int64)v27.Length >> 1) - 1] == 92 )
                  v27.Length -= 2;
                if ( v27.Length && v27.Length <= DestinationString.Length )
                {
                  appended = RtlAppendUnicodeStringToString(&Destination, &v27);
                  if ( appended >= 0 )
                  {
                    v27.Buffer = v10 + 2;
                    v27.Length = *v10;
                    v27.MaximumLength = v27.Length;
                    appended = RtlAppendUnicodeStringToString(&Destination, &v27);
                    if ( appended >= 0 )
                    {
                      *(_DWORD *)v23 = -1610612733;
                      *(_DWORD *)((char *)v23 + 6) = 0;
                      *((_WORD *)v23 + 2) = v41 - 8;
                      Length = Destination.Length;
                      *((_WORD *)v23 + 5) = Destination.Length;
                      *((_WORD *)v23 + ((unsigned __int64)Length >> 1) + 8) = 0;
                      v25 = (unsigned __int16)(Length + 2);
                      *((_WORD *)v23 + 6) = v25;
                      memmove(
                        (char *)v23 + v25 + 16,
                        &v13->GenericReparseBuffer + v13->SymbolicLinkReparseBuffer.PrintNameOffset + 8,
                        v13->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                      *((_WORD *)v23 + 7) = v13->SymbolicLinkReparseBuffer.PrintNameLength;
                      *a5 = v9;
                      *a6 = v28;
                      v9 = 0LL;
                    }
                  }
                  goto LABEL_47;
                }
                goto LABEL_8;
              }
              goto LABEL_47;
            }
            v18 = *(_DWORD *)v10 + 8;
            ExFreePoolWithTag(v10, 0);
          }
        }
        DestinationString.Buffer = 0LL;
      }
    }
  }
LABEL_47:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)appended;
}
