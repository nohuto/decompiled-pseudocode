/*
 * XREFs of PpmCheckComputeEnergy @ 0x140257A60
 * Callers:
 *     <none>
 * Callees:
 *     PpmEventComputeEnergy @ 0x140257C6C (PpmEventComputeEnergy.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void PpmCheckComputeEnergy()
{
  unsigned int v0; // ebx
  unsigned int *IptSaveArea; // rdx
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int16 i; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  char *v10; // r10
  unsigned int v11; // r11d
  __int64 v12; // r11
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // eax
  char *v16; // rdi
  __int64 v17; // rsi
  __int64 Prcb; // rax

  v0 = 0;
  if ( stru_140F12EA0.SchedulerSharedSwappablePage )
  {
    IptSaveArea = (unsigned int *)stru_140F12EA0.IptSaveArea;
    if ( stru_140F12EA0.IptSaveArea )
    {
      v2 = 0;
      if ( *(_DWORD *)stru_140F12EA0.IptSaveArea )
      {
        do
        {
          v3 = v2++;
          v4 = 14 * v3;
          IptSaveArea[v4 + 3] = 64;
          *(_QWORD *)&IptSaveArea[v4 + 4] = 0LL;
          *(_QWORD *)&IptSaveArea[v4 + 6] = 0LL;
        }
        while ( v2 < *IptSaveArea );
      }
      v5 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 4);
      for ( i = 0; ; v5 = *(unsigned __int64 *)((char *)&stru_140FC11F0.116 + 8 * i + 4) )
      {
        while ( v5 )
        {
          _BitScanForward64(&v7, v5);
          v5 &= ~(1LL << v7);
          v8 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * i].Flink
               + (unsigned __int8)v7);
          if ( (unsigned int)v8 >= (unsigned int)KeNumberProcessors_0 )
          {
            v9 = 0LL;
          }
          else
          {
            _mm_lfence();
            v9 = KiProcessorBlock[v8];
          }
          v10 = (char *)stru_140F12EA0.IptSaveArea;
          v11 = *(_DWORD *)stru_140F12EA0.IptSaveArea - 1;
          if ( (unsigned int)*(unsigned __int8 *)(v9 + 35352) < *(_DWORD *)stru_140F12EA0.IptSaveArea )
            v11 = *(unsigned __int8 *)(v9 + 35352);
          if ( v11 < *(_DWORD *)stru_140F12EA0.IptSaveArea )
          {
            v12 = 56LL * v11;
            *(_DWORD *)((char *)stru_140F12EA0.IptSaveArea + v12 + 12) = v8;
            *(_QWORD *)&v10[v12 + 16] += *(_QWORD *)(v9 + 35368);
            *(_QWORD *)&v10[v12 + 24] += *(_QWORD *)(v9 + 35376);
            v13 = *(_QWORD *)(v9 + 35264);
            v14 = *(_QWORD *)(v9 + 35272);
            if ( v13 && v14 )
            {
              v15 = *(_DWORD *)(v14 + 148);
              if ( v15 == -1 )
              {
                v15 = *(_DWORD *)(v14 + 160);
              }
              else if ( v15 >= *(_DWORD *)(v13 + 536) )
              {
                v15 = *(_DWORD *)(v13 + 536);
              }
            }
            else
            {
              v15 = 100;
            }
            *(_DWORD *)&v10[v12 + 8] = v15;
          }
          *(_QWORD *)(v9 + 35368) = 0LL;
          *(_QWORD *)(v9 + 35376) = 0LL;
        }
        if ( ++i >= (unsigned int)*(unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags )
          break;
      }
      v16 = (char *)stru_140F12EA0.IptSaveArea;
      if ( *(_DWORD *)stru_140F12EA0.IptSaveArea )
      {
        do
        {
          v17 = 56LL * v0;
          if ( *(_DWORD *)&v16[v17 + 12] != 64 )
          {
            guard_dispatch_icall_no_overrides(v0, *(_QWORD *)&v16[v17 + 16], *(_QWORD *)&v16[v17 + 24]);
            PpmEventComputeEnergy(v0, 0LL);
            Prcb = KeGetPrcb(*(unsigned int *)&v16[v17 + 12]);
            *(_QWORD *)(Prcb + 35360) = *(_QWORD *)(Prcb + 35360);
          }
          v16 = (char *)stru_140F12EA0.IptSaveArea;
          ++v0;
        }
        while ( v0 < *(_DWORD *)stru_140F12EA0.IptSaveArea );
      }
    }
  }
}
