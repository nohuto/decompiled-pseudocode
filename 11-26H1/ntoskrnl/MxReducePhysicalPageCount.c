/*
 * XREFs of MxReducePhysicalPageCount @ 0x140CFE55C
 * Callers:
 *     MxCreateSparsePfnDatabase @ 0x140CFC864 (MxCreateSparsePfnDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MxExtractUnusedRegions @ 0x140CFCB98 (MxExtractUnusedRegions.c)
 *     MxGetFreeDescriptorCounts @ 0x140CFCF84 (MxGetFreeDescriptorCounts.c)
 */

ULONG_PTR MxReducePhysicalPageCount()
{
  unsigned int v0; // eax
  __int64 v1; // rbx
  __int64 *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  char *v5; // rax
  ULONG_PTR result; // rax
  __int128 v7; // [rsp+20h] [rbp-1B8h] BYREF
  int v8[12]; // [rsp+30h] [rbp-1A8h] BYREF
  char v9; // [rsp+60h] [rbp-178h] BYREF

  v0 = 64;
  v1 = 0LL;
  v7 = 0LL;
  if ( (unsigned __int16)KeNumberNodes > 0x40u || (v0 = (unsigned __int16)KeNumberNodes, KeNumberNodes) )
  {
    v2 = MxBootState;
    v3 = v0;
    do
    {
      if ( v2[24] )
      {
        v8[1] = 0;
        memset_0(v8, 0, 0x184uLL);
        MxExtractUnusedRegions(v2, v8);
        v4 = (unsigned int)v8[0];
        if ( v8[0] )
        {
          v5 = &v9;
          do
          {
            v1 += *(_QWORD *)v5;
            v5 += 48;
            --v4;
          }
          while ( v4 );
        }
      }
      MxGetFreeDescriptorCounts((__int64)v2, &v7);
      v1 += *((_QWORD *)&v7 + 1);
      v2 += 250;
      --v3;
    }
    while ( v3 );
  }
  result = qword_140E3D550 - v1;
  qword_140E3D550 -= v1;
  return result;
}
