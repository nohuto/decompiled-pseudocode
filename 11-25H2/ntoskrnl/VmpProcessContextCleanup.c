/*
 * XREFs of VmpProcessContextCleanup @ 0x14079021C
 * Callers:
 *     VmpProcessContextSetup @ 0x140790230 (VmpProcessContextSetup.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpProcessContextCleanup(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 112);
  if ( result )
    NT_ASSERT("ReadNoFence64(&ProcessContext->PreallocateForRangeCreateCount) == 0");
  return result;
}
