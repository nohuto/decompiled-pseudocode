/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x140415EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1404163E0 (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x1404163FC (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmEventTraceHeteroResponse @ 0x140416490 (PpmEventTraceHeteroResponse.c)
 *     PpmHeteroHgsContainmentCheckThresholds @ 0x140416704 (PpmHeteroHgsContainmentCheckThresholds.c)
 *     PpmParkCalculateUnparkCount @ 0x140417970 (PpmParkCalculateUnparkCount.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140417E30 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

char PpmCheckComputeHeteroResponse()
{
  unsigned int *v1; // r11
  unsigned int v2; // ecx
  char v3; // si
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int16 *v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // r12
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 Prcb; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r8
  bool v21; // zf
  _DWORD *v22; // r15
  __int64 v23; // r13
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  int *v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int16 v33; // cx
  unsigned int v34; // r14d
  __int64 v35; // rbx
  int v36; // r14d
  __int64 v37; // rax
  int v38; // r9d
  int v39; // ecx
  __int64 v40; // rax
  int v41; // r9d
  unsigned __int8 v42; // al
  unsigned int v43; // edx
  int v44; // eax
  __int64 v45; // [rsp+30h] [rbp-78h]
  _DWORD *Base; // [rsp+38h] [rbp-70h]
  char *v47; // [rsp+40h] [rbp-68h]
  __int64 v48; // [rsp+48h] [rbp-60h]
  __int64 v49; // [rsp+50h] [rbp-58h]
  unsigned int v50; // [rsp+B0h] [rbp+8h]
  unsigned int v51; // [rsp+B8h] [rbp+10h]

  v45 = PpmHeteroPerfCheckUtilities;
  v47 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40;
  v48 = qword_140F0C248;
  Base = (_DWORD *)qword_140F0C250;
  if ( PpmHeteroPolicy != 4 )
    return PpmParkCalculateUnparkCount();
  if ( !(unsigned __int8)PpmHeteroIsMultiClassParkingEnabled() )
  {
    v2 = 0;
    v50 = 0;
    if ( !PpmParkNumNodes )
      return PpmParkCalculateUnparkCount();
    while ( 1 )
    {
      v3 = 0;
      v4 = PpmParkNodes + 1264LL * v2;
      if ( !PpmHeteroHgsParkingEnabled || PpmHeteroPolicy || *(_WORD *)(*(_QWORD *)(v4 + 1256) + 624LL) )
        break;
LABEL_24:
      v50 = ++v2;
      if ( v2 >= PpmParkNumNodes )
        return PpmParkCalculateUnparkCount();
    }
    v5 = *(_QWORD *)(v4 + 1256);
    v6 = (unsigned __int16 *)(v4 + 16);
    v7 = *(_QWORD *)(v4 + 24);
    v8 = 0LL;
    v9 = 0;
    v49 = 0LL;
    LOWORD(v10) = 0;
    v11 = *(unsigned __int16 *)(v5 + 632);
    v51 = *(unsigned __int16 *)(v5 + 632);
LABEL_7:
    if ( v4 == -16 )
      v12 = (unsigned __int16)v10 + 1;
    else
      v12 = *v6;
    while ( 1 )
    {
      if ( v7 )
      {
        _BitScanForward64(&v13, v7);
        v7 &= ~(1LL << v13);
        Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v10].Flink
                         + (unsigned int)(unsigned __int8)v13));
        v15 = *(unsigned int *)(Prcb + 35304);
        if ( PpmCheckCurrentPipelineId != 5 )
          v15 = (unsigned int)(v15 - *(_DWORD *)(Prcb + 35312));
        v16 = PpmHeteroUtilityToNormalizedUtility(Prcb + 35264, v15);
        *(_DWORD *)(v45 + 4 * v17) = v16;
        v19 = PpmHeteroUtilityToNormalizedUtility(v18, *(unsigned int *)(v18 + 52));
        Base[v20] = v19;
        v8 += v19;
        v49 += v1[v20];
        ++v9;
        goto LABEL_7;
      }
      v10 = (unsigned __int16)(v10 + 1);
      if ( (unsigned int)v10 >= v12 )
        break;
      v7 = *(_QWORD *)&v6[4 * v10 + 4];
    }
    qsort(v1, v9, 4uLL, PpmUtilityComparer);
    v22 = Base;
    qsort(Base, v9, 4uLL, PpmUtilityComparer);
    v23 = 0LL;
    v24 = 0LL;
    v25 = *(unsigned __int16 *)(v4 + 8);
    if ( *(_WORD *)(v4 + 8) )
    {
      v26 = (_QWORD *)(*(_QWORD *)(v4 + 1096) + 8 * v25);
      v27 = *(unsigned __int16 *)(v4 + 8);
      do
      {
        v24 += *v26 * v49;
        v28 = v27;
        v25 = (unsigned int)(v25 - 1);
        --v27;
        *(_QWORD *)(v48 + 8 * v25) = v24;
        v29 = *v26-- * v28;
        v23 += v29;
      }
      while ( (_DWORD)v25 );
    }
    if ( PpmHeteroHgsParkingEnabled )
      PpmHeteroHgsContainmentCheckThresholds(v4, v23, v8, v24);
    if ( (_DWORD)v11 )
    {
      v30 = Base;
      v31 = v11;
      do
      {
        v32 = *v30++;
        LODWORD(v8) = v8 - v32;
        --v31;
      }
      while ( v31 );
    }
    v33 = *(_WORD *)(*(_QWORD *)(v4 + 1256) + 624LL);
    if ( PpmHeteroHgsParkingEnabled )
      v33 = *(_WORD *)(v4 + 8);
    v34 = v33;
    LODWORD(v35) = v11;
    if ( (unsigned int)v11 < v33 )
    {
      do
      {
        v40 = 63LL;
        if ( (unsigned int)v35 < 0x3F )
          v40 = (unsigned int)v35;
        if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                              v23,
                              *(_DWORD *)(v45 + 4LL * (unsigned int)v35),
                              *(_QWORD *)(v48 + 8LL * (unsigned int)v35),
                              (unsigned __int8)v47[v40 + 456],
                              0) )
          break;
        if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v23, v8, 0, v41, 0) )
          break;
        v44 = Base[(unsigned int)v35];
        LODWORD(v35) = v35 + 1;
        LODWORD(v8) = v8 - v44;
      }
      while ( (unsigned int)v35 < v34 );
      LODWORD(v11) = v51;
      v3 = 0;
      if ( (unsigned int)v35 <= v51 )
      {
        v22 = Base;
        goto LABEL_37;
      }
      v39 = 2;
    }
    else
    {
LABEL_37:
      while ( 1 )
      {
        v36 = v35;
        if ( !(_DWORD)v35 )
          break;
        v35 = (unsigned int)(v35 - 1);
        LODWORD(v8) = v22[v35] + v8;
        v37 = 63LL;
        if ( (unsigned int)v35 < 0x3F )
          v37 = (unsigned int)v35;
        if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                             v23,
                             *(_DWORD *)(v45 + 4 * v35),
                             *(_QWORD *)(v48 + 8 * v35),
                             (unsigned __int8)v47[v37 + 264],
                             0)
          && (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v23, v8, 0, v38, 0) )
        {
          LODWORD(v35) = v36;
          break;
        }
      }
      v39 = (unsigned int)v35 < (unsigned int)v11;
    }
    if ( *(char *)(v4 + 1156) == v39 )
    {
      v42 = *(_BYTE *)(v4 + 1154) + 1;
      v43 = v42;
      *(_BYTE *)(v4 + 1154) = v42;
    }
    else
    {
      *(_BYTE *)(v4 + 1156) = v39;
      v43 = 1;
      *(_BYTE *)(v4 + 1154) = 1;
      v3 = 4;
    }
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v3 |= 0x10u;
    }
    else if ( v39 == 2 )
    {
      if ( v43 < (unsigned __int8)v47[263] )
        goto LABEL_21;
      v3 |= 0x20u;
    }
    else
    {
      if ( v39 != 1 || v43 < (unsigned __int8)v47[262] )
        goto LABEL_21;
      v3 |= 0x40u;
    }
    *(_WORD *)(*(_QWORD *)(v4 + 1256) + 630LL) = v35;
LABEL_21:
    v21 = PpmHeteroHgsParkingEnabled == 0;
    *(_BYTE *)(v4 + 1152) = *(_BYTE *)(v4 + 1152) & 0xF9 | 4;
    if ( !v21 )
    {
      v3 |= 0x80u;
      *(_WORD *)(*(_QWORD *)(v4 + 1256) + 632LL) = *(_WORD *)(*(_QWORD *)(v4 + 1256) + 630LL);
      *(_WORD *)(v4 + 1224) = *(_WORD *)(*(_QWORD *)(v4 + 1256) + 630LL);
    }
    PpmEventTraceHeteroResponse(v4, v45, v48, v23, v35, v3 | 1);
    v2 = v50;
    v1 = (unsigned int *)v45;
    goto LABEL_24;
  }
  return PpmCheckComputeMultiClassHeteroResponse();
}
