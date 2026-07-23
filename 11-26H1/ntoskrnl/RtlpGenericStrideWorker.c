/*
 * XREFs of RtlpGenericStrideWorker @ 0x140408828
 * Callers:
 *     RtlScrubMemory @ 0x140408284 (RtlScrubMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGenericStrideWorker(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int i; // r14d
  unsigned int v8; // r12d
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r15
  __int64 v11; // r11
  __int64 v12; // rcx
  _DWORD *j; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *k; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  _DWORD *v19; // r8
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  _DWORD *v22; // r8
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  struct _KPRCB *v25; // rax
  __int64 v26; // rdx
  char *n; // rcx
  _DWORD *ii; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  _DWORD *v32; // rdi
  unsigned __int64 v33; // rcx
  _DWORD *v34; // rdi
  unsigned __int64 v35; // rdx
  _DWORD *v36; // rdi
  unsigned __int64 m; // rcx
  signed __int32 v38[8]; // [rsp+0h] [rbp-20h] BYREF

  for ( i = 0; i < 6; ++i )
  {
    v8 = 2 * i;
    v9 = a4 + 4096;
    v10 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
    v11 = 2 * i - (unsigned int)v10;
    v12 = (unsigned int)v11;
    if ( (unsigned int)v10 > 2 * i )
      v12 = (unsigned int)(v11 + 12);
    for ( j = (_DWORD *)(a4 + 4 * v12); (unsigned __int64)j < v9; j += 12 )
    {
      *j = a1;
      j[1] = a1;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CFlushSize = CurrentPrcb->CFlushSize;
    if ( CurrentPrcb->CFlushSize )
    {
      _InterlockedOr(v38, 0);
      for ( k = (char *)(a4 & ~(CFlushSize - 1)); (unsigned __int64)k < v9; k += CFlushSize )
        _mm_clflush(k);
    }
    if ( (unsigned int)v10 > v8 )
      v17 = (unsigned int)(v11 + 12);
    else
      v17 = (unsigned int)v11;
    v18 = 4096LL;
    v19 = (_DWORD *)a4;
    if ( 4 * v17 + a4 <= v9 )
      v18 = 4 * v17;
    v20 = a4 + v18;
    v21 = (v20 - a4 + 3) >> 2;
    if ( a4 > v20 )
      v21 = 0LL;
    if ( v21 )
    {
      v35 = 4 * v21;
      v36 = (_DWORD *)a4;
      for ( m = v35 >> 2; m; --m )
        *v36++ = a2;
      v19 = (_DWORD *)(v35 + a4);
    }
    v22 = v19 + 2;
    if ( v20 < v9 )
    {
      v23 = v9 - 4LL * ((unsigned int)((__int64)(v9 - v20) >> 2) % 0xC);
      if ( v20 != v23 )
      {
        while ( 1 )
        {
          v20 += 48LL;
          if ( (unsigned __int64)v22 >= v23 )
            break;
          v30 = (v20 - (unsigned __int64)v22 + 3) >> 2;
          if ( (unsigned __int64)v22 > v20 )
            v30 = 0LL;
          if ( v30 )
          {
            v31 = 4 * v30;
            v32 = v22;
            v33 = v31 >> 2;
            v22 = (_DWORD *)((char *)v22 + v31);
            while ( v33 )
            {
              *v32++ = a2;
              --v33;
            }
          }
          v22 += 2;
        }
      }
    }
    v24 = (v9 - (unsigned __int64)v22 + 3) >> 2;
    if ( (unsigned __int64)v22 > v9 )
      v24 = 0LL;
    if ( v24 )
    {
      v34 = v22;
      while ( v24 )
      {
        *v34++ = a2;
        --v24;
      }
    }
    v25 = KeGetCurrentPrcb();
    v26 = v25->CFlushSize;
    if ( v25->CFlushSize )
    {
      _InterlockedOr(v38, 0);
      for ( n = (char *)(a4 & ~(v26 - 1)); (unsigned __int64)n < v9; n += v26 )
        _mm_clflush(n);
    }
    if ( (unsigned int)v10 > v8 )
      v11 = (unsigned int)(v11 + 12);
    for ( ii = (_DWORD *)(a4 + 4 * v11); (unsigned __int64)ii < v9; ii += 12 )
    {
      if ( *ii != a1 || ii[1] != a1 )
        return 0;
    }
  }
  return 1;
}
