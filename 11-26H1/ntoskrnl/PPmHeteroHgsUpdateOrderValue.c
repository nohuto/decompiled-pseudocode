/*
 * XREFs of PPmHeteroHgsUpdateOrderValue @ 0x1404C1164
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 */

char __fastcall PPmHeteroHgsUpdateOrderValue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned int v5; // r11d
  char v8; // si
  unsigned __int8 v9; // bl
  unsigned __int16 v10; // dx
  unsigned __int16 i; // cx
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // r11d
  unsigned __int16 j; // cx
  unsigned __int64 v16; // r14
  unsigned __int16 k; // bp
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  char v21; // r10
  unsigned __int8 v22; // bp
  unsigned __int64 v23; // r15
  unsigned __int16 m; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v29; // r12
  unsigned int v30; // r15d
  unsigned __int16 v31; // r14
  unsigned int v32; // r13d
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // edx
  unsigned __int64 v36; // r12
  unsigned __int16 n; // r14
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  __int64 Prcb; // rax
  __int64 v43; // rdx
  char v44; // [rsp+20h] [rbp-58h]
  int v45; // [rsp+24h] [rbp-54h]
  unsigned int v46; // [rsp+28h] [rbp-50h]
  unsigned int v47; // [rsp+2Ch] [rbp-4Ch]
  char v49; // [rsp+88h] [rbp+10h]

  v5 = a4;
  v49 = 0;
  v8 = 0;
  v9 = -1;
  if ( a5 )
  {
    v46 = -1;
  }
  else
  {
    v14 = *((_DWORD *)PpmCurrentProfile + 178 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 184);
    if ( !v14 )
      v14 = -1;
    v46 = v14;
    v5 = a4;
  }
  v10 = *(_WORD *)a2;
  for ( i = 0; ; ++i )
  {
    if ( i >= v10 )
    {
      v12 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v13) = 0;
      while ( 1 )
      {
        while ( v12 )
        {
          _BitScanForward64(&v41, v12);
          v12 &= ~(1LL << v41);
          Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v13].Flink
                           + (unsigned int)(unsigned __int8)v41));
          v5 = a4;
          v43 = *(_QWORD *)(Prcb + 35424);
          if ( a5 )
          {
            if ( *(_BYTE *)(v43 + 4LL * a4 + 4) )
            {
              v8 = 1;
              *(_BYTE *)(v43 + 4LL * a4 + 4) = 0;
            }
          }
          else if ( *(_BYTE *)(v43 + 4LL * a4 + 5) )
          {
            v8 = 1;
            *(_BYTE *)(v43 + 4LL * a4 + 5) = 0;
          }
        }
        v13 = (unsigned __int16)(v13 + 1);
        if ( (unsigned int)v13 >= PpmCheckRegistered.Count )
          break;
        v12 = PpmCheckRegistered.Bitmap[v13];
      }
      v9 = 0;
      goto LABEL_42;
    }
    if ( *(_QWORD *)(a2 + 8LL * i + 8) )
      break;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= *(_WORD *)a3 )
    {
      v44 = 0;
      goto LABEL_19;
    }
    if ( *(_QWORD *)(a3 + 8LL * j + 8) )
      break;
  }
  v44 = 1;
