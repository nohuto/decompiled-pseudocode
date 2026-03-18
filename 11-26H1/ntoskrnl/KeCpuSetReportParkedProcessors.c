/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x1403E806C
 * Callers:
 *     PpmParkReportMask @ 0x1403E6EE0 (PpmParkReportMask.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1405F4548 (KiModifySystemAllowedCpuSetsWithLock.c)
 * Callees:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140237654 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1)
{
  unsigned int v1; // r12d
  unsigned __int16 v3; // bx
  int v4; // eax
  unsigned __int16 v5; // si
  int v6; // edi
  unsigned __int64 v7; // rbp
  __int64 v8; // r10
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r11
  int v32; // [rsp+20h] [rbp-158h]
  unsigned int v33; // [rsp+24h] [rbp-154h]
  struct _SINGLE_LIST_ENTRY v34[33]; // [rsp+38h] [rbp-140h] BYREF

  v1 = (unsigned __int16)KiActiveGroups;
  v33 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  v3 = 0;
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v32 = 0;
  v4 = 0;
  v5 = 0;
  if ( v1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(unsigned __int64 *)((char *)&stru_140FC01F0.116 + 8 * v5 + 4);
      if ( a1 )
      {
        if ( v5 >= *a1 )
          v8 = 0LL;
        else
          v8 = *(_QWORD *)&a1[4 * v5 + 4];
        v9 = v7 ^ v8;
        v34[v5 + 1].Next = (struct _SINGLE_LIST_ENTRY *)v9;
        if ( KiNonParkedCpuSets[v5] == v9 )
          goto LABEL_31;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v5];
        v34[v5 + 1].Next = (struct _SINGLE_LIST_ENTRY *)v9;
      }
      v32 = 1;
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
        v1 = v33;
        v4 = 1;
      }
      if ( !v11 )
        goto LABEL_13;
      v19 = *(_QWORD *)&algn_140FC1998[32 * v5];
      v20 = v19 & -(__int64)((v19 & v9) != 0 && ((v7 ^ v19) & v9) != 0);
      v21 = (v7 ^ v19) & -(__int64)((v19 & v9) != 0 && ((v7 ^ v19) & v9) != 0);
      v22 = KiSystemAllowedCpuSets[2 * v5] ^ v7;
      v23 = v9 & v22;
      if ( !v22 || !v23 )
        break;
      v29 = v11 & v22;
      v11 ^= v29;
      if ( v29 )
      {
        do
        {
          _BitScanForward64((unsigned __int64 *)&v30, v29);
          v31 = v23;
          v29 &= ~(1LL << v30);
          if ( _bittest64(&v20, (unsigned int)v30) )
          {
            if ( (v23 & v20) != 0 )
              v31 = v23 & v20;
          }
          else if ( (v23 & v21) != 0 )
          {
            v31 = v23 & v21;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v6 << 6) + v30)) = v31;
        }
        while ( v29 );
        v1 = v33;
      }
      if ( v11 )
        break;
LABEL_31:
      v4 = v32;
LABEL_13:
      v6 = ++v5;
      if ( v5 >= v1 )
        goto LABEL_14;
    }
    v24 = v7 & ~v23;
    if ( (v24 & v9) == 0 )
      v24 = v7;
    v25 = v6 << 6;
    while ( 1 )
    {
      _BitScanForward64((unsigned __int64 *)&v26, v11);
      v27 = v24;
      v11 &= ~(1LL << v26);
      if ( _bittest64(&v20, (unsigned int)v26) )
        break;
      if ( (v9 & v21 & v24) != 0 )
      {
        v28 = v21;
LABEL_29:
        v27 = v24 & v28;
      }
LABEL_30:
      *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v25 + v26)) = v27;
      if ( !v11 )
        goto LABEL_31;
    }
    if ( (v9 & v20 & v24) == 0 )
      goto LABEL_30;
    v28 = v20;
    goto LABEL_29;
  }
LABEL_14:
  v34[0].Next = 0LL;
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
      KiNonParkedCpuSets[v15] = (__int64)v34[v15 + 1].Next;
    }
    while ( v3 < v1 );
  }
  memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
  ++KiCpuSetSequence;
  KiUpdateGlobalCpuSetConfiguration(v34);
LABEL_21:
  KxReleaseSpinLock(&KiCpuSetLock);
  LOBYTE(v16) = 2;
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), v34, v16, v17);
}
