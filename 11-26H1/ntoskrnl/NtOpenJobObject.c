/*
 * XREFs of NtOpenJobObject @ 0x140A77BE0
 * Callers:
 *     DifNtOpenJobObjectWrapper @ 0x14067D4D0 (DifNtOpenJobObjectWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 *     EtwTraceJob @ 0x140A77CC8 (EtwTraceJob.c)
 */

__int64 __fastcall NtOpenJobObject(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  int v8; // ebx
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF

  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  v8 = ObOpenObjectByName(a3, (__int64)PsJobType, PreviousMode, 0LL, a2, 0LL, (__int64)&v10);
  if ( v8 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, v10);
    else
      *a1 = v10;
  }
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJob(0LL, 0LL, (unsigned int)v8, 1826LL);
  return (unsigned int)v8;
}
