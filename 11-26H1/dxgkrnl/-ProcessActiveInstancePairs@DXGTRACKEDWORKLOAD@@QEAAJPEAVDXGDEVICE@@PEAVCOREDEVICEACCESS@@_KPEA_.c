/*
 * XREFs of ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x14020A728
 * Callers:
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x14020A4C0 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x14020BF20 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x14020C3F0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z @ 0x1400825F4 (-QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z.c)
 *     McTemplateK0pxqqxxxdx_EtwWriteTransfer @ 0x140082E44 (McTemplateK0pxqqxxxdx_EtwWriteTransfer.c)
 *     ?Add@CumulativeStats@@QEAAXN@Z @ 0x1400A4B78 (-Add@CumulativeStats@@QEAAXN@Z.c)
 *     ?Add@RollingStats@@QEAAXN@Z @ 0x1400A4BBC (-Add@RollingStats@@QEAAXN@Z.c)
 *     ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1400A4BE4 (-Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z.c)
 *     ?GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAIXZ @ 0x1400A4CEC (-GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAIXZ.c)
 *     DxgkUnlock2Internal @ 0x14028DB00 (DxgkUnlock2Internal.c)
 *     DxgkLock2Internal @ 0x14028ED50 (DxgkLock2Internal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r14
  unsigned __int64 v9; // r15
  unsigned int v10; // ebx
  unsigned __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  double v17; // xmm0_8
  __int64 v18; // rcx
  double v19; // xmm1_8
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  double v25; // xmm0_8
  __int64 v26; // rax
  double v27; // xmm6_8
  double v28; // xmm2_8
  double v29; // xmm1_8
  double v30; // xmm7_8
  struct RollingStats *v31; // r8
  char v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // [rsp+30h] [rbp-A9h]
  __int64 v36; // [rsp+38h] [rbp-A1h]
  __int64 v37; // [rsp+58h] [rbp-81h]
  __int64 v38; // [rsp+68h] [rbp-71h]
  __int128 v39; // [rsp+70h] [rbp-69h]
  _BYTE v40[112]; // [rsp+88h] [rbp-51h] BYREF
  unsigned __int64 v41; // [rsp+138h] [rbp+5Fh] BYREF
  struct COREDEVICEACCESS *v42; // [rsp+148h] [rbp+6Fh]
  unsigned __int64 v43; // [rsp+150h] [rbp+77h]

  v43 = a4;
  v42 = a3;
  LODWORD(v5) = 0;
  if ( !*((_QWORD *)this + 39) )
    return 0LL;
  v39 = 0LL;
  v38 = 0LL;
  if ( a4 >= *((_QWORD *)this + 12) )
  {
    v9 = -1LL;
    v10 = 0;
    v11 = a5;
    while ( 1 )
    {
      LODWORD(v42) = v10;
      if ( v10 >= *((_DWORD *)this + 26) )
        break;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v40, (struct _KTHREAD **)this + 5);
      v12 = *((_QWORD *)this + 4);
      v13 = 136LL * v10;
      if ( *(_BYTE *)(v13 + v12 + 32) && !*(_BYTE *)(v13 + v12 + 104) )
      {
        v14 = *(_QWORD *)(v13 + v12 + 16);
        if ( v14 <= v43 )
        {
          if ( !v11 )
          {
            LODWORD(v39) = *((_DWORD *)a2 + 117);
            DWORD1(v39) = *((_DWORD *)this + 21);
            DXGPROCESS::GetCurrent();
            v15 = DxgkLock2Internal(a2);
            v5 = v15;
            if ( v15 < 0 )
            {
              WdLogSingleEntry2(2LL, this, v15);
              WdLogGlobalForLineNumber = 1484;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"TrackedWorkload 0x%I64x: Unable to lock query result buffer, returning 0x%I64x",
                (__int64)this,
                v5,
                0LL,
                0LL,
                0LL);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
              return (unsigned int)v5;
            }
            v11 = 0LL;
          }
          v16 = v11[*(unsigned int *)(v13 + v12 + 8)] - v11[*(unsigned int *)(v13 + v12)];
          if ( v16 < 0 )
            v17 = (double)(int)(v16 & 1 | ((unsigned __int64)v16 >> 1))
                + (double)(int)(v16 & 1 | ((unsigned __int64)v16 >> 1));
          else
            v17 = (double)(int)v16;
          v18 = *((_QWORD *)this + 39);
          if ( v18 < 0 )
          {
            v20 = *((_QWORD *)this + 39) & 1LL | (*((_QWORD *)this + 39) >> 1);
            v19 = (double)(int)v20 + (double)(int)v20;
          }
          else
          {
            v19 = (double)(int)v18;
          }
          *(double *)(*(_QWORD *)(v13 + v12 + 128) + 16LL) = v17 / v19 * 1000.0
                                                           + *(double *)(*(_QWORD *)(v13 + v12 + 128) + 16LL);
          if ( !*(_BYTE *)(v13 + v12 + 12) )
          {
            v21 = *(_QWORD *)(v13 + v12 + 48);
            v22 = *(_QWORD *)(v13 + v12 + 40);
            v41 = 0LL;
            if ( DXGTRACKEDWORKLOAD::QPCFromGPUTimestamp(this, v22, v21, v11[*(unsigned int *)(v13 + v12 + 8)], &v41) )
            {
              v23 = *(_QWORD *)(v13 + v12 + 24) - v41;
              v24 = *((_QWORD *)this + 40);
              if ( v24 < 0 )
              {
                v26 = *((_QWORD *)this + 40) & 1LL | (*((_QWORD *)this + 40) >> 1);
                v25 = (double)(int)v26 + (double)(int)v26;
              }
              else
              {
                v25 = (double)(int)v24;
              }
              v27 = (double)(int)v23 / v25 * 1000.0;
              if ( *(_BYTE *)(v13 + v12 + 120) )
              {
                *((_QWORD *)this + 38) += v23 >> 63;
                CumulativeStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 192), v27);
              }
              RollingStats::Add(
                (DXGTRACKEDWORKLOAD *)((char *)this + 120),
                *(double *)(*(_QWORD *)(v13 + v12 + 128) + 16LL));
              v28 = DOUBLE_300_0;
              v29 = *(double *)(*(_QWORD *)(v13 + v12 + 128) + 16LL);
              if ( v29 + v27 > 0.0 )
                v28 = v29 * 100.0 / (v29 + v27);
              v30 = fmin(300.0, fmax(5.0, v28));
              RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 232), v30);
              if ( bTracingEnabled != v32 )
              {
                KeQueryPerformanceCounter(0LL);
                if ( v27 >= 0.0 )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
                  {
                    LODWORD(v37) = (int)v27;
                    LODWORD(v36) = (int)v30;
                    LODWORD(v35) = TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
                    McTemplateK0pxqqxxxdx_EtwWriteTransfer(
                      *(_QWORD *)(v13 + v12 + 112),
                      &TrackedWorkloadDeadline,
                      (unsigned int)(int)v27,
                      this,
                      v34,
                      v35,
                      v36,
                      *(_QWORD *)(v13 + v12 + 112),
                      *(_QWORD *)(v13 + v12 + 24),
                      v41,
                      v37,
                      *((_QWORD *)this + 38),
                      v38,
                      v39);
                  }
                }
                else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
                {
                  LODWORD(v37) = (int)v27;
                  LODWORD(v36) = (int)v30;
                  LODWORD(v35) = TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
                  McTemplateK0pxqqxxxdx_EtwWriteTransfer(
                    *(_QWORD *)(v13 + v12 + 112),
                    &TrackedWorkloadDeadlineMissed,
                    (unsigned int)(int)v27,
                    this,
                    v33,
                    v35,
                    v36,
                    *(_QWORD *)(v13 + v12 + 112),
                    *(_QWORD *)(v13 + v12 + 24),
                    v41,
                    v37,
                    *((_QWORD *)this + 38),
                    v38,
                    v39);
                }
                v31 = (DXGTRACKEDWORKLOAD *)((char *)this + 232);
              }
              if ( v27 < 0.0 )
                TrackedWorkloadMonitor::Boost((DXGTRACKEDWORKLOAD *)((char *)this + 328), v31);
            }
            **(_BYTE **)(v13 + v12 + 128) = 0;
          }
          *(_BYTE *)(*(unsigned int *)(v13 + v12) + *((_QWORD *)this + 11)) = 0;
          *(_BYTE *)(*(unsigned int *)(v13 + v12 + 8) + *((_QWORD *)this + 11)) = 0;
          *(_BYTE *)(v13 + v12 + 32) = 0;
        }
        else
        {
          v9 = *((_QWORD *)this + 12);
          if ( v9 >= v14 )
            v9 = *(_QWORD *)(v13 + v12 + 16);
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
      v10 = (_DWORD)v42 + 1;
    }
    if ( !v11
      || !*((_DWORD *)this + 21)
      || (DXGPROCESS::GetCurrent(), LODWORD(v5) = DxgkUnlock2Internal(a2), (int)v5 >= 0) )
    {
      if ( v9 != -1LL )
        *((_QWORD *)this + 12) = v9;
    }
  }
  return (unsigned int)v5;
}
