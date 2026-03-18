/*
 * XREFs of CmpCmdHiveClose @ 0x1408B81BC
 * Callers:
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 *     CmpDestroyHive @ 0x1408B6DC4 (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140491610 (IoSetThreadHardErrorMode.c)
 *     CmpAdjustFileCFSafety @ 0x1404EAA58 (CmpAdjustFileCFSafety.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x140723610 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1407238D0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x140723F70 (ZwSetInformationObject.c)
 */

BOOLEAN __fastcall CmpCmdHiveClose(__int64 a1)
{
  __int64 *v2; // rdi
  BOOLEAN v3; // r15
  void *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  __int128 FileInformation; // [rsp+48h] [rbp-38h] BYREF
  __int128 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+68h] [rbp-18h]

  v11 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v10 = 0LL;
  v2 = (__int64 *)(a1 + 1544);
  v3 = IoSetThreadHardErrorMode(0);
  v4 = (void *)*v2;
  if ( *v2 )
  {
    if ( ZwQueryInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
    {
      if ( *(_BYTE *)(a1 + 141) )
      {
        *(_QWORD *)&v10 = MEMORY[0xFFFFF78000000014];
      }
      else
      {
        v5 = v10;
        if ( *(_QWORD *)(a1 + 4192) )
          v5 = *(_QWORD *)(a1 + 4192);
        *(_QWORD *)&v10 = v5;
      }
      *((_QWORD *)&FileInformation + 1) = MEMORY[0xFFFFF78000000014];
      ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    }
    if ( (*(_DWORD *)(a1 + 4120) & 0x10000) != 0 )
      CmpAdjustFileCFSafety(v4, 0);
  }
  v6 = 0LL;
  do
  {
    if ( *v2 )
    {
      ZwSetInformationObject(*v2, 4LL);
      ZwClose(*(HANDLE *)(a1 + 8 * v6 + 1544));
      *v2 = 0LL;
    }
    v6 = (unsigned int)(v6 + 1);
    ++v2;
  }
  while ( (unsigned int)v6 < 6 );
  return IoSetThreadHardErrorMode(v3);
}
