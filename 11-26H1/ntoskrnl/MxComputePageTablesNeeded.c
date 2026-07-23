/*
 * XREFs of MxComputePageTablesNeeded @ 0x140CFB5E8
 * Callers:
 *     MxConstructLoaderMemoryTree @ 0x140CFB74C (MxConstructLoaderMemoryTree.c)
 * Callees:
 *     MxComputePageTablesNeededByPde @ 0x140CFB6D4 (MxComputePageTablesNeededByPde.c)
 */

__int64 __fastcall MxComputePageTablesNeeded(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rdx

  v3 = (((unsigned __int64)(48LL * *(_QWORD *)(a2 + 32) - 0x220000000000LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( a1 )
  {
    v4 = (((unsigned __int64)(48LL * (*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 40)) - 0x220000000001LL) >> 18) & 0x3FFFFFF8)
       - 0x904C0000000LL;
    if ( v3 != v4 )
      MxComputePageTablesNeededByPde(
        v4,
        (((unsigned __int64)(48LL * *(_QWORD *)(a2 + 32) - 0x220000000000LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL,
        1LL);
  }
  result = 0xFFFFF6FB40000000uLL;
  v6 = (((unsigned __int64)(48LL * (*(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 40)) - 0x220000000001LL) >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  if ( v3 != v6 )
    return MxComputePageTablesNeededByPde(v3, v6, 0LL);
  return result;
}
