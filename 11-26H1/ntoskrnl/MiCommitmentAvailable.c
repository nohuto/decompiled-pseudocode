/*
 * XREFs of MiCommitmentAvailable @ 0x14045A690
 * Callers:
 *     MiAllocateCrcList @ 0x140B55EB8 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 23104);
  result = *(_QWORD *)(a1 + 23448) - v1;
  if ( v1 >= *(_QWORD *)(a1 + 23448) )
    return 0LL;
  return result;
}
