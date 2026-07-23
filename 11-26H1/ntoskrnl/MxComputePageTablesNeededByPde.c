/*
 * XREFs of MxComputePageTablesNeededByPde @ 0x140CFB6D4
 * Callers:
 *     MxComputePageTablesNeeded @ 0x140CFB5E8 (MxComputePageTablesNeeded.c)
 * Callees:
 *     <none>
 */

void __fastcall MxComputePageTablesNeededByPde(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // r10d
  __int64 *v4; // r9
  __int64 v5; // rax

  v3 = 0;
  v4 = &qword_14101FC38;
  do
  {
    if ( a2 == a1 )
      break;
    v5 = a3 ? 1LL : ((__int64)(a2 - a1) >> 3) + 1;
    *v4 += v5;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v3;
    ++v4;
  }
  while ( v3 < 4 );
}
