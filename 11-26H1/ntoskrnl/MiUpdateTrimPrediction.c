/*
 * XREFs of MiUpdateTrimPrediction @ 0x14052046C
 * Callers:
 *     MiUpdatePartitionMemoryUsage @ 0x1402A60BC (MiUpdatePartitionMemoryUsage.c)
 *     MiComputeHardAgingPercent @ 0x1404AB228 (MiComputeHardAgingPercent.c)
 * Callees:
 *     Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline @ 0x1406FC634 (Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall MiUpdateTrimPrediction(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned __int64 *v8; // r10
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax

  v3 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = (unsigned __int64 *)a1;
  do
  {
    v9 = *v8;
    if ( *v8 < a2 )
    {
      v9 = a2;
      *(_QWORD *)(a1 + 8LL * v7) = a2;
    }
    v6 += v9;
    ++v7;
    ++v8;
  }
  while ( v7 < 8 );
  v10 = v6 >> 3;
  *(_QWORD *)(a1 + 64) = (a2 + 7 * v10) >> 3;
  *(_QWORD *)(a1 + 8LL * ((*(_DWORD *)(a1 + 72))++ & 7)) = a2;
  if ( (unsigned int)Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !a2 || a2 < v10 )
    {
LABEL_8:
      v11 = v10 - a2;
      if ( a2 > a3 )
      {
        v12 = a2 - a3;
        if ( v11 < 8 )
          v11 = 8LL;
        v13 = v12 / (v11 >> 3);
        v3 = v13 - 2;
        if ( v13 < 2 )
          return v12 / (v11 >> 3);
      }
      return v3;
    }
    if ( a2 < a3 )
      return v3;
  }
  else if ( !a2 || a2 < v10 )
  {
    goto LABEL_8;
  }
  return -1LL;
}
