/*
 * XREFs of MiComputeNodeMemory @ 0x1406ECB90
 * Callers:
 *     MiPerformMemoryChange @ 0x1406EE614 (MiPerformMemoryChange.c)
 *     MiUpdatePartitionMemory @ 0x14070EBD0 (MiUpdatePartitionMemory.c)
 *     MiCompleteMemoryAddition @ 0x14086BF6C (MiCompleteMemoryAddition.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF9A64 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 */

void __fastcall MiComputeNodeMemory(ULONG *a1, int a2)
{
  unsigned int *v2; // r13
  __int16 v3; // r15
  unsigned __int64 v4; // r14
  unsigned int *v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r9
  unsigned int *v9; // rdi
  unsigned int *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  volatile LONG *v13; // r10
  unsigned int *v14; // rdx
  _QWORD *v15; // r8
  unsigned int i; // edx
  __int64 v17; // r11
  unsigned __int64 v18; // rcx
  __int64 v19; // r9
  _QWORD *v20; // r8
  unsigned __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r15
  KIRQL v25; // al
  unsigned __int8 j; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  volatile LONG *SpinLock; // [rsp+20h] [rbp-68h]
  int v31; // [rsp+28h] [rbp-60h]
  _OWORD v32[5]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v33; // [rsp+90h] [rbp+8h]
  int v34; // [rsp+98h] [rbp+10h]
  __int64 v35; // [rsp+A8h] [rbp+20h]

  v34 = a2;
  v2 = (unsigned int *)*((_QWORD *)a1 + 4);
  v3 = *(_WORD *)a1;
  v4 = -1LL;
  v33 = *(_WORD *)a1;
  v6 = 0LL;
  v7 = 0LL;
  if ( v2 )
  {
    v8 = *v2;
    v31 = *v2;
    v9 = &v2[4 * v8 + 4];
    if ( (_DWORD)v8 )
    {
      v4 = *((_QWORD *)v2 + 2);
      v7 = *(_QWORD *)&v2[4 * (unsigned int)(v8 - 1) + 6] + *(_QWORD *)&v2[4 * (unsigned int)(v8 - 1) + 4] - 1LL;
    }
    *((_QWORD *)a1 + 2784) = v4;
    *((_QWORD *)a1 + 2785) = v7;
  }
  else
  {
    LODWORD(v8) = 0;
    v9 = 0LL;
    v31 = 0;
    if ( !a2 )
    {
      v10 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
      LODWORD(v8) = 0;
      v6 = v10;
      a2 = v34;
      v9 = &v10[4 * *v10 + 4];
    }
  }
  v11 = 0;
  v12 = *((_QWORD *)a1 + 2);
  v35 = v12;
  if ( KeNumberNodes )
  {
    v13 = (volatile LONG *)(v12 + 14132);
    SpinLock = (volatile LONG *)(v12 + 14132);
    do
    {
      v32[0] = 0LL;
      if ( a2 )
      {
        if ( (_DWORD)v8 )
        {
          v14 = v9;
          v8 = (unsigned int)v8;
          v15 = v2 + 6;
          do
          {
            if ( *v14 == v11 )
              *((_QWORD *)v32 + *((unsigned __int8 *)v14 + 4)) += *v15;
            v14 += 2;
            v15 += 2;
            --v8;
          }
          while ( v8 );
        }
      }
      else
      {
        for ( i = 0; i < *v6; ++i )
        {
          if ( v9[2 * i] == v11 )
          {
            v17 = LOBYTE(v9[2 * i + 1]);
            v18 = *(_QWORD *)&v6[4 * i + 4];
            v19 = *(_QWORD *)&v6[4 * i + 6];
            if ( v19 )
            {
              v20 = (_QWORD *)(48 * v18 - 0x220000000000LL + 40);
              do
              {
                if ( ((*v20 >> 43) & 0x3FF) == v3 )
                {
                  ++*((_QWORD *)v32 + v17);
                  v21 = v18;
                  if ( v4 <= v18 )
                    v21 = v4;
                  v4 = v21;
                  if ( v7 < v18 )
                    v7 = v18;
                }
                ++v18;
                v20 += 6;
                --v19;
              }
              while ( v19 );
            }
          }
        }
      }
      if ( a1 == &MiSystemPartition && byte_140E2D898 )
      {
        v22 = v32;
        v23 = (unsigned __int8)byte_140E2D898;
        do
        {
          *v22 -= *(_QWORD *)((char *)&stru_140E366D8.AbCompletedIoQoSBoostCount + 16LL * v11
                                                                                 - (_QWORD)v32
                                                                                 + (_QWORD)v22);
          ++v22;
          --v23;
        }
        while ( v23 );
      }
      v24 = 0LL;
      v25 = ExAcquireSpinLockExclusive(v13);
      for ( j = 0; j < (unsigned __int8)byte_140E2D898; *(_QWORD *)(v35 + 8 * v27 + 13872) = v28 )
      {
        v27 = j++;
        v28 = *((_QWORD *)v32 + v27);
        v24 += v28;
      }
      *(_QWORD *)(SpinLock - 61) = v24;
      if ( v25 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      else
        ExReleaseSpinLockExclusive(SpinLock, v25);
      v35 += 56320LL;
      v13 = SpinLock + 14080;
      ++v11;
      LODWORD(v8) = v31;
      a2 = v34;
      v3 = v33;
      SpinLock += 14080;
    }
    while ( v11 < (unsigned __int16)KeNumberNodes );
  }
  v29 = 0LL;
  if ( v4 <= v7 )
    v29 = v4;
  *((_QWORD *)a1 + 2784) = v29;
  *((_QWORD *)a1 + 2785) = v7;
  if ( v6 )
    MiDereferencePageRuns((__int64)v6);
}
