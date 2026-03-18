/*
 * XREFs of NtAllocateLocallyUniqueId @ 0x140ABA590
 * Callers:
 *     DifNtAllocateLocallyUniqueIdWrapper @ 0x14066B0C0 (DifNtAllocateLocallyUniqueIdWrapper.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAllocateLocallyUniqueId(_QWORD *a1)
{
  __int64 Src; // [rsp+50h] [rbp+18h] BYREF

  Src = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlWriteULong64ToUser(a1, Src);
  }
  else
  {
    RtlCopyVolatileMemory(a1, &Src, 8uLL);
  }
  return 0LL;
}
