/*
 * XREFs of sub_140033860 @ 0x140033860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140033860(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  double v5; // xmm1_8

  if ( a2 <= 1 )
  {
    result = (unsigned int)a3;
    v4 = 32LL * (int)a2;
    ++*(_DWORD *)(v4 + a1 + 16);
    v5 = (double)a3 * (double)a3 + *(double *)(v4 + a1 + 40);
    *(double *)(v4 + a1 + 24) = (double)a3 + *(double *)(v4 + a1 + 24);
    *(double *)(v4 + a1 + 40) = v5;
    if ( (unsigned int)a3 < *(_DWORD *)(v4 + a1 + 32) )
      *(_DWORD *)(v4 + a1 + 32) = a3;
    if ( (unsigned int)a3 > *(_DWORD *)(v4 + a1 + 36) )
      *(_DWORD *)(v4 + a1 + 36) = a3;
  }
  return result;
}
