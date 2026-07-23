/*
 * XREFs of PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140415EE0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140415324 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmHeteroComputeUnparkCount @ 0x14041552C (PpmHeteroComputeUnparkCount.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140415BAC (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmEventTraceHeteroResponse @ 0x140416490 (PpmEventTraceHeteroResponse.c)
 *     PpmHeteroHgsContainmentCheckThresholds @ 0x140416704 (PpmHeteroHgsContainmentCheckThresholds.c)
 *     PpmParkCalculateUnparkCount @ 0x140417970 (PpmParkCalculateUnparkCount.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404F8FBC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x14060F474 (PpmHeteroComputeMultiClassUnparkCount.c)
 */

char PpmCheckComputeMultiClassHeteroResponse()
{
  unsigned int v0; // ebx
  unsigned int v1; // r15d
  __int64 v2; // r14
  char *v3; // rdi
  int *v4; // rcx
  char v5; // si
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // r12d
  unsigned __int16 v9; // bp
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r14
  int v15; // r8d
  unsigned __int8 v16; // al
  unsigned int v17; // ecx
  char v18; // r14
  int v19; // ebp
  bool v20; // zf
  char v21; // si
  int v22; // r12d
  __int64 v24; // rdx
  _QWORD *v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  _WORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r8
  unsigned int v32; // eax
  unsigned int v33; // r9d
  __int64 v34; // rdx
  unsigned __int16 *v35; // rcx
  int v36; // eax
  unsigned int v37; // edx
  unsigned __int16 *v38; // rcx
  __int16 v39; // ax
  unsigned __int16 v40; // dx
  unsigned int i; // ecx
  __int64 v42; // r9
  __int64 v43; // rdx
  unsigned __int16 v44; // ax
  char v45; // [rsp+28h] [rbp-90h]
  __int64 v46; // [rsp+50h] [rbp-68h] BYREF
  __int64 v47; // [rsp+58h] [rbp-60h]
  __int64 v48; // [rsp+60h] [rbp-58h] BYREF
  __int64 v49; // [rsp+68h] [rbp-50h]
  char v50; // [rsp+C0h] [rbp+8h]
  int v51; // [rsp+C8h] [rbp+10h] BYREF
  int *v52; // [rsp+D0h] [rbp+18h]
  char *v53; // [rsp+D8h] [rbp+20h]

  v0 = 0;
  v1 = 0;
  v2 = qword_140F0C248;
  v46 = 0LL;
  v3 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40;
  v48 = 0LL;
  v4 = (int *)qword_140F0C250;
  v52 = (int *)qword_140F0C250;
  v53 = v3;
  v47 = PpmHeteroPerfCheckUtilities;
  v49 = qword_140F0C248;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v5 = 0;
      v6 = PpmParkNodes + 1264LL * v1;
      if ( PpmHeteroHgsParkingEnabled || *(_BYTE *)(v6 + 1153) )
        break;
LABEL_19:
      if ( ++v1 >= PpmParkNumNodes )
      {
        v3 = v53;
        goto LABEL_21;
      }
    }
    v7 = *(unsigned __int8 *)(v6 + 10);
    v8 = 0;
    v9 = 0;
    if ( (unsigned __int8)v7 > 1u )
    {
      v28 = (_WORD *)(*(_QWORD *)(v6 + 1256) + 624LL);
      v29 = (unsigned int)(v7 - 1);
      do
      {
        v9 += *v28;
        v8 += (unsigned __int16)v28[4];
        v28 += 312;
        --v29;
      }
      while ( v29 );
      v4 = v52;
    }
    if ( PpmHeteroHgsParkingEnabled )
    {
      v9 = *(_WORD *)(v6 + 8);
      v8 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 1256) + 632LL);
    }
    PpmHeteroComputeCoreParkingUtilities(0LL, v6 + 16, v47, v4, &v48, &v46);
    v10 = *(unsigned __int16 *)(v6 + 8);
    v11 = 0LL;
    v12 = *(_QWORD *)(v6 + 1096);
    v13 = 0LL;
    v51 = v10;
    if ( (_DWORD)v10 )
    {
      v24 = v10;
      v25 = (_QWORD *)(v12 + 8 * v10);
      do
      {
        v13 += *v25 * v48;
        v26 = v24;
        v10 = (unsigned int)(v10 - 1);
        --v24;
        v51 = v10;
        *(_QWORD *)(v2 + 8 * v10) = v13;
        v27 = *v25-- * v26;
        v11 += v27;
      }
      while ( (_DWORD)v10 );
    }
    v14 = v46;
    if ( PpmHeteroHgsParkingEnabled )
      PpmHeteroHgsContainmentCheckThresholds(v6, v11, v46, v13);
    v15 = PpmHeteroComputeUnparkCount(0, (__int64)v53, v11, v47, v49, v52, v14, v8, v9, &v51);
    v50 = 0;
    if ( *(char *)(v6 + 1156) == v15 )
    {
      v16 = *(_BYTE *)(v6 + 1154) + 1;
      v17 = v16;
      *(_BYTE *)(v6 + 1154) = v16;
    }
    else
    {
      v17 = 1;
      *(_BYTE *)(v6 + 1156) = v15;
      *(_BYTE *)(v6 + 1154) = 1;
      v50 = 1;
      v5 = 4;
    }
    v18 = 0;
    v19 = v51;
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v5 |= 0x10u;
    }
    else if ( v15 == 2 )
    {
      if ( v17 < (unsigned __int8)v53[263] )
        goto LABEL_14;
      v5 |= 0x20u;
    }
    else
    {
      if ( v15 != 1 || v17 < (unsigned __int8)v53[262] )
        goto LABEL_14;
      v5 |= 0x40u;
    }
    v18 = 1;
    *(_WORD *)(*(_QWORD *)(v6 + 1256) + 630LL) = v51;
