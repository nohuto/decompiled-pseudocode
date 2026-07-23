/*
 * XREFs of NtAllocateLocallyUniqueId @ 0x140ABBA50
 * Callers:
 *     DifNtAllocateLocallyUniqueIdWrapper @ 0x14066ECA0 (DifNtAllocateLocallyUniqueIdWrapper.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAllocateLocallyUniqueId(PLUID Luid)
{
  __int64 Src; // [rsp+50h] [rbp+18h] BYREF

  Src = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)Luid & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlWriteULong64ToUser(Luid, Src);
  }
  else
  {
    RtlCopyVolatileMemory(Luid, &Src, 8uLL);
  }
  return 0;
}
