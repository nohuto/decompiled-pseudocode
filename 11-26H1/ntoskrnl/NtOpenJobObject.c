/*
 * XREFs of NtOpenJobObject @ 0x140B0FD10
 * Callers:
 *     DifNtOpenJobObjectWrapper @ 0x1406810B0 (DifNtOpenJobObjectWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     EtwTraceJob @ 0x140A07238 (EtwTraceJob.c)
 */

NTSTATUS __cdecl NtOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  int v8; // ebx
  void *v10; // [rsp+48h] [rbp-10h] BYREF

  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(JobHandle);
    RtlWriteULong64ToUser(JobHandle, ULong64FromUser);
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)PsJobType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)&v10);
  if ( v8 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(JobHandle, (__int64)v10);
    else
      *JobHandle = v10;
  }
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJob(0LL, 0, v8, 0x722u);
  return v8;
}
