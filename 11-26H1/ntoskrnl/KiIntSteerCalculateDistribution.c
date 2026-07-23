/*
 * XREFs of KiIntSteerCalculateDistribution @ 0x140256910
 * Callers:
 *     KeIntSteerPeriodic @ 0x1402563C0 (KeIntSteerPeriodic.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x140256D68 (KiIntPartGetLowestClassProcessorInMask.c)
 *     KiIntSteerComputeCpuSet @ 0x140256E54 (KiIntSteerComputeCpuSet.c)
 *     KiIntSteerCalculateUniformDistribution @ 0x1404C4608 (KiIntSteerCalculateUniformDistribution.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiIntSteerCalculateDistribution(char *a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v8; // rdi
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // cx
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // r14
  unsigned __int16 v16; // dx
  __int64 v17; // rax
  __int64 v18; // rdi
  ULONG ActiveProcessorCount; // eax
  struct _KTHREAD *Thread; // rdx
  unsigned int v21; // r10d
  __int64 v22; // r8
  _QWORD *v23; // rbx
  _QWORD *v24; // rsi
  unsigned int v25; // r15d
  __int64 v26; // rcx
  unsigned int LowestClassProcessorInMask; // eax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  _QWORD *v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  unsigned int v37; // ecx
  int v39; // ecx
  int v40; // ecx
  _QWORD *v41; // [rsp+20h] [rbp-60h] BYREF
  _QWORD **v42; // [rsp+28h] [rbp-58h]
  _QWORD v43[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v44; // [rsp+40h] [rbp-40h]
  __int64 v45; // [rsp+48h] [rbp-38h]
  __int64 v46; // [rsp+50h] [rbp-30h]
  __int64 v47; // [rsp+58h] [rbp-28h]
  __int64 *v48; // [rsp+60h] [rbp-20h]
  _QWORD v49[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = *a2;
  v5 = KiIntTrackRootList;
  v42 = &v41;
  v8 = *a3 | *a4 | v4;
  v48 = a4;
  v41 = &v41;
  if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
  {
    do
    {
      if ( *(_BYTE *)(v5 + 132) && (!*(_QWORD *)(v5 + 136) || (int)KiIntSteerComputeCpuSet(v5) < 0) )
      {
        if ( *(_QWORD *)(v5 + 192) )
        {
          v35 = v42;
          v36 = (_QWORD *)(v5 + 208);
          if ( *v42 != &v41 )
LABEL_41:
            __fastfail(3u);
          *(_QWORD *)(v5 + 216) = v42;
          *v36 = &v41;
          *v35 = v36;
          v42 = (_QWORD **)(v5 + 208);
        }
        else
        {
          v34 = *(_QWORD *)(v5 + 160);
          if ( (v8 & v34) != v34 )
          {
            v37 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock
                  + (unsigned int)KiIntPartGetLowestClassProcessorInMask(v5 + 64));
            *(_DWORD *)(v5 + 186) = 0;
            *(_WORD *)(v5 + 190) = 0;
            *(_WORD *)(v5 + 184) = v37 >> 6;
            v34 = 1LL << v37;
          }
          *(_QWORD *)(v5 + 176) = v34;
        }
      }
      v5 = *(_QWORD *)v5;
    }
    while ( (__int64 *)v5 != &KiIntTrackRootList );
    if ( v41 != &v41 )
    {
      v11 = *((_WORD *)a2 + 4);
      v12 = *((_WORD *)a3 + 4);
      v13 = *a2;
      if ( v12 == v11 )
      {
        v14 = *a3;
        v15 = *a3 & ~v13;
      }
      else
      {
        v15 = *a3;
        v14 = v15;
      }
      v16 = *((_WORD *)a4 + 4);
      if ( v16 == v11 )
        v17 = *a4 & ~v13;
      else
        v17 = *a4;
      if ( v16 == v12 )
        v18 = v17 & ~v14;
      else
        v18 = v17;
      v43[1] = v11;
      v43[0] = v13;
      v45 = v12;
      v44 = v15;
      v47 = v16;
      v46 = v18;
      if ( !a1 )
      {
        a1 = (char *)KiIntSteerDistributionContext;
        memset_0((char *)KiIntSteerDistributionContext + 260, 0, 0x100uLL);
      }
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
      if ( ActiveProcessorCount )
      {
        Thread = KiSupervisorXStateFeaturesLock.SchedulerApc.Thread;
        v21 = *(_DWORD *)a1;
        v22 = ActiveProcessorCount;
        do
        {
          if ( v21 <= *(LONG *)((char *)&Thread->Header.SignalState
                              + a1
                              - (char *)KiSupervisorXStateFeaturesLock.SchedulerApc.Thread) )
          {
            v39 = Thread->Header.LockNV & 0x3F;
            v13 &= ~(1LL << (Thread->Header.Type & 0x3F));
            v15 &= ~(1LL << (Thread->Header.Type & 0x3F));
            v43[0] = v13;
            v18 &= ~(1LL << v39);
            v44 = v15;
            v46 = v18;
          }
          Thread = (struct _KTHREAD *)((char *)Thread + 4);
          --v22;
        }
        while ( v22 );
      }
      v23 = v41;
      if ( v41 != &v41 )
      {
        do
        {
          v24 = v43;
          v25 = 0;
          while ( 1 )
          {
            if ( *v24 )
            {
              v26 = *(v23 - 18) & *v24;
              v49[1] = *((unsigned __int16 *)v24 + 4);
              v49[0] = v26;
              if ( v26 )
              {
                LowestClassProcessorInMask = KiIntPartGetLowestClassProcessorInMask(v49);
                if ( LowestClassProcessorInMask != -1 )
                  break;
              }
            }
            ++v25;
            v24 += 2;
            if ( v25 >= 3 )
              goto LABEL_28;
          }
          *(_DWORD *)&a1[4 * LowestClassProcessorInMask + 260] += 10000LL
                                                                * *(v23 - 2)
                                                                / (*(_QWORD *)&KsepShimDbLock.SchedulerAssistPriorityFloor
                                                                 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[LowestClassProcessorInMask] + 68));
          if ( *(_DWORD *)a1 <= (unsigned int)(*(_DWORD *)&a1[4 * LowestClassProcessorInMask + 4]
                                             + *(_DWORD *)&a1[4 * LowestClassProcessorInMask + 260]) )
          {
            v40 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + LowestClassProcessorInMask) & 0x3F;
            v13 &= ~(1LL << (*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Type
                             + 4 * LowestClassProcessorInMask) & 0x3F));
            v15 &= ~(1LL << (*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Type
                             + 4 * LowestClassProcessorInMask) & 0x3F));
            v43[0] = v13;
            v18 &= ~(1LL << v40);
            v44 = v15;
            v46 = v18;
          }
          v28 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + LowestClassProcessorInMask);
          *(_DWORD *)((char *)v23 - 22) = 0;
          *((_WORD *)v23 - 9) = 0;
          *((_WORD *)v23 - 12) = v28 >> 6;
          *(v23 - 4) = 1LL << v28;
          v29 = *v23;
          v30 = (_QWORD *)v23[1];
          if ( *(_QWORD **)(*v23 + 8LL) != v23 || (_QWORD *)*v30 != v23 )
            goto LABEL_41;
          *v30 = v29;
          *(_QWORD *)(v29 + 8) = v30;
LABEL_28:
          v23 = (_QWORD *)*v23;
        }
        while ( v23 != &v41 );
        if ( v41 != &v41 )
        {
          KiIntSteerCalculateUniformDistribution(&v41, v48);
          v31 = v41;
          if ( v41 != &v41 )
          {
            while ( v31 != &v41 )
            {
              v32 = (_QWORD *)*v31;
              if ( (_QWORD **)v31[1] != &v41 || (_QWORD *)v32[1] != v31 )
                goto LABEL_41;
              v41 = (_QWORD *)*v31;
              v32[1] = &v41;
              v33 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock
                    + (unsigned int)KiIntPartGetLowestClassProcessorInMask(v31 - 18));
              *(_DWORD *)((char *)v31 - 22) = 0;
              *((_WORD *)v31 - 9) = 0;
              *((_WORD *)v31 - 12) = v33 >> 6;
              *(v31 - 4) = 1LL << v33;
              v31 = v41;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
