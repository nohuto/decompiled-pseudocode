/*
 * XREFs of MxFindFreePageDescriptor @ 0x140CFCDB0
 * Callers:
 *     MxCreateNodeFreeZeroList @ 0x140CFC0E0 (MxCreateNodeFreeZeroList.c)
 *     MxGetFreePageDescriptor @ 0x140CFD020 (MxGetFreePageDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxFindFreePageDescriptor(unsigned int a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // ecx
  __int64 **v6; // r8
  __int64 *v7; // r10

  v1 = 0LL;
  v2 = (unsigned __int64)&MxBootState[250 * a1];
  v3 = *(_QWORD *)(v2 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      goto LABEL_7;
    v4 = v3 ^ (v2 | 1);
  }
  else
  {
    v4 = *(_QWORD *)(v2 + 8);
  }
  if ( v4 )
    return v4;
LABEL_7:
  v5 = 0;
  v6 = (__int64 **)(v2 + 16);
  while ( v5 < 2 )
  {
    v7 = (__int64 *)(v2 + 32LL * v5 + 16);
    if ( *v6 != v7 )
      return *v7;
    ++v5;
    v6 += 4;
  }
  return v1;
}
