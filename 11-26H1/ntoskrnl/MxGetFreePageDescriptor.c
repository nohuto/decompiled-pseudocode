/*
 * XREFs of MxGetFreePageDescriptor @ 0x140CFD020
 * Callers:
 *     MxGetPage @ 0x140CFD0F0 (MxGetPage.c)
 * Callees:
 *     MxFindFreePageDescriptor @ 0x140CFCDB0 (MxFindFreePageDescriptor.c)
 *     MxRemoveFreeZeroMemoryDescriptor @ 0x140CFE650 (MxRemoveFreeZeroMemoryDescriptor.c)
 *     MxUpdateBootNodeFreePageCount @ 0x140CFE958 (MxUpdateBootNodeFreePageCount.c)
 */

__int64 __fastcall MxGetFreePageDescriptor(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  v1 = a1;
  result = MxFindFreePageDescriptor(a1);
  v3 = result;
  if ( result )
  {
    v4 = &MxBootState[250 * v1];
    MxRemoveFreeZeroMemoryDescriptor(v4, result);
    v5 = *(_QWORD *)(v3 + 32);
    v6 = *(_QWORD *)(v3 + 40);
    v4[17] = v5;
    v4[18] = v6;
    v4[16] = v6;
    v7 = v6 + v5 - 1;
    *((_DWORD *)v4 + 46) = v1;
    v4[19] = v7;
    v8 = v7 & 0xFFFFFFFFFFFFFE00uLL;
    v4[24] = v3;
    if ( v8 < v5 || v8 - v5 < 0x200 )
      v9 = -1LL;
    else
      v9 = v8 - 512;
    v4[20] = v9;
    MxUpdateBootNodeFreePageCount(&MxBootState[250 * v1], v6, 1LL);
    return v3;
  }
  return result;
}
