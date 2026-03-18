/*
 * XREFs of PsAssignProcessToJobObject @ 0x140AC5CC0
 * Callers:
 *     PspSetJobMemoryPartition @ 0x1407F96B4 (PspSetJobMemoryPartition.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     PspAssignProcessToJobList @ 0x140AC5AE0 (PspAssignProcessToJobList.c)
 *     NtAssignProcessToJobObject @ 0x140AC5B90 (NtAssignProcessToJobObject.c)
 * Callees:
 *     PspGetJobAssignmentDisposition @ 0x140774930 (PspGetJobAssignmentDisposition.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
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
