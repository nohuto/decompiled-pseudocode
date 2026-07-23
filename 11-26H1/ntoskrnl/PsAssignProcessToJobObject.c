/*
 * XREFs of PsAssignProcessToJobObject @ 0x140AC7930
 * Callers:
 *     PspSetJobMemoryPartition @ 0x1407FF1B4 (PspSetJobMemoryPartition.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspAssignProcessToJobList @ 0x140AC7750 (PspAssignProcessToJobList.c)
 *     NtAssignProcessToJobObject @ 0x140AC7800 (NtAssignProcessToJobObject.c)
 * Callees:
 *     PspGetJobAssignmentDisposition @ 0x140777930 (PspGetJobAssignmentDisposition.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(PVOID Object, ULONG_PTR BugCheckParameter1, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition((__int64)Object, BugCheckParameter1, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(Object, BugCheckParameter1);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
