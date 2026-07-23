/*
 * XREFs of RtlpGenericInverseCouplingWorker @ 0x1404084D0
 * Callers:
 *     RtlScrubMemory @ 0x140408284 (RtlScrubMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGenericInverseCouplingWorker(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  unsigned __int64 v5; // r12
  void *v6; // r11
  unsigned __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *i; // rcx
  char *v11; // rax
  char *v12; // rdx
  struct _KPRCB *v13; // rax
  __int64 v14; // rdi
  char *j; // rcx
  char *k; // rax
  char *v17; // r11
  _DWORD *v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rbx
  struct _KPRCB *v22; // rax
  __int64 v23; // rdi
  char *v24; // rcx
  void *v25; // rbx
  unsigned __int64 v26; // r11
  struct _KPRCB *v27; // rax
  __int64 v28; // rdx
  char *m; // rcx
  _DWORD *n; // rax
  void *v31; // r11
  struct _KPRCB *v32; // rax
  __int64 v33; // rdx
  char *ii; // rcx
  _DWORD *v35; // rax
  struct _KPRCB *v36; // rax
  __int64 v37; // rdx
  char *jj; // rcx
  _DWORD *v39; // rax
  signed __int32 v41[6]; // [rsp+0h] [rbp-18h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = 1024LL;
  v6 = (void *)a3;
  v7 = 1024LL;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a3 = a1;
    v6 = (void *)(a3 + 4);
    v7 = 1023LL;
  }
  memset64(v6, a1 | ((unsigned __int64)a1 << 32), v7 >> 1);
  if ( (v7 & 1) != 0 )
    *((_DWORD *)v6 + v7 - 1) = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( i = (char *)(a3 & ~(CFlushSize - 1)); (unsigned __int64)i < a3 + 4096; i += CFlushSize )
      _mm_clflush(i);
  }
  v11 = (char *)a3;
  v12 = (char *)(a3 + 4096);
  while ( v11 < v12 )
  {
    if ( *(_DWORD *)v11 != (_DWORD)v4 )
      return 0;
    *(_DWORD *)v11 = v4;
    v11 += 4;
  }
  v13 = KeGetCurrentPrcb();
  v14 = v13->CFlushSize;
  if ( v13->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( j = (char *)(a3 & ~(v14 - 1)); j < v12; j += v14 )
      _mm_clflush(j);
  }
  for ( k = (char *)a3; k < v12; k += 4 )
  {
    if ( *(_DWORD *)k != (_DWORD)v4 )
      return 0;
  }
  v17 = (char *)a3;
  if ( (a3 & 4) != 0 )
  {
    v17 = (char *)(a3 + 4);
    *(_DWORD *)a3 = v4;
    v18 = (_DWORD *)(a3 + 4);
    v19 = 511LL;
    v20 = 1LL;
    v21 = 4088LL;
  }
  else
  {
    v18 = (_DWORD *)(a3 + 4);
    v19 = 512LL;
    v20 = 0LL;
    v21 = 4092LL;
  }
  memset64(v17, v4 | (v4 << 32), v19);
  if ( v20 )
    *(_DWORD *)&v17[v21] = v4;
  v22 = KeGetCurrentPrcb();
  v23 = v22->CFlushSize;
  if ( v22->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    v24 = (char *)(a3 & ~(v23 - 1));
    if ( v24 < v12 )
    {
      do
      {
        _mm_clflush(v24);
        v24 += v23;
      }
      while ( v24 < v12 );
      v18 = (_DWORD *)(a3 + 4);
    }
  }
  v25 = (void *)a3;
  v26 = 1024LL;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a3 = v3;
    v26 = 1023LL;
    v25 = v18;
  }
  memset64(v25, v3 | (v3 << 32), v26 >> 1);
  if ( (v26 & 1) != 0 )
    *((_DWORD *)v25 + v26 - 1) = v3;
  v27 = KeGetCurrentPrcb();
  v28 = v27->CFlushSize;
  if ( v27->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( m = (char *)(a3 & ~(v28 - 1)); (unsigned __int64)m < a3 + 4096; m += v28 )
      _mm_clflush(m);
  }
  for ( n = (_DWORD *)a3; (unsigned __int64)n < a3 + 4096; ++n )
  {
    if ( *n != (_DWORD)v3 )
      return 0;
  }
  v31 = (void *)a3;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a3 = v4;
    v31 = (void *)(a3 + 4);
    v5 = 1023LL;
  }
  memset64(v31, v4 | (v4 << 32), v5 >> 1);
  if ( (v5 & 1) != 0 )
    *((_DWORD *)v31 + v5 - 1) = v4;
  v32 = KeGetCurrentPrcb();
  v33 = v32->CFlushSize;
  if ( v32->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( ii = (char *)(a3 & ~(v33 - 1)); (unsigned __int64)ii < a3 + 4096; ii += v33 )
      _mm_clflush(ii);
  }
  v35 = (_DWORD *)(a3 + 4096);
  do
    *--v35 = v3;
  while ( v35 != (_DWORD *)a3 );
  v36 = KeGetCurrentPrcb();
  v37 = v36->CFlushSize;
  if ( v36->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( jj = (char *)(a3 & ~(v37 - 1)); (unsigned __int64)jj < a3 + 4096; jj += v37 )
      _mm_clflush(jj);
  }
  v39 = (_DWORD *)(a3 + 4096);
  while ( a3 < (unsigned __int64)v39 )
  {
    if ( *(_DWORD *)a3 != (_DWORD)v3 )
      return 0;
    a3 += 4LL;
  }
  return 1;
}
