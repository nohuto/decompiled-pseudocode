/*
 * XREFs of CmpCmdRenameHive @ 0x140854A18
 * Callers:
 *     CmReplaceKey @ 0x140858C90 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 * Callees:
 *     ZwQueryObject @ 0x1407235F0 (ZwQueryObject.c)
 *     ZwSetInformationFile @ 0x1407238D0 (ZwSetInformationFile.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpCmdRenameHive(HANDLE FileHandle, PVOID ObjectInformation, const void **a3, ULONG a4, char a5)
{
  NTSTATUS result; // eax
  __int64 Pool2; // rax
  void *v9; // rdi
  NTSTATUS v10; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+20h] BYREF

  ReturnLength = a4;
  IoStatusBlock = 0LL;
  if ( !ObjectInformation
    || (result = ZwQueryObject(FileHandle, ObjectNameInformation, ObjectInformation, a4, &ReturnLength), result >= 0) )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v9 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_BYTE *)Pool2 = a5;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_DWORD *)(Pool2 + 16) = *(unsigned __int16 *)a3;
      memmove((void *)(Pool2 + 20), a3[1], *(unsigned __int16 *)a3);
      v10 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v9, *(unsigned __int16 *)a3 + 24, FileRenameInformation);
      ExFreePoolWithTag(v9, 0);
      return v10;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
