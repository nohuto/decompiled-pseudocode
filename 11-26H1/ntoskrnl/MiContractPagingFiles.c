/*
 * XREFs of MiContractPagingFiles @ 0x1404E1D30
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x14049CE30 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiQueuePageFileExtension @ 0x1404DFC08 (MiQueuePageFileExtension.c)
 *     MiPageFileVolumeFreeSpace @ 0x1404E0A3C (MiPageFileVolumeFreeSpace.c)
 *     MiExcessCommitExists @ 0x1405002A0 (MiExcessCommitExists.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiContractPagingFiles(__int64 a1)
{
  unsigned __int64 v2; // r15
  int v3; // r12d
  unsigned int v4; // eax
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 i; // rcx
  KIRQL v16; // al
  volatile LONG *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-99h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-91h]
  unsigned __int64 v20; // [rsp+30h] [rbp-89h]
  unsigned __int64 v21; // [rsp+38h] [rbp-81h]
  _QWORD v22[26]; // [rsp+40h] [rbp-79h]
  unsigned int v23; // [rsp+120h] [rbp+67h]
  __int64 v24; // [rsp+128h] [rbp+6Fh]

  v2 = MiExcessCommitExists(*(_QWORD *)(a1 + 23104), *(_QWORD *)(a1 + 23448));
  if ( v2 )
  {
    memset_0(&v18, 0, 0xA0uLL);
    v18 = a1;
    v24 = 0LL;
    v3 = 0;
    v4 = *(_DWORD *)(a1 + 22296);
    v5 = 0LL;
    v20 = v2;
    v23 = v4;
    if ( v4 )
    {
      v6 = v21;
      v7 = v19;
      do
      {
        v8 = *(_QWORD *)(a1 + 8 * v5 + 22304);
        if ( (*(_BYTE *)(v8 + 172) & 0x50) == 0 )
        {
          v9 = *(_DWORD *)v8;
          v10 = *(_DWORD *)(v8 + 8);
          if ( *(_DWORD *)v8 > v10 )
          {
            v11 = *(_DWORD *)(v8 + 12);
            if ( v11 < v9 && v11 > 0x4000 )
            {
              v12 = v9 - v10;
              if ( v11 <= v12 || v12 )
              {
                v13 = MiPageFileVolumeFreeSpace(*(_QWORD *)(a1 + 8 * v5 + 22304)) + v24;
                v24 = v13;
                v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8LL * (*(_WORD *)(v8 + 172) & 0xF) + 22304) + 24LL)
                                + 16LL);
                for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
                {
                  if ( v22[i] == v14 )
                    break;
                }
                if ( (_DWORD)i == v7 )
                {
                  v21 = v13 + v6;
                  v22[i] = v14;
                  v6 = v21;
                  v7 = v19 + 1;
                  v2 = v20;
                  ++v19;
                }
                if ( v6 >= 0x400000 && v6 >> 4 >= v2 )
                  return;
                ++v3;
              }
            }
          }
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v23 );
      if ( v3 )
      {
        v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
        if ( *(_QWORD *)(a1 + 672) == -1LL )
        {
          v17 = (volatile LONG *)(a1 + 2112);
          if ( v16 == 17 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v17);
          else
            ExReleaseSpinLockExclusive(v17, v16);
        }
        else
        {
          *(_BYTE *)(a1 + 727) |= 0x10u;
          *(_QWORD *)(a1 + 640) = 0LL;
          *(_QWORD *)(a1 + 664) = a1;
          *(_QWORD *)(a1 + 672) = -1LL;
          MiQueuePageFileExtension(a1 + 640, v16);
        }
      }
    }
  }
}
