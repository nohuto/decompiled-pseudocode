/*
 * XREFs of PpmPerfRecordMostActiveWorkloadClass @ 0x140416B34
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140416820 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck @ 0x140417018 (Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x14041708C (PpmEventHgsActiveWorkloadClass.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PpmPerfRecordMostActiveWorkloadClass(__int64 a1)
{
  int v2; // ebx
  char v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbp
  char v6; // si
  unsigned int v7; // r9d
  unsigned int v8; // edi
  unsigned __int16 *v9; // r11
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // r10
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // bl
  _QWORD v18[32]; // [rsp+30h] [rbp-238h] BYREF
  _QWORD v19[32]; // [rsp+130h] [rbp-138h] BYREF

  if ( PpmHeteroHgsParkingEnabled )
  {
    v2 = PpmHeteroWorkloadClasses;
    if ( (unsigned int)PpmHeteroWorkloadClasses <= 0x20 )
    {
      v3 = -1;
      v4 = 0LL;
      v5 = 0LL;
      v6 = -1;
      memset_0(v19, 0, sizeof(v19));
      memset_0(v18, 0, sizeof(v18));
      v7 = 0;
      v8 = 1;
      if ( !v2 )
        goto LABEL_22;
      v9 = (unsigned __int16 *)(a1 + 16);
      do
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = 0;
LABEL_7:
        if ( a1 == -16 )
          v12 = v11 + 1;
        else
          v12 = *v9;
        while ( 1 )
        {
          if ( v10 )
          {
            _BitScanForward64(&v13, v10);
            v10 &= ~(1LL << v13);
            v14 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v11].Flink
                  + (unsigned __int8)v13);
            if ( (unsigned int)v14 >= (unsigned int)KeNumberProcessors_0 )
            {
              v15 = 0LL;
            }
            else
            {
              _mm_lfence();
              v15 = KiProcessorBlock[v14];
            }
            v16 = *(_QWORD *)(v15 + 35432);
            v19[v7] += *(_QWORD *)(*(_QWORD *)(v15 + 35440) + 8LL * v7 + 8);
            v18[v7] += *(_QWORD *)(v16 + 8LL * v7 + 8);
            goto LABEL_7;
          }
          if ( ++v11 >= v12 )
            break;
          v10 = *(_QWORD *)&v9[4 * v11 + 4];
        }
        if ( v19[v7] > v4 )
        {
          v4 = v19[v7];
          v3 = v7;
        }
        if ( v18[v7] > v5 )
        {
          v5 = v18[v7];
          v6 = v7;
        }
        ++v7;
      }
      while ( v7 < (unsigned int)PpmHeteroWorkloadClasses );
      if ( v6 == -1 )
LABEL_22:
        v6 = 0;
      v17 = 0;
      if ( v3 != -1 )
        v17 = v3;
      Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck();
      if ( v5 || v4 )
      {
        if ( 100 * v5 / (v4 + v5) >= (unsigned int)PpmHeteroWpsWorkloadProminenceCutoff )
        {
          if ( 100 * v4 / (v4 + v5) >= (unsigned int)PpmHeteroWpsWorkloadProminenceCutoff )
            v8 = 4;
          else
            v17 = v6;
        }
        else
        {
          v6 = v17;
          v8 = 2;
        }
      }
      else
      {
        v8 = 8;
      }
      *(_BYTE *)(a1 + 1231) = v6;
      *(_BYTE *)(a1 + 1230) = v17;
      PpmEventHgsActiveWorkloadClass(a1, v19, v18, v8);
    }
  }
}
