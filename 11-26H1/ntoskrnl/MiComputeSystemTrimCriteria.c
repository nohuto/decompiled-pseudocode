/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x1402A59C4
 * Callers:
 *     MiSignalPartitionTrimThreads @ 0x1402A6860 (MiSignalPartitionTrimThreads.c)
 *     MiWorkingSetManager @ 0x1404B7850 (MiWorkingSetManager.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1403C3B08 (MiGetAvailablePagesForTrimPass.c)
 *     MiPulseLowAvailableEvent @ 0x1404C0C58 (MiPulseLowAvailableEvent.c)
 *     MiEstimatePass0Candidates @ 0x1404CB7F0 (MiEstimatePass0Candidates.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 AvailablePagesForTrimPass; // r14
  KIRQL v6; // al
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // r13d
  unsigned __int64 v12; // rbx
  int v13; // r10d
  unsigned int v14; // r15d
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  int v20; // r12d
  _DWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  volatile LONG *v31; // rcx
  KIRQL OldIrql; // [rsp+60h] [rbp+8h]
  unsigned int v34; // [rsp+68h] [rbp+10h]

  v3 = a1 + 18376;
  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass();
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
  v7 = *(unsigned int *)(v3 + 40);
  v8 = *(_QWORD *)(v3 + 16);
  v34 = *(_DWORD *)(v3 + 40);
  OldIrql = v6;
  *(_BYTE *)(v3 + 138) = 0;
  if ( a2 )
  {
    v9 = v8 - AvailablePagesForTrimPass;
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(v3 + 152);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(v3 + 168);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(v3 + 184);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(v3 + 200);
    *(_OWORD *)(a2 + 144) = *(_OWORD *)(v3 + 216);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(v3 + 8);
    if ( AvailablePagesForTrimPass > v8 )
      v9 = AvailablePagesForTrimPass - v8;
    v10 = *(_DWORD *)(v3 + 128) & 7;
    *(_QWORD *)(a1 + 18680) += (v9 >> 3) - (*(_QWORD *)(a1 + 8 * v10 + 18688) >> 3);
    *(_QWORD *)(a1 + 8 * v10 + 18688) = v9;
  }
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  v14 = 1;
  if ( *(_DWORD *)(a1 + 21248) == 4 && *(_DWORD *)(v3 + 36) && *(_BYTE *)(v3 + 136) && *(_BYTE *)(v3 + 137)
    || AvailablePagesForTrimPass <= 0x120 )
  {
    v13 = 1;
    v15 = 0LL;
    v16 = v8;
  }
  else
  {
    v15 = AvailablePagesForTrimPass - *(_QWORD *)(a1 + 21224);
    v16 = v8 >> 2;
  }
  if ( AvailablePagesForTrimPass >= v16
    && (AvailablePagesForTrimPass >= 4 * v8 || v15 >= 0 || AvailablePagesForTrimPass >= v8 - v15) )
  {
    goto LABEL_91;
  }
  v12 = *(_QWORD *)(v3 + 24);
  v17 = v8 - v15 - AvailablePagesForTrimPass;
  if ( v17 <= v12 )
    v12 = v17;
  if ( v12 )
  {
    v11 = 1;
  }
  else
  {
LABEL_91:
    if ( v7 > AvailablePagesForTrimPass >> 2 && !v13 )
    {
      v18 = MiEstimatePass0Candidates(v3);
      if ( v18 >= 0x100 )
      {
        v11 = v13 + 3;
        v12 = v7 - v19;
        if ( v7 - v19 > v18 )
          v12 = v18;
        if ( v12 > 0x2000 )
          v12 = 0x2000LL;
      }
    }
  }
  v20 = 0;
  v21 = (_DWORD *)(a1 + 7600);
  v22 = 4LL;
  do
  {
    v20 += *v21++;
    --v22;
  }
  while ( v22 );
  v23 = 2LL;
  if ( !v12 && !v13 )
  {
    v24 = v20 - *(_DWORD *)(v3 + 48);
    if ( v24 <= 0x20000 )
    {
      if ( (_DWORD)v7 && v24 > 0x18000 && *(_QWORD *)(v3 + 216) < 0x20000uLL )
        *(_BYTE *)(v3 + 138) = 1;
    }
    else
    {
      v25 = MiEstimatePass0Candidates(v3);
      v22 = *(_QWORD *)(a1 + 22464);
      if ( v25 < 0x100 || v22 >= 0x100000 || v22 >= *(_QWORD *)(a1 + 22288) >> 2 )
      {
        if ( a2 )
          *(_DWORD *)(v3 + 48) = v20;
      }
      else
      {
        v12 = 0x8000LL;
        v11 = v23;
        if ( v25 < 0x8000 )
          v12 = v25;
      }
    }
  }
  if ( AvailablePagesForTrimPass <= 0x120 )
  {
    v26 = *(_QWORD *)(v3 + 24) >> 1;
    if ( v26 >= 0x1000 )
    {
      if ( v12 < 0x1000 )
      {
        v12 = 4096LL;
        goto LABEL_52;
      }
    }
    else if ( v12 < v26 )
    {
      v12 = *(_QWORD *)(v3 + 24) >> 1;
    }
  }
  if ( v12 && v12 < 0x1000 && !v13 )
    v12 = 4096LL;
LABEL_52:
  if ( !a2 )
    goto LABEL_68;
  v27 = *(_QWORD *)(v3 + 16);
  if ( AvailablePagesForTrimPass >= 4 * v27 )
  {
    if ( AvailablePagesForTrimPass > 16 * v27 )
    {
      v29 = *(_QWORD *)(a1 + 21240);
LABEL_66:
      *(_QWORD *)(v3 + 16) = v29;
    }
  }
  else
  {
    v28 = *(_QWORD *)(a1 + 18680);
    v22 = 4 * v28;
    if ( 4 * v28 < v27 )
    {
      v29 = *(_QWORD *)(a1 + 21232);
      if ( v22 >= v29 )
        v29 = v22;
      goto LABEL_66;
    }
    v22 = 2 * v28;
    if ( 2 * v28 > v27 )
    {
      v29 = *(_QWORD *)(v3 + 24);
      if ( v22 <= v29 )
        v29 = v22;
      goto LABEL_66;
    }
  }
  *(_QWORD *)(a1 + 21224) = AvailablePagesForTrimPass;
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(v3 + 16);
LABEL_68:
  if ( v12 )
  {
    if ( a2 )
    {
      MiPulseLowAvailableEvent(a1, v22, v23);
      if ( (unsigned int)(v11 - 2) <= 1 )
        *(_QWORD *)(v3 + 144) = v12;
      *(_DWORD *)(v3 + 48) = v20;
      *(_BYTE *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 56) = v12;
      v30 = *(_QWORD *)(a1 + 22464);
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 48) = v12 + v30;
      *(_DWORD *)(a2 + 8) = v11;
    }
  }
  else if ( *(_DWORD *)(a1 + 21252) )
  {
    if ( a2 )
      *(_BYTE *)(a2 + 25) = 7;
    v14 = v23;
  }
  else
  {
    v14 = 0;
  }
  v31 = (volatile LONG *)(a1 + 272);
  if ( OldIrql == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v31);
  else
    ExReleaseSpinLockExclusive(v31, OldIrql);
  if ( a2 )
  {
    if ( v14 )
    {
      if ( AvailablePagesForTrimPass && v34 < AvailablePagesForTrimPass )
        *(_BYTE *)(a2 + 26) = 100 * v34 / AvailablePagesForTrimPass;
      else
        *(_BYTE *)(a2 + 26) = 100;
    }
    *(_DWORD *)(a2 + 4) = v14;
    *(_DWORD *)(a2 + 8) = v11;
  }
  return v14;
}
