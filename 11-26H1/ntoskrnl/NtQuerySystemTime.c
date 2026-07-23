/*
 * XREFs of NtQuerySystemTime @ 0x14083C880
 * Callers:
 *     DifNtQuerySystemTimeWrapper @ 0x140689DF0 (DifNtQuerySystemTimeWrapper.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  __int64 Src; // [rsp+50h] [rbp+18h] BYREF

  Src = MEMORY[0xFFFFF78000000014];
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)SystemTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlWriteULong64ToUser(SystemTime, Src);
  }
  else
  {
    RtlCopyVolatileMemory(SystemTime, &Src, 8uLL);
  }
  return 0;
}
