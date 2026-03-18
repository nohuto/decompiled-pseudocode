/*
 * XREFs of NtQuerySystemTime @ 0x140836640
 * Callers:
 *     DifNtQuerySystemTimeWrapper @ 0x140686210 (DifNtQuerySystemTimeWrapper.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySystemTime(_QWORD *a1)
{
  __int64 Src; // [rsp+50h] [rbp+18h] BYREF

  Src = MEMORY[0xFFFFF78000000014];
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
