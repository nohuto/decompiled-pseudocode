/*
 * XREFs of EtwpCovSampContextGetModule @ 0x140941058
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140940E70 (EtwpCovSampImageNotify.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EtwCovSampHash @ 0x14044D850 (EtwCovSampHash.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     ProcessForExeModule @ 0x1404C91E4 (ProcessForExeModule.c)
 *     EtwpCheckDebugInfoEqual @ 0x1404F2C20 (EtwpCheckDebugInfoEqual.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     EtwpCovSampContextPruneModules @ 0x14093DA40 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleCleanup @ 0x14093F994 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x14093F9E4 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampContextFastFindModule @ 0x1409423BC (EtwpCovSampContextFastFindModule.c)
 *     EtwpCovSampModuleGetName @ 0x140942548 (EtwpCovSampModuleGetName.c)
 *     EtwpFindDebugId @ 0x1409427A8 (EtwpFindDebugId.c)
 *     EtwpCovSampCheckForSegments @ 0x140942D40 (EtwpCovSampCheckForSegments.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampContextGetModule(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        AutoBoost *a5,
        __int64 *a6)
{
  char *v7; // r12
  char *v8; // r14
  int v10; // ebx
  _DWORD *v11; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  _DWORD *v13; // r13
  int ULongFromUser; // eax
  int v15; // eax
  int Name; // edi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v21; // r13
  AutoBoost *v22; // rcx
  __int64 v23; // rdx
  __int64 Module; // rax
  unsigned int v25; // ecx
  char *Pool2; // rax
  int v27; // edx
  int v28; // r8d
  struct _KLOCK_ENTRIES *v29; // r9
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  unsigned __int64 v33; // rax
  __m128i v34; // xmm0
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // edx
  __int64 v39; // rdi
  struct _KTHREAD *v40; // rcx
  AutoBoost *v41; // rax
  void *v42; // rdx
  AutoBoost *v43; // rcx
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  int v50; // r11d
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdi
  int v54; // edx
  int v55; // r8d
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *k; // rcx
  _QWORD *v61; // r9
  _QWORD *m; // rcx
  char *v63; // r11
  __int64 v64; // r8
  unsigned int v65; // eax
  char v66; // r9
  char i; // cl
  __int64 v68; // r13
  unsigned __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rdx
  unsigned int v72; // r10d
  __int64 v73; // rax
  _QWORD *v74; // r13
  __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  __int64 v77; // r10
  unsigned int v78; // r8d
  __int64 v79; // rdx
  _QWORD *v80; // r9
  __int64 v81; // rdx
  char *v82; // rcx
  void *v83; // rcx
  int v84; // [rsp+30h] [rbp-B8h]
  unsigned int v85; // [rsp+34h] [rbp-B4h]
  AutoBoost *v86; // [rsp+38h] [rbp-B0h]
  unsigned int v87; // [rsp+38h] [rbp-B0h]
  AutoBoost *v88; // [rsp+38h] [rbp-B0h]
  int v89; // [rsp+40h] [rbp-A8h]
  int v90; // [rsp+40h] [rbp-A8h]
  __int64 v91; // [rsp+48h] [rbp-A0h]
  __m128i *v92; // [rsp+48h] [rbp-A0h]
  __int64 j; // [rsp+48h] [rbp-A0h]
  char *v94; // [rsp+50h] [rbp-98h]
  _QWORD v95[2]; // [rsp+58h] [rbp-90h] BYREF
  int v96; // [rsp+68h] [rbp-80h]
  int v97; // [rsp+70h] [rbp-78h]
  __int128 v98; // [rsp+78h] [rbp-70h] BYREF
  __int128 v99; // [rsp+88h] [rbp-60h]
  _QWORD v100[10]; // [rsp+98h] [rbp-50h] BYREF
  int v104; // [rsp+110h] [rbp+28h]
  int v105; // [rsp+110h] [rbp+28h]
  AutoBoost *v106; // [rsp+110h] [rbp+28h]
  unsigned __int64 v107; // [rsp+110h] [rbp+28h]
  AutoBoost *v108; // [rsp+110h] [rbp+28h]
  AutoBoost *v109; // [rsp+110h] [rbp+28h]
  AutoBoost *v110; // [rsp+110h] [rbp+28h]
  AutoBoost *v111; // [rsp+110h] [rbp+28h]
  AutoBoost *v112; // [rsp+110h] [rbp+28h]
  AutoBoost *v113; // [rsp+110h] [rbp+28h]
  int v114; // [rsp+110h] [rbp+28h]
  AutoBoost *v115; // [rsp+110h] [rbp+28h]

  v85 = 0;
  v7 = 0LL;
  v94 = 0LL;
  v8 = 0LL;
  v84 = 0;
  *a6 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v95[0] = *((_QWORD *)a5 + 4);
  *((_QWORD *)&v98 + 1) = v95[0];
  v10 = *((_DWORD *)a5 + 2) & 0x100;
  v11 = RtlImageNtHeader(*((_QWORD *)a5 + 2));
  v13 = v11;
  if ( !v11 )
  {
    Name = -1073741637;
    v96 = -1073741637;
    goto LABEL_78;
  }
  if ( v10 )
    ULongFromUser = v11[22];
  else
    ULongFromUser = RtlReadULongFromUser(v11 + 22);
  v104 = ULongFromUser;
  LODWORD(v99) = ULongFromUser;
  if ( v10 )
    v15 = v13[2];
  else
    v15 = RtlReadULongFromUser(v13 + 2);
  v89 = v15;
  DWORD1(v99) = v15;
  if ( (*((_DWORD *)a5 + 2) & 0x100) != 0 )
  {
    v18 = *((_QWORD *)a5 + 2);
LABEL_12:
    *(_QWORD *)&v98 = v18;
    v91 = v18;
    if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
    {
      if ( *((_QWORD *)a5 + 2) == *(_QWORD *)(a2 + 688) )
      {
        v84 = 1;
      }
      else
      {
        v84 = 0;
        v19 = *(unsigned int *)(a3 + 40);
        v91 = v19 ^ v18;
        *(_QWORD *)&v98 = v19 ^ v18;
        DWORD2(v99) = v19;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v21 = (volatile signed __int64 *)(a1 + 1176);
    v22 = (AutoBoost *)KeAbPreAcquire(a1 + 1176, 0LL, 0LL, v12);
    v86 = v22;
    v23 = 17LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1176), 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1176), 0, v22, (struct _KTHREAD *)(a1 + 1176));
      v22 = v86;
    }
    if ( v22 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v22, (void *)v23);
      else
        *((_BYTE *)v22 + 10) = 1;
    }
    Module = EtwpCovSampContextFastFindModule(a1, &v98, a6);
    if ( Module && Module == *a6 )
    {
      ProcessForExeModule(a1, a3, *a6, v84);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
      KeAbPostRelease(a1 + 1176);
      KeLeaveCriticalRegion();
      Name = 0;
      goto LABEL_25;
    }
    v97 = *(_DWORD *)(a1 + 1196) >> 5;
    v25 = *(_DWORD *)(a1 + 1192);
    if ( v25 <= *(_DWORD *)(a1 + 1208) )
      v25 = *(_DWORD *)(a1 + 1208);
    v87 = v25;
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
    KeAbPostRelease(a1 + 1176);
    KeLeaveCriticalRegion();
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v8 = Pool2;
    if ( !Pool2 )
    {
      Name = -1073741670;
      goto LABEL_25;
    }
    memset_0(Pool2, 0, 0xB0uLL);
    *((_QWORD *)v8 + 10) = v8 + 72;
    *((_QWORD *)v8 + 9) = v8 + 72;
    *((_QWORD *)v8 + 12) = v8 + 88;
    *((_QWORD *)v8 + 11) = v8 + 88;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 8) = 1LL;
    *((_QWORD *)v8 + 1) = v91;
    v27 = v95[0];
    *((_QWORD *)v8 + 5) = v95[0];
    *((_DWORD *)v8 + 8) = v104;
    *((_DWORD *)v8 + 9) = v89;
    *((_DWORD *)v8 + 30) ^= (*((_DWORD *)v8 + 30) ^ (*((_DWORD *)a5 + 2) << 9)) & 0x20000;
    v95[0] = 0LL;
    v95[1] = 0LL;
    v90 = 0;
    v92 = (__m128i *)v95;
    v105 = 1;
    v28 = *((_DWORD *)a5 + 2) >> 8;
    LOBYTE(v28) = (*((_DWORD *)a5 + 2) & 0x100) == 0;
    if ( (int)EtwpFindDebugId(*((_QWORD *)a5 + 2), v27, v28, (int)v8 + 48, (__int64)(v8 + 56)) >= 0 )
    {
      v30 = *((_QWORD *)v8 + 6);
      if ( *((_DWORD *)v8 + 14) <= 0x400u )
      {
        v90 = *(_DWORD *)(v30 + 20);
        v92 = (__m128i *)(v30 + 4);
LABEL_34:
        Name = EtwpCovSampModuleGetName(v8, a5, a4);
        if ( Name >= 0 )
        {
          v100[0] = *((_QWORD *)v8 + 14);
          v100[1] = (unsigned __int16)*((_DWORD *)v8 + 30);
          if ( *(_DWORD *)(a1 + 1624) )
            v31 = EtwpCovSampCheckForSegments(v100, a1 + 1304);
          else
            v31 = v105;
          if ( v31 && *(_DWORD *)(a1 + 1628) )
          {
            if ( !(unsigned int)EtwpCovSampCheckForSegments(v100, a1 + 1464) )
            {
              v31 = 1;
LABEL_43:
              *((_DWORD *)v8 + 30) ^= (*((_DWORD *)v8 + 30) ^ (v31 << 16)) & 0x10000;
              LODWORD(v106) = *((_DWORD *)v8 + 9);
              HIDWORD(v106) = *((_DWORD *)v8 + 8);
              v33 = EtwCovSampHash((unsigned __int64)v106, *(unsigned int *)(a1 + 12));
              LODWORD(v106) = *((_DWORD *)v8 + 10);
              HIDWORD(v106) = v90;
              v34 = *v92;
              v35 = EtwCovSampHash((unsigned __int64)v106, v33);
              v36 = EtwCovSampHash(v34.m128i_u64[0], v35);
              v107 = EtwCovSampHash(_mm_srli_si128(v34, 8).m128i_u64[0], v36);
              v37 = v107 ^ HIDWORD(v107);
              if ( (unsigned int)v107 == HIDWORD(v107) )
                v37 = 1;
              if ( !v84 )
                v37 ^= *(_DWORD *)(a3 + 40);
              *((_DWORD *)v8 + 31) = v37;
LABEL_48:
              v38 = 2 * v97;
              if ( v87 + 1 > 2 * v97 )
              {
                v39 = v38;
                if ( !v38 )
                  v39 = 128LL;
                v85 = v39;
                v94 = (char *)ExAllocatePool2(0x100uLL);
              }
              else
              {
                v39 = 0LL;
              }
              v40 = KeGetCurrentThread();
              --v40->KernelApcDisable;
              v41 = (AutoBoost *)KeAbPreAcquire(a1 + 1176, 0LL, 0LL, v29);
              v43 = v41;
              v108 = v41;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1176), v41, a1 + 1176);
                v43 = v108;
              }
              if ( v43 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v43, v42);
                else
                  *((_BYTE *)v43 + 10) = 1;
              }
              *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
              if ( v94 && (unsigned int)v39 > *(_DWORD *)(a1 + 1196) >> 5 )
              {
                v63 = &v94[8 * (unsigned int)v39];
                v64 = (unsigned int)v39;
                v114 = v39 & (v39 - 1);
                if ( v114 )
                {
                  v65 = v39;
                  v66 = -1;
                  for ( i = -1; v65; v65 >>= 1 )
                    ++i;
                  v64 = (unsigned int)(1 << i);
                }
                else
                {
                  v66 = -1;
                }
                if ( (unsigned int)v64 > 0x4000000 )
                  v64 = 0x4000000LL;
                v68 = a1 + 1208;
                v69 = (unsigned int)v64;
                if ( v63 > &v63[8 * v64] )
                  v69 = 0LL;
                if ( v69 )
                {
                  memset64(v63, (a1 + 1208) | 1, v69);
                  v39 = v85;
                }
                v70 = *(_DWORD *)(a1 + 1212);
                v71 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
                v95[0] = v71;
                v72 = 0;
                if ( (v70 & 0xFFFFFFE0) != 0 )
                {
                  do
                  {
                    v73 = *(_QWORD *)(v68 + 8);
                    for ( j = v73; ; v73 = j )
                    {
                      v74 = *(_QWORD **)(v73 + 8LL * v72);
                      if ( ((unsigned __int8)v74 & 1) != 0 )
                        break;
                      *(_QWORD *)(j + 8LL * v72) = *v74;
                      v88 = (AutoBoost *)(v71 & v74[1]);
                      v75 = ((_DWORD)v64 - 1) & (HIBYTE(v88)
                                               + 37
                                               * (BYTE6(v88)
                                                + 37
                                                * (BYTE5(v88)
                                                 + 37
                                                 * (BYTE4(v88)
                                                  + 37
                                                  * (BYTE3(v88)
                                                   + 374026047
                                                   + 37
                                                   * (BYTE2(v88)
                                                    + 37 * (BYTE1(v88) + 37 * (unsigned int)(unsigned __int8)v88)))))));
                      *v74 = *(_QWORD *)&v63[8 * v75];
                      *(_QWORD *)&v63[8 * v75] = v74;
                      v39 = v85;
                      v71 = v95[0];
                    }
                    ++v72;
                    v68 = a1 + 1208;
                  }
                  while ( v72 < *(_DWORD *)(a1 + 1212) >> 5 );
                }
                *(_QWORD *)(v68 + 8) = v63;
                *(_DWORD *)(v68 + 4) = *(_DWORD *)(v68 + 4) & 0x1F | (32 * v64);
                if ( v114 )
                {
                  for ( ; (_DWORD)v39; LODWORD(v39) = (unsigned int)v39 >> 1 )
                    ++v66;
                  v39 = (unsigned int)(1 << v66);
                }
                if ( (unsigned int)v39 > 0x4000000 )
                  v39 = 0x4000000LL;
                v44 = a1 + 1192;
                v76 = (unsigned int)v39;
                if ( v94 > &v94[8 * v39] )
                  v76 = 0LL;
                if ( v76 )
                  memset64(v94, (a1 + 1192) | 1, v76);
                v77 = -1LL << (*(_BYTE *)(a1 + 1196) & 0x1F);
                v78 = 0;
                if ( (*(_DWORD *)(a1 + 1196) & 0xFFFFFFE0) != 0 )
                {
                  do
                  {
                    v79 = *(_QWORD *)(a1 + 1200);
                    for ( v95[0] = v79; ; v79 = v95[0] )
                    {
                      v80 = *(_QWORD **)(v79 + 8LL * v78);
                      if ( ((unsigned __int8)v80 & 1) != 0 )
                        break;
                      *(_QWORD *)(v79 + 8LL * v78) = *v80;
                      v115 = (AutoBoost *)(v77 & v80[1]);
                      v81 = ((_DWORD)v39 - 1) & (HIBYTE(v115)
                                               + 37
                                               * (BYTE6(v115)
                                                + 37
                                                * (BYTE5(v115)
                                                 + 37
                                                 * (BYTE4(v115)
                                                  + 37
                                                  * (BYTE3(v115)
                                                   + 374026047
                                                   + 37
                                                   * (BYTE2(v115)
                                                    + 37 * (BYTE1(v115) + 37 * (unsigned int)(unsigned __int8)v115)))))));
                      *v80 = *(_QWORD *)&v94[8 * v81];
                      *(_QWORD *)&v94[8 * v81] = v80;
                    }
                    ++v78;
                  }
                  while ( v78 < *(_DWORD *)(a1 + 1196) >> 5 );
                }
                v82 = *(char **)(a1 + 1200);
                *(_QWORD *)(a1 + 1200) = v94;
                *(_DWORD *)(a1 + 1196) = (32 * v39) | *(_DWORD *)(a1 + 1196) & 0x1F;
                v94 = v82;
              }
              else
              {
                v44 = a1 + 1192;
              }
              if ( *(_DWORD *)(a1 + 1196) < 0x20u )
              {
                Name = -1073741670;
                goto LABEL_77;
              }
              v45 = EtwpCovSampContextFastFindModule(a1, &v98, a6);
              if ( v45 )
              {
                if ( v45 == *a6 )
                {
                  ProcessForExeModule(a1, a3, *a6, v84);
LABEL_76:
                  Name = 0;
LABEL_77:
                  v7 = v94;
                  goto LABEL_78;
                }
                *(_DWORD *)(v45 + 120) |= 0x40000u;
                v112 = (AutoBoost *)(*(_QWORD *)(v45 + 8) & (-1LL << (*(_DWORD *)(v44 + 4) & 0x1F)));
                for ( k = (_QWORD *)(*(_QWORD *)(v44 + 8)
                                   + 8LL
                                   * (((*(_DWORD *)(v44 + 4) >> 5) - 1) & (HIBYTE(v112)
                                                                         - 877075889
                                                                         + 442596621 * (unsigned __int8)v112
                                                                         + 37
                                                                         * (BYTE6(v112)
                                                                          + 37
                                                                          * (BYTE5(v112)
                                                                           + 37
                                                                           * (BYTE4(v112)
                                                                            + 37
                                                                            * (BYTE3(v112)
                                                                             + 37
                                                                             * (BYTE2(v112)
                                                                              + 37 * (unsigned int)BYTE1(v112)))))))));
                      (*k & 1) == 0;
                      k = (_QWORD *)*k )
                {
                  if ( *k == v45 )
                  {
                    *k = *(_QWORD *)v45;
                    --*(_DWORD *)v44;
                    break;
                  }
                }
                *(_QWORD *)v45 = 0LL;
                v61 = (_QWORD *)(v45 + 16);
                if ( *(_QWORD *)(v45 + 16) )
                {
                  v113 = (AutoBoost *)(*(_QWORD *)(v45 + 24) & (-1LL << (*(_DWORD *)(a1 + 1212) & 0x1F)));
                  for ( m = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                                     + 8LL
                                     * (((*(_DWORD *)(a1 + 1212) >> 5) - 1) & (HIBYTE(v113)
                                                                             - 877075889
                                                                             + 442596621 * (unsigned __int8)v113
                                                                             + 37
                                                                             * (BYTE6(v113)
                                                                              + 37
                                                                              * (BYTE5(v113)
                                                                               + 37
                                                                               * (BYTE4(v113)
                                                                                + 37
                                                                                * (BYTE3(v113)
                                                                                 + 37
                                                                                 * (BYTE2(v113)
                                                                                  + 37 * (unsigned int)BYTE1(v113)))))))));
                        (*m & 1) == 0;
                        m = (_QWORD *)*m )
                  {
                    if ( (_QWORD *)*m == v61 )
                    {
                      *m = *v61;
                      --*(_DWORD *)(a1 + 1208);
                      break;
                    }
                  }
                  *v61 = 0LL;
                }
              }
              *((_DWORD *)v8 + 30) = *((_DWORD *)v8 + 30) & 0xFFEFFFFF | (v84 << 20);
              *((_DWORD *)v8 + 32) = (*(_DWORD *)(a1 + 1632))++;
              v109 = (AutoBoost *)(*((_QWORD *)v8 + 1) & (-1LL << (*(_DWORD *)(a1 + 1196) & 0x1F)));
              v46 = ((*(_DWORD *)(a1 + 1196) >> 5) - 1) & (HIBYTE(v109)
                                                         + 37
                                                         * (BYTE6(v109)
                                                          + 37
                                                          * (BYTE5(v109)
                                                           + 37
                                                           * (BYTE4(v109)
                                                            + 37
                                                            * (BYTE3(v109)
                                                             + 374026047
                                                             + 37
                                                             * (BYTE2(v109)
                                                              + 37
                                                              * (BYTE1(v109) + 37 * (unsigned int)(unsigned __int8)v109)))))));
              v47 = *(_QWORD *)(a1 + 1200);
              *(_QWORD *)v8 = *(_QWORD *)(v47 + 8 * v46);
              *(_QWORD *)(v47 + 8 * v46) = v8;
              ++*(_DWORD *)(a1 + 1192);
              v48 = (_QWORD *)(a1 + 1224);
              v49 = *(_QWORD *)(a1 + 1224);
              if ( *(_QWORD *)(v49 + 8) != a1 + 1224 )
                __fastfail(3u);
              *((_QWORD *)v8 + 9) = v49;
              *((_QWORD *)v8 + 10) = v48;
              *(_QWORD *)(v49 + 8) = v8 + 72;
              *v48 = v8 + 72;
              *((_DWORD *)v8 + 34) = MEMORY[0xFFFFF78000000320];
              ++*(_DWORD *)(a1 + 1240);
              _InterlockedAdd((volatile signed __int32 *)(a1 + 1244), 1u);
              v50 = *((_DWORD *)v8 + 30);
              if ( (v50 & 0x10000) != 0 || v84 )
              {
                v51 = *((unsigned int *)v8 + 31);
                *((_QWORD *)v8 + 3) = v51;
                v52 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
                v53 = v51 & v52;
                v54 = *(_DWORD *)(a1 + 1212) >> 5;
                v55 = v54 - 1;
                if ( v54 )
                {
                  v110 = (AutoBoost *)(v51 & v52);
                  v56 = *(_QWORD *)(a1 + 1216)
                      + 8LL
                      * (v55 & (HIBYTE(v110)
                              - 877075889
                              + 442596621 * (unsigned __int8)v53
                              + 37
                              * (BYTE6(v110)
                               + 37
                               * (BYTE5(v110)
                                + 37
                                * (BYTE4(v110) + 37
                                               * (BYTE3(v110) + 37 * (BYTE2(v110) + 37 * (unsigned int)BYTE1(v110))))))));
                  while ( 1 )
                  {
                    v56 = *(_QWORD *)v56;
                    if ( (v56 & 1) != 0 )
                      break;
                    if ( v53 == (v52 & *(_QWORD *)(v56 + 8)) )
                      goto LABEL_68;
                  }
                }
                v56 = 0LL;
LABEL_68:
                if ( v56 )
                {
                  if ( *(_DWORD *)(v56 + 16) != *((_DWORD *)v8 + 8)
                    || *(_DWORD *)(v56 + 20) != *((_DWORD *)v8 + 9)
                    || *(_QWORD *)(v56 + 24) != *((_QWORD *)v8 + 5)
                    || !(unsigned int)EtwpCheckDebugInfoEqual(*(_QWORD *)(v56 + 32), *((_QWORD *)v8 + 6)) )
                  {
                    *((_DWORD *)v8 + 30) = v50 & 0xFFFEFFFF;
                    *((_DWORD *)v8 + 31) = 0;
                  }
                  *((_DWORD *)v8 + 30) |= 0x80000u;
                  EtwpCovSampModuleNameInfoCleanup((__int64 *)v8 + 13);
                  *((_QWORD *)v8 + 14) = 0LL;
                  *((_WORD *)v8 + 60) = 0;
                  v83 = (void *)*((_QWORD *)v8 + 6);
                  if ( v83 )
                    ExFreePoolWithTag(v83, 0);
                  *((_QWORD *)v8 + 6) = 0LL;
                  *((_DWORD *)v8 + 14) = 0;
                }
                else
                {
                  v111 = (AutoBoost *)(v52 & *((_QWORD *)v8 + 3));
                  v57 = v55 & (HIBYTE(v111)
                             + 37
                             * (BYTE6(v111)
                              + 37
                              * (BYTE5(v111)
                               + 37
                               * (BYTE4(v111)
                                + 37
                                * (BYTE3(v111)
                                 + 374026047
                                 + 37 * (BYTE2(v111) + 37 * (BYTE1(v111) + 37 * (unsigned int)(unsigned __int8)v111)))))));
                  v58 = *(_QWORD *)(a1 + 1216);
                  *((_QWORD *)v8 + 2) = *(_QWORD *)(v58 + 8 * v57);
                  *(_QWORD *)(v58 + 8 * v57) = v8 + 16;
                  ++*(_DWORD *)(a1 + 1208);
                }
                if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
                {
                  ProcessForExeModule(a1, a3, (__int64)v8, v84);
                  *((_DWORD *)v8 + 40) = *(_DWORD *)(a3 + 40);
                  *((_DWORD *)v8 + 41) = *(_DWORD *)(a3 + 44);
                }
              }
              if ( _InterlockedIncrement64((volatile signed __int64 *)v8 + 8) <= 1 )
                __fastfail(0xEu);
              *a6 = (__int64)v8;
              v8 = 0LL;
              *(_QWORD *)(a1 + 1184) = 0LL;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
              KeAbPostRelease(a1 + 1176);
              KeLeaveCriticalRegion();
              EtwpCovSampContextPruneModules(a1);
              goto LABEL_76;
            }
            v31 = 0;
          }
          v32 = v84;
LABEL_42:
          if ( !v31 && !v32 )
            goto LABEL_48;
          goto LABEL_43;
        }
LABEL_25:
        v7 = 0LL;
        goto LABEL_78;
      }
      ExFreePoolWithTag(*((PVOID *)v8 + 6), 0);
      *((_QWORD *)v8 + 6) = 0LL;
      *((_DWORD *)v8 + 14) = 0;
    }
    v105 = 0;
    v32 = v84;
    if ( !v84 )
    {
      v31 = 0;
      goto LABEL_42;
    }
    goto LABEL_34;
  }
  v17 = *((_QWORD *)a5 + 6);
  if ( v17 )
  {
    v18 = *(_QWORD *)(v17 + 24);
    goto LABEL_12;
  }
  Name = -1073741637;
LABEL_78:
  if ( *(struct _KTHREAD **)(a1 + 1184) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
    KeAbPostRelease(a1 + 1176);
    KeLeaveCriticalRegion();
  }
  if ( v8 )
  {
    *((_QWORD *)v8 + 8) = 0LL;
    EtwpCovSampModuleCleanup((__int64)v8);
    ExFreePoolWithTag(v8, 0x56777445u);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x56777445u);
  return (unsigned int)Name;
}
