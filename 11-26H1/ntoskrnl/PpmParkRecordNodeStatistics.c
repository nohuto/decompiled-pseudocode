/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x140416820
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140211FC0 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x140416B34 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     PpmEventParkNodeRecordedStats @ 0x140416D6C (PpmEventParkNodeRecordedStats.c)
 *     PpmParkComputeSnapStatistics @ 0x140418980 (PpmParkComputeSnapStatistics.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x14052A27C (PpmEventParkNodeClassRecordedStats.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  unsigned __int64 v0; // rdx
  __int64 result; // rax
  unsigned __int16 v2; // si
  int v3; // r13d
  __int64 v4; // rcx
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // bp
  __int64 v7; // rbx
  unsigned __int64 v8; // r11
  int v9; // r8d
  int j; // edi
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int64 k; // rcx
  unsigned __int64 v14; // rdx
  __int64 m; // rcx
  unsigned __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int8 v21; // di
  __int64 v22; // rcx
  __int64 v23; // rax
  _WORD *v24; // r14
  __int64 v25; // rbp
  _BYTE *v26; // r15
  unsigned __int16 *v27; // r12
  int v28; // r9d
  unsigned __int8 i; // [rsp+80h] [rbp+8h]
  unsigned __int8 v30; // [rsp+88h] [rbp+10h]
  unsigned __int16 v31; // [rsp+90h] [rbp+18h]

  LODWORD(v0) = (_DWORD)PpmCurrentProfile;
  result = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v2 = 0;
  v3 = PpmCheckMakeupCount;
  v4 = 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v31 = 0;
  v5 = *((_BYTE *)PpmCurrentProfile + v4 + 262);
  v6 = *((_BYTE *)PpmCurrentProfile + v4 + 264);
  v30 = v5;
  for ( i = v6; v2 < (unsigned int)PpmParkNumNodes; v31 = v2 )
  {
    v7 = PpmParkNodes + 1264LL * v2;
    v8 = *(_QWORD *)(v7 + 1104) - *(_QWORD *)(v7 + 1112);
    if ( v3 )
    {
      v0 = v8 % (unsigned int)(v3 + 1);
      v8 /= (unsigned int)(v3 + 1);
    }
    if ( v8 )
    {
      v9 = *(_DWORD *)(v7 + 1128);
      for ( j = 0; j < v9; v9 = *(_DWORD *)(v7 + 1128) )
      {
        v11 = j++;
        *(_QWORD *)(*(_QWORD *)(v7 + 1096) + 8 * v11) = *(_QWORD *)(*(_QWORD *)(v7 + 1080) + 8 * v11)
                                                      - *(_QWORD *)(*(_QWORD *)(v7 + 1088) + 8 * v11);
      }
      v12 = 0LL;
      for ( k = (unsigned int)(v9 - 1); (int)k >= 0; k = (unsigned int)(k - 1) )
      {
        v12 += *(_QWORD *)(*(_QWORD *)(v7 + 1096) + 8 * k);
        if ( v12 >= v8 - v8 * v6 / 0x64 )
          break;
      }
      *(_WORD *)(v7 + 1148) = k;
      v14 = 0LL;
      for ( m = (unsigned int)(*(_DWORD *)(v7 + 1128) - 1); (int)m >= 0; m = (unsigned int)(m - 1) )
      {
        v14 += *(_QWORD *)(*(_QWORD *)(v7 + 1096) + 8 * m);
        if ( v14 >= v8 - v8 * v5 / 0x64 )
          break;
      }
      *(_WORD *)(v7 + 1144) = m;
      if ( (int)m <= 0 )
        LOBYTE(v16) = 0;
      else
        v16 = 100LL * *(_QWORD *)(*(_QWORD *)(v7 + 1096) + 8LL * (int)m) / v8;
      *(_BYTE *)(v7 + 1146) = v16;
      *(_QWORD *)(v7 + 1112) += v8;
      v17 = *(_DWORD *)(v7 + 1128);
      *(_QWORD *)(v7 + 1120) = v8;
      while ( --v17 >= 0 )
      {
        v18 = *(_QWORD *)(v7 + 1088);
        v19 = *(_QWORD *)(*(_QWORD *)(v7 + 1096) + 8LL * v17);
        v20 = *(_QWORD *)(v18 + 8LL * v17);
        if ( v19 > v8 )
        {
          *(_QWORD *)(v18 + 8LL * v17) = v8 + v20;
          break;
        }
        *(_QWORD *)(v18 + 8LL * v17) = v19 + v20;
        v8 -= v19;
      }
      PpmEventParkNodeRecordedStats(v2, v7 + 16, *(unsigned __int16 *)(v7 + 1144), v7 + 1080, *(_WORD *)(v7 + 1148));
    }
    if ( *(_BYTE *)(v7 + 1153) )
    {
      v21 = 0;
      if ( *(_BYTE *)(v7 + 10) )
      {
        do
        {
          LOBYTE(v0) = v30;
          v22 = 624LL * v21;
          v23 = *(_QWORD *)(v7 + 1256);
          v24 = (_WORD *)(v22 + v23 + 616);
          v25 = v22 + v23 + 560;
          v26 = (_BYTE *)(v22 + v23 + 620);
          v27 = (unsigned __int16 *)(v22 + v23 + 618);
          if ( (unsigned __int8)PpmParkComputeSnapStatistics(
                                  v3,
                                  v0,
                                  i,
                                  (int)v22 + (int)v23 + 560,
                                  (__int64)v27,
                                  (__int64)v26,
                                  (__int64)v24) )
          {
            LOBYTE(v28) = *v26;
            LOBYTE(v0) = v21;
            PpmEventParkNodeClassRecordedStats(v7 + 16, v0, *v27, v28, v25, *v24);
          }
          ++v21;
        }
        while ( v21 < *(_BYTE *)(v7 + 10) );
        v2 = v31;
        v6 = i;
        v5 = v30;
      }
    }
    PpmPerfRecordMostActiveWorkloadClass(v7);
    result = ++v2;
  }
  return result;
}
