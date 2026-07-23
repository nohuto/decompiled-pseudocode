/*
 * XREFs of MiModwriterConfirmMdl @ 0x140401828
 * Callers:
 *     MiGatherPagefilePages @ 0x1403FFDF8 (MiGatherPagefilePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSetPageFileAllocationBits @ 0x1403FDBF4 (MiSetPageFileAllocationBits.c)
 *     RtlFindLongestRunClearCapped @ 0x1403FDC2C (RtlFindLongestRunClearCapped.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1404777E4 (MiInvalidatePageFileBitmapsCache.c)
 *     MiUpdatePagefilePeakUsage @ 0x140479588 (MiUpdatePagefilePeakUsage.c)
 */

void __fastcall MiModwriterConfirmMdl(int *a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  volatile LONG *v5; // r13
  KIRQL v6; // al
  int v7; // ecx
  KIRQL v8; // r12
  unsigned int v9; // r14d
  unsigned __int64 PageFilePte; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  ULONG LongestRunClearCapped; // eax
  _QWORD *v17; // r14
  unsigned int v18; // r10d
  unsigned int v19; // r12d
  _QWORD *v20; // r13
  unsigned int v21; // eax
  unsigned int v22[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h]
  __int128 v24; // [rsp+40h] [rbp-30h]
  __int128 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  unsigned __int64 v27; // [rsp+B0h] [rbp+40h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  LODWORD(v3) = a1[1];
  v4 = *(_QWORD *)(v1 + 64);
  v5 = (volatile LONG *)(v4 + 200);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 200));
  v7 = *a1;
  v8 = v6;
  LOBYTE(v27) = v6;
  if ( (v7 & 2) != 0 )
  {
    v9 = a1[2];
    v26 = 0LL;
    v24 = 0LL;
    v22[1] = 0;
    v25 = 0LL;
    PageFilePte = MiMakePageFilePte(v3);
    v11 = *(_QWORD *)(v4 + 224);
    v27 = v12 ^ (v12 ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
    LODWORD(v13) = MiFindFreePageFileSpace(v11, (unsigned __int64)&v27, v9, 0x26u);
    if ( (_DWORD)v13 )
    {
      v14 = v27;
      if ( qword_140E2D8C0 && (v27 & 0x10) == 0 )
        v14 = qword_140E2D8C8 & v27;
      v3 = HIDWORD(v14);
    }
    else
    {
      v22[0] = *(_DWORD *)v4;
      v15 = *(_QWORD *)(v4 + 80);
      LODWORD(v27) = v3;
      v23 = *(_QWORD *)(v15 + 16);
      LongestRunClearCapped = RtlFindLongestRunClearCapped(v22, v9, (unsigned int *)&v27);
      LODWORD(v3) = v27;
      LODWORD(v13) = LongestRunClearCapped;
      MiSetPageFileAllocationBits(v4, v27, LongestRunClearCapped);
    }
    a1[2] = v13;
  }
  else
  {
    v13 = (unsigned int)a1[3];
    MiSetPageFileAllocationBits(v4, v3, a1[3]);
    v17 = (_QWORD *)(v1 + 152);
    v18 = -1;
    v19 = v3;
    if ( v17 < &v17[v13] )
    {
      v20 = &v17[v13];
      do
      {
        if ( *v17 != qword_140E361B8 || _bittest64(*(const signed __int64 **)(*(_QWORD *)(v4 + 80) + 32LL), v19) )
        {
          if ( v18 != -1 )
          {
            MiInvalidatePageFileBitmapsCache(v4, v18, v19 - v18, 0LL);
            v18 = -1;
          }
        }
        else
        {
          v21 = v19;
          if ( v18 != -1 )
            v21 = v18;
          v18 = v21;
        }
        ++v19;
        ++v17;
      }
      while ( v17 < v20 );
      v5 = (volatile LONG *)(v4 + 200);
    }
    v8 = v27;
  }
  if ( (*a1 & 2) == 0 )
    *(_DWORD *)(v4 + 104) = v13 + *(_DWORD *)(v4 + 104) - (*(_DWORD *)(v4 + 104) >> 2);
  MiUpdatePagefilePeakUsage(v4);
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockExclusive(v5, v8);
  a1[1] = v3;
}
