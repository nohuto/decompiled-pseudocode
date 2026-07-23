/*
 * XREFs of MiComputeUnusedSegmentReduction @ 0x1404BE03C
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1404A9E70 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiShouldTrimUnusedSegments @ 0x14046E4F8 (MiShouldTrimUnusedSegments.c)
 *     MiMarkPendingCommitRequests @ 0x1404AE0D0 (MiMarkPendingCommitRequests.c)
 */

__int64 __fastcall MiComputeUnusedSegmentReduction(__int64 a1, int a2, __int64 a3)
{
  volatile LONG *v3; // rbx
  KIRQL v7; // al
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int128 v16; // rax
  __int64 v17; // r10
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx

  v3 = (volatile LONG *)(a1 + 17272);
  *(_OWORD *)a3 = 0LL;
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 17272));
  v8 = *(_QWORD *)(a1 + 23104);
  v9 = *(_QWORD *)(a1 + 23448);
  v10 = *(_QWORD *)(a1 + 17248);
  v11 = *(_QWORD *)(a1 + 17264);
  if ( v7 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  else
    ExReleaseSpinLockShared(v3, v7);
  v12 = v9;
  if ( v8 <= v9 )
    v12 = v8;
  if ( v12 > v10 && v9 == *(_QWORD *)(a1 + 17224) )
  {
    if ( (unsigned int)MiShouldTrimUnusedSegments((ULONG *)a1) )
    {
      *(_QWORD *)a3 = v11;
      v14 = *(_QWORD *)(a1 + 2440);
      if ( v14 > v13 )
      {
        v15 = (v14 - 0x100000) >> 12;
        if ( v12 > v15 && v12 - v15 > v11 )
          *(_QWORD *)a3 = v12 - v15;
      }
    }
  }
  if ( a2 == 3 )
  {
    *(_QWORD *)&v16 = qword_140E3C1A0;
    if ( qword_140E3D880 > (unsigned __int64)qword_140E3C1A0 )
    {
      *(_QWORD *)&v16 = qword_140E3C188;
      if ( qword_140E3D9D8 == qword_140E3C188 )
      {
        *(_QWORD *)&v16 = MiShouldTrimUnusedSegments(&MiSystemPartition);
        if ( (_DWORD)v16 )
        {
          *(_QWORD *)&v16 = 1000LL * *(_QWORD *)(a1 + 22288) / qword_140E3D550;
          if ( (_QWORD)v16 )
          {
            *(_QWORD *)&v16 = MiShouldTrimUnusedSegments((ULONG *)a1);
            if ( (_DWORD)v16 )
            {
              v16 = (unsigned __int64)stru_140E2C950.Header.WaitListHead.Flink * (unsigned __int128)0x624DD2F1A9FBE77uLL;
              v19 = *((_QWORD *)&v16 + 1)
                  + (((unsigned __int64)stru_140E2C950.Header.WaitListHead.Flink - *((_QWORD *)&v16 + 1)) >> 1);
              *((_QWORD *)&v16 + 1) = *(_QWORD *)(a1 + 2440);
              v20 = v17 * (v19 >> 9);
              if ( *((_QWORD *)&v16 + 1) > v18 )
              {
                *(_QWORD *)&v16 = *((_QWORD *)&v16 + 1) - 0x100000LL;
                if ( v20 <= *((_QWORD *)&v16 + 1) - 0x100000LL )
                  *(_QWORD *)&v16 = v20;
                *(_QWORD *)(a3 + 8) = (*((_QWORD *)&v16 + 1) - (_QWORD)v16) >> 12;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)&v16 = MiMarkPendingCommitRequests(a1);
    *(_QWORD *)(a1 + 3184) = v16;
    if ( (_QWORD)v16 && v12 <= v9 && (unsigned __int64)v16 > v9 - v12 )
    {
      *(_QWORD *)&v16 = v12 - v9 + v16;
      if ( (unsigned __int64)v16 > v12 )
        *(_QWORD *)&v16 = v12;
      if ( (unsigned __int64)v16 > 0x100 )
      {
        v21 = v12 - v16;
        *(_QWORD *)&v16 = *(_QWORD *)a3;
        v22 = v21 + 256;
        if ( !*(_QWORD *)a3 || v22 < (unsigned __int64)v16 )
          *(_QWORD *)a3 = v22;
      }
    }
  }
  return v16;
}
