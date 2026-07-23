/*
 * XREFs of PpmParkComputeSnapStatistics @ 0x140418980
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140416820 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmParkComputeSnapStatistics(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        _WORD *a5,
        _BYTE *a6,
        _WORD *a7)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  int v10; // r8d
  unsigned __int64 v11; // rdi
  int i; // r10d
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int j; // r8d
  int k; // ecx
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // rcx

  v8 = *(_QWORD *)(a4 + 24) - *(_QWORD *)(a4 + 32);
  v9 = a3;
  if ( a1 )
    v8 /= (unsigned int)(a1 + 1);
  if ( !v8 )
    return 0;
  v10 = *(_DWORD *)(a4 + 48);
  v11 = 0LL;
  for ( i = 0; i < v10; v10 = *(_DWORD *)(a4 + 48) )
  {
    v13 = i++;
    *(_QWORD *)(8 * v13 + *(_QWORD *)(a4 + 16)) = *(_QWORD *)(*(_QWORD *)a4 + 8 * v13)
                                                - *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v13);
  }
  v14 = 0LL;
  for ( j = v10 - 1; j >= 0; --j )
  {
    v14 += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * j);
    if ( v14 >= v8 - v8 * v9 / 0x64 )
      break;
  }
  *a7 = j;
  for ( k = *(_DWORD *)(a4 + 48) - 1; k >= 0; --k )
  {
    v11 += *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k);
    if ( v11 >= v8 - v8 * a2 / 0x64 )
      break;
  }
  *a5 = k;
  if ( k <= 0 )
    LOBYTE(v17) = 0;
  else
    v17 = 100LL * *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL * k) / v8;
  *a6 = v17;
  *(_QWORD *)(a4 + 32) += v8;
  v18 = *(_DWORD *)(a4 + 48);
  *(_QWORD *)(a4 + 40) = v8;
  while ( --v18 >= 0 )
  {
    v19 = *(_QWORD *)(a4 + 8);
    v20 = 8LL * v18;
    v21 = *(_QWORD *)(v20 + *(_QWORD *)(a4 + 16));
    v22 = *(_QWORD *)(v19 + v20);
    if ( v21 > v8 )
    {
      *(_QWORD *)(v19 + 8LL * v18) = v8 + v22;
      return 1;
    }
    *(_QWORD *)(v19 + 8LL * v18) = v21 + v22;
    v8 -= v21;
  }
  return 1;
}
