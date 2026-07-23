/*
 * XREFs of IopMarkApcRoutineIfAsynchronousIo32 @ 0x140467B40
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x1404B3AFC (IopValidateAndGetWriteParameters.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall IopMarkApcRoutineIfAsynchronousIo32(__int64 *a1, __int64 *a2, char a3)
{
  __int64 v4; // rcx
  __int64 v6; // rbp
  __int64 result; // rax
  __int16 v8; // dx
  __int64 ULongFromUser; // rbx
  unsigned int v10; // eax

  v4 = *a1;
  v6 = *a2;
  result = (__int64)KeGetCurrentThread()->ApcState.Process;
  if ( *(_QWORD *)(result + 784) )
  {
    v8 = *(_WORD *)(result + 1772);
    result = 332LL;
    if ( v8 == 332 || (result = 452LL, v8 == 452) )
    {
      if ( !a3 )
      {
        ULongFromUser = (unsigned int)RtlReadULongFromUser(v4);
        v10 = RtlReadULongFromUser(ULongFromUser);
        result = RtlWriteULongToUser((unsigned int)ULongFromUser, v10);
        *a1 = ULongFromUser;
        *a2 = v6 | 1;
      }
    }
  }
  return result;
}
