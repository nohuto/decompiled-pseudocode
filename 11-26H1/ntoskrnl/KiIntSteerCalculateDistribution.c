/*
 * XREFs of KiIntSteerCalculateDistribution @ 0x140254FB0
 * Callers:
 *     KeIntSteerPeriodic @ 0x140254A60 (KeIntSteerPeriodic.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x140255408 (KiIntPartGetLowestClassProcessorInMask.c)
 *     KiIntSteerComputeCpuSet @ 0x1402554F4 (KiIntSteerComputeCpuSet.c)
 *     KiIntSteerCalculateUniformDistribution @ 0x1404CABD8 (KiIntSteerCalculateUniformDistribution.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KiIntSteerCalculateDistribution(unsigned int *a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
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
  _DWORD *v20; // rdx
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
  v5 = KsepShimDbLock.Spare35[0];
  v42 = &v41;
  v8 = *a3 | *a4 | v4;
  v48 = a4;
  v41 = &v41;
  if ( (unsigned __int64 *)KsepShimDbLock.Spare35[0] != KsepShimDbLock.Spare35 )
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
            v37 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                            + 4LL * (unsigned int)KiIntPartGetLowestClassProcessorInMask(v5 + 64));
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
    while ( (unsigned __int64 *)v5 != KsepShimDbLock.Spare35 );
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
        a1 = (unsigned int *)KiIntSteerDistributionContext;
        memset_0((char *)KiIntSteerDistributionContext + 260, 0, 0x100uLL);
      }
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
      if ( ActiveProcessorCount )
      {
        v20 = *(_DWORD **)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112];
        v21 = *a1;
        v22 = ActiveProcessorCount;
        do
        {
          if ( v21 <= *(_DWORD *)((char *)v20
                                + (_QWORD)a1
                                - *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                + 4) )
          {
            v39 = *v20 & 0x3F;
            v13 &= ~(1LL << (*(_BYTE *)v20 & 0x3F));
            v15 &= ~(1LL << (*(_BYTE *)v20 & 0x3F));
            v43[0] = v13;
            v18 &= ~(1LL << v39);
            v44 = v15;
            v46 = v18;
          }
          ++v20;
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
          a1[LowestClassProcessorInMask + 65] += 10000LL
                                               * *(v23 - 2)
                                               / (KiIntSteerPreviousPerfSnapDelta
                                                * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[LowestClassProcessorInMask]
                                                                                    + 68));
          if ( *a1 <= a1[LowestClassProcessorInMask + 1] + a1[LowestClassProcessorInMask + 65] )
          {
            v40 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                            + 4LL * LowestClassProcessorInMask) & 0x3F;
            v13 &= ~(1LL << (*(_BYTE *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                      + 4LL * LowestClassProcessorInMask) & 0x3F));
            v15 &= ~(1LL << (*(_BYTE *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                                      + 4LL * LowestClassProcessorInMask) & 0x3F));
            v43[0] = v13;
            v18 &= ~(1LL << v40);
            v44 = v15;
            v46 = v18;
          }
          v28 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                          + 4LL * LowestClassProcessorInMask);
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
              v33 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]
                              + 4LL * (unsigned int)KiIntPartGetLowestClassProcessorInMask(v31 - 18));
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
