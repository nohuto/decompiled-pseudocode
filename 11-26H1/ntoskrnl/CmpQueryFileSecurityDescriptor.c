/*
 * XREFs of CmpQueryFileSecurityDescriptor @ 0x1408B5DB0
 * Callers:
 *     CmpStartRMLog @ 0x1408AC340 (CmpStartRMLog.c)
 *     CmpOpenHiveFiles @ 0x1408B4E2C (CmpOpenHiveFiles.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x1408B5990 (CmpLogHiveFileInaccessible.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x1404BE3D8 (CmSiAllocateMemory.c)
 *     ZwQuerySecurityObject @ 0x140726110 (ZwQuerySecurityObject.c)
 */

__int64 __fastcall CmpQueryFileSecurityDescriptor(HANDLE Handle, struct _PRIVILEGE_SET **a2)
{
  struct _PRIVILEGE_SET *Memory; // rdi
  NTSTATUS v5; // ebx
  __int64 result; // rax
  ULONG Length; // [rsp+48h] [rbp+10h] BYREF

  Memory = 0LL;
  Length = 0;
  v5 = ZwQuerySecurityObject(Handle, 4u, 0LL, 0, &Length);
  if ( v5 == -1073741789 )
  {
    Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory();
    if ( Memory )
    {
      v5 = ZwQuerySecurityObject(Handle, 4u, Memory, Length, &Length);
      if ( v5 < 0 )
      {
        CmSiFreeMemory(Memory);
        Memory = 0LL;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else if ( !v5 )
  {
    v5 = -1073741823;
  }
  result = (unsigned int)v5;
  *a2 = Memory;
  return result;
}
