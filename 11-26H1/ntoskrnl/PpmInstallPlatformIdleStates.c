/*
 * XREFs of PpmInstallPlatformIdleStates @ 0x140AF57C0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x14047DCB0 (KeQueryActiveProcessorAffinity2.c)
 *     PpmIdleIsStateDisabled @ 0x1404E61BC (PpmIdleIsStateDisabled.c)
 *     PpmResetPlatformIdleAccounting @ 0x140605E70 (PpmResetPlatformIdleAccounting.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1407CC71C (PpmEnableCoordinatedIdleStates.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallPlatformIdleStates(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r15
  unsigned int v5; // esi
  char v6; // bp
  int v7; // edi
  unsigned int v8; // r12d
  unsigned int v9; // edx
  int v10; // r13d
  unsigned int i; // ebx
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // r11
  unsigned int v19; // ecx
  __int64 v20; // r15
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned int m; // ebx
  unsigned int v26; // edi
  __int64 v27; // r13
  unsigned int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  bool v32; // zf
  unsigned int v33; // r8d
  bool v34; // r10
  unsigned int v35; // r9d
  __int64 v36; // rcx
  unsigned int v37; // r13d
  void *v38; // rbx
  __int64 v39; // rax
  int *v40; // rax
  unsigned int v41; // eax
  unsigned int j; // r12d
  __int64 v43; // rdi
  _QWORD *v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // r13
  __int64 v47; // rdi
  __int64 v48; // r8
  __int64 v49; // rdx
  __int128 v50; // xmm0
  __int64 v51; // r15
  __int64 v52; // rsi
  unsigned int v53; // r13d
  __int64 v54; // rbx
  __int64 v55; // rcx
  int v56; // eax
  unsigned int k; // ebx
  __int64 Prcb; // rax
  unsigned int v59; // r9d
  __int64 v60; // r10
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r8
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v65; // rbx
  __int64 v66; // rdi
  int v67; // edx
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // [rsp+20h] [rbp-68h]
  unsigned int v71; // [rsp+28h] [rbp-60h]
  unsigned int v72; // [rsp+2Ch] [rbp-5Ch]
  __int64 Pool2; // [rsp+30h] [rbp-58h]
  __int64 v74; // [rsp+30h] [rbp-58h]
  int *v75; // [rsp+38h] [rbp-50h]
  __int64 v77; // [rsp+98h] [rbp+10h]
  unsigned int v78; // [rsp+98h] [rbp+10h]
  int v79; // [rsp+98h] [rbp+10h]
  unsigned int v80; // [rsp+A0h] [rbp+18h]
  __int64 v81; // [rsp+A0h] [rbp+18h]
  unsigned int v82; // [rsp+A8h] [rbp+20h]

  v4 = a1;
  v5 = 0;
  Pool2 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, a2, a3, a4);
  v6 = 1;
  if ( PpmPlatformStates && !*(_BYTE *)(v4 + 40) )
  {
    v5 = -1073741431;
    goto LABEL_18;
  }
  v7 = *(_DWORD *)(v4 + 4);
  if ( !v7 )
  {
LABEL_17:
    v5 = -1073741811;
LABEL_18:
    PopReleaseRwLock(&PpmIdlePolicyLock);
    return v5;
  }
  if ( (HvlpFlags & 2) != 0 )
  {
    if ( (HvlEnlightenments & 0x10000000) != 0 || (HvlEnlightenments & 0x400) == 0 )
      goto LABEL_6;
LABEL_53:
    v33 = 0;
    v34 = (HvlEnlightenments & 0x200) != 0;
    do
    {
      v35 = 0;
      for ( *(_BYTE *)(v4 + 48LL * v33 + 53) = v34;
            v35 < *(_DWORD *)(v4 + 48LL * v33 + 64);
            *(_BYTE *)(*(_QWORD *)(v4 + 48LL * v33 + 88) + 8 * v36 + 4) = v34 )
      {
        v36 = v35++;
      }
      ++v33;
    }
    while ( v33 < *(_DWORD *)(v4 + 4) );
    goto LABEL_6;
  }
  if ( HvlHypervisorConnected )
    goto LABEL_53;
LABEL_6:
  v8 = KeNumberProcessors_0;
  v9 = 0;
  v80 = KeNumberProcessors_0;
  while ( v9 < *(_DWORD *)(v4 + 4) )
  {
    if ( *(_DWORD *)(v4 + 48LL * v9 + 64) > (unsigned int)KeNumberProcessors_0 )
      goto LABEL_17;
    ++v9;
  }
  v10 = 0;
  for ( i = 0; i < v8; ++i )
  {
    v12 = *(_QWORD *)(KeGetPrcb(i) + 34880);
    if ( !v12 )
      goto LABEL_17;
    v10 += *(_DWORD *)(v12 + 40);
  }
  v13 = PpmPlatformStates;
  if ( !PpmPlatformStates )
  {
    v82 = (448 * v7 + 71) & 0xFFFFFFF8;
    v70 = v82 + 24 * v8 * *(_DWORD *)(v4 + 4);
    v78 = v70 + 24 * *(_DWORD *)(v4 + 4) * (v8 + v10);
    v71 = (v78 + 1032 * v7 + 47) & 0xFFFFFFF8;
    v72 = (4 * v7 + 15) & 0xFFFFFFF8;
    if ( stru_140E67200.Padding[4] )
    {
      v37 = *(_DWORD *)(stru_140E67200.Padding[4] + 4);
      if ( v37 )
      {
        Pool2 = ExAllocatePool2(0x40uLL);
        v38 = (void *)Pool2;
        if ( !Pool2 )
          goto LABEL_88;
        goto LABEL_61;
      }
    }
    else
    {
      v37 = 0;
    }
    v38 = 0LL;
LABEL_61:
    v39 = ExAllocatePool2(0x48uLL);
    v13 = v39;
    if ( v39 )
    {
      *(_DWORD *)v39 = v7;
      *(_DWORD *)(v39 + 4) = v8;
      *(_QWORD *)(v39 + 16) = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v39 + 24) = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v39 + 32) = *(_QWORD *)(v4 + 24);
      *(_QWORD *)(v39 + 40) = *(_QWORD *)(v4 + 32);
      v40 = (int *)(v39 + v78);
      *(_QWORD *)(v13 + 48) = v40;
      v75 = v40;
      v40[1] = v7;
      PpmResetPlatformIdleAccounting(v40);
      v41 = *(_DWORD *)(v4 + 4);
      if ( v41 )
      {
        for ( j = 0; j < v41; ++j )
        {
          v43 = 448LL * j;
          *(_WORD *)(v43 + v13 + 121) = 257;
          *(_WORD *)(v43 + v13 + 128) = 1;
          *(_WORD *)(v43 + v13 + 130) = 32;
          *(_DWORD *)(v43 + v13 + 132) = 0;
          memset_0((void *)(v43 + v13 + 136), 0, 0x100uLL);
          KeQueryActiveProcessorAffinity2(v43 + v13 + 128);
          v44 = (_QWORD *)(v43 + v13 + 88);
          *(_QWORD *)(v43 + v13 + 96) = v44;
          *v44 = v44;
          *(_BYTE *)(v43 + v13 + 104) = 7;
          if ( PpmIdleIsStateDisabled(0, j) )
            *(_DWORD *)(v43 + v13 + 80) = 0x80000000;
          if ( v37 )
          {
            if ( j == *(_DWORD *)(v4 + 4) - 1 )
              *(_BYTE *)(v43 + v13 + 105) = 1;
            *(_QWORD *)(v43 + v13 + 112) = Pool2;
            *(_DWORD *)(v43 + v13 + 108) = v37;
            Pool2 += (unsigned __int64)v37 << 6;
            *(_QWORD *)&v75[258 * j + 58] = v43 + v13 + 80;
          }
          v41 = *(_DWORD *)(v4 + 4);
        }
        v8 = v80;
      }
      v45 = 0;
      v46 = v13 + v82;
      v47 = v13 + v70;
      v79 = 0;
      if ( v41 )
      {
        v48 = 24LL * v8;
        do
        {
          v49 = 448LL * v45;
          v50 = *(_OWORD *)(v4 + 48LL * v45 + 72);
          *(_QWORD *)(v49 + v13 + 408) = v46;
          v46 += v48;
          *(_DWORD *)(v49 + v13 + 124) = v8;
          v74 = v46;
          *(_OWORD *)(v49 + v13 + 392) = v50;
          if ( v8 )
          {
            v51 = 0LL;
            v52 = 448LL * v45;
            v53 = 0;
            do
            {
              v54 = *(_QWORD *)(v52 + v13 + 408);
              v55 = *(_QWORD *)(KeGetPrcb(v53) + 34880);
              *(_DWORD *)(v51 + v54) = v53++;
              v51 += 24LL;
              v56 = *(_DWORD *)(v55 + 40);
              *(_QWORD *)(v51 + v54 - 8) = v47;
              *(_DWORD *)(v51 + v54 - 16) = v56;
              v47 += 24LL * *(unsigned int *)(v55 + 40);
            }
            while ( v53 < v8 );
            v4 = a1;
            v5 = 0;
            v46 = v74;
            v45 = v79;
            v48 = 24LL * v8;
          }
          v79 = ++v45;
        }
        while ( v45 < *(_DWORD *)(v4 + 4) );
      }
      for ( k = 0; k < v8; ++k )
      {
        Prcb = KeGetPrcb(k);
        v59 = 0;
        v60 = *(_QWORD *)(Prcb + 34880);
        *(_QWORD *)(v60 + 992) = v13 + v71 + k * v72;
        *(_DWORD *)(v60 + 1016) = *(_DWORD *)(v4 + 4);
        *(_QWORD *)(v60 + 1024) = v47;
        v61 = *(unsigned int *)(v4 + 4);
        v47 += 24 * v61;
        if ( (_DWORD)v61 )
        {
          do
          {
            v62 = *(_QWORD *)(v60 + 1024);
            v63 = 3LL * ((unsigned int)v61 - v59 - 1);
            v61 = 448LL * v59;
            *(_DWORD *)(v62 + 8 * v63 + 4) = v59++;
            *(_DWORD *)(v62 + 8 * v63 + 8) = *(_DWORD *)(v61 + v13 + 124);
            *(_QWORD *)(v62 + 8 * v63 + 16) = *(_QWORD *)(v61 + v13 + 408);
            LODWORD(v61) = *(_DWORD *)(v4 + 4);
          }
          while ( v59 < (unsigned int)v61 );
        }
      }
      goto LABEL_19;
    }
    ExFreePoolWithTag(v38, 0x694D5050u);
LABEL_88:
    v5 = -1073741670;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(PpmPlatformStates + 4) != v8 || *(_DWORD *)PpmPlatformStates != v7 )
    goto LABEL_17;
LABEL_19:
  if ( *(_DWORD *)(v4 + 4) )
  {
    v14 = 0;
    do
    {
      v15 = 0;
      v16 = 448LL * v14;
      v17 = v4 + 48 * (v14 + 1LL);
      *(_DWORD *)(v16 + v13 + 72) = *(_DWORD *)(v17 + 8);
      *(_DWORD *)(v16 + v13 + 76) = *(_DWORD *)(v17 + 12);
      if ( *(_DWORD *)(v17 + 16) )
      {
        do
        {
          v18 = *(_QWORD *)(v17 + 40);
          v19 = 0;
          v20 = *(_QWORD *)(v16 + v13 + 408);
          v21 = 3LL * *(unsigned int *)(v18 + 8LL * v15);
          v22 = *(_DWORD *)(v20 + 24LL * *(unsigned int *)(v18 + 8LL * v15) + 8);
          if ( v22 )
          {
            do
            {
              v23 = *(_QWORD *)(v20 + 8 * v21 + 16);
              v24 = 3LL * (v22 - v19 - 1);
              *(_OWORD *)(v23 + 8 * v24) = 0LL;
              *(_QWORD *)(v23 + 8 * v24 + 16) = 0LL;
              *(_DWORD *)(v23 + 8 * v24 + 4) = v19;
              if ( !*(_BYTE *)(v17 + 4) && v19 == *(unsigned __int8 *)(v17 + 5) )
                *(_BYTE *)(v23 + 24LL * (v22 - v19 - 1) + 1) = 1;
              if ( v19 >= *(unsigned __int8 *)(v18 + 8LL * v15 + 4) )
              {
                *(_BYTE *)(v23 + 24LL * (v22 - v19 - 1) + 2) = 1;
                if ( !*(_BYTE *)(v18 + 8LL * v15 + 6) )
                  *(_BYTE *)(v23 + 24LL * (v22 - v19 - 1)) = 1;
              }
              v22 = *(_DWORD *)(v20 + 8 * v21 + 8);
              ++v19;
            }
            while ( v19 < v22 );
          }
          ++v15;
        }
        while ( v15 < *(_DWORD *)(v17 + 16) );
        v4 = a1;
      }
      if ( *(_BYTE *)(v17 + 4) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v17);
        v65 = *(_QWORD *)(v16 + v13 + 408);
        v66 = 3LL * ProcessorIndexFromNumber;
        memset_0(
          *(void **)(v65 + 24LL * ProcessorIndexFromNumber + 16),
          0,
          24LL * *(unsigned int *)(v65 + 24LL * ProcessorIndexFromNumber + 8));
        v67 = *(unsigned __int8 *)(v17 + 5);
        v68 = 3LL * (unsigned int)(*(_DWORD *)(v65 + 8 * v66 + 8) - v67 - 1);
        v69 = *(_QWORD *)(v65 + 8 * v66 + 16);
        *(_DWORD *)(v69 + 8 * v68 + 4) = v67;
        *(_BYTE *)(v69 + 8 * v68 + 1) = 1;
      }
      ++v14;
    }
    while ( v14 < *(_DWORD *)(v4 + 4) );
    v8 = v80;
  }
  for ( m = 0; m < v8; ++m )
  {
    v26 = 0;
    v27 = *(_QWORD *)(KeGetPrcb(m) + 34880);
    v28 = *(_DWORD *)(v27 + 1016);
    if ( v28 )
    {
      do
      {
        v77 = 3LL * (v28 - v26 - 1);
        v81 = *(_QWORD *)(v27 + 1024);
        v29 = v4 + 48 * (v26 + 1LL);
        if ( !*(_BYTE *)(v29 + 4) || (v32 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v29) == m, v30 = 0, v32) )
          v30 = 1;
        ++v26;
        *(_BYTE *)(v81 + 8 * v77 + 1) = v30;
        v28 = *(_DWORD *)(v27 + 1016);
      }
      while ( v26 < v28 );
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates((int *)v13, 0);
    v6 = 0;
  }
  if ( v6 )
    goto LABEL_18;
  return v5;
}
