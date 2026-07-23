/*
 * XREFs of EtwpCovSampContextGetModule @ 0x140A34168
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140A33F80 (EtwpCovSampImageNotify.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwCovSampHash @ 0x140445980 (EtwCovSampHash.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     ProcessForExeModule @ 0x1404C2C04 (ProcessForExeModule.c)
 *     EtwpCheckDebugInfoEqual @ 0x1404EC200 (EtwpCheckDebugInfoEqual.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpCovSampContextPruneModules @ 0x140A30B58 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleCleanup @ 0x140A32AA4 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140A32AF4 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampContextFastFindModule @ 0x140A354CC (EtwpCovSampContextFastFindModule.c)
 *     EtwpCovSampModuleGetName @ 0x140A35658 (EtwpCovSampModuleGetName.c)
 *     EtwpFindDebugId @ 0x140A358B8 (EtwpFindDebugId.c)
 *     EtwpCovSampCheckForSegments @ 0x140A35E50 (EtwpCovSampCheckForSegments.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  PIMAGE_NT_HEADERS v11; // rax
  struct _KLOCK_ENTRIES *v12; // r9
  PIMAGE_NT_HEADERS v13; // r13
  int CheckSum; // eax
  int TimeDateStamp; // eax
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
  struct _KLOCK_ENTRIES *v27; // r9
  __int64 v28; // rax
  int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // rax
  __m128i v32; // xmm0
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rdi
  struct _KTHREAD *v38; // rcx
  AutoBoost *v39; // rax
  void *v40; // rdx
  AutoBoost *v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  int v48; // r11d
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rdx
  int v53; // r8d
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *k; // rcx
  _QWORD *v59; // r9
  _QWORD *m; // rcx
  char *v61; // r11
  __int64 v62; // r8
  unsigned int v63; // eax
  char v64; // r9
  char i; // cl
  __int64 v66; // r13
  unsigned __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rdx
  unsigned int v70; // r10d
  __int64 v71; // rax
  _QWORD *v72; // r13
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r10
  unsigned int v76; // r8d
  __int64 v77; // rdx
  _QWORD *v78; // r9
  __int64 v79; // rdx
  char *v80; // rcx
  void *v81; // rcx
  int v82; // [rsp+30h] [rbp-B8h]
  unsigned int v83; // [rsp+34h] [rbp-B4h]
  AutoBoost *v84; // [rsp+38h] [rbp-B0h]
  unsigned int v85; // [rsp+38h] [rbp-B0h]
  AutoBoost *v86; // [rsp+38h] [rbp-B0h]
  int v87; // [rsp+40h] [rbp-A8h]
  int v88; // [rsp+40h] [rbp-A8h]
  __int64 v89; // [rsp+48h] [rbp-A0h]
  __m128i *v90; // [rsp+48h] [rbp-A0h]
  __int64 j; // [rsp+48h] [rbp-A0h]
  char *v92; // [rsp+50h] [rbp-98h]
  _QWORD v93[2]; // [rsp+58h] [rbp-90h] BYREF
  int v94; // [rsp+68h] [rbp-80h]
  int v95; // [rsp+70h] [rbp-78h]
  __int128 v96; // [rsp+78h] [rbp-70h] BYREF
  __int128 v97; // [rsp+88h] [rbp-60h]
  _QWORD v98[10]; // [rsp+98h] [rbp-50h] BYREF
  int v102; // [rsp+110h] [rbp+28h]
  int v103; // [rsp+110h] [rbp+28h]
  AutoBoost *v104; // [rsp+110h] [rbp+28h]
  unsigned __int64 v105; // [rsp+110h] [rbp+28h]
  AutoBoost *v106; // [rsp+110h] [rbp+28h]
  AutoBoost *v107; // [rsp+110h] [rbp+28h]
  AutoBoost *v108; // [rsp+110h] [rbp+28h]
  AutoBoost *v109; // [rsp+110h] [rbp+28h]
  AutoBoost *v110; // [rsp+110h] [rbp+28h]
  AutoBoost *v111; // [rsp+110h] [rbp+28h]
  int v112; // [rsp+110h] [rbp+28h]
  AutoBoost *v113; // [rsp+110h] [rbp+28h]

  v83 = 0;
  v7 = 0LL;
  v92 = 0LL;
  v8 = 0LL;
  v82 = 0;
  *a6 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v93[0] = *((_QWORD *)a5 + 4);
  *((_QWORD *)&v96 + 1) = v93[0];
  v10 = *((_DWORD *)a5 + 2) & 0x100;
  v11 = RtlImageNtHeader(*((PVOID *)a5 + 2));
  v13 = v11;
  if ( !v11 )
  {
    Name = -1073741637;
    v94 = -1073741637;
    goto LABEL_78;
  }
  if ( v10 )
    CheckSum = v11->OptionalHeader.CheckSum;
  else
    CheckSum = RtlReadULongFromUser(&v11->OptionalHeader.CheckSum);
  v102 = CheckSum;
  LODWORD(v97) = CheckSum;
  if ( v10 )
    TimeDateStamp = v13->FileHeader.TimeDateStamp;
  else
    TimeDateStamp = RtlReadULongFromUser(&v13->FileHeader.TimeDateStamp);
  v87 = TimeDateStamp;
  DWORD1(v97) = TimeDateStamp;
  if ( (*((_DWORD *)a5 + 2) & 0x100) != 0 )
  {
    v18 = *((_QWORD *)a5 + 2);
LABEL_12:
    *(_QWORD *)&v96 = v18;
    v89 = v18;
    if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
    {
      if ( *((_QWORD *)a5 + 2) == *(_QWORD *)(a2 + 688) )
      {
        v82 = 1;
      }
      else
      {
        v82 = 0;
        v19 = *(unsigned int *)(a3 + 40);
        v89 = v19 ^ v18;
        *(_QWORD *)&v96 = v19 ^ v18;
        DWORD2(v97) = v19;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v21 = (volatile signed __int64 *)(a1 + 1176);
    v22 = (AutoBoost *)KeAbPreAcquire(a1 + 1176, 0LL, 0LL, v12);
    v84 = v22;
    v23 = 17LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1176), 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1176), 0, v22, (struct _KTHREAD *)(a1 + 1176));
      v22 = v84;
    }
    if ( v22 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v22, (void *)v23);
      else
        *((_BYTE *)v22 + 10) = 1;
    }
    Module = EtwpCovSampContextFastFindModule(a1, &v96, a6);
    if ( Module && Module == *a6 )
    {
      ProcessForExeModule(a1, a3, *a6, v82);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
      KeAbPostRelease(a1 + 1176);
      KeLeaveCriticalRegion();
      Name = 0;
      goto LABEL_25;
    }
    v95 = *(_DWORD *)(a1 + 1196) >> 5;
    v25 = *(_DWORD *)(a1 + 1192);
    if ( v25 <= *(_DWORD *)(a1 + 1208) )
      v25 = *(_DWORD *)(a1 + 1208);
    v85 = v25;
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
    *((_QWORD *)v8 + 1) = v89;
    *((_QWORD *)v8 + 5) = v93[0];
    *((_DWORD *)v8 + 8) = v102;
    *((_DWORD *)v8 + 9) = v87;
    *((_DWORD *)v8 + 30) ^= (*((_DWORD *)v8 + 30) ^ (*((_DWORD *)a5 + 2) << 9)) & 0x20000;
    v93[0] = 0LL;
    v93[1] = 0LL;
    v88 = 0;
    v90 = (__m128i *)v93;
    v103 = 1;
    if ( (int)EtwpFindDebugId(*((PVOID *)a5 + 2), (__int64)(v8 + 56)) >= 0 )
    {
      v28 = *((_QWORD *)v8 + 6);
      if ( *((_DWORD *)v8 + 14) <= 0x400u )
      {
        v88 = *(_DWORD *)(v28 + 20);
        v90 = (__m128i *)(v28 + 4);
LABEL_34:
        Name = EtwpCovSampModuleGetName(v8, a5, a4);
        if ( Name >= 0 )
        {
          v98[0] = *((_QWORD *)v8 + 14);
          v98[1] = (unsigned __int16)*((_DWORD *)v8 + 30);
          if ( *(_DWORD *)(a1 + 1624) )
            v29 = EtwpCovSampCheckForSegments(v98, a1 + 1304);
          else
            v29 = v103;
          if ( v29 && *(_DWORD *)(a1 + 1628) )
          {
            if ( !(unsigned int)EtwpCovSampCheckForSegments(v98, a1 + 1464) )
            {
              v29 = 1;
LABEL_43:
              *((_DWORD *)v8 + 30) ^= (*((_DWORD *)v8 + 30) ^ (v29 << 16)) & 0x10000;
              LODWORD(v104) = *((_DWORD *)v8 + 9);
              HIDWORD(v104) = *((_DWORD *)v8 + 8);
              v31 = EtwCovSampHash((unsigned __int64)v104, *(unsigned int *)(a1 + 12));
              LODWORD(v104) = *((_DWORD *)v8 + 10);
              HIDWORD(v104) = v88;
              v32 = *v90;
              v33 = EtwCovSampHash((unsigned __int64)v104, v31);
              v34 = EtwCovSampHash(v32.m128i_u64[0], v33);
              v105 = EtwCovSampHash(_mm_srli_si128(v32, 8).m128i_u64[0], v34);
              v35 = v105 ^ HIDWORD(v105);
              if ( (unsigned int)v105 == HIDWORD(v105) )
                v35 = 1;
              if ( !v82 )
                v35 ^= *(_DWORD *)(a3 + 40);
              *((_DWORD *)v8 + 31) = v35;
LABEL_48:
              v36 = 2 * v95;
              if ( v85 + 1 > 2 * v95 )
              {
                v37 = v36;
                if ( !v36 )
                  v37 = 128LL;
                v83 = v37;
                v92 = (char *)ExAllocatePool2(0x100uLL);
              }
              else
              {
                v37 = 0LL;
              }
              v38 = KeGetCurrentThread();
              --v38->KernelApcDisable;
              v39 = (AutoBoost *)KeAbPreAcquire(a1 + 1176, 0LL, 0LL, v27);
              v41 = v39;
              v106 = v39;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1176), v39, a1 + 1176);
                v41 = v106;
              }
              if ( v41 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v41, v40);
                else
                  *((_BYTE *)v41 + 10) = 1;
              }
              *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
              if ( v92 && (unsigned int)v37 > *(_DWORD *)(a1 + 1196) >> 5 )
              {
                v61 = &v92[8 * (unsigned int)v37];
                v62 = (unsigned int)v37;
                v112 = v37 & (v37 - 1);
                if ( v112 )
                {
                  v63 = v37;
                  v64 = -1;
                  for ( i = -1; v63; v63 >>= 1 )
                    ++i;
                  v62 = (unsigned int)(1 << i);
                }
                else
                {
                  v64 = -1;
                }
                if ( (unsigned int)v62 > 0x4000000 )
                  v62 = 0x4000000LL;
                v66 = a1 + 1208;
                v67 = (unsigned int)v62;
                if ( v61 > &v61[8 * v62] )
                  v67 = 0LL;
                if ( v67 )
                {
                  memset64(v61, (a1 + 1208) | 1, v67);
                  v37 = v83;
                }
                v68 = *(_DWORD *)(a1 + 1212);
                v69 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
                v93[0] = v69;
                v70 = 0;
                if ( (v68 & 0xFFFFFFE0) != 0 )
                {
                  do
                  {
                    v71 = *(_QWORD *)(v66 + 8);
                    for ( j = v71; ; v71 = j )
                    {
                      v72 = *(_QWORD **)(v71 + 8LL * v70);
                      if ( ((unsigned __int8)v72 & 1) != 0 )
                        break;
                      *(_QWORD *)(j + 8LL * v70) = *v72;
                      v86 = (AutoBoost *)(v69 & v72[1]);
                      v73 = ((_DWORD)v62 - 1) & (HIBYTE(v86)
                                               + 37
                                               * (BYTE6(v86)
                                                + 37
                                                * (BYTE5(v86)
                                                 + 37
                                                 * (BYTE4(v86)
                                                  + 37
                                                  * (BYTE3(v86)
                                                   + 374026047
                                                   + 37
                                                   * (BYTE2(v86)
                                                    + 37 * (BYTE1(v86) + 37 * (unsigned int)(unsigned __int8)v86)))))));
                      *v72 = *(_QWORD *)&v61[8 * v73];
                      *(_QWORD *)&v61[8 * v73] = v72;
                      v37 = v83;
                      v69 = v93[0];
                    }
                    ++v70;
                    v66 = a1 + 1208;
                  }
                  while ( v70 < *(_DWORD *)(a1 + 1212) >> 5 );
                }
                *(_QWORD *)(v66 + 8) = v61;
                *(_DWORD *)(v66 + 4) = *(_DWORD *)(v66 + 4) & 0x1F | (32 * v62);
                if ( v112 )
                {
                  for ( ; (_DWORD)v37; LODWORD(v37) = (unsigned int)v37 >> 1 )
                    ++v64;
                  v37 = (unsigned int)(1 << v64);
                }
                if ( (unsigned int)v37 > 0x4000000 )
                  v37 = 0x4000000LL;
                v42 = a1 + 1192;
                v74 = (unsigned int)v37;
                if ( v92 > &v92[8 * v37] )
                  v74 = 0LL;
                if ( v74 )
                  memset64(v92, (a1 + 1192) | 1, v74);
                v75 = -1LL << (*(_BYTE *)(a1 + 1196) & 0x1F);
                v76 = 0;
                if ( (*(_DWORD *)(a1 + 1196) & 0xFFFFFFE0) != 0 )
                {
                  do
                  {
                    v77 = *(_QWORD *)(a1 + 1200);
                    for ( v93[0] = v77; ; v77 = v93[0] )
                    {
                      v78 = *(_QWORD **)(v77 + 8LL * v76);
                      if ( ((unsigned __int8)v78 & 1) != 0 )
                        break;
                      *(_QWORD *)(v77 + 8LL * v76) = *v78;
                      v113 = (AutoBoost *)(v75 & v78[1]);
                      v79 = ((_DWORD)v37 - 1) & (HIBYTE(v113)
                                               + 37
                                               * (BYTE6(v113)
                                                + 37
                                                * (BYTE5(v113)
                                                 + 37
                                                 * (BYTE4(v113)
                                                  + 37
                                                  * (BYTE3(v113)
                                                   + 374026047
                                                   + 37
                                                   * (BYTE2(v113)
                                                    + 37 * (BYTE1(v113) + 37 * (unsigned int)(unsigned __int8)v113)))))));
                      *v78 = *(_QWORD *)&v92[8 * v79];
                      *(_QWORD *)&v92[8 * v79] = v78;
                    }
                    ++v76;
                  }
                  while ( v76 < *(_DWORD *)(a1 + 1196) >> 5 );
                }
                v80 = *(char **)(a1 + 1200);
                *(_QWORD *)(a1 + 1200) = v92;
                *(_DWORD *)(a1 + 1196) = (32 * v37) | *(_DWORD *)(a1 + 1196) & 0x1F;
                v92 = v80;
              }
              else
              {
                v42 = a1 + 1192;
              }
              if ( *(_DWORD *)(a1 + 1196) < 0x20u )
              {
                Name = -1073741670;
                goto LABEL_77;
              }
              v43 = EtwpCovSampContextFastFindModule(a1, &v96, a6);
              if ( v43 )
              {
                if ( v43 == *a6 )
                {
                  ProcessForExeModule(a1, a3, *a6, v82);
LABEL_76:
                  Name = 0;
LABEL_77:
                  v7 = v92;
                  goto LABEL_78;
                }
                *(_DWORD *)(v43 + 120) |= 0x40000u;
                v110 = (AutoBoost *)(*(_QWORD *)(v43 + 8) & (-1LL << (*(_DWORD *)(v42 + 4) & 0x1F)));
                for ( k = (_QWORD *)(*(_QWORD *)(v42 + 8)
                                   + 8LL
                                   * (((*(_DWORD *)(v42 + 4) >> 5) - 1) & (HIBYTE(v110)
                                                                         - 877075889
                                                                         + 442596621 * (unsigned __int8)v110
                                                                         + 37
                                                                         * (BYTE6(v110)
                                                                          + 37
                                                                          * (BYTE5(v110)
                                                                           + 37
                                                                           * (BYTE4(v110)
                                                                            + 37
                                                                            * (BYTE3(v110)
                                                                             + 37
                                                                             * (BYTE2(v110)
                                                                              + 37 * (unsigned int)BYTE1(v110)))))))));
                      (*k & 1) == 0;
                      k = (_QWORD *)*k )
                {
                  if ( *k == v43 )
                  {
                    *k = *(_QWORD *)v43;
                    --*(_DWORD *)v42;
                    break;
                  }
                }
                *(_QWORD *)v43 = 0LL;
                v59 = (_QWORD *)(v43 + 16);
                if ( *(_QWORD *)(v43 + 16) )
                {
                  v111 = (AutoBoost *)(*(_QWORD *)(v43 + 24) & (-1LL << (*(_DWORD *)(a1 + 1212) & 0x1F)));
                  for ( m = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                                     + 8LL
                                     * (((*(_DWORD *)(a1 + 1212) >> 5) - 1) & (HIBYTE(v111)
                                                                             - 877075889
                                                                             + 442596621 * (unsigned __int8)v111
                                                                             + 37
                                                                             * (BYTE6(v111)
                                                                              + 37
                                                                              * (BYTE5(v111)
                                                                               + 37
                                                                               * (BYTE4(v111)
                                                                                + 37
                                                                                * (BYTE3(v111)
                                                                                 + 37
                                                                                 * (BYTE2(v111)
                                                                                  + 37 * (unsigned int)BYTE1(v111)))))))));
                        (*m & 1) == 0;
                        m = (_QWORD *)*m )
                  {
                    if ( (_QWORD *)*m == v59 )
                    {
                      *m = *v59;
                      --*(_DWORD *)(a1 + 1208);
                      break;
                    }
                  }
                  *v59 = 0LL;
                }
              }
              *((_DWORD *)v8 + 30) = *((_DWORD *)v8 + 30) & 0xFFEFFFFF | (v82 << 20);
              *((_DWORD *)v8 + 32) = (*(_DWORD *)(a1 + 1632))++;
              v107 = (AutoBoost *)(*((_QWORD *)v8 + 1) & (-1LL << (*(_DWORD *)(a1 + 1196) & 0x1F)));
              v44 = ((*(_DWORD *)(a1 + 1196) >> 5) - 1) & (HIBYTE(v107)
                                                         + 37
                                                         * (BYTE6(v107)
                                                          + 37
                                                          * (BYTE5(v107)
                                                           + 37
                                                           * (BYTE4(v107)
                                                            + 37
                                                            * (BYTE3(v107)
                                                             + 374026047
                                                             + 37
                                                             * (BYTE2(v107)
                                                              + 37
                                                              * (BYTE1(v107) + 37 * (unsigned int)(unsigned __int8)v107)))))));
              v45 = *(_QWORD *)(a1 + 1200);
              *(_QWORD *)v8 = *(_QWORD *)(v45 + 8 * v44);
              *(_QWORD *)(v45 + 8 * v44) = v8;
              ++*(_DWORD *)(a1 + 1192);
              v46 = (_QWORD *)(a1 + 1224);
              v47 = *(_QWORD *)(a1 + 1224);
              if ( *(_QWORD *)(v47 + 8) != a1 + 1224 )
                __fastfail(3u);
              *((_QWORD *)v8 + 9) = v47;
              *((_QWORD *)v8 + 10) = v46;
              *(_QWORD *)(v47 + 8) = v8 + 72;
              *v46 = v8 + 72;
              *((_DWORD *)v8 + 34) = MEMORY[0xFFFFF78000000320];
              ++*(_DWORD *)(a1 + 1240);
              _InterlockedAdd((volatile signed __int32 *)(a1 + 1244), 1u);
              v48 = *((_DWORD *)v8 + 30);
              if ( (v48 & 0x10000) != 0 || v82 )
              {
                v49 = *((unsigned int *)v8 + 31);
                *((_QWORD *)v8 + 3) = v49;
                v50 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
                v51 = v49 & v50;
                v52 = *(_DWORD *)(a1 + 1212) >> 5;
                v53 = v52 - 1;
                if ( (_DWORD)v52 )
                {
                  v108 = (AutoBoost *)(v49 & v50);
                  v52 = v53 & (HIBYTE(v108)
                             - 877075889
                             + 442596621 * (unsigned __int8)v51
                             + 37
                             * (BYTE6(v108)
                              + 37
                              * (BYTE5(v108)
                               + 37
                               * (BYTE4(v108) + 37 * (BYTE3(v108) + 37 * (BYTE2(v108) + 37 * (unsigned int)BYTE1(v108)))))));
                  v54 = *(_QWORD *)(a1 + 1216) + 8 * v52;
                  while ( 1 )
                  {
                    v54 = *(_QWORD *)v54;
                    if ( (v54 & 1) != 0 )
                      break;
                    if ( v51 == (v50 & *(_QWORD *)(v54 + 8)) )
                      goto LABEL_68;
                  }
                }
                v54 = 0LL;
LABEL_68:
                if ( v54 )
                {
                  if ( *(_DWORD *)(v54 + 16) != *((_DWORD *)v8 + 8)
                    || *(_DWORD *)(v54 + 20) != *((_DWORD *)v8 + 9)
                    || *(_QWORD *)(v54 + 24) != *((_QWORD *)v8 + 5)
                    || !(unsigned int)EtwpCheckDebugInfoEqual(*(_QWORD *)(v54 + 32), *((_QWORD *)v8 + 6)) )
                  {
                    *((_DWORD *)v8 + 30) = v48 & 0xFFFEFFFF;
                    *((_DWORD *)v8 + 31) = 0;
                  }
                  *((_DWORD *)v8 + 30) |= 0x80000u;
                  EtwpCovSampModuleNameInfoCleanup((__int64 *)v8 + 13, v52);
                  *((_QWORD *)v8 + 14) = 0LL;
                  *((_WORD *)v8 + 60) = 0;
                  v81 = (void *)*((_QWORD *)v8 + 6);
                  if ( v81 )
                    ExFreePoolWithTag(v81, 0);
                  *((_QWORD *)v8 + 6) = 0LL;
                  *((_DWORD *)v8 + 14) = 0;
                }
                else
                {
                  v109 = (AutoBoost *)(v50 & *((_QWORD *)v8 + 3));
                  v55 = v53 & (HIBYTE(v109)
                             + 37
                             * (BYTE6(v109)
                              + 37
                              * (BYTE5(v109)
                               + 37
                               * (BYTE4(v109)
                                + 37
                                * (BYTE3(v109)
                                 + 374026047
                                 + 37 * (BYTE2(v109) + 37 * (BYTE1(v109) + 37 * (unsigned int)(unsigned __int8)v109)))))));
                  v56 = *(_QWORD *)(a1 + 1216);
                  *((_QWORD *)v8 + 2) = *(_QWORD *)(v56 + 8 * v55);
                  *(_QWORD *)(v56 + 8 * v55) = v8 + 16;
                  ++*(_DWORD *)(a1 + 1208);
                }
                if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
                {
                  ProcessForExeModule(a1, a3, (__int64)v8, v82);
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
            v29 = 0;
          }
          v30 = v82;
LABEL_42:
          if ( !v29 && !v30 )
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
    v103 = 0;
    v30 = v82;
    if ( !v82 )
    {
      v29 = 0;
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
