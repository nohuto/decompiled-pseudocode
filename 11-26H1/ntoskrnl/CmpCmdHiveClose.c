/*
 * XREFs of CmpCmdHiveClose @ 0x1408BE78C
 * Callers:
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14048B160 (IoSetThreadHardErrorMode.c)
 *     CmpAdjustFileCFSafety @ 0x1404E3E08 (CmpAdjustFileCFSafety.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1407284A0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x140728B40 (ZwSetInformationObject.c)
 */

BOOLEAN __fastcall CmpCmdHiveClose(__int64 a1)
{
  void **v2; // rdi
  BOOLEAN v3; // r15
  void *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  void *v7; // rcx
  __int16 *p_ObjectInformation; // r8
  __int16 v10; // [rsp+30h] [rbp-50h] BYREF
  __int16 ObjectInformation; // [rsp+34h] [rbp-4Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  __int128 FileInformation; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+68h] [rbp-18h]

  v15 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v14 = 0LL;
  v2 = (void **)(a1 + 1544);
  v3 = IoSetThreadHardErrorMode(0);
  v4 = *v2;
  if ( *v2 )
  {
    if ( ZwQueryInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
    {
      if ( *(_BYTE *)(a1 + 141) )
      {
        *(_QWORD *)&v14 = MEMORY[0xFFFFF78000000014];
      }
      else
      {
        v5 = v14;
        if ( *(_QWORD *)(a1 + 4192) )
          v5 = *(_QWORD *)(a1 + 4192);
        *(_QWORD *)&v14 = v5;
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
    v7 = *v2;
    if ( *v2 )
    {
      if ( (_DWORD)v6 )
      {
        ObjectInformation = 0;
        p_ObjectInformation = &ObjectInformation;
      }
      else
      {
        v10 = 0;
        p_ObjectInformation = &v10;
      }
      ZwSetInformationObject(v7, ObjectHandleFlagInformation, p_ObjectInformation, 2u);
      ZwClose(*(HANDLE *)(a1 + 8 * v6 + 1544));
      *v2 = 0LL;
    }
    v6 = (unsigned int)(v6 + 1);
    ++v2;
  }
  while ( (unsigned int)v6 < 6 );
  return IoSetThreadHardErrorMode(v3);
}
