/*
 * XREFs of PpmParkRegisterParking @ 0x1406130BC
 * Callers:
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14046A570 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     Feature_PpmParkUseWholeNumaNode__private_IsEnabledDeviceUsageNoInline @ 0x140612318 (Feature_PpmParkUseWholeNumaNode__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkInitParkNode @ 0x140612C58 (PpmParkInitParkNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmParkFreeAllParkNodes @ 0x1407E1AE0 (PpmParkFreeAllParkNodes.c)
 *     PpmParkParkingAvailable @ 0x140AEBCBC (PpmParkParkingAvailable.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PpmParkRegisterParking()
{
  unsigned __int8 v0; // si
  char v1; // al
  unsigned int v2; // r12d
  char v3; // r15
  _BYTE *v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned __int16 i; // cx
  int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // r13
  __int64 v16; // r9
  unsigned int v17; // edx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  unsigned int j; // esi
  unsigned __int16 k; // cx
  __int64 v22; // r15
  __int64 v23; // rdi
  char *v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // rdi
  char *v30; // rdx
  char *v31; // rax
  char *v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // r12
  char *v35; // rcx
  __int64 v36; // rax
  size_t v37; // r8
  char *v38; // rax
  __int64 v39; // rcx
  unsigned int m; // edi
  __int64 v41; // r15
  char *v42; // rcx
  __int64 v43; // r14
  int v44; // eax
  __int64 v45; // rax
  size_t v46; // r8
  char *v47; // rax
  __int64 v48; // rcx
  KIRQL v49; // dl
  PVOID v50; // rbx
  unsigned int v52; // [rsp+3Ch] [rbp-CCh]
  unsigned int v53; // [rsp+40h] [rbp-C8h]
  int v54; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v55; // [rsp+48h] [rbp-C0h] BYREF
  __int64 Pool2; // [rsp+50h] [rbp-B8h]
  char *v57; // [rsp+58h] [rbp-B0h]
  PVOID v58[2]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h]
  PVOID v60; // [rsp+78h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-88h]
  struct _KAFFINITY_EX v62; // [rsp+88h] [rbp-80h] BYREF

  memset_0(&v62, 0, sizeof(v62));
  v0 = PpmMaxCoreClasses;
  v55 = 0LL;
  *(_OWORD *)v58 = 0LL;
  v1 = PpmParkUseWholeNumaNodeOverride;
  if ( (unsigned __int8)PpmMaxCoreClasses < 3u )
    v0 = 3;
  if ( PpmParkUseWholeNumaNodeOverride == -1 )
    v1 = (unsigned int)Feature_PpmParkUseWholeNumaNode__private_IsEnabledDeviceUsageNoInline() != 0;
  PpmParkUseWholeNumaNode = v1;
  v2 = 0;
  v3 = 0;
  P = 0LL;
  v57 = 0LL;
  v60 = 0LL;
  v53 = 0;
  if ( PpmParkNodes )
  {
    v2 = PpmParkNumNodes;
    v57 = (char *)PpmParkNodes;
    v60 = (PVOID)PpmParkHistograms;
    v53 = PpmParkNumNodes;
    if ( PpmParkNumNodes )
    {
      v4 = (_BYTE *)(PpmParkNodes + 1152);
      v5 = (unsigned int)PpmParkNumNodes;
      do
      {
        if ( *((_QWORD *)v4 - 10) && (*v4 & 8) != 0 )
          PopExecuteOnTargetProcessors((__int64)(v4 - 1136), (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        v4 += 1264;
        --v5;
      }
      while ( v5 );
    }
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( PpmParkUseWholeNumaNode )
  {
    if ( !KeNumberNodes )
      goto LABEL_35;
    do
    {
      *(_QWORD *)&v62.Count = 2097153LL;
      memset_0(&v62.8, 0, sizeof(v62.8));
      KeQueryNodeActiveAffinityEx(v8, &v62.Count, 0LL);
      RtlAndAffinityEx(&v62.Count, &PpmCheckRegistered.Count, (__int64)&v62);
      for ( i = 0; i < v62.Count; ++i )
      {
        if ( v62.Bitmap[i] )
        {
          v10 = 0;
          goto LABEL_20;
        }
      }
      v10 = 1;
LABEL_20:
      v11 = v7 + 1;
      if ( v10 )
        v11 = v7;
      ++v8;
      v7 = v11;
    }
    while ( v8 < (unsigned __int16)KeNumberNodes );
  }
  else
  {
    if ( !KeNumberNodes )
      goto LABEL_35;
    do
    {
      v58[1] = 0LL;
      v58[0] = (PVOID)KeNodeBlock[v8];
      while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)v58, &v55) )
      {
        v12 = *(unsigned __int16 *)(v55 + 136);
        if ( (unsigned __int16)v12 >= PpmCheckRegistered.Count )
          v13 = 0LL;
        else
          v13 = PpmCheckRegistered.Bitmap[v12];
        v14 = v7 + 1;
        if ( (v13 & *(_QWORD *)(v55 + 128)) == 0 )
          v14 = v7;
        v7 = v14;
      }
      ++v8;
    }
    while ( v8 < (unsigned __int16)KeNumberNodes );
  }
  v2 = v53;
  v3 = 0;
LABEL_35:
  Pool2 = ExAllocatePool2(0x40uLL);
  v15 = Pool2;
  if ( Pool2 )
  {
    v52 = v7;
    v16 = ExAllocatePool2(0x40uLL);
    if ( v16 )
    {
      v17 = 0;
      if ( v7 )
      {
        v18 = (_QWORD *)(v15 + 1256);
        do
        {
          v19 = v17 * v0;
          ++v17;
          *v18 = v16 + 624 * v19;
          v18 += 158;
        }
        while ( v17 < v7 );
      }
      v54 = 0;
      for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
      {
        if ( !PpmParkUseWholeNumaNode )
        {
          *(_OWORD *)v58 = (unsigned __int64)KeNodeBlock[j];
          while ( 1 )
          {
            do
            {
              if ( (unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)v58, &v55) )
              {
                v15 = Pool2;
                goto LABEL_70;
              }
              v25 = v55;
              v26 = *(unsigned __int16 *)(v55 + 136);
              if ( (unsigned __int16)v26 >= PpmCheckRegistered.Count )
                v27 = 0LL;
              else
                v27 = PpmCheckRegistered.Bitmap[v26];
              v28 = v27 & *(_QWORD *)(v55 + 128);
            }
            while ( !v28 );
            v29 = 1264LL * v6 + Pool2;
            v61 = 1264LL * v6;
            *(_WORD *)(v29 + 4) = j;
            *(_WORD *)(v29 + 6) = *(_WORD *)(v25 + 140);
            *(_QWORD *)(v29 + 16) = 2097153LL;
            memset_0((void *)(v29 + 24), 0, 0x100uLL);
            if ( *(_WORD *)(v29 + 16) <= (unsigned __int16)v26 )
            {
              if ( *(_WORD *)(v29 + 18) <= (unsigned __int16)v26 )
                goto LABEL_62;
              *(_WORD *)(v29 + 16) = v26 + 1;
            }
            *(_QWORD *)(v29 + 8 * v26 + 24) |= v28;
LABEL_62:
            if ( v6 >= v53
              || (v30 = &v57[v61], *(unsigned __int16 *)&v57[v61 + 4] != j)
              || *((_WORD *)v30 + 3) != *(_WORD *)(v25 + 140) )
            {
              v30 = 0LL;
            }
            ++v6;
            if ( (int)PpmParkInitParkNode(v29, (__int64)v30, &v54) < 0 )
            {
              v15 = Pool2;
              goto LABEL_68;
            }
          }
        }
        *(_QWORD *)&v62.Count = 2097153LL;
        memset_0(&v62.8, 0, sizeof(v62.8));
        KeQueryNodeActiveAffinityEx(j, &v62.Count, 0LL);
        RtlAndAffinityEx(&v62.Count, &PpmCheckRegistered.Count, (__int64)&v62);
        for ( k = 0; k < v62.Count; ++k )
        {
          if ( v62.Bitmap[k] )
          {
            v22 = 1264LL * v6;
            v23 = v22 + v15;
            *(_WORD *)(v23 + 4) = j;
            *(_QWORD *)(v23 + 16) = 2097153LL;
            memset_0((void *)(v22 + v15 + 24), 0, 0x100uLL);
            RtlpCopyAffinityEx((struct _KAFFINITY_EX *)(v23 + 16), *(_WORD *)(v23 + 18), &v62);
            if ( v6 >= v2 || (v24 = &v57[v22], *(unsigned __int16 *)&v57[v22 + 4] != j) )
              v24 = 0LL;
            ++v6;
            if ( (int)PpmParkInitParkNode(v23, (__int64)v24, &v54) < 0 )
              goto LABEL_68;
            break;
          }
        }
LABEL_70:
        v2 = v53;
      }
      if ( v6 == v52 && (v31 = (char *)ExAllocatePool2(0x40uLL), (P = v31) != 0LL) )
      {
        v32 = v31;
        if ( v52 )
        {
          v33 = v15 + 1080;
          v34 = v52;
          do
          {
            v35 = v32;
            v36 = (unsigned int)*(unsigned __int16 *)(v33 - 1072) + 1;
            *(_QWORD *)v33 = v32;
            *(_DWORD *)(v33 + 48) = v36;
            v37 = 8 * v36;
            v38 = &v32[8 * v36];
            *(_QWORD *)(v33 + 8) = v38;
            *(_QWORD *)(v33 + 16) = &v38[v37];
            v32 = &v38[v37 + v37];
            memmove(v35, (const void *)(*(_QWORD *)(v33 - 8) + 328LL), v37);
            memmove(
              *(void **)(v33 + 8),
              (const void *)(*(_QWORD *)(v33 - 8) + 328LL),
              8LL * *(unsigned int *)(v33 + 48));
            v39 = *(_QWORD *)(v33 - 8);
            *(_QWORD *)(v33 + 24) = *(_QWORD *)(v39 + 24);
            *(_QWORD *)(v33 + 32) = *(_QWORD *)(v39 + 24);
            if ( *(_BYTE *)(v33 + 73) )
            {
              for ( m = 0; m < *(unsigned __int8 *)(v33 - 1070); ++m )
              {
                v41 = *(_QWORD *)(v33 + 176);
                v42 = v32;
                v43 = 624LL * m;
                v44 = *(unsigned __int16 *)(v43 + v41);
                if ( (_WORD)v44 )
                {
                  v45 = (unsigned int)(v44 + 1);
                  *(_QWORD *)(v43 + v41 + 560) = v32;
                  *(_DWORD *)(v43 + v41 + 608) = v45;
                  v46 = 8 * v45;
                  v47 = &v32[8 * v45];
                  *(_QWORD *)(v43 + v41 + 568) = v47;
                  *(_QWORD *)(v43 + v41 + 576) = &v47[v46];
                  v32 = &v47[v46 + v46];
                  memmove(v42, (const void *)(*(_QWORD *)(v43 + v41 + 552) + 328LL), v46);
                  memmove(
                    *(void **)(v43 + v41 + 568),
                    (const void *)(*(_QWORD *)(v43 + v41 + 552) + 328LL),
                    8LL * *(unsigned int *)(v43 + v41 + 608));
                  v48 = *(_QWORD *)(v43 + v41 + 552);
                  *(_QWORD *)(v43 + v41 + 584) = *(_QWORD *)(v48 + 24);
                  *(_QWORD *)(v43 + v41 + 592) = *(_QWORD *)(v48 + 24);
                }
              }
            }
            v33 += 1264LL;
            --v34;
          }
          while ( v34 );
          v15 = Pool2;
        }
        v6 = v52;
        v3 = 1;
      }
      else
      {
LABEL_68:
        v6 = v52;
        v3 = 0;
      }
    }
    else
    {
      v6 = v7;
    }
  }
  v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.StateSaveArea);
  v50 = 0LL;
  PpmParkNodes = v15 & -(__int64)(v3 != 0);
  if ( !v3 )
    v50 = P;
  PpmParkNumNodes = v3 != 0 ? v6 : 0;
  PpmParkHistograms = (unsigned __int64)P & -(__int64)(v3 != 0);
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.StateSaveArea, v49);
  PpmParkFreeAllParkNodes(v57, v3);
  if ( v50 )
    ExFreePoolWithTag(v50, 0x704D5050u);
  if ( v60 )
    ExFreePoolWithTag(v60, 0x704D5050u);
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
