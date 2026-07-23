/*
 * XREFs of PpmInstallCoordinatedIdleStates @ 0x1407CCC80
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PpmIdleIsStateDisabled @ 0x1404E61BC (PpmIdleIsStateDisabled.c)
 *     PpmCheckCoordinatedStateInitiator @ 0x140604138 (PpmCheckCoordinatedStateInitiator.c)
 *     PpmResetPlatformIdleAccounting @ 0x140605E70 (PpmResetPlatformIdleAccounting.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1407CC71C (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdateCoordinatedDependencies @ 0x1407E6F04 (PpmIdleUpdateCoordinatedDependencies.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallCoordinatedIdleStates(unsigned int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int *v4; // r14
  char *Pool2; // r15
  char v6; // si
  int updated; // ebx
  __int64 v8; // rbp
  unsigned int v9; // r12d
  int v10; // r10d
  int v11; // r11d
  _DWORD *v12; // rcx
  __int64 v13; // r9
  int v14; // eax
  int v15; // eax
  int *v16; // rdi
  unsigned int v17; // ebx
  __int64 v18; // r13
  __int64 v19; // rax
  int *v20; // r13
  unsigned int i; // r10d
  __int64 v22; // r9
  int *v23; // rax
  __int64 v24; // r9
  int v25; // r10d
  __int64 v26; // r11
  char *v27; // r15
  unsigned int *v28; // r12
  char *v29; // r14
  int *v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  char *v35; // r12
  __int64 Prcb; // rax
  unsigned int v37; // r9d
  __int64 v38; // r8
  _QWORD *v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  int *v44; // r8
  unsigned int *v45; // r14
  __int64 v46; // r10
  __int64 v47; // r11
  __int64 v48; // rbp
  int v49; // eax
  __int64 v50; // r13
  unsigned int v51; // ebx
  __int64 v52; // rcx
  __int64 v53; // r15
  __int64 v54; // rbx
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned int j; // ebx
  unsigned int v60; // r14d
  __int64 v61; // r9
  __int64 k; // r15
  char v63; // al
  __int64 v64; // r10
  __int64 v65; // r11
  unsigned int v66; // [rsp+20h] [rbp-68h]
  unsigned int v67; // [rsp+28h] [rbp-60h]
  int v68; // [rsp+2Ch] [rbp-5Ch]
  int v69; // [rsp+30h] [rbp-58h]
  __int64 v70; // [rsp+30h] [rbp-58h]
  unsigned int v72; // [rsp+98h] [rbp+10h]
  unsigned int v73; // [rsp+A0h] [rbp+18h]
  unsigned int v74; // [rsp+A8h] [rbp+20h]

  v4 = a1;
  Pool2 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, a2, a3, a4);
  v6 = 1;
  if ( PpmPlatformStates && !*((_BYTE *)v4 + 40) )
  {
    updated = -1073741431;
LABEL_44:
    PopReleaseRwLock(&PpmIdlePolicyLock);
    return (unsigned int)updated;
  }
  updated = PpmIdleUpdateCoordinatedDependencies(v4);
  if ( updated < 0 )
    goto LABEL_44;
  v8 = *v4;
  v73 = v8;
  if ( !(_DWORD)v8 )
    goto LABEL_43;
  v9 = KeNumberProcessors_0;
  v10 = 0;
  v72 = KeNumberProcessors_0;
  v11 = KeNumberProcessors_0 * v8;
  v12 = v4 + 86;
  v13 = (unsigned int)v8;
  do
  {
    v14 = v12[1];
    v10 += v14;
    v15 = *v12 * v14;
    v12 += 80;
    v11 += v15;
    --v13;
  }
  while ( v13 );
  v16 = (int *)PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_QWORD *)PpmPlatformStates == __PAIR64__(KeNumberProcessors_0, v8) )
      goto LABEL_34;
LABEL_43:
    updated = -1073741811;
    goto LABEL_44;
  }
  v17 = stru_140E67200.Padding[4];
  v74 = (448 * v8 + 71) & 0xFFFFFFF8;
  v66 = v74 + 24 * v10;
  v67 = v66 + 24 * v11;
  v18 = (v67 + 4 * (_DWORD)KeNumberProcessors_0 * (_DWORD)v8 + 7) & 0xFFFFFFF8;
  v68 = (4 * v8 + 15) & 0xFFFFFFF8;
  v69 = (v18 + 1032 * v8 + 47) & 0xFFFFFFF8;
  if ( stru_140E67200.Padding[4] )
  {
    v17 = *(_DWORD *)(stru_140E67200.Padding[4] + 4);
    if ( v17 )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        goto LABEL_14;
    }
  }
  v19 = ExAllocatePool2(0x48uLL);
  v16 = (int *)v19;
  if ( !v19 )
  {
    ExFreePoolWithTag(Pool2, 0x694D5050u);
LABEL_14:
    updated = -1073741670;
    goto LABEL_44;
  }
  *(_DWORD *)v19 = v8;
  v20 = (int *)(v19 + v18);
  *(_BYTE *)(v19 + 8) = 1;
  *(_DWORD *)(v19 + 4) = v9;
  *(_QWORD *)(v19 + 16) = *((_QWORD *)v4 + 1);
  *(_QWORD *)(v19 + 24) = *((_QWORD *)v4 + 2);
  *(_QWORD *)(v19 + 32) = *((_QWORD *)v4 + 3);
  *(_QWORD *)(v19 + 40) = *((_QWORD *)v4 + 4);
  *(_QWORD *)(v19 + 48) = v20;
  v20[1] = v8;
  PpmResetPlatformIdleAccounting(v20);
  for ( i = 0; i < *v4; i = v25 + 1 )
  {
    v22 = 112LL * i;
    v23 = &v16[v22 + 22];
    *(_QWORD *)&v16[v22 + 24] = v23;
    *(_QWORD *)v23 = v23;
    LOBYTE(v16[v22 + 26]) = 7;
    if ( PpmIdleIsStateDisabled(0, i) )
      *(int *)((char *)v16 + v24 + 80) = 0x80000000;
    if ( v17 )
    {
      if ( v25 == *v4 - 1 )
        *((_BYTE *)v16 + v24 + 105) = 1;
      *(_QWORD *)((char *)v16 + v24 + 112) = Pool2;
      Pool2 += 64 * (unsigned __int64)v17;
      *(int *)((char *)v16 + v24 + 108) = v17;
      *(_QWORD *)&v20[258 * v26 + 58] = (char *)v16 + v24 + 80;
    }
  }
  v27 = (char *)v16 + v66;
  v28 = v4 + 82;
  v29 = (char *)v16 + v74;
  v30 = v16 + 16;
  do
  {
    *(_OWORD *)(v30 + 82) = *((_OWORD *)v28 - 1);
    *(_QWORD *)v30 = *(_QWORD *)v28;
    *((_BYTE *)v30 + 58) = *((_BYTE *)v28 + 28);
    *((_QWORD *)v30 + 8) = 2097153LL;
    memset_0(v30 + 18, 0, 0x100uLL);
    RtlpCopyAffinityEx((struct _KAFFINITY_EX *)(v30 + 16), *((_WORD *)v30 + 33), (struct _KAFFINITY_EX *)(v28 - 70));
    v31 = 0LL;
    v30[15] = v28[5];
    *((_QWORD *)v30 + 43) = v29;
    v32 = v28[5];
    v29 += 24 * v32;
    if ( (_DWORD)v32 )
    {
      do
      {
        v33 = 3 * v31;
        v31 = (unsigned int)(v31 + 1);
        *(_QWORD *)(*((_QWORD *)v30 + 43) + 8 * v33 + 16) = v27;
        v27 += 24 * v28[4];
      }
      while ( (unsigned int)v31 < v28[5] );
    }
    v28 += 80;
    v30 += 112;
    --v8;
  }
  while ( v8 );
  LODWORD(v8) = v73;
  v4 = a1;
  v34 = 0;
  v35 = (char *)v16 + v67;
  if ( v72 )
  {
    do
    {
      Prcb = KeGetPrcb(v34);
      v37 = 0;
      v38 = *(_QWORD *)(Prcb + 34880);
      *(_QWORD *)(v38 + 1024) = v27;
      v27 += 24 * v73;
      *(_QWORD *)(v38 + 1048) = v35;
      v35 += 4 * v73;
      *(_DWORD *)(v38 + 1016) = v73;
      *(_QWORD *)(v38 + 992) = (char *)v16 + v69 + v34 * v68;
      *(_DWORD *)(v38 + 1032) = v73;
      if ( v73 )
      {
        v39 = v16 + 102;
        do
        {
          v40 = *(_QWORD *)(v38 + 1024);
          v41 = 3LL * (v73 - v37 - 1);
          *(_DWORD *)(v40 + 8 * v41 + 4) = v37++;
          *(_DWORD *)(v40 + 8 * v41 + 8) = *((_DWORD *)v39 - 71);
          v42 = *v39;
          v39 += 56;
          *(_QWORD *)(v40 + 8 * v41 + 16) = v42;
        }
        while ( v37 < v73 );
      }
      ++v34;
    }
    while ( v34 < v72 );
    v4 = a1;
  }
  v9 = v72;
LABEL_34:
  if ( (_DWORD)v8 )
  {
    v43 = (unsigned int)v8;
    v44 = v16 + 18;
    v70 = (unsigned int)v8;
    v45 = v4 + 85;
    do
    {
      v46 = 0LL;
      *v44 = *(v45 - 1);
      v44[1] = *v45;
      *((_BYTE *)v44 + 49) = *((_BYTE *)v45 + 12);
      if ( v45[2] )
      {
        do
        {
          v47 = *(_QWORD *)(v45 + 5);
          v48 = *((_QWORD *)v44 + 42);
          v49 = *(_DWORD *)(v47 + 16LL * (unsigned int)v46);
          *(_DWORD *)(v48 + 24 * v46) = v49;
          if ( v49 == -1 )
            *((_BYTE *)v44 + 51) = 1;
          v50 = 0LL;
          *(_DWORD *)(v48 + 24 * v46 + 8) = *(_DWORD *)(v47 + 16LL * (unsigned int)v46 + 4);
          v51 = *(_DWORD *)(v47 + 16LL * (unsigned int)v46 + 4);
          if ( v51 )
          {
            do
            {
              v52 = *(_QWORD *)(v47 + 16LL * (unsigned int)v46 + 8);
              v53 = *(_QWORD *)(v48 + 24 * v46 + 16);
              v54 = 3LL * (v51 + ~(_DWORD)v50);
              v55 = *(unsigned __int8 *)(v52 + 4 * v50);
              *(_DWORD *)(v53 + 8 * v54 + 4) = v55;
              *(_BYTE *)(v53 + 8 * v54) = *(_BYTE *)(v52 + 4 * v50 + 1) == 0;
              *(_BYTE *)(v53 + 8 * v54 + 1) = *(_BYTE *)(v52 + 4 * v50 + 2);
              *(_BYTE *)(v53 + 8 * v54 + 2) = *(_BYTE *)(v52 + 4 * v50 + 3);
              if ( *(_DWORD *)(v48 + 24 * v46) == -1 )
              {
                v56 = 112LL * v55;
                *(_DWORD *)(v53 + 8 * v54 + 8) = v16[v56 + 31];
                v57 = *(_QWORD *)&v16[v56 + 102];
              }
              else
              {
                *(_DWORD *)(v53 + 8 * v54 + 8) = 0;
                v57 = 0LL;
              }
              *(_QWORD *)(v53 + 8 * v54 + 16) = v57;
              v50 = (unsigned int)(v50 + 1);
              v51 = *(_DWORD *)(v47 + 16LL * (unsigned int)v46 + 4);
            }
            while ( (unsigned int)v50 < v51 );
          }
          v46 = (unsigned int)(v46 + 1);
        }
        while ( (unsigned int)v46 < v45[2] );
        v43 = v70;
      }
      v44 += 112;
      v45 += 80;
      v70 = --v43;
    }
    while ( v43 );
    LODWORD(v8) = v73;
    v9 = v72;
  }
  for ( j = 0; j < v9; ++j )
  {
    v60 = 0;
    for ( k = *(_QWORD *)(KeGetPrcb(j) + 34880); v60 < (unsigned int)v8; *(_BYTE *)(v64 + 8 * v65 + 1) = v63 )
    {
      v63 = PpmCheckCoordinatedStateInitiator(
              j,
              *(_DWORD *)(*(_QWORD *)(k + 1024) + 24LL * ((unsigned int)v8 - v60 - 1) + 8),
              *(_QWORD *)(*(_QWORD *)(k + 1024) + 24LL * ((unsigned int)v8 - v60 - 1) + 16),
              v61);
      ++v60;
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates(v16, 1);
    v6 = 0;
  }
  updated = 0;
  if ( v6 )
    goto LABEL_44;
  return (unsigned int)updated;
}
