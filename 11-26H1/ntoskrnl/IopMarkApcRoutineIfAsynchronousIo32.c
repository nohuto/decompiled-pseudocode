/*
 * XREFs of IopMarkApcRoutineIfAsynchronousIo32 @ 0x14046E3C0
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x1404BA26C (IopValidateAndGetWriteParameters.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 * Callees:
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
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
