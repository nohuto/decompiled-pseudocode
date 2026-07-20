/*
 * XREFs of SmpOpenTargetFile @ 0x14001718C
 * Callers:
 *     SmpCheckFolderForRedirections @ 0x140013524 (SmpCheckFolderForRedirections.c)
 *     SmpForceDeleteTargetFile @ 0x14001483C (SmpForceDeleteTargetFile.c)
 *     SmpProcessFileRenames @ 0x1400173C0 (SmpProcessFileRenames.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017924 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpShuffleMove @ 0x140018310 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140018514 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpOpenTargetFile(
        void **a1,
        ACCESS_MASK a2,
        struct _OBJECT_ATTRIBUTES *a3,
        char a4,
        ULONG ShareAccess)
{
  NTSTATUS result; // eax
  __int64 FileInformation; // [rsp+30h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-20h] BYREF

  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  result = NtOpenFile(a1, a2, a3, &IoStatusBlock, ShareAccess, a4 != 0 ? 2113568 : 16416);
  if ( result >= 0 )
  {
    if ( NtQueryInformationFile(*a1, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation) < 0
      || (FileInformation & 0x400) == 0
      || (FileInformation & 0x2000000000000000LL) != 0 )
    {
      return 0;
    }
    else
    {
      NtClose(*a1);
      result = -1073741608;
      *a1 = 0LL;
    }
  }
  return result;
}