LABEL_14:
    v20 = PpmHeteroHgsParkingEnabled == 0;
    *(_BYTE *)(v6 + 1152) = *(_BYTE *)(v6 + 1152) & 0xF9 | 4;
    if ( !v20 )
    {
      v5 |= 0x80u;
      *(_WORD *)(*(_QWORD *)(v6 + 1256) + 632LL) = *(_WORD *)(*(_QWORD *)(v6 + 1256) + 630LL);
      *(_WORD *)(v6 + 1224) = *(_WORD *)(*(_QWORD *)(v6 + 1256) + 630LL);
    }
    v21 = v5 | 1;
    v45 = v8;
    v22 = v47;
    PpmEventTraceMultiClassHeteroResponse(
      0,
      (unsigned __int16 *)(v6 + 16),
      v47,
      (ULONGLONG)v52,
      v46,
      v45,
      v15,
      *(_BYTE *)(v6 + 1144) - v19,
      v19,
      *(_QWORD *)(v6 + 1120));
    if ( !PpmHeteroHgsParkingEnabled )
      PpmHeteroComputeMultiClassUnparkCount(v6, (_DWORD)v53, v22, (_DWORD)v52, v19, v18, v50);
    v2 = v49;
    PpmEventTraceHeteroResponse(v6, v22, v49, v11, v19, v21);
    v4 = v52;
    goto LABEL_19;
  }
LABEL_21:
  PpmParkCalculateUnparkCount();
  if ( PpmParkNumNodes )
  {
    v30 = (unsigned int)PpmParkNumNodes;
    v31 = PpmParkNodes + 1146;
    do
    {
      if ( *(_BYTE *)(v31 + 7) )
      {
        v32 = *(unsigned __int8 *)(v31 - 1136);
        v33 = 0;
        if ( v32 > 1 )
        {
          v34 = v32 - 1;
          v35 = (unsigned __int16 *)(*(_QWORD *)(v31 + 110) + 630LL);
          do
          {
            v36 = *v35;
            v35 += 312;
            v33 += v36;
            --v34;
          }
          while ( v34 );
        }
        v37 = *(unsigned __int16 *)(v31 - 2);
        v38 = *(unsigned __int16 **)(v31 + 110);
        v39 = *(_WORD *)(v31 - 2);
        if ( v33 < v37 )
          v39 = v33;
        v40 = v37 - v39;
        if ( v40 >= *v38 )
          v40 = *v38;
        v20 = PpmParkUnparkCores == 0;
        v38[3] = v40;
        if ( v20 || PpmParkGranularity == 1 && *(_BYTE *)v31 > (unsigned __int8)v3[223] )
        {
          for ( i = 0; i < *(unsigned __int8 *)(v31 - 1136); ++i )
          {
            v42 = *(_QWORD *)(v31 + 110);
            v43 = 624LL * i;
            v44 = *(_WORD *)(v43 + v42 + 6);
            if ( v44 < *(_WORD *)(v43 + v42) )
            {
              *(_WORD *)(v43 + v42 + 6) = v44 + 1;
              break;
            }
          }
        }
      }
      v31 += 1264LL;
      --v30;
    }
    while ( v30 );
  }
  if ( PpmParkNumNodes )
  {
    do
    {
      PpmEventTraceMultiClassHeteroResponseUpdate(
        0LL,
        *(_QWORD *)(1264LL * v0 + PpmParkNodes + 1256),
        *(_QWORD *)(1264LL * v0 + PpmParkNodes + 1160));
      ++v0;
    }
    while ( v0 < PpmParkNumNodes );
  }
  return 1;
}
