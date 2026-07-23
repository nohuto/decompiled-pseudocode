/*
 * XREFs of MiMapPageTableCommit @ 0x140998B70
 * Callers:
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 */

__int64 __fastcall MiMapPageTableCommit(unsigned __int64 a1, unsigned __int64 a2)
{
  int v2; // ebx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  volatile _KAFFINITY_EX *ActiveProcessors; // rbp
  __int64 v6; // r14
  unsigned __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  v3 = a1 >> 21;
  v4 = a2 >> 21;
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  do
  {
    v6 = (unsigned int)(2 - v2);
    v7 = ActiveProcessors[5].StaticBitmap[2 * v6 + 24];
    result = MiMakeHyperRangeAccessible(v7 + (v3 >> 3), v7 + (v4 >> 3), &v9);
    if ( (int)result < 0 )
      break;
    ++v2;
    ActiveProcessors[5].StaticBitmap[v6 + 29] += v9;
    v3 >>= 9;
    v4 >>= 9;
  }
  while ( v2 < 2 );
  return result;
}
