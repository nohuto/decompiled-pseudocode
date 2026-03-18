/*
 * XREFs of MiUpdateTrimPrediction @ 0x1404B366C
 * Callers:
 *     MiUpdatePartitionMemoryUsage @ 0x1402A6CA0 (MiUpdatePartitionMemoryUsage.c)
 *     MiComputeHardAgingPercent @ 0x1404B1DCC (MiComputeHardAgingPercent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateTrimPrediction(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned int i; // r11d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax

  v4 = (unsigned __int64 *)a1;
  v5 = 0LL;
  v6 = 0LL;
  for ( i = 0; i < 8; ++i )
  {
    v8 = *v4;
    if ( *v4 < a2 )
    {
      v8 = a2;
      *(_QWORD *)(a1 + 8LL * i) = a2;
    }
    v6 += v8;
    ++v4;
  }
  v9 = v6 >> 3;
  *(_QWORD *)(a1 + 64) = (a2 + 7 * v9) >> 3;
  *(_QWORD *)(a1 + 8LL * ((*(_DWORD *)(a1 + 72))++ & 7)) = a2;
  if ( a2 && a2 >= v9 )
    return -1LL;
  v11 = v9 - a2;
  if ( a2 > a3 )
  {
    v12 = a2 - a3;
    if ( v11 < 8 )
      v11 = 8LL;
    v13 = v12 / (v11 >> 3);
    v5 = v13 - 2;
    if ( v13 < 2 )
      return v12 / (v11 >> 3);
  }
  return v5;
}
