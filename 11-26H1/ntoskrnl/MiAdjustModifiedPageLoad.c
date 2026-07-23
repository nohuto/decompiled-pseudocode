/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x1404B5B78
 * Callers:
 *     MiWorkingSetManager @ 0x1404B7850 (MiWorkingSetManager.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWakeModifiedPageWriter @ 0x1403E4038 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E40C8 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1403FFB60 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiUpdateReserveClusterInfo @ 0x14049E3C8 (MiUpdateReserveClusterInfo.c)
 */

void __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  signed __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  int v20; // ebp
  unsigned int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rdi
  KIRQL v25; // r8
  char v26; // al
  volatile LONG *v27; // rcx
  signed __int32 v28[14]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 23456);
  v5 = *(_QWORD *)(a1 + 22464);
  v6 = *(_QWORD *)(a1 + 3280);
  v9 = 0x4000LL;
  if ( v5 >> 5 > 0x4000 )
    v9 = v5 >> 5;
  v10 = v5 >> 4;
  if ( v10 >= v9 )
    v10 = v9;
  v11 = v6 + *(_QWORD *)(a1 + 3408);
  v12 = 20000LL;
  v13 = 0LL;
  if ( *(_QWORD *)(a1 + 18400) > 0x4E20uLL )
    v12 = *(_QWORD *)(a1 + 18400);
  if ( v11 <= v12 || (v11 /= 0xAuLL, v3 >= v11) )
  {
    v14 = (unsigned __int64 *)(a1 + 952);
    if ( v3 >= v10 )
    {
      v13 = v10 >> 1;
LABEL_20:
      if ( !MiUseLowIoPriorityForModifiedPages(a1, v11, v9) )
        v13 = -1LL;
      MiWakeModifiedPageWriter(a1, v13);
      *(_QWORD *)(a1 + 944) = 0LL;
      *v14 = 0LL;
      goto LABEL_23;
    }
    v15 = 15 * (*v14 >> 4);
    v11 = v15 + (v3 >> 4);
    *v14 = v11;
    if ( v15 > v11 )
      goto LABEL_20;
    if ( v3 < 0x320 )
    {
      *(_QWORD *)(a1 + 944) = 0LL;
      goto LABEL_23;
    }
    v16 = v3 - v11;
    if ( v11 <= v3 )
      v16 = v11 - v3;
    v17 = *(_QWORD *)(a1 + 944) + v16;
    v11 = v17 + v3;
    *(_QWORD *)(a1 + 944) = v17 + v3;
    if ( v17 > (__int64)(v17 + v3) )
      goto LABEL_20;
    v18 = v10 >> 1;
    v19 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v18 < 0x369D0369D0369DLL )
      v19 = 600 * v18;
    if ( (__int64)v11 >= v19 )
      goto LABEL_20;
  }
LABEL_23:
  *(_QWORD *)(a1 + 960) = a2;
  if ( (a3 & 7) == 0 )
  {
    v20 = 0;
    if ( (*(_BYTE *)(a1 + 1004) & 1) != 0 )
    {
      _InterlockedOr(v28, 0);
      if ( a2 > 0x4000 || KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp) - *(_QWORD *)(a1 + 992) >= 0x47868C00 )
      {
        v20 = 1;
        *(_WORD *)(a1 + 1004) &= ~1u;
      }
    }
    v21 = *(_DWORD *)(a1 + 22296);
    if ( v21 )
    {
      v22 = a1 + 22304;
      v23 = v21;
      do
      {
        v24 = *(_QWORD *)v22;
        if ( (*(_BYTE *)(*(_QWORD *)v22 + 172LL) & 0x40) == 0 )
        {
          v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v24 + 200));
          if ( *(_DWORD *)(v24 + 100) != *(_DWORD *)(v24 + 96) )
            *(_DWORD *)(v24 + 92) = dword_140FBF21C;
          *(_DWORD *)(v24 + 104) = 4 * dword_140FBF21C;
          if ( v20 )
          {
            v26 = *(_BYTE *)(v24 + 175);
            if ( (v26 & 1) != 0 )
              *(_BYTE *)(v24 + 175) = v26 & 0xFE;
          }
          v27 = (volatile LONG *)(v24 + 200);
          if ( v25 == 17 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v27);
          else
            ExReleaseSpinLockExclusive(v27, v25);
        }
        v22 += 8LL;
        --v23;
      }
      while ( v23 );
    }
    if ( v20 )
      MiUpdateReserveClusterInfo(a1, 0LL, 0);
  }
  if ( *(_DWORD *)(a1 + 1300) != -1 )
    MiStoreUpdateMemoryConditions(a1);
}
