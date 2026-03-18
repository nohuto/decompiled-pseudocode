/*
 * XREFs of CmpAdjustFileCFSafety @ 0x1404EAA58
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14046EB90 (CmpRecheckHiveVolumePolicy.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x1408B81BC (CmpCmdHiveClose.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlIsCloudFilesPlaceholder @ 0x1404CFA50 (RtlIsCloudFilesPlaceholder.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x140723610 (ZwQueryInformationFile.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     FsRtlSetKernelEaFile @ 0x140A199F0 (FsRtlSetKernelEaFile.c)
 */

__int64 __fastcall CmpAdjustFileCFSafety(HANDLE FileHandle, char a2)
{
  NTSTATUS v4; // ebx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  __int64 FileInformation; // [rsp+38h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  int v9; // [rsp+50h] [rbp-30h]
  __int16 v10; // [rsp+54h] [rbp-2Ch]
  __int16 v11; // [rsp+56h] [rbp-2Ah]
  char v12[23]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v13; // [rsp+6Fh] [rbp-11h] BYREF
  char v14; // [rsp+77h] [rbp-9h]

  FileInformation = 0LL;
  v13 = 0LL;
  v14 = 0;
  v9 = 0;
  v10 = 5632;
  IoStatusBlock = 0LL;
  strcpy(v12, "$Kernel.CFDoNotConvert");
  if ( a2 )
  {
    v11 = 3;
    strcpy((char *)&v13, "CM");
  }
  else
  {
    v11 = 0;
  }
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(
         FileHandle,
         0x102u,
         **(POBJECT_TYPE **)&CmpCallbackListLock.ApcStateFill[40],
         0,
         &Object,
         0LL);
  if ( v4 >= 0 )
  {
    v4 = FsRtlSetKernelEaFile((PFILE_OBJECT)Object);
    if ( v4 >= 0 )
    {
      if ( a2 )
      {
        v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation);
        if ( v4 < 0 )
        {
LABEL_11:
          v11 = 0;
          FsRtlSetKernelEaFile((PFILE_OBJECT)Object);
          goto LABEL_5;
        }
        if ( RtlIsCloudFilesPlaceholder(FileInformation, SHIDWORD(FileInformation)) )
        {
          v4 = -1073741436;
          goto LABEL_11;
        }
      }
      v4 = 0;
    }
  }
LABEL_5:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v4;
}
