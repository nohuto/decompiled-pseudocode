/*
 * XREFs of CcCalculatePagesToWriteForVolume @ 0x14038BF10
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcNotifyExternalCachesInternal @ 0x1405007BC (CcNotifyExternalCachesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCalculatePagesToWriteForVolume(__int64 a1, int a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // r8

  v2 = 0LL;
  if ( a2 == 16 || (unsigned int)(a2 - 1) <= 1 )
  {
    v2 = *(_QWORD *)(a1 + 992);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 992);
    if ( !v4 )
      return (unsigned int)v2;
    v5 = *(_QWORD *)(a1 + 1000);
    v6 = *(unsigned int *)(a1 + 1008);
    v7 = *(unsigned int *)(a1 + 1040);
    v8 = v4 / *(unsigned int *)(a1 + 1552);
    v9 = 0LL;
    v10 = v8;
    if ( v8 <= (unsigned int)CcMaxLazyWritePages )
      v10 = v4;
    if ( v6 + v4 > v5 )
      v9 = v6 + v4 - v5;
    v11 = v9 + v4 - v10;
    if ( v11 > v7 )
    {
      v14 = v11 - v7;
      if ( v14 / *(unsigned int *)(a1 + 1556) )
        v14 /= *(unsigned int *)(a1 + 1556);
      v2 = v14;
    }
    v12 = *(_QWORD *)(a1 + 1016);
    v2 += v10;
    if ( v4 > v12 && v4 - v12 > v2 )
      v2 = v4 - v12;
    if ( v2 > v4 )
      v2 = v4;
  }
  if ( v2 > 0xFFFFFFFF )
    LODWORD(v2) = -1;
  return (unsigned int)v2;
}
