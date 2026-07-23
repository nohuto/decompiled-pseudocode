/*
 * XREFs of RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403488A0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x140348E44 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x140348F00 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1403497A0 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140349DA0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14034B2B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x14034B470 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14034B5AC (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x14034B7A0 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x14034B930 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x14034BD8C (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x14034BE98 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpReleaseLockShared @ 0x14034DEC0 (RtlpHpReleaseLockShared.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14034EE40 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x14034F64C (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140513284 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140519218 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1405194B4 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x140529D0C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140532FB0 (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhContextLockExtension @ 0x14053398C (RtlpHpLfhContextLockExtension.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlHeapZero @ 0x140736E90 (RtlHeapZero.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSlotAllocateSlow(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r14
  _QWORD *v5; // r13
  unsigned __int64 v6; // r12
  unsigned __int8 *v7; // r14
  unsigned __int64 v8; // r9
  signed int v9; // edi
  unsigned int v10; // r8d
  _QWORD *ExSaPageArray; // rbx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r10
  unsigned __int64 CurrentThread; // r9
  __int64 v19; // r11
  unsigned int v20; // edx
  signed __int32 v21; // r8d
  __int64 v22; // rdx
  unsigned int v23; // ecx
  bool v24; // zf
  signed __int32 v25; // eax
  _WORD *v26; // rax
  __int64 v27; // rax
  char v28; // dl
  _WORD *v29; // r8
  __int64 v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  _DWORD *v37; // rax
  _DWORD *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  int v42; // esi
  volatile LONG *v43; // rcx
  struct _KTHREAD *v44; // rax
  AutoBoost *v45; // rax
  void *v46; // rdx
  AutoBoost *v47; // rdi
  signed __int64 v48; // rbx
  int v49; // edx
  signed __int64 v50; // rax
  unsigned __int64 v51; // rbx
  _QWORD *v52; // r8
  _QWORD *v53; // rdi
  unsigned __int64 *v54; // rax
  int v55; // edx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  unsigned __int64 *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 **v62; // rcx
  unsigned __int64 *v63; // rax
  _QWORD *v64; // rcx
  unsigned __int64 *v65; // rax
  _QWORD *v66; // rdi
  unsigned __int64 v67; // rbx
  __int64 v68; // rdx
  unsigned __int64 v69; // rax
  _BYTE *v70; // r9
  unsigned __int64 v71; // rax
  __int64 v72; // r10
  unsigned __int64 v73; // r8
  signed __int64 v74; // rax
  __int64 v75; // rcx
  _QWORD *v76; // rax
  unsigned __int64 *v77; // rax
  __int64 v78; // rax
  _BYTE *v79; // r8
  __int64 v80; // r9
  unsigned __int64 v81; // rcx
  __int16 v82; // ax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  unsigned __int64 v85; // rax
  __int64 v86; // r8
  unsigned __int64 *v87; // rcx
  unsigned __int64 v88; // rdx
  unsigned __int64 **v89; // rax
  _BYTE *v90; // r9
  __int64 v91; // r11
  _BYTE *v92; // r10
  unsigned __int64 v93; // rdx
  __int16 v94; // ax
  unsigned __int64 v95; // rdx
  unsigned __int64 **v96; // rax
  unsigned __int64 **v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 *v99; // rax
  int v100; // edx
  struct _KTHREAD *v101; // rcx
  __int64 v102; // r8
  struct _KLOCK_ENTRIES *v103; // r9
  int v104; // esi
  _QWORD *v105; // rdi
  char v106; // r14
  _QWORD *Subsegment; // rbx
  __int64 v108; // rdi
  _BYTE *v109; // r8
  __int64 v110; // r9
  unsigned __int64 v111; // rcx
  __int16 v112; // ax
  __int64 v113; // r8
  struct _KLOCK_ENTRIES *v114; // r9
  __int64 v115; // rcx
  _QWORD *v116; // rax
  unsigned __int16 v117; // cx
  unsigned int v118; // eax
  __int64 v119; // rdx
  int v120; // eax
  unsigned __int64 v121; // rax
  unsigned __int64 *v122; // rax
  unsigned __int16 v123; // ax
  unsigned __int16 v124; // di
  __int64 v125; // rdx
  struct _KTHREAD *v126; // rcx
  unsigned __int64 v127; // rsi
  __int64 v128; // rax
  int v129; // edx
  volatile signed __int16 *v130; // r9
  unsigned int v131; // ecx
  int v132; // ecx
  _QWORD *v133; // r11
  __int64 v134; // rax
  int v135; // edx
  volatile signed __int16 *v136; // r8
  unsigned int v137; // ecx
  int v138; // ecx
  int v139; // edx
  struct _KTHREAD *v140; // rcx
  int v141; // eax
  struct _KTHREAD *v142; // r9
  unsigned int v143; // r10d
  int v144; // r11d
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v146; // rdx
  char *v147; // r8
  unsigned __int64 v148; // rdx
  __int16 v149; // di
  _QWORD *v150; // r8
  unsigned __int64 i; // rcx
  struct _KTHREAD *v155; // r8
  int v156; // edi
  int v157; // r12d
  struct _LIST_ENTRY *v158; // rcx
  unsigned __int64 v159; // rdx
  char *v160; // r9
  unsigned __int64 v161; // rdx
  int v162; // r11d
  unsigned __int8 v163; // r13
  unsigned int v164; // esi
  __int64 v165; // rdi
  _QWORD *v166; // rdx
  unsigned __int64 v173; // rax
  unsigned int v174; // eax
  signed __int64 v176; // rax
  int v177; // eax
  unsigned __int64 v178; // rsi
  __int64 v179; // rdi
  bool v180; // cc
  unsigned __int64 v181; // rdi
  signed __int64 v182; // rax
  char v183; // dl
  unsigned __int64 v184; // rdx
  signed __int64 v185; // rtt
  _QWORD *v187; // r9
  signed __int64 v188; // rax
  __int64 v189; // r10
  signed __int64 v190; // rax
  signed __int64 v191; // rtt
  signed __int64 v192; // rdx
  int v193; // edx
  struct _KTHREAD *v194; // rcx
  unsigned __int64 v196; // [rsp+30h] [rbp-D0h] BYREF
  int v197; // [rsp+38h] [rbp-C8h]
  int v198; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v199; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v200; // [rsp+48h] [rbp-B8h]
  __int64 v201; // [rsp+50h] [rbp-B0h]
  _QWORD *v202; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 *v203; // [rsp+60h] [rbp-A0h]
  int v204; // [rsp+68h] [rbp-98h]
  _QWORD *v205; // [rsp+70h] [rbp-90h]
  unsigned __int64 v206; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v207; // [rsp+80h] [rbp-80h]
  _QWORD *v208; // [rsp+88h] [rbp-78h]
  _QWORD *v209; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v210; // [rsp+98h] [rbp-68h]
  __int64 v211; // [rsp+A0h] [rbp-60h]
  __int64 v212; // [rsp+A8h] [rbp-58h]
  __int64 v213; // [rsp+B0h] [rbp-50h]
  __int64 v214; // [rsp+B8h] [rbp-48h]
  __int64 v215; // [rsp+C0h] [rbp-40h]
  __int64 v216; // [rsp+C8h] [rbp-38h]
  __int128 v217; // [rsp+D0h] [rbp-30h]
  __int64 v218[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v219[10]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+148h] [rbp+48h]
  signed __int64 v222; // [rsp+150h] [rbp+50h]
  unsigned __int16 v223; // [rsp+152h] [rbp+52h]
  unsigned __int8 v224; // [rsp+158h] [rbp+58h]

  v4 = *(unsigned __int16 *)(a2 + 2);
  v202 = &v202;
  v5 = (_QWORD *)a1;
  v203 = (unsigned __int64 *)&v202;
  v6 = 0LL;
  v7 = (unsigned __int8 *)(a1 + (v4 << 6));
  v8 = *(unsigned int *)(a1 + 84);
  v9 = 1;
  v10 = *(_DWORD *)(a1 + 84);
  v204 = 0;
  ExSaPageArray = KeGetCurrentPrcb()->ExSaPageArray;
  v12 = (v10 >> 13) & 0x3FFFF;
  _BitScanReverse(&v13, v12);
  v14 = a2;
  v201 = (__int64)v7;
  v15 = *(_QWORD *)(*(_QWORD *)(ExSaPageArray[v13 - 2] + 8 * (v12 ^ (unsigned int)(1 << v13)) + 8)
                  + 8 * ((v8 >> 4) & 0x1FF));
  if ( !v15 )
    v15 = RtlpHpLfhThreadDataInitializeSet(v5);
  v16 = (unsigned __int64)&v5[8 * (unsigned __int64)WORD1(v15)];
  v208 = (_QWORD *)v16;
  v17 = v16 + 250;
  if ( *(_BYTE *)(v16 + 250) )
    NT_ASSERT("HeatMap->OnFreeList == 0");
  CurrentThread = 0xFFFFF78000000008uLL;
  v19 = *v7 >> 1;
  if ( (unsigned int)v19 < 0x7D )
  {
    v21 = *(_DWORD *)(v16 + 252);
    v22 = MEMORY[0xFFFFF78000000008] >> 20;
    v23 = (MEMORY[0xFFFFF78000000008] >> 20) - v21;
    if ( v23 )
    {
      while ( 1 )
      {
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 252), v22, v21);
        v24 = v21 == v25;
        v21 = v25;
        if ( v24 )
          break;
        LODWORD(v22) = MEMORY[0xFFFFF78000000008] >> 20;
        v23 = v22 - v25;
        if ( (_DWORD)v22 == v25 )
          goto LABEL_23;
      }
      if ( v23 )
      {
        if ( v23 <= 0x1E )
        {
          v27 = 3LL;
          CurrentThread = 1LL;
          v28 = v23;
          while ( 1 )
          {
            if ( (v23 & 1) != 0 )
              CurrentThread *= v27;
            LOBYTE(v23) = (unsigned __int8)v23 >> 1;
            if ( !(_BYTE)v23 )
              break;
            v27 *= v27;
          }
          v29 = &v5[8 * (unsigned __int64)WORD1(v15)];
          if ( v16 < v17 )
          {
            do
            {
              *v29 = (CurrentThread * (unsigned __int16)*v29) >> (2 * v28);
              ++v29;
            }
            while ( (unsigned __int64)v29 < v17 );
          }
        }
        else
        {
          v26 = &v5[8 * (unsigned __int64)WORD1(v15)];
          if ( v16 < v17 )
          {
            do
              *v26++ = 0;
            while ( (unsigned __int64)v26 < v17 );
          }
        }
      }
    }
LABEL_23:
    v20 = *(unsigned __int16 *)(v16 + 2 * v19);
  }
  else
  {
    v20 = 0;
  }
  v30 = 2LL;
  v31 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v31 )
  {
    if ( v31 == 2 )
    {
      v9 = 2;
      v198 = 2;
    }
    else
    {
      if ( v31 != 1 )
      {
        CurrentThread = (unsigned __int64)KeGetCurrentThread();
        v32 = *(_QWORD *)(CurrentThread + 1888);
        v33 = *(_QWORD *)(CurrentThread + 1896);
        v34 = v33 + v32;
        v35 = v32 ^ v33;
        v36 = v35 ^ __ROL8__(v32, 24) ^ (v35 << 16);
        v30 = __ROL8__(v35, 37);
        *(_QWORD *)(CurrentThread + 1888) = v36;
        *(_QWORD *)(CurrentThread + 1896) = v30;
        v9 = BYTE4(v34) % 3u;
      }
      v198 = v9;
    }
  }
  else if ( (RtlpHpLfhPerfFlags & 1) == 0 || *((_BYTE *)v5 + 82) == 1 || v20 < *((unsigned __int16 *)v7 + 38) )
  {
    v198 = 0;
    v9 = 0;
  }
  else
  {
    if ( v20 >= *((unsigned __int16 *)v7 + 39) )
      v9 = ((v5[10] & 1) != 0) + 1;
    v198 = v9;
  }
  v205 = v5 + 24;
  if ( (_QWORD *)v16 == v5 + 24 && v9 >= 1 )
  {
    if ( (v5[10] & 1) != 0 )
    {
      v37 = (_DWORD *)RtlpHpLfhContextMetadataAllocate(v5, 1LL, v30);
      v38 = v37;
      if ( v37 )
      {
        memset_0(v37, 0, 0x100uLL);
        v38[63] = MEMORY[0xFFFFF78000000008] >> 20;
        if ( (int)RtlpHpEnvTlsSetValue(*((_DWORD *)v5 + 21)) < 0 )
        {
          v16 = (unsigned __int64)(v5 + 24);
          v208 = v5 + 24;
          v40 = (unsigned __int8)RtlpHpLfhContextLockExtension(v5, v39);
          if ( v38 == (_DWORD *)(v5 + 24) )
            NT_ASSERT("HeatMap != &LfhContext->HeatMap");
          if ( *((_BYTE *)v38 + 250) )
            NT_ASSERT("HeatMap->OnFreeList == 0");
          *((_BYTE *)v38 + 250) = 1;
          *(_QWORD *)v38 = v5[18];
          v5[18] = v38;
          RtlpHpLfhContextUnlockExtension(v5, v40);
          goto LABEL_51;
        }
        v16 = (unsigned __int64)v38;
      }
      else
      {
        v16 = (unsigned __int64)(v5 + 24);
      }
    }
    else
    {
      v16 = (unsigned __int64)(v5 + 24);
    }
    v208 = (_QWORD *)v16;
LABEL_51:
    v198 = 1;
    goto LABEL_52;
  }
  if ( v9 == 2 )
  {
    if ( *(_WORD *)(v14 + 4) )
      goto LABEL_56;
    v41 = RtlpHpLfhPrivateSlotCreate(v5, v15, v7, CurrentThread);
    if ( !v41 )
    {
      v198 = 1;
LABEL_55:
      if ( *(_WORD *)(v14 + 4) )
      {
LABEL_56:
        v205 = (_QWORD *)v16;
        v42 = 0;
        v224 = 0;
        v197 = 0;
        goto LABEL_70;
      }
      goto LABEL_61;
    }
LABEL_54:
    v14 = v41;
    goto LABEL_55;
  }
LABEL_52:
  if ( *(_WORD *)(v14 + 4) )
  {
    v41 = RtlpHpLfhPrivateSlotShutdown((__int64)v5, v14, v15, 0);
    goto LABEL_54;
  }
LABEL_61:
  v43 = (volatile LONG *)(v14 + 16);
  v42 = 2;
  v197 = 2;
  if ( *((_BYTE *)v5 + 73) )
  {
    v224 = ExAcquireSpinLockExclusive(v43);
  }
  else
  {
    v44 = KeGetCurrentThread();
    --v44->SpecialApcDisable;
    v45 = (AutoBoost *)KeAbPreAcquire((__int64)v43, 0LL, 0LL, (struct _KLOCK_ENTRIES *)CurrentThread);
    v47 = v45;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 16), v45, v14 + 16);
    if ( v47 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        AutoBoost::KiAbpPostAcquire(v47, v46);
        v224 = -1;
        goto LABEL_70;
      }
      *((_BYTE *)v47 + 10) = 1;
    }
    v224 = -1;
  }
  while ( 1 )
  {
    do
    {
LABEL_70:
      if ( !*(_WORD *)(v14 + 4) )
      {
        _m_prefetchw((const void *)(v14 + 56));
        v48 = *(_QWORD *)(v14 + 56);
        if ( (v48 & 0xFFF) != 0 )
        {
          v49 = v204;
          while ( 1 )
          {
            v204 = v49;
            v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 56), v48 - 1, v48);
            if ( v48 == v50 )
              break;
            v48 = v50;
            v204 = 1;
            v49 = 1;
            if ( (v50 & 0xFFF) == 0 )
              goto LABEL_77;
          }
          v51 = v48 & 0xFFFFFFFFFFFFF000uLL;
          if ( v51 )
          {
            v204 = v49;
            goto LABEL_292;
          }
        }
      }
LABEL_77:
      v52 = *(_QWORD **)(v14 + 24);
      v210 = (unsigned __int64 *)&v209;
      v53 = (_QWORD *)(v14 + 24);
      v209 = &v209;
      v207 = &v206;
      v54 = &v206;
      v206 = (unsigned __int64)&v206;
      if ( v52 == (_QWORD *)(v14 + 24) )
      {
LABEL_96:
        v51 = 0LL;
      }
      else
      {
        do
        {
          v51 = (unsigned __int64)v52;
          v52 = (_QWORD *)*v52;
          v55 = *(unsigned __int16 *)(v51 + 18) + *(unsigned __int16 *)(v51 + 32);
          if ( v55 )
          {
            if ( v55 != *(unsigned __int16 *)(v51 + 34) )
            {
              RtlpHpLfhSubsegmentDelayFreeProcess((__int64)v5, v51, 0);
              v54 = (unsigned __int64 *)v206;
              goto LABEL_97;
            }
            v59 = *(_QWORD *)v51;
            v60 = *(_QWORD **)(v51 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v51 + 8LL) != v51 || *v60 != v51 )
              __fastfail(3u);
            *v60 = v59;
            *(_QWORD *)(v59 + 8) = v60;
            v61 = v206;
            if ( *(unsigned __int64 **)(v206 + 8) != &v206 )
              __fastfail(3u);
            *(_QWORD *)v51 = v206;
            *(_QWORD *)(v51 + 8) = &v206;
            *(_QWORD *)(v61 + 8) = v51;
            v54 = (unsigned __int64 *)v51;
            v206 = v51;
          }
          else
          {
            v56 = *(_QWORD *)v51;
            v57 = *(_QWORD **)(v51 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v51 + 8LL) != v51 || *v57 != v51 )
              __fastfail(3u);
            *v57 = v56;
            *(_QWORD *)(v56 + 8) = v57;
            v58 = v210;
            if ( (_QWORD **)*v210 != &v209 )
              __fastfail(3u);
            *(_QWORD *)(v51 + 8) = v210;
            *(_QWORD *)v51 = &v209;
            *v58 = v51;
            v54 = (unsigned __int64 *)v206;
            v210 = (unsigned __int64 *)v51;
          }
        }
        while ( v52 != v53 );
        if ( v54 == &v206 )
          goto LABEL_96;
        v51 = (unsigned __int64)v54;
        RtlpHpLfhSubsegmentDelayFreeProcess((__int64)v5, (__int64)v54, 1);
        v54 = (unsigned __int64 *)v206;
      }
LABEL_97:
      if ( v54 != &v206 )
      {
        v62 = *(unsigned __int64 ***)(v14 + 32);
        *v62 = v54;
        v63 = v207;
        *(_QWORD *)(v14 + 32) = v207;
        *v63 = (unsigned __int64)v53;
        *(_QWORD *)(v206 + 8) = v62;
      }
      if ( v209 != &v209 )
      {
        v64 = *(_QWORD **)(v14 + 32);
        *v64 = v209;
        v65 = v210;
        *(_QWORD *)(v14 + 32) = v210;
        *v65 = (unsigned __int64)v53;
        v209[1] = v64;
      }
      if ( v51 )
      {
        v123 = *(_WORD *)(v51 + 32);
        v124 = 4096;
        if ( v123 > 0x1000u )
        {
          *(_WORD *)(v51 + 32) = v123 - 4096;
          goto LABEL_251;
        }
        *(_WORD *)(v51 + 32) = 0;
        v124 = v123;
        if ( v123 > 1u )
LABEL_251:
          *(_QWORD *)(v14 + 56) = (v124 - 1LL) ^ ((v124 - 1LL) ^ v51) & 0xFFFFFFFFFFFFF000uLL;
        if ( v42 )
        {
          if ( v197 == 2 )
          {
            RtlpHpReleaseLockExclusive((struct _KTHREAD *)(v14 + 16), *((unsigned __int8 *)v5 + 73), v224);
          }
          else if ( *((_BYTE *)v5 + 73) )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd((volatile signed __int32 *)(v14 + 16), 0xBFFFFFFF);
              _InterlockedDecrement((volatile signed __int32 *)(v14 + 16));
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(v14 + 16), retaddr);
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v224);
            __writecr8(v224);
          }
          else
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 16), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v14 + 16));
            KeAbPostRelease(v14 + 16);
            v126 = KeGetCurrentThread();
            v24 = v126->SpecialApcDisable++ == -1;
            if ( v24 && ($241382875694CED3D471BC5892DE3337 *)v126->ApcState.ApcListHead[0].Flink != &v126->152 )
              KiCheckForKernelApcDelivery((__int64)v126, v125);
          }
          v197 = 0;
        }
        v127 = (unsigned __int64)v205;
        if ( *((_BYTE *)v205 + 250) )
          NT_ASSERT("HeatMap->OnFreeList == 0");
        v128 = *v7 >> 1;
        if ( (unsigned int)v128 < 0x7D )
        {
          v129 = *((unsigned __int16 *)v205 + v128);
          v130 = (volatile signed __int16 *)v205 + v128;
          while ( 1 )
          {
            v131 = v124 + v129;
            if ( v131 >= 0xFFFF )
              v131 = 0xFFFF;
            if ( v131 == v129 )
              goto LABEL_280;
            if ( (_QWORD *)v127 != v5 + 24 )
              break;
            v132 = (unsigned __int16)_InterlockedCompareExchange16(v130, v131, v129);
            if ( v132 == v129 )
              goto LABEL_280;
            v129 = v132;
          }
          *v130 = v131;
        }
LABEL_280:
        v133 = v208;
        if ( v208 != (_QWORD *)v127 )
        {
          if ( *((_BYTE *)v208 + 250) )
            NT_ASSERT("HeatMap->OnFreeList == 0");
          v134 = *v7 >> 1;
          if ( (unsigned int)v134 < 0x7D )
          {
            v135 = *((unsigned __int16 *)v208 + v134);
            v136 = (volatile signed __int16 *)v208 + v134;
            while ( 1 )
            {
              v137 = v124 + v135;
              if ( v137 >= 0xFFFF )
                v137 = 0xFFFF;
              if ( v137 == v135 )
                goto LABEL_292;
              if ( v133 != v5 + 24 )
                break;
              v138 = (unsigned __int16)_InterlockedCompareExchange16(v136, v137, v135);
              if ( v138 == v135 )
                goto LABEL_292;
              v135 = v138;
            }
            *v136 = v137;
          }
        }
LABEL_292:
        if ( v197 )
        {
          v139 = *((unsigned __int8 *)v5 + 73);
          v140 = (struct _KTHREAD *)(v14 + 16);
          if ( v197 == 2 )
            RtlpHpReleaseLockExclusive(v140, v139, v224);
          else
            RtlpHpReleaseLockShared(v140, v139, v224);
          v197 = 0;
        }
        v141 = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(v51 + 40) ^ (v51 >> 12);
        if ( *(_WORD *)(v14 + 4) )
        {
          v142 = KeGetCurrentThread();
          v223 = (LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(v51 + 40) ^ (unsigned int)(v51 >> 12)) >> 16;
          v143 = *(unsigned __int8 *)(v51 + 24) - 8;
          v144 = (unsigned __int16)v141;
          Blink = v142[1].SchedulerApc.ApcListEntry.Blink;
          v146 = (unsigned __int64)v142[1].SchedulerApc.Reserved[0];
          v147 = (char *)Blink + v146;
          v148 = (unsigned __int64)Blink ^ v146;
          v149 = BYTE4(v147);
          v142[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v148, 37);
          v142[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v148 ^ __ROL8__(Blink, 24) ^ (v148 << 16));
          v150 = (_QWORD *)(v51 + 64 + 8LL * *(unsigned __int8 *)(v51 + 36));
          for ( i = ~*v150; *v150 == -1LL; i = ~*v150 )
          {
            if ( v150 == (_QWORD *)(v51 + 64 + 8 * (v143 - 1LL)) )
              v150 = (_QWORD *)(v51 + 64);
            else
              ++v150;
          }
          _RAX = 1LL << ((unsigned __int16)(v149 * __popcnt(i)) >> 8);
          __asm { pdep    rcx, rax, rcx }
          *v150 |= _RCX;
          __asm { tzcnt   rcx, rcx }
          LODWORD(_RAX) = 8 * ((_DWORD)v150 - (v51 + 64)) + _RCX;
          *(_BYTE *)(v51 + 36) = (unsigned int)_RAX >> 6;
          v6 = v51 + v144 * (_DWORD)_RAX + (unsigned int)v223;
          if ( (a4 & 2) != 0 )
            RtlHeapZero(v6, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          goto LABEL_347;
        }
        v155 = KeGetCurrentThread();
        v156 = *(unsigned __int8 *)(v51 + 24);
        LODWORD(v196) = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(v51 + 40) ^ (v51 >> 12);
        v157 = (unsigned __int16)v141;
        v158 = v155[1].SchedulerApc.ApcListEntry.Blink;
        v159 = (unsigned __int64)v155[1].SchedulerApc.Reserved[0];
        v160 = (char *)v158 + v159;
        v161 = (unsigned __int64)v158 ^ v159;
        v162 = BYTE4(v160);
        v155[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v161, 37);
        v155[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v161 ^ __ROL8__(v158, 24) ^ (v161 << 16));
        v163 = *(_BYTE *)(v51 + 39);
        v164 = *(unsigned __int8 *)(v51 + 50);
        v165 = v51 + 64 + 8 * ((unsigned int)(v156 - 8) - 1LL);
        v166 = (_QWORD *)(v51 + 64 + 8LL * *(unsigned __int8 *)(v51 + 36));
LABEL_306:
        for ( _R8 = ~*v166; *v166 == -1LL; _R8 = ~*v166 )
        {
          if ( v166 == (_QWORD *)v165 )
            v166 = (_QWORD *)(v51 + 64);
          else
            ++v166;
        }
        while ( 1 )
        {
          if ( (PspTlsContext.WaitBlockFill5[32] & 4) != 0 )
          {
            _RAX = 1LL << ((unsigned __int16)(v162 * __popcnt(_R8)) >> 8);
            __asm
            {
              pdep    r9, rax, r8
              tzcnt   r10, r9
            }
          }
          else
          {
            if ( v166 == (_QWORD *)v165 || v164 != 64 )
            {
              __asm { tzcnt   rcx, r8 }
              _BitScanReverse64(&v173, _R8);
              v174 = v173 - _RCX + 1;
              if ( v164 < v174 )
                v174 = v164;
              v162 = _RCX + ((v174 * v162) >> 8);
              _R8 = __ROR8__(_R8, v162);
              __asm { tzcnt   r10, r8 }
              LODWORD(_R10) = v162 + _R10;
            }
            else
            {
              _R8 = __ROR8__(_R8, v162);
              __asm { tzcnt   r10, r8 }
              LODWORD(_R10) = ((_BYTE)v162 + (_BYTE)_R10) & 0x3F;
            }
            _R9 = 1LL << _R10;
          }
          _m_prefetchw(v166);
          v176 = _InterlockedOr64(v166, _R9);
          if ( (_R9 & v176) == 0 )
            break;
          _R8 = ~v176;
          if ( v176 == -1 )
          {
            if ( v166 == (_QWORD *)v165 )
              v166 = (_QWORD *)(v51 + 64);
            else
              ++v166;
            goto LABEL_306;
          }
        }
        v177 = WORD1(v196);
        v178 = (unsigned int)(_R10 + 8 * ((_DWORD)v166 - (v51 + 64)));
        *(_BYTE *)(v51 + 36) = v178 >> 6;
        v179 = (unsigned int)(v177 + v178 * v157);
        v180 = v163 <= 1u;
        v5 = (_QWORD *)a1;
        if ( v180 )
        {
          if ( (unsigned int)v178 > *(unsigned __int16 *)(v51 + 48) )
            RtlpHpLfhSubsegmentPrefetch(a1, v51, v179, v157);
        }
        else if ( (int)RtlpHpLfhSubsegmentCommitBlock((_QWORD *)a1, v51, v179) < 0 )
        {
          v6 = 0LL;
          v181 = 0LL;
          if ( (_DWORD)v178 != -1 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v51 + 8 * (v178 >> 6) + 64), __ROL8__(-2LL, v178 & 0x3F));
            goto LABEL_334;
          }
LABEL_333:
          v6 = v181;
          if ( v181 )
          {
LABEL_347:
            v108 = v201;
            goto LABEL_348;
          }
LABEL_334:
          v182 = *(_QWORD *)(v51 + 16);
          do
          {
            v222 = v182;
            v183 = BYTE6(v182);
            v205 = (_QWORD *)v182;
            if ( BYTE6(v182) == 1 )
              v183 = 2;
            WORD1(v222) = WORD1(v182) + 1;
            BYTE6(v222) = v183;
            v184 = (unsigned __int64)*(unsigned __int16 *)(v51 + 44) << 6;
            v185 = v182;
            v182 = _InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 16), v222, v182);
          }
          while ( v185 != v182 );
          if ( !*((_BYTE *)v5 + v184 + 92) )
          {
            *((_BYTE *)v5 + v184 + 92) = 1;
            if ( !(BYTE1(**(_QWORD **)(*v5 + 56LL)) == 1
                 ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
                 : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
              RtlpHpEnvCompactionSchedule(*(_QWORD **)(*v5 + 56LL));
          }
          if ( BYTE6(v205) == 1 )
          {
            v187 = &v5[8 * (unsigned __int64)WORD2(v205)];
            _m_prefetchw(v187 + 1);
            v188 = v187[1];
            v189 = *(_QWORD *)(v51 + 24);
            *(_QWORD *)(v51 + 24) = v189 & 0xFFF | (v188 - (v188 & 0xFFF));
            v191 = v188;
            v190 = _InterlockedCompareExchange64(v187 + 1, v188 & 0xFFF | v51, v188);
            if ( v191 != v190 )
            {
              do
              {
                v192 = v190;
                *(_QWORD *)(v51 + 24) = v189 ^ (v189 ^ v190) & 0xFFFFFFFFFFFFF000uLL;
                v190 = _InterlockedCompareExchange64(v187 + 1, v51 | v190 & 0xFFF, v190);
              }
              while ( v190 != v192 );
            }
          }
          goto LABEL_347;
        }
        v181 = v51 + v179;
        if ( (a4 & 2) != 0 )
          RtlHeapZero(v181, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        goto LABEL_333;
      }
      v66 = *(_QWORD **)(v14 + 24);
      if ( v66 == (_QWORD *)(v14 + 24) )
        goto LABEL_153;
      do
      {
        v67 = (unsigned __int64)v66;
        v66 = (_QWORD *)*v66;
        if ( *(unsigned __int16 *)(v67 + 18) + *(unsigned __int16 *)(v67 + 32) )
          goto LABEL_359;
        if ( (*(_BYTE *)v14 & 1) == 0 && (v67 ^ *(_QWORD *)(v14 + 56)) - 1 <= 0xFFE )
          continue;
        v211 = v14 + 24;
        v212 = v14 + 1;
        v68 = v14 + 40;
        v69 = *(_QWORD *)(v67 + 16);
        HIDWORD(v196) = HIDWORD(v69);
        v70 = 0LL;
        v213 = v14 + 40;
        v214 = 0LL;
        v215 = v14 + 40;
        v216 = 0LL;
        v217 = 0LL;
        v199 = v69;
        v71 = HIWORD(v69);
        LODWORD(v196) = 0;
        if ( (*(_BYTE *)v14 & 1) == 0 )
          v70 = (_BYTE *)*(&v212 + 2 * (unsigned __int8)v71);
        v72 = *(&v211 + 2 * (unsigned __int8)v71);
        if ( BYTE6(v196) == 3 )
        {
          v73 = (unsigned __int64)(v14 - (_QWORD)v5) >> 6;
          WORD2(v199) = v73;
        }
        else
        {
          LOWORD(v73) = WORD2(v199);
        }
        BYTE6(v199) = 1;
        v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(v67 + 16), v199, v196);
        v196 = v74;
        if ( (_DWORD)v74 )
        {
LABEL_359:
          if ( *(unsigned __int16 *)(v67 + 18) + *(unsigned __int16 *)(v67 + 32) == *(unsigned __int16 *)(v67 + 34)
            && *(_WORD *)(v67 + 18) )
          {
            v196 = 0LL;
            LODWORD(v196) = _InterlockedExchange((volatile __int32 *)(v67 + 16), 0);
            RtlpHpLfhSubsegmentDelayFreeListProcess(v5, v67, v196);
          }
          if ( *(_WORD *)(v67 + 32) == *(_WORD *)(v67 + 34) )
          {
            v211 = v14 + 24;
            v212 = v14 + 1;
            v214 = 0LL;
            v213 = v14 + 40;
            v79 = 0LL;
            v215 = v14 + 40;
            v196 = *(_QWORD *)(v67 + 16);
            v216 = 0LL;
            v217 = 0LL;
            v199 = v196;
            if ( (*(_BYTE *)v14 & 1) == 0 )
              v79 = (_BYTE *)*(&v212 + 2 * BYTE6(v196));
            v80 = *(&v211 + 2 * BYTE6(v196));
            LOWORD(v81) = 0;
            WORD2(v196) = 0;
            if ( BYTE6(v196) == 3 )
            {
              v81 = (unsigned __int64)(v14 - (_QWORD)v5) >> 6;
              WORD2(v196) = v81;
            }
            v82 = *(_WORD *)(v67 + 34);
            BYTE6(v196) = 3;
            if ( *(_WORD *)(v67 + 32) == v82 )
              *(_QWORD *)(v67 + 16) = v196;
            else
              HIDWORD(v199) = _InterlockedExchange((volatile __int32 *)(v67 + 20), SHIDWORD(v196));
            if ( WORD2(v199) != (_WORD)v81 )
            {
              if ( (_WORD)v81 )
              {
                if ( (*(_BYTE *)v14 & 1) == 0 )
                  *(_WORD *)(v67 + 46) = *(_WORD *)(v14 + 4);
              }
              else
              {
                *(_WORD *)(v67 + 46) = 0;
              }
            }
            if ( v80 )
            {
              v83 = *(_QWORD *)v67;
              v84 = *(_QWORD **)(v67 + 8);
              if ( *(_QWORD *)(*(_QWORD *)v67 + 8LL) != v67 || *v84 != v67 )
                goto LABEL_247;
              *v84 = v83;
              *(_QWORD *)(v83 + 8) = v84;
              if ( v79 )
                --*v79;
            }
            v85 = (unsigned __int64)v202;
            if ( (_QWORD **)v202[1] != &v202 )
              goto LABEL_247;
            *(_QWORD *)v67 = v202;
            *(_QWORD *)(v67 + 8) = &v202;
            *(_QWORD *)(v85 + 8) = v67;
            v202 = (_QWORD *)v67;
          }
        }
        else
        {
          if ( WORD2(v74) != (_WORD)v73 )
          {
            if ( (_WORD)v73 )
            {
              if ( (*(_BYTE *)v14 & 1) == 0 )
                *(_WORD *)(v67 + 46) = *(_WORD *)(v14 + 4);
            }
            else
            {
              *(_WORD *)(v67 + 46) = 0;
            }
          }
          if ( v72 )
          {
            v75 = *(_QWORD *)v67;
            v76 = *(_QWORD **)(v67 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v67 + 8LL) != v67 || *v76 != v67 )
              goto LABEL_247;
            *v76 = v75;
            *(_QWORD *)(v75 + 8) = v76;
            if ( v70 )
              --*v70;
          }
          if ( v14 != -40 )
          {
            if ( *(_WORD *)(v67 + 32) == *(_WORD *)(v67 + 34) )
            {
              v77 = *(unsigned __int64 **)(v14 + 48);
              if ( *v77 != v68 )
                goto LABEL_247;
              *(_QWORD *)v67 = v68;
              *(_QWORD *)(v67 + 8) = v77;
              *v77 = v67;
              *(_QWORD *)(v14 + 48) = v67;
            }
            else
            {
              v78 = *(_QWORD *)v68;
              if ( *(_QWORD *)(*(_QWORD *)v68 + 8LL) != v68 )
                goto LABEL_247;
              *(_QWORD *)v67 = v78;
              *(_QWORD *)(v67 + 8) = v68;
              *(_QWORD *)(v78 + 8) = v67;
              *(_QWORD *)v68 = v67;
            }
          }
        }
      }
      while ( v66 != (_QWORD *)(v14 + 24) );
      v7 = (unsigned __int8 *)v201;
LABEL_153:
      RtlpHpLfhOwnerFreeListProcess((__int64)v5, v14, (unsigned __int64 *)&v202, 0);
      v86 = v14 + 24;
      while ( 2 )
      {
        if ( v202 == &v202 )
          goto LABEL_186;
        v87 = v203;
        v88 = *v203;
        v89 = (unsigned __int64 **)v203[1];
        if ( *(unsigned __int64 **)(*v203 + 8) != v203 || *v89 != v203 )
          goto LABEL_247;
        *v89 = (unsigned __int64 *)v88;
        v90 = (_BYTE *)(v14 + 1);
        *(_QWORD *)(v88 + 8) = v89;
        v211 = v14 + 24;
        v213 = v14 + 40;
        v215 = v14 + 40;
        v199 = v87[2];
        v196 = v199;
        v212 = v14 + 1;
        v214 = 0LL;
        v24 = (*(_BYTE *)v14 & 1) == 0;
        v216 = 0LL;
        v217 = 0LL;
        v91 = *(&v211 + 2 * BYTE6(v199));
        v92 = (_BYTE *)*(&v212 + 2 * BYTE6(v199));
        if ( !v24 )
        {
          v92 = 0LL;
          v90 = 0LL;
LABEL_160:
          if ( BYTE6(v199) == 3 )
          {
            v93 = (unsigned __int64)(v14 - (_QWORD)v5) >> 6;
            WORD2(v196) = v93;
          }
          else
          {
            LOWORD(v93) = WORD2(v196);
          }
          v94 = *((_WORD *)v87 + 17);
          BYTE6(v196) = 0;
          if ( *((_WORD *)v87 + 16) == v94 )
            v87[2] = v196;
          else
            HIDWORD(v199) = _InterlockedExchange((volatile __int32 *)v87 + 5, SHIDWORD(v196));
          if ( WORD2(v199) != (_WORD)v93 )
          {
            if ( (_WORD)v93 )
            {
              if ( (*(_BYTE *)v14 & 1) == 0 )
                *((_WORD *)v87 + 23) = *(_WORD *)(v14 + 4);
            }
            else
            {
              *((_WORD *)v87 + 23) = 0;
            }
          }
          if ( v91 )
          {
            v95 = *v87;
            v96 = (unsigned __int64 **)v87[1];
            if ( *(unsigned __int64 **)(*v87 + 8) != v87 || *v96 != v87 )
              goto LABEL_247;
            *v96 = (unsigned __int64 *)v95;
            *(_QWORD *)(v95 + 8) = v96;
            if ( v92 )
              --*v92;
          }
          if ( v14 != -24 )
          {
            if ( *((_WORD *)v87 + 16) == *((_WORD *)v87 + 17) )
            {
              v97 = *(unsigned __int64 ***)(v14 + 32);
              if ( *v97 != (unsigned __int64 *)v86 )
                goto LABEL_247;
              *v87 = v86;
              v87[1] = (unsigned __int64)v97;
              *v97 = v87;
              *(_QWORD *)(v14 + 32) = v87;
            }
            else
            {
              v98 = *(_QWORD *)v86;
              if ( *(_QWORD *)(*(_QWORD *)v86 + 8LL) != v86 )
                goto LABEL_247;
              *v87 = v98;
              v87[1] = v86;
              *(_QWORD *)(v98 + 8) = v87;
              *(_QWORD *)v86 = v87;
            }
            if ( v90 )
              ++*v90;
          }
          continue;
        }
        break;
      }
      if ( *v90 < 8u )
        goto LABEL_160;
      v99 = v203;
      if ( (_QWORD **)*v203 != &v202 )
        goto LABEL_247;
      v87[1] = (unsigned __int64)v203;
      *v87 = (unsigned __int64)&v202;
      *v99 = (unsigned __int64)v87;
      v203 = v87;
LABEL_186:
      v42 = v197;
    }
    while ( *(_BYTE *)(v14 + 1) );
    if ( v197 )
    {
      v100 = *((unsigned __int8 *)v5 + 73);
      v101 = (struct _KTHREAD *)(v14 + 16);
      if ( v197 == 2 )
        RtlpHpReleaseLockExclusive(v101, v100, v224);
      else
        RtlpHpReleaseLockShared(v101, v100, v224);
      v197 = 0;
    }
    RtlpHpLfhContextSlotStandbyProcess((__int64)v5, 0LL);
    if ( v205 == v208 )
    {
      v104 = v198;
    }
    else
    {
      v104 = RtlpHpLfhHeatMapQuery((__int64)v5, (unsigned __int64)v205, v7);
      if ( v104 >= 1 )
        v104 = 1;
    }
    v105 = v7 + 24;
    if ( (_QWORD *)*v105 == v105 && !*((_QWORD *)v7 + 1) )
    {
      v108 = v201;
      break;
    }
    v106 = RtlpHpAcquireLockExclusive((int *)v7 + 4, *((unsigned __int8 *)v5 + 73), v102, v103);
    Subsegment = RtlpHpLfhOwnerGetSubsegment((__int64)v5, v201);
    if ( Subsegment )
    {
LABEL_201:
      v108 = v201;
      v214 = 0LL;
      v109 = 0LL;
      v216 = 0LL;
      v217 = 0LL;
      v211 = v201 + 24;
      v212 = v201 + 1;
      v213 = v201 + 40;
      v215 = v201 + 40;
      v196 = Subsegment[2];
      v199 = v196;
      if ( (*(_BYTE *)v201 & 1) == 0 )
        v109 = (_BYTE *)*(&v212 + 2 * BYTE6(v196));
      v110 = *(&v211 + 2 * BYTE6(v196));
      LOWORD(v111) = 0;
      WORD2(v196) = 0;
      if ( BYTE6(v196) == 3 )
      {
        v111 = (unsigned __int64)(v201 - (_QWORD)v5) >> 6;
        WORD2(v196) = v111;
      }
      v112 = *((_WORD *)Subsegment + 17);
      BYTE6(v196) = 3;
      if ( *((_WORD *)Subsegment + 16) == v112 )
        Subsegment[2] = v196;
      else
        HIDWORD(v199) = _InterlockedExchange((volatile __int32 *)Subsegment + 5, SHIDWORD(v196));
      if ( WORD2(v199) != (_WORD)v111 )
      {
        if ( (_WORD)v111 )
        {
          if ( (*(_BYTE *)v108 & 1) == 0 )
            *((_WORD *)Subsegment + 23) = *(_WORD *)(v108 + 4);
        }
        else
        {
          *((_WORD *)Subsegment + 23) = 0;
        }
      }
      if ( v110 )
      {
        v115 = *Subsegment;
        v116 = (_QWORD *)Subsegment[1];
        if ( *(_QWORD **)(*Subsegment + 8LL) != Subsegment || (_QWORD *)*v116 != Subsegment )
LABEL_247:
          __fastfail(3u);
        *v116 = v115;
        *(_QWORD *)(v115 + 8) = v116;
        if ( v109 )
          --*v109;
      }
      RtlpHpReleaseLockExclusive((struct _KTHREAD *)(v108 + 16), *((unsigned __int8 *)v5 + 73), v106);
      if ( v104 != 2 && (v104 < 1 || *((_BYTE *)Subsegment + 39) <= 1u) )
        goto LABEL_208;
      LODWORD(v199) = 0;
      LODWORD(v196) = 0;
      if ( (unsigned int)RtlpHpLfhSubsegmentReformatCheck((__int64)v5, (unsigned __int64)Subsegment, &v199, &v196) )
      {
        if ( *((_BYTE *)Subsegment + 39) == 1 )
        {
LABEL_231:
          if ( v104 == 2 )
            *((_BYTE *)Subsegment + 51) |= 1u;
          goto LABEL_208;
        }
        if ( !(_DWORD)v199
          || (int)guard_dispatch_icall_no_overrides(
                    *v5,
                    (char *)Subsegment + (unsigned int)((_DWORD)v199 << 12 << *((_BYTE *)Subsegment + 38))) >= 0 )
        {
          if ( (_DWORD)v196 )
            RtlpHpLfhContextUpdateFreeCommitCount(
              v5,
              (__int64)Subsegment,
              ((-4096 * (int)v196) << *((_BYTE *)Subsegment + 38)) / 4096,
              (__int64)v114);
          v117 = *((_WORD *)Subsegment + 19);
          HIBYTE(v200) = 1;
          _BitScanForward(&v118, (unsigned int)(HIBYTE(v117) << 12 << v117) >> 12);
          LODWORD(v196) = 0;
          LOBYTE(v200) = v118;
          *((_WORD *)Subsegment + 19) = v200;
          LOWORD(Subsegment[*((unsigned __int8 *)Subsegment + 24)]) = 1;
          goto LABEL_231;
        }
      }
      if ( v104 != 2 )
        goto LABEL_208;
      v219[1] = Subsegment;
      *Subsegment = v219;
      v219[0] = Subsegment;
      Subsegment[1] = v219;
      RtlpHpLfhBucketAddSubsegment((__int64)v5, v108, v219, 0LL);
      break;
    }
    while ( 1 )
    {
      v218[1] = (__int64)v218;
      v218[0] = (__int64)v218;
      RtlpHpLfhOwnerRunMaintenance((__int64)v5, v201, v218, 0);
      if ( (_QWORD *)*v105 == v105 )
        break;
      Subsegment = RtlpHpLfhOwnerGetSubsegment((__int64)v5, v201);
      if ( Subsegment )
        goto LABEL_201;
    }
    v108 = v201;
    RtlpHpReleaseLockExclusive((struct _KTHREAD *)(v201 + 16), *((unsigned __int8 *)v5 + 73), v106);
LABEL_208:
    if ( !Subsegment )
      break;
LABEL_237:
    if ( *(_WORD *)(v14 + 4) )
    {
      v42 = v197;
    }
    else
    {
      v119 = *((unsigned __int8 *)v5 + 73);
      v42 = 2;
      v197 = 2;
      v224 = RtlpHpAcquireLockExclusive((int *)(v14 + 16), v119, v113, v114);
    }
    v120 = RtlpHpLfhOwnerMoveSubsegment((__int64)v5, (char *)v14, Subsegment, 0, 0);
    v7 = (unsigned __int8 *)v201;
    if ( !v120 )
    {
      if ( *((_WORD *)Subsegment + 16) == *((_WORD *)Subsegment + 17) )
      {
        v121 = (unsigned __int64)v202;
        if ( (_QWORD **)v202[1] != &v202 )
          goto LABEL_247;
        *Subsegment = v202;
        Subsegment[1] = &v202;
        *(_QWORD *)(v121 + 8) = Subsegment;
        v202 = Subsegment;
      }
      else
      {
        v122 = v203;
        if ( (_QWORD **)*v203 != &v202 )
          goto LABEL_247;
        Subsegment[1] = v203;
        *Subsegment = &v202;
        *v122 = (unsigned __int64)Subsegment;
        v203 = Subsegment;
      }
    }
  }
  Subsegment = (_QWORD *)RtlpHpLfhSubsegmentCreate((__int64)v5, v108);
  if ( Subsegment )
    goto LABEL_237;
LABEL_348:
  if ( v197 )
  {
    v193 = *((unsigned __int8 *)v5 + 73);
    v194 = (struct _KTHREAD *)(v14 + 16);
    if ( v197 == 2 )
      RtlpHpReleaseLockExclusive(v194, v193, v224);
    else
      RtlpHpReleaseLockShared(v194, v193, v224);
  }
  if ( v204 )
    RtlpHpLfhBucketUpdateAffinityMapping(v5, v108);
  if ( v202 != &v202 )
    RtlpHpLfhBucketAddSubsegment((__int64)v5, v108, &v202, 0LL);
  return v6;
}
