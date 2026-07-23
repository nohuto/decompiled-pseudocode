/*
 * XREFs of KiComputeThreadAffinity @ 0x14022B520
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x14045C180 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402044D0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReselectIdealProcessorAfterAffinityChange @ 0x14022B2E0 (KiReselectIdealProcessorAfterAffinityChange.c)
 *     KiComputeCpuSetAffinity @ 0x14022B948 (KiComputeCpuSetAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14022BCC0 (KiUpdateNodeAffinitizedFlag.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiComputeThreadAffinity(__int64 a1)
{
  __int64 v2; // r13
  unsigned int v3; // esi
  __int64 i; // rax
  unsigned __int16 v6; // r12
  __int64 j; // rbx
  unsigned __int16 Size; // ax
  unsigned __int16 v9; // cx
  unsigned __int16 *v10; // rdx
  unsigned __int16 Count; // r14
  __int64 v12; // rax
  unsigned int v13; // ecx
  $B38C3B1372D6E954799962D5DD404846 *v14; // rdx
  __int64 v15; // r8
  int v16; // r8d
  unsigned __int16 *v17; // r10
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // dx
  unsigned __int64 *v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  __int64 v26; // rax
  unsigned __int16 *v27; // r9
  unsigned __int16 v28; // r8
  struct _KAFFINITY_EX *v29; // r10
  unsigned __int16 k; // dx
  __int64 v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int16 m; // cx
  unsigned __int64 v36; // rdx
  __int128 v37; // [rsp+20h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v38; // [rsp+40h] [rbp-C0h] BYREF

  v37 = 0LL;
  memset_0(&v38.8, 0, sizeof(v38.8));
  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    for ( i = KiCpuSetSequence; (KiCpuSetSequence & 1) != 0; i = KiCpuSetSequence )
      _mm_pause();
    *(_QWORD *)(a1 + 568) = i;
  }
  else
  {
    v6 = WORD4(v37);
    do
    {
      for ( j = KiCpuSetSequence; (KiCpuSetSequence & 1) != 0; j = KiCpuSetSequence )
        _mm_pause();
      v38.Size = 32;
      memset_0(&v38.8, 0, sizeof(v38.8));
      Size = v38.Size;
      v9 = 0;
      v10 = *(unsigned __int16 **)(a1 + 552);
      v38.Reserved = 0;
      Count = *v10;
      if ( *v10 > v38.Size )
        Count = v38.Size;
      v38.Count = Count;
      if ( Count )
      {
        memmove(&v38.8, v10 + 4, 8LL * Count);
        Size = v38.Size;
        v9 = Count;
        Count = v38.Count;
      }
      if ( v9 < Size )
      {
        do
        {
          v12 = v9++;
          v38.Bitmap[v12] = 0LL;
        }
        while ( v9 < v38.Size );
        Count = v38.Count;
      }
      v13 = 0;
      if ( Count )
      {
        v14 = &v38.8;
        v15 = Count;
        do
        {
          v13 += __popcnt(v14->Bitmap[0]);
          v14 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v14 + 8);
          --v15;
        }
        while ( v15 );
        if ( v13 > 1 )
        {
          KiComputeCpuSetAffinity(a1, &v38);
          Count = v38.Count;
          v16 = 0;
          v17 = *(unsigned __int16 **)(a1 + 552);
          v18 = v38.Size;
          v19 = *v17;
          if ( *v17 < v38.Count )
            Count = *v17;
          v38.Count = Count;
          if ( Count > v38.Size )
          {
            Count = v38.Size;
            v38.Count = v38.Size;
          }
          v20 = 0;
          if ( Count )
          {
            do
            {
              v21 = &v38.Bitmap[v20];
              v22 = *(_QWORD *)&v17[4 * v20 + 4];
              v23 = (v22 & *v21) == 0;
              *v21 &= v22;
              Count = v38.Count;
              if ( !v23 )
                v16 = 1;
              ++v20;
            }
            while ( v20 < v38.Count );
            v18 = v38.Size;
          }
          v38.Reserved = 0;
          if ( v20 < v18 )
          {
            do
            {
              v24 = v20++;
              v38.Bitmap[v24] = 0LL;
              v18 = v38.Size;
            }
            while ( v20 < v38.Size );
            Count = v38.Count;
          }
          if ( !v16 )
          {
            v38.Reserved = 0;
            Count = v19;
            v25 = 0;
            if ( v19 > v18 )
              Count = v18;
            v38.Count = Count;
            if ( Count )
            {
              memmove(&v38.8, v17 + 4, 8LL * Count);
              v18 = v38.Size;
              v25 = Count;
              Count = v38.Count;
            }
            if ( v25 < v18 )
            {
              do
              {
                v26 = v25++;
                v38.Bitmap[v26] = 0LL;
              }
              while ( v25 < v38.Size );
              Count = v38.Count;
            }
          }
        }
      }
      v27 = *(unsigned __int16 **)(a1 + 576);
      v28 = *v27;
      if ( *v27 >= Count )
      {
        v29 = *(struct _KAFFINITY_EX **)(a1 + 576);
        v28 = Count;
      }
      else
      {
        v29 = &v38;
      }
      for ( k = 0; k < v28; ++k )
      {
        if ( *(_QWORD *)&v27[4 * k + 4] != v38.Bitmap[k] )
        {
LABEL_50:
          RtlpCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 576), v27[1], &v38);
          v31 = *(unsigned int *)(a1 + 196);
          v32 = KiProcessorBlock[v31];
          if ( !(unsigned int)KeCheckProcessorAffinityEx(*(_QWORD *)(a1 + 576), v31) )
          {
            v34 = *(_QWORD *)(v2 + 184);
            for ( m = 0; m < Count; ++m )
            {
              v36 = v38.Bitmap[m];
              if ( v36 )
              {
                v6 = m;
                *((_QWORD *)&v37 + 1) = m;
                *(_QWORD *)&v37 = v36;
                break;
              }
            }
            v31 = (unsigned __int16)KiReselectIdealProcessorAfterAffinityChange(
                                      a1,
                                      (__int64 *)&v37,
                                      v32,
                                      (_WORD *)(v34 + 16 + 2LL * v6));
          }
          v33 = KiProcessorBlock[v31];
          *(_DWORD *)(a1 + 588) = v31;
          *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v33 + 208);
          KiUpdateSharedReadyQueueAffinityThread(v33, a1);
          KiUpdateNodeAffinitizedFlag(a1);
          v3 = 1;
          goto LABEL_47;
        }
      }
      while ( k < v29->Count )
      {
        if ( v29->Bitmap[k] )
          goto LABEL_50;
        ++k;
      }
LABEL_47:
      ;
    }
    while ( KiCpuSetSequence != j );
    *(_QWORD *)(a1 + 568) = j;
  }
  return v3;
}
