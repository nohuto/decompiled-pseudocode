/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x1402F4F4C
 * Callers:
 *     PpmParkReportMask @ 0x1402F3DC0 (PpmParkReportMask.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1405F6F08 (KiModifySystemAllowedCpuSetsWithLock.c)
 * Callees:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1)
{
  unsigned int v1; // r12d
  unsigned __int16 v3; // bx
  int v4; // eax
  unsigned __int16 v5; // si
  int v6; // edi
  __int64 v7; // rbp
  __int64 v8; // r10
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r11
  int v31; // [rsp+20h] [rbp-158h]
  unsigned int v32; // [rsp+24h] [rbp-154h]
  _QWORD v33[33]; // [rsp+38h] [rbp-140h] BYREF

  v1 = (unsigned __int16)KiActiveGroups;
  v32 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  v3 = 0;
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v31 = 0;
  v4 = 0;
  v5 = 0;
  if ( v1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(__int64 *)((char *)&stru_140FC11F0.116 + 8 * v5 + 4);
      if ( a1 )
      {
        if ( v5 >= *a1 )
          v8 = 0LL;
        else
          v8 = *(_QWORD *)&a1[4 * v5 + 4];
        v9 = v7 ^ v8;
        v33[v5 + 1] = v9;
        if ( KiNonParkedCpuSets[v5] == v9 )
          goto LABEL_31;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v5];
        v33[v5 + 1] = v9;
      }
      v31 = 1;
      v10 = v7 & v9;
      v4 = 1;
      v11 = v7 ^ v7 & v9;
      if ( (v7 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v12, v10);
          v10 ^= 1LL << v12;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v6 << 6) + v12)) = 1LL << v12;
        }
        while ( v10 );
        v1 = v32;
        v4 = 1;
      }
      if ( !v11 )
        goto LABEL_13;
      v18 = *(_QWORD *)&algn_140FC2998[32 * v5];
      v19 = v18 & -(__int64)((v18 & v9) != 0 && ((v7 ^ v18) & v9) != 0);
      v20 = (v7 ^ v18) & -(__int64)((v18 & v9) != 0 && ((v7 ^ v18) & v9) != 0);
      v21 = KiSystemAllowedCpuSets[2 * v5] ^ v7;
      v22 = v9 & v21;
      if ( !v21 || !v22 )
        break;
      v28 = v11 & v21;
      v11 ^= v28;
      if ( v28 )
      {
        do
        {
          _BitScanForward64((unsigned __int64 *)&v29, v28);
          v30 = v22;
          v28 &= ~(1LL << v29);
          if ( _bittest64(&v19, (unsigned int)v29) )
          {
            if ( (v22 & v19) != 0 )
              v30 = v22 & v19;
          }
          else if ( (v22 & v20) != 0 )
          {
            v30 = v22 & v20;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v6 << 6) + v29)) = v30;
        }
        while ( v28 );
        v1 = v32;
      }
      if ( v11 )
        break;
LABEL_31:
      v4 = v31;
LABEL_13:
      v6 = ++v5;
      if ( v5 >= v1 )
        goto LABEL_14;
    }
    v23 = v7 & ~v22;
    if ( (v23 & v9) == 0 )
      v23 = v7;
    v24 = v6 << 6;
    while ( 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v25, v11);
      v26 = v23;
      v11 &= ~(1LL << v25);
      if ( _bittest64(&v19, (unsigned int)v25) )
        break;
      if ( (v9 & v20 & v23) != 0 )
      {
        v27 = v20;
LABEL_29:
        v26 = v23 & v27;
      }
LABEL_30:
      *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v24 + v25)) = v26;
      if ( !v11 )
        goto LABEL_31;
    }
    if ( (v9 & v19 & v23) == 0 )
      goto LABEL_30;
    v27 = v19;
    goto LABEL_29;
  }
LABEL_14:
  v33[0] = 0LL;
  if ( !v4 )
    goto LABEL_21;
  _m_prefetchw(&KiCpuSetSequence);
  v13 = KiCpuSetSequence;
  while ( (v13 & 1) != 0 )
  {
    v13 = KiCpuSetSequence;
LABEL_35:
    _mm_pause();
  }
  v14 = v13;
  v13 = _InterlockedCompareExchange64(&KiCpuSetSequence, v13 + 1, v13);
  if ( v14 != v13 )
    goto LABEL_35;
  if ( v1 )
  {
    do
    {
      v15 = v3++;
      KiNonParkedCpuSets[v15] = v33[v15 + 1];
    }
    while ( v3 < v1 );
  }
  memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
  ++KiCpuSetSequence;
  KiUpdateGlobalCpuSetConfiguration(v33);
LABEL_21:
  KxReleaseSpinLock(&KiCpuSetLock);
  LOBYTE(v16) = 2;
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), v33, v16);
}