LABEL_19:
  v16 = *(_QWORD *)(a3 + 8);
  for ( k = 0; ; v16 = *(_QWORD *)(a3 + 8LL * k + 8) )
  {
    while ( v16 )
    {
      _BitScanForward64(&v18, v16);
      v16 &= ~(1LL << v18);
      v19 = *(_QWORD *)(KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * k].Flink
                                  + (unsigned int)(unsigned __int8)v18))
                      + 35424);
      if ( a5 )
      {
        if ( *(_BYTE *)(v19 + 4LL * a4 + 4) )
        {
          v8 = 1;
          *(_BYTE *)(v19 + 4LL * a4 + 4) = 0;
        }
      }
      else if ( *(_BYTE *)(v19 + 4LL * a4 + 5) )
      {
        v8 = 1;
        *(_BYTE *)(v19 + 4LL * a4 + 5) = 0;
      }
    }
    if ( ++k >= *(_WORD *)a3 )
      break;
  }
  v47 = -1;
  v20 = RtlCountSetBitsAffinityEx((unsigned __int16 *)a2);
  v21 = v44;
  v45 = v20;
  v22 = v44;
  if ( !v20 )
  {
LABEL_39:
    v9 = v21 + 1;
    goto LABEL_40;
  }
  do
  {
    v23 = *(_QWORD *)(a2 + 8);
    for ( m = 0; ; v23 = *(_QWORD *)(a2 + 8LL * m + 8) )
    {
      while ( v23 )
      {
        _BitScanForward64(&v25, v23);
        v23 &= ~(1LL << v25);
        v26 = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * m].Flink
                        + (unsigned int)(unsigned __int8)v25));
        if ( *(_BYTE *)(v26 + 35420) )
        {
          v8 = 1;
          *(_BYTE *)(v26 + 35420) = 0;
        }
      }
      if ( ++m >= *(_WORD *)a2 )
        break;
    }
    v29 = *(_QWORD *)(a2 + 8);
    v30 = -1;
    v5 = a4;
    v31 = 0;
LABEL_50:
    v32 = v30;
    while ( 1 )
    {
      if ( v29 )
      {
        _BitScanForward64(&v33, v29);
        v29 &= ~(1LL << v33);
        v34 = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v31].Flink
                        + (unsigned int)(unsigned __int8)v33));
        v5 = a4;
        v35 = *(unsigned __int8 *)(7LL - (a5 != 0) + 4LL * a4 + *(_QWORD *)(v34 + 35424));
        if ( v35 > v47 || v47 == -1 )
        {
          v30 = *(unsigned __int8 *)(7LL - (a5 != 0) + 4LL * a4 + *(_QWORD *)(v34 + 35424));
          if ( v32 < v35 )
            v30 = v32;
        }
        goto LABEL_50;
      }
      if ( ++v31 >= *(_WORD *)a2 )
        break;
      v29 = *(_QWORD *)(a2 + 8LL * v31 + 8);
    }
    if ( v30 >= v46 && !v49 )
    {
      v9 = v22;
      v49 = 1;
    }
    v36 = *(_QWORD *)(a2 + 8);
    for ( n = 0; ; v36 = *(_QWORD *)(a2 + 8LL * n + 8) )
    {
      while ( v36 )
      {
        _BitScanForward64(&v38, v36);
        v36 &= ~(1LL << v38);
        v39 = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * n].Flink
                        + (unsigned int)(unsigned __int8)v38));
        v5 = a4;
        v40 = *(_QWORD *)(v39 + 35424) + 4LL * a4;
        if ( *(unsigned __int8 *)(v40 - (a5 != 0) + 7) == v30 )
        {
          if ( !a5 )
          {
            if ( *(_BYTE *)(v40 + 5) == v22 )
              goto LABEL_67;
            *(_BYTE *)(v40 + 5) = v22;
            goto LABEL_66;
          }
          if ( *(_BYTE *)(v40 + 4) != v22 )
          {
            *(_BYTE *)(v40 + 4) = v22;
LABEL_66:
            v8 = 1;
          }
LABEL_67:
          --v45;
        }
      }
      if ( ++n >= *(_WORD *)a2 )
        break;
    }
    ++v22;
    v47 = v30;
  }
  while ( v45 );
  if ( !v49 )
  {
    v21 = v44;
    goto LABEL_39;
  }
LABEL_40:
  if ( v9 >= v22 - 1 )
    v9 = v22 - 1;
LABEL_42:
  v27 = *(_QWORD *)(a1 + 24);
  if ( a5 )
  {
    if ( *(_BYTE *)(v27 + 2LL * v5 + 1) != v9 )
    {
      *(_BYTE *)(v27 + 2LL * v5 + 1) = v9;
      return 1;
    }
  }
  else if ( *(_BYTE *)(v27 + 2LL * v5) != v9 )
  {
    *(_BYTE *)(v27 + 2LL * v5) = v9;
    return 1;
  }
  return v8;
}
