/*
 * XREFs of MiComputeAgingPercent @ 0x1404A9CC8
 * Callers:
 *     MiUpdatePartitionMemoryUsage @ 0x1402A60BC (MiUpdatePartitionMemoryUsage.c)
 *     MiComputeHardAgingPercent @ 0x1404AB228 (MiComputeHardAgingPercent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeAgingPercent(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r10
  unsigned int v6; // r11d
  unsigned __int64 v7; // r8
  unsigned int v9; // edi
  unsigned __int64 v10; // r8
  unsigned int i; // edx
  unsigned __int64 v12; // rax
  unsigned __int64 result; // rax

  v4 = *(_QWORD *)(a4 + 64);
  v5 = 0LL;
  v6 = 5;
  v7 = 4 * a3;
  v9 = 0;
  while ( v4 < v7 )
  {
    ++v9;
    v4 += *(_QWORD *)(a4 + 8LL * v6);
    if ( v6 == 1 )
      break;
    --v6;
  }
  v10 = 0LL;
  for ( i = 0; i < 8; ++i )
  {
    if ( v10 + *(_QWORD *)(a4 + 8LL * i) < v10 )
    {
      v10 = -1LL;
      goto LABEL_11;
    }
    v10 += *(_QWORD *)(a4 + 8LL * i);
  }
  if ( !v10 )
    v10 = 1LL;
LABEL_11:
  if ( a2 || v9 )
  {
    v12 = *(_QWORD *)(a1 + 18664);
    if ( !v12 )
      v12 = 5000000LL;
    v5 = 3 * (v12 >> 2);
    if ( a2 && 3 * (v12 >> 2) >= v9 * (v10 / a2) )
      v5 = v9 * (v10 / a2);
  }
  result = 1000LL;
  if ( v5 < v10 )
    return 1000 * v5 / v10;
  return result;
}
