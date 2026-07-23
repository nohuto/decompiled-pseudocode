/*
 * XREFs of CmpWalkOneLevel @ 0x1408DBBE0
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408CC9F0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpRecordParseFailure @ 0x1408CCA90 (CmpRecordParseFailure.c)
 *     CmpDeleteKcbCache @ 0x1408CEA04 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408CEB28 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x1408DA640 (CmpDoCompareKeyName.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     CmpFindKcbInHashEntryByName @ 0x1409DF780 (CmpFindKcbInHashEntryByName.c)
 *     CmpLockHashEntryShared @ 0x1409E4A90 (CmpLockHashEntryShared.c)
 *     CmpUnlockHashEntry @ 0x140A4F550 (CmpUnlockHashEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        __int64 a4,
        bool *a5,
        unsigned __int16 *a6,
        char a7,
        ULONG_PTR a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v12; // r13
  struct _KLOCK_ENTRIES *v14; // r9
  __int16 v15; // di
  unsigned int v16; // edx
  ULONG_PTR v17; // r12
  __int16 v18; // di
  __int64 v19; // rsi
  __int64 v20; // r14
  ULONG_PTR v21; // r14
  unsigned __int64 *v22; // rsi
  AutoBoost *v23; // rax
  void *v24; // rdx
  AutoBoost *v25; // r13
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int16 v28; // cx
  __int16 k; // di
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int16 v33; // dx
  ULONG_PTR v34; // r15
  unsigned int v35; // edx
  ULONG_PTR v36; // rcx
  __int64 CellFlat; // rax
  __int64 v38; // rcx
  struct _KLOCK_ENTRIES *v39; // r9
  signed __int64 *v40; // rsi
  void *v41; // rdx
  LegacyAutoBoost *v42; // r14
  ULONG_PTR v43; // rcx
  __int64 CellPaged; // rax
  ULONG_PTR v45; // rcx
  __int64 v46; // rsi
  int v47; // edx
  __int64 v48; // rsi
  ULONG_PTR v49; // r13
  signed int v50; // r14d
  __int64 v51; // rax
  __int16 *v52; // rax
  __int16 *v53; // r12
  unsigned __int16 *v54; // r14
  int v55; // r8d
  unsigned __int16 v56; // ax
  unsigned __int16 m; // si
  bool v58; // zf
  __int16 i4; // di
  ULONG_PTR v60; // rcx
  __int16 i5; // r15
  __int64 v62; // rbx
  volatile signed __int32 *v63; // rbx
  __int64 *v64; // rdi
  signed __int64 v65; // rax
  signed __int64 v66; // rdx
  __int64 v67; // rtt
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  struct _KLOCK_ENTRIES *v71; // r9
  volatile signed __int32 *v72; // rdi
  __int64 v73; // rcx
  volatile signed __int32 **v74; // rax
  void *v75; // rcx
  void *v76; // rcx
  void *v77; // rcx
  void *v78; // rcx
  __int64 v80; // r9
  __int64 NextElement; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  bool IsEqual; // al
  int v85; // edx
  __int64 v86; // rsi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v88; // rcx
  int v89; // esi
  __int64 v90; // rax
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // rax
  unsigned int v94; // edx
  __int64 v95; // rax
  __int64 v96; // rcx
  const WCHAR *v97; // r8
  WCHAR *v98; // rax
  unsigned __int16 v99; // r13
  unsigned __int16 n; // r14
  LONG v101; // r15d
  WCHAR v102; // r12
  unsigned int v103; // r15d
  int v104; // eax
  __int64 v105; // rsi
  __int16 v106; // cx
  unsigned int *v107; // r13
  unsigned int v108; // edx
  unsigned int ii; // ecx
  unsigned __int16 *v110; // r8
  unsigned int v111; // r11d
  unsigned int v112; // r14d
  unsigned int v113; // r8d
  unsigned int v114; // r9d
  unsigned int v115; // r10d
  unsigned int v116; // eax
  int v117; // r10d
  unsigned __int64 v118; // r8
  struct _LIST_ENTRY *v119; // r10
  struct _LIST_ENTRY *v120; // r8
  unsigned int v121; // r9d
  int v122; // ecx
  int v123; // edx
  unsigned int v124; // r14d
  ULONG_PTR v125; // r15
  unsigned int v126; // edx
  __int64 v127; // rax
  const WCHAR *v128; // r8
  unsigned __int16 v129; // r13
  WCHAR *v130; // rax
  unsigned __int16 jj; // r12
  LONG v132; // r14d
  WCHAR v133; // r15
  unsigned int v134; // r14d
  unsigned int v135; // edx
  __int64 v136; // rax
  const WCHAR *v137; // r8
  unsigned __int16 v138; // r13
  WCHAR *v139; // rax
  unsigned __int16 kk; // r12
  LONG v141; // r14d
  __int16 v142; // cx
  unsigned int *v143; // rsi
  unsigned int v144; // edx
  unsigned int mm; // ecx
  WCHAR v146; // r15
  unsigned int v147; // r14d
  unsigned __int16 *v148; // r8
  unsigned int v149; // r15d
  unsigned int v150; // r12d
  __int64 v151; // r13
  unsigned int v152; // edx
  unsigned __int8 v153; // si
  int v154; // r14d
  int v155; // eax
  int v156; // r14d
  int v157; // ecx
  __int16 *v158; // r8
  __int16 v159; // cx
  int v160; // r9d
  unsigned int *v161; // rsi
  unsigned int v162; // edx
  unsigned int i1; // ecx
  unsigned __int16 *v164; // r14
  __int64 v165; // r13
  unsigned int v166; // r15d
  unsigned int v167; // r12d
  unsigned int v168; // edx
  unsigned __int8 v169; // si
  int v170; // r14d
  int v171; // eax
  int v172; // r14d
  __int64 v173; // rax
  int v174; // eax
  __int64 v175; // rax
  const WCHAR *v176; // r8
  unsigned __int16 v177; // r12
  WCHAR *v178; // r13
  unsigned __int16 nn; // si
  LONG v180; // r14d
  WCHAR v181; // r15
  unsigned int v182; // r14d
  __int64 v183; // rax
  const WCHAR *v184; // r8
  WCHAR *v185; // r13
  unsigned __int16 v186; // r12
  unsigned __int16 i3; // r15
  LONG v188; // esi
  __int16 *v189; // rsi
  __int64 v190; // rax
  const WCHAR *v191; // r8
  WCHAR *v192; // r13
  unsigned __int16 v193; // r12
  unsigned __int16 i2; // si
  LONG v195; // r14d
  WCHAR v196; // r15
  unsigned int v197; // r14d
  WCHAR v198; // r14
  unsigned int v199; // esi
  __int64 i; // rdx
  __int64 v201; // r8
  __int64 v202; // rdx
  volatile signed __int32 *v203; // rsi
  __int64 *v204; // r14
  signed __int64 v205; // rax
  signed __int64 v206; // rdx
  __int64 v207; // rtt
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  struct _KLOCK_ENTRIES *v211; // r9
  volatile signed __int32 *v212; // r14
  __int64 v213; // rax
  volatile signed __int32 **v214; // rcx
  void *v215; // rcx
  void *v216; // rcx
  void *v217; // rcx
  void *v218; // rcx
  __int64 v219; // rax
  unsigned __int16 *v220; // r9
  unsigned __int64 v221; // r10
  unsigned __int64 v222; // rdx
  struct _LIST_ENTRY *Flink; // r11
  unsigned int v224; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v225; // [rsp+54h] [rbp-ACh]
  __int16 v226; // [rsp+56h] [rbp-AAh]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-A8h]
  int v228; // [rsp+60h] [rbp-A0h]
  __int16 j; // [rsp+64h] [rbp-9Ch]
  __int16 *v230; // [rsp+68h] [rbp-98h]
  unsigned int v231[2]; // [rsp+70h] [rbp-90h] BYREF
  int v232; // [rsp+78h] [rbp-88h]
  WCHAR *v233; // [rsp+80h] [rbp-80h]
  __int64 v234; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR v235; // [rsp+90h] [rbp-70h]
  const WCHAR *v236; // [rsp+98h] [rbp-68h]
  __int64 v237; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v238[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v239[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v240[2]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v241[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v242[2]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v243[2]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v244; // [rsp+D8h] [rbp-28h]
  int v245; // [rsp+E8h] [rbp-18h]
  ULONG_PTR v246; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR *v247; // [rsp+F8h] [rbp-8h]
  ULONG_PTR v248; // [rsp+100h] [rbp+0h]

  v12 = a2;
  v234 = 0LL;
  v246 = 0LL;
  HvpGetCellContextInitialize(&v234);
  v15 = *(_WORD *)(a1 + 66);
  v17 = v16;
  v225 = -1;
  while ( 1 )
  {
    --v15;
    v235 = v17;
    if ( v15 < 0 )
      break;
    if ( v15 >= 2 )
      v86 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v15 - 16);
    else
      v86 = *(_QWORD *)(v12 + 8LL * v15 + 8);
    CmpLockHashEntryShared(*(_QWORD *)(v86 + 32), (unsigned int)a8);
    KcbInHashEntryByName = CmpFindKcbInHashEntryByName(*(_QWORD *)(v86 + 32), (unsigned int)a8, v86, a6);
    v235 = KcbInHashEntryByName;
    v17 = KcbInHashEntryByName;
    if ( KcbInHashEntryByName )
    {
      CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
      CmpUnlockHashEntry(*(PVOID *)(v86 + 32));
      goto LABEL_136;
    }
    CmpUnlockHashEntry(*(PVOID *)(v86 + 32));
  }
  if ( !v17 )
  {
    *(_WORD *)(a4 + 2) = -1;
    v18 = 0;
    v235 = 0LL;
    goto LABEL_5;
  }
LABEL_136:
  *(_WORD *)(a4 + 2) = *(_WORD *)(v17 + 66);
  v88 = *(__int16 *)(v17 + 66);
  if ( (_WORD)v88 )
  {
    for ( i = *(_QWORD *)(v17 + 192); i; LOWORD(v88) = v88 - 1 )
    {
      v201 = *(_QWORD *)(i + 16);
      v14 = (struct _KLOCK_ENTRIES *)(__int16)v88;
      if ( (__int16)v88 >= 2 )
        *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (__int16)v88 - 16) = v201;
      else
        *(_QWORD *)(a4 + 8LL * (__int16)v88 + 8) = v201;
      i = *(_QWORD *)(i + 24);
    }
  }
  else
  {
    *(_QWORD *)(a4 + 8 * v88 + 8) = v17;
  }
  v18 = *(_WORD *)(v17 + 66) + 1;
LABEL_5:
  v19 = a1;
  for ( j = v18; v18 <= *(__int16 *)(a1 + 66); ++v18 )
  {
    if ( v18 >= 2 )
      v20 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v18 - 16);
    else
      v20 = *(_QWORD *)(v12 + 8LL * v18 + 8);
    v21 = *(_QWORD *)(v20 + 32);
    v22 = (unsigned __int64 *)(*(_QWORD *)(v21 + 1648)
                             + 24LL
                             * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((101027
                                                                                           * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (*(_DWORD *)(v21 + 1656) - 1)));
    v23 = (AutoBoost *)KeAbPreAcquire((__int64)v22, 0LL, 0LL, v14);
    v25 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      ExfAcquirePushLockExclusiveEx(v22, v23, (__int64)v22);
    if ( v25 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v25, v24);
      else
        *((_BYTE *)v25 + 10) = 1;
    }
    v22[1] = (unsigned __int64)KeGetCurrentThread();
    _m_prefetchw((const void *)(v21 + 4240));
    v26 = *(_DWORD *)(v21 + 4240);
    do
    {
      if ( !v26 )
        KeBugCheckEx(0x51u, 0x17uLL, v21, 0xCuLL, (unsigned int)a8);
      v27 = v26;
      v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 4240), v26 + 1, v26);
    }
    while ( v27 != v26 );
    v19 = a1;
    v12 = a2;
    v225 = v18;
  }
  v28 = *(_WORD *)(v12 + 2);
  for ( k = 0; k <= v28; ++k )
  {
    if ( k >= 2 )
      v30 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * k - 16);
    else
      v30 = *(_QWORD *)(v12 + 8LL * k + 8);
    CmpLockKcbShared(v30);
    v28 = *(_WORD *)(v12 + 2);
  }
  v237 = 0LL;
  while ( 1 )
  {
    if ( v28 < 0 )
      goto LABEL_112;
    v31 = v28 >= 2 ? *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v28 - 16) : *(_QWORD *)(v12 + 8LL * v28 + 8);
    if ( *(_WORD *)(v31 + 66) && *(_BYTE *)(v31 + 65) == 1 )
      goto LABEL_112;
    if ( *(_DWORD *)(v31 + 40) != -1 )
      break;
    --v28;
  }
  if ( !a9 )
    goto LABEL_29;
  v80 = *(_QWORD *)(v12 + 8);
  do
  {
    NextElement = CmListGetNextElement(v80 + 208, &v237, 32LL);
    if ( !NextElement )
      goto LABEL_29;
  }
  while ( *(_DWORD *)(NextElement + 68) != 2 );
  if ( !CmEqualTrans(*(_QWORD *)(NextElement + 56), a9) )
  {
LABEL_29:
    v32 = *(_QWORD *)(v19 + 240);
    if ( v32 )
    {
      if ( !a9
        || a9 != v32
        && ((v83 = *(_QWORD *)(a9 + 56)) == 0 || (v219 = *(_QWORD *)(v32 + 56)) == 0
          ? (IsEqual = CmpTransUowIsEqual((const void *)(a9 + 88), (const void *)(v32 + 88)))
          : (IsEqual = v83 == v219),
            !IsEqual) )
      {
        v85 = 328448;
LABEL_121:
        v50 = -1073741772;
        CmpRecordParseFailure(a11, v85, -1073741772);
        goto LABEL_79;
      }
    }
    if ( (*(_DWORD *)(v19 + 184) & 0x20000) != 0 )
    {
      v85 = 328704;
      goto LABEL_121;
    }
    if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess((PRKAPC_STATE)(a11 + 168));
      *(_DWORD *)(a11 + 160) |= 1u;
    }
    if ( v17 )
      v33 = *(_WORD *)(v17 + 66) + 1;
    else
      v33 = 0;
LABEL_35:
    v226 = v33;
    if ( v33 > *(__int16 *)(v19 + 66) )
    {
      v58 = a10 == 0;
      if ( a10 )
      {
        --v225;
        v58 = a10 == 0;
      }
      v50 = 0;
      *a5 = !v58;
      *a3 = v17;
      v17 = 0LL;
      goto LABEL_79;
    }
    if ( v33 >= 2 )
      v34 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v33 - 16);
    else
      v34 = *(_QWORD *)(v12 + 8LL * v33 + 8);
    v35 = *(_DWORD *)(v34 + 40);
    v248 = v34;
    if ( v35 == -1 )
    {
      v89 = -1;
      goto LABEL_142;
    }
    v36 = *(_QWORD *)(v34 + 32);
    if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v36, v35, (unsigned int *)&v234);
    else
      CellFlat = HvpGetCellPaged(v36);
    v38 = *(_QWORD *)(v34 + 32);
    v237 = CellFlat;
    if ( (*(_DWORD *)(v38 + 160) & 0x8001) == 0
      && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v38, (__int64)&v234);
      else
        HvpReleaseCellPaged(v38, &v234);
      v40 = (signed __int64 *)(*(_QWORD *)(v34 + 32) + 72LL);
      v42 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v40, 0LL, 0LL, v39);
      if ( _InterlockedCompareExchange64(v40, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v40, 0, v42, (struct _KTHREAD *)v40);
      if ( v42 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v42, v41);
        else
          *((_BYTE *)v42 + 10) = 1;
      }
      v43 = *(_QWORD *)(v34 + 32);
      if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v43, *(_DWORD *)(v34 + 40), (unsigned int *)&v234);
      else
        CellPaged = HvpGetCellPaged(v43);
      v45 = *(_QWORD *)(v34 + 32);
      v46 = CellPaged;
      v47 = *(_DWORD *)(v34 + 40);
      v237 = CellPaged;
      if ( (*(_DWORD *)(v45 + 160) & 0x8001) == 0
        && (*(_BYTE *)(CellPaged + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
        && (int)HvpMarkCellDirty(v45, v47, 0) >= 0 )
      {
        *(_BYTE *)(v46 + 12) |= CmpAccessBitForPhase;
      }
      v48 = *(_QWORD *)(v34 + 32);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v48 + 72));
      KeAbPostRelease(v48 + 72);
    }
    v49 = *(_QWORD *)(v34 + 32);
    v50 = -1073741772;
    BugCheckParameter3 = v49;
    v231[1] = 0;
    v224 = 0;
    v51 = 0LL;
    v231[0] = -1;
    v232 = -1;
    while ( 1 )
    {
LABEL_58:
      v245 = v51;
      if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 216) )
        goto LABEL_341;
      if ( *(_DWORD *)(v237 + 4 * v51 + 20) )
      {
        if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
          v52 = (__int16 *)HvpGetCellFlat(v49, *(_DWORD *)(v237 + 4 * v51 + 28), v231);
        else
          v52 = (__int16 *)HvpGetCellPaged(v49);
        v230 = v52;
        v53 = v52;
        if ( !v52 )
        {
LABEL_340:
          v50 = -1073741670;
LABEL_341:
          v89 = v232;
          goto LABEL_151;
        }
        if ( *v52 != 26994 )
          goto LABEL_64;
        if ( (int)CmpFindSubKeyInRoot(v49, (__int64)v52, a6, 0LL, (int *)&v224) < 0 )
        {
          v89 = v232;
          v50 = -1073741670;
          goto LABEL_149;
        }
        if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v49, (__int64)v231);
        else
          HvpReleaseCellPaged(v49, v231);
        if ( v224 != -1 )
          break;
      }
LABEL_171:
      v51 = (unsigned int)(v245 + 1);
    }
    if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
      v173 = HvpGetCellFlat(v49, v224, v231);
    else
      v173 = HvpGetCellPaged(v49);
    v230 = (__int16 *)v173;
    v53 = (__int16 *)v173;
    if ( !v173 )
      goto LABEL_340;
LABEL_64:
    v228 = 0;
    if ( *v53 == 26732 )
    {
      v54 = a6;
      v55 = 0;
      v56 = _mm_cvtsi128_si32(*(__m128i *)a6);
      v244 = *(__m128i *)a6;
      if ( v56 >= 2u )
      {
        v220 = (unsigned __int16 *)v244.m128i_i64[1];
        v221 = (unsigned __int64)v56 >> 1;
        do
        {
          LODWORD(v222) = *v220;
          if ( (unsigned int)v222 >= 0x61 )
          {
            if ( (unsigned int)v222 > 0x7A )
            {
              Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
              if ( Flink && (unsigned __int16)v222 >= 0xC0u )
              {
                v55 = v228;
                LOWORD(v222) = *((_WORD *)&Flink->Flink
                               + (v222 & 0xF)
                               + *((unsigned __int16 *)&Flink->Flink
                                 + ((unsigned __int8)v222 >> 4)
                                 + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v222 >> 8))))
                             + v222;
              }
            }
            else
            {
              LOWORD(v222) = v222 - 32;
            }
          }
          ++v220;
          v55 = (unsigned __int16)v222 + 37 * v55;
          v228 = v55;
          --v221;
        }
        while ( v221 );
      }
      v224 = -1;
      for ( m = 0; ; ++m )
      {
        if ( m >= (unsigned __int16)v53[1] )
        {
          v50 = -1073741772;
          goto LABEL_167;
        }
        if ( v55 == *(_DWORD *)&v53[4 * m + 4] )
        {
          v58 = (*(_BYTE *)(v49 + 140) & 1) == 0;
          v94 = *(_DWORD *)&v53[4 * m + 2];
          v238[0] = -1;
          v238[1] = 0;
          if ( v58 )
            v95 = HvpGetCellPaged(v49);
          else
            v95 = HvpGetCellFlat(v49, v94, v238);
          v96 = v95;
          if ( !v95 )
          {
            v50 = -1073741670;
            goto LABEL_167;
          }
          v97 = (const WCHAR *)(v95 + 76);
          if ( (*(_BYTE *)(v95 + 2) & 0x20) != 0 )
          {
            v98 = (WCHAR *)*((_QWORD *)v54 + 1);
            v99 = *(_WORD *)(v96 + 72);
            for ( n = *v54 >> 1; n && v99; --n )
            {
              v102 = *v98++;
              v103 = *(unsigned __int8 *)v97;
              v97 = (const WCHAR *)((char *)v97 + 1);
              v233 = v98;
              v236 = v97;
              if ( v102 != (_WORD)v103 )
              {
                if ( v102 >= 0x61u )
                {
                  if ( v102 > 0x7Au )
                    v102 = RtlUpcaseUnicodeChar(v102);
                  else
                    v102 -= 32;
                }
                if ( v103 >= 0x61 )
                {
                  if ( v103 > 0x7A )
                    LOWORD(v103) = RtlUpcaseUnicodeChar(v103);
                  else
                    LOWORD(v103) = v103 - 32;
                }
                v101 = v102 - (unsigned __int16)v103;
                if ( v101 )
                  goto LABEL_179;
                v98 = v233;
                v97 = v236;
              }
              --v99;
            }
            v101 = n - v99;
LABEL_179:
            v53 = v230;
            v49 = BugCheckParameter3;
            v54 = a6;
          }
          else
          {
            v101 = RtlCompareUnicodeStrings(
                     *((PCWCH *)v54 + 1),
                     (unsigned __int64)*v54 >> 1,
                     v97,
                     (unsigned __int64)*(unsigned __int16 *)(v95 + 72) >> 1,
                     1u);
          }
          if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v49, (__int64)v238);
          else
            HvpReleaseCellPaged(v49, v238);
          if ( !v101 )
          {
            v224 = *(_DWORD *)&v53[4 * m + 2];
            v50 = 0;
            goto LABEL_167;
          }
          v55 = v228;
        }
      }
    }
    v104 = (unsigned __int16)v53[1];
    LODWORD(v236) = v104 - 1;
    v105 = (unsigned int)(v104 - 1) >> 1;
    if ( !(_WORD)v104 )
    {
      v50 = -1073741772;
      goto LABEL_346;
    }
    while ( 1 )
    {
      v106 = *v53;
      v224 = -1;
      if ( v106 == 26220 || v106 == 26732 )
      {
        v107 = (unsigned int *)&v53[4 * v105 + 2];
        v244.m128i_i64[0] = (__int64)v107;
        if ( v106 == 26220 )
        {
          v108 = 4;
          for ( ii = 0; ii < 4; ++ii )
          {
            if ( !*((_BYTE *)v107 + ii + 4) )
            {
              v108 = ii;
              break;
            }
          }
          v110 = a6;
          v111 = 0;
          v112 = *a6 >> 1;
          if ( v112 >= v108 )
            v112 = v108;
          while ( v111 < v112 )
          {
            v113 = *(unsigned __int16 *)(*((_QWORD *)v110 + 1) + 2LL * v111);
            v114 = *((unsigned __int8 *)&v53[4 * v105 + 4] + v111);
            if ( v113 >= 0x61 )
            {
              if ( v113 <= 0x7A )
              {
                v115 = v113 - 32;
              }
              else
              {
                v119 = PsGetCurrentServerSiloGlobals()[75].Flink;
                if ( v119 && (unsigned __int16)v118 >= 0xC0u )
                  LOWORD(v118) = *((_WORD *)&v119->Flink
                                 + (v118 & 0xF)
                                 + *((unsigned __int16 *)&v119->Flink
                                   + ((unsigned __int8)v118 >> 4)
                                   + (unsigned int)*((unsigned __int16 *)&v119->Flink + (v118 >> 8))))
                               + v118;
                v115 = (unsigned __int16)v118;
              }
            }
            else
            {
              v115 = v113;
            }
            if ( v114 >= 0x61 )
            {
              if ( v114 <= 0x7A )
              {
                v116 = v114 - 32;
              }
              else
              {
                v120 = PsGetCurrentServerSiloGlobals()[75].Flink;
                if ( v120 && (unsigned __int16)v121 >= 0xC0u )
                  LOWORD(v121) = *((_WORD *)&v120->Flink
                                 + (v121 & 0xF)
                                 + *((unsigned __int16 *)&v120->Flink + LOWORD(v120->Flink) + (v121 >> 4)))
                               + v121;
                v116 = (unsigned __int16)v121;
              }
            }
            else
            {
              v116 = v114;
            }
            v117 = v115 - v116;
            if ( v117 )
            {
              v122 = 1;
              if ( v117 <= 0 )
                v122 = -1;
              goto LABEL_230;
            }
            v110 = a6;
            ++v111;
          }
        }
        v125 = BugCheckParameter3;
        v126 = *(_DWORD *)&v53[4 * v105 + 2];
        v240[0] = -1;
        v240[1] = 0;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v127 = HvpGetCellFlat(BugCheckParameter3, v126, v240);
        else
          v127 = HvpGetCellPaged(BugCheckParameter3);
        if ( !v127 )
        {
          v49 = v125;
          goto LABEL_392;
        }
        v128 = (const WCHAR *)(v127 + 76);
        if ( (*(_BYTE *)(v127 + 2) & 0x20) != 0 )
        {
          v129 = *(_WORD *)(v127 + 72);
          v130 = (WCHAR *)*((_QWORD *)a6 + 1);
          for ( jj = *a6 >> 1; jj && v129; --jj )
          {
            v133 = *v130++;
            v134 = *(unsigned __int8 *)v128;
            v128 = (const WCHAR *)((char *)v128 + 1);
            v247 = v130;
            v233 = (WCHAR *)v128;
            if ( v133 != (_WORD)v134 )
            {
              if ( v133 >= 0x61u )
              {
                if ( v133 > 0x7Au )
                  v133 = RtlUpcaseUnicodeChar(v133);
                else
                  v133 -= 32;
              }
              if ( v134 >= 0x61 )
              {
                if ( v134 > 0x7A )
                  LOWORD(v134) = RtlUpcaseUnicodeChar(v134);
                else
                  LOWORD(v134) = v134 - 32;
              }
              v132 = v133 - (unsigned __int16)v134;
              if ( v132 )
                goto LABEL_243;
              v130 = v247;
              v128 = v233;
            }
            --v129;
          }
          v132 = jj - v129;
LABEL_243:
          v53 = v230;
          v107 = (unsigned int *)v244.m128i_i64[0];
          v125 = BugCheckParameter3;
        }
        else
        {
          v132 = RtlCompareUnicodeStrings(
                   *((PCWCH *)a6 + 1),
                   (unsigned __int64)*a6 >> 1,
                   v128,
                   (unsigned __int64)*(unsigned __int16 *)(v127 + 72) >> 1,
                   1u);
        }
        if ( (*(_BYTE *)(v125 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v125, (__int64)v240);
        else
          HvpReleaseCellPaged(v125, v240);
        if ( v132 )
        {
          if ( v132 >= 0 )
            goto LABEL_248;
LABEL_274:
          v122 = -1;
          goto LABEL_230;
        }
        v122 = 0;
        v224 = *v107;
      }
      else
      {
        v58 = (*(_BYTE *)(v49 + 140) & 1) == 0;
        v135 = *(_DWORD *)&v53[2 * v105 + 2];
        v239[0] = -1;
        v239[1] = 0;
        if ( v58 )
          v136 = HvpGetCellPaged(v49);
        else
          v136 = HvpGetCellFlat(v49, v135, v239);
        if ( !v136 )
          goto LABEL_392;
        v137 = (const WCHAR *)(v136 + 76);
        if ( (*(_BYTE *)(v136 + 2) & 0x20) != 0 )
        {
          v138 = *(_WORD *)(v136 + 72);
          v139 = (WCHAR *)*((_QWORD *)a6 + 1);
          for ( kk = *a6 >> 1; kk && v138; --kk )
          {
            v146 = *v139++;
            v147 = *(unsigned __int8 *)v137;
            v137 = (const WCHAR *)((char *)v137 + 1);
            v233 = v139;
            v247 = (WCHAR *)v137;
            if ( v146 != (_WORD)v147 )
            {
              if ( v146 >= 0x61u )
              {
                if ( v146 > 0x7Au )
                  v146 = RtlUpcaseUnicodeChar(v146);
                else
                  v146 -= 32;
              }
              if ( v147 >= 0x61 )
              {
                if ( v147 > 0x7A )
                  LOWORD(v147) = RtlUpcaseUnicodeChar(v147);
                else
                  LOWORD(v147) = v147 - 32;
              }
              v141 = v146 - (unsigned __int16)v147;
              if ( v141 )
                goto LABEL_269;
              v139 = v233;
              v137 = v247;
            }
            --v138;
          }
          v141 = kk - v138;
LABEL_269:
          v53 = v230;
          v49 = BugCheckParameter3;
        }
        else
        {
          v141 = RtlCompareUnicodeStrings(
                   *((PCWCH *)a6 + 1),
                   (unsigned __int64)*a6 >> 1,
                   v137,
                   (unsigned __int64)*(unsigned __int16 *)(v136 + 72) >> 1,
                   1u);
        }
        if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v49, (__int64)v239);
        else
          HvpReleaseCellPaged(v49, v239);
        if ( v141 )
        {
          if ( v141 >= 0 )
          {
LABEL_248:
            v122 = 1;
            goto LABEL_230;
          }
          goto LABEL_274;
        }
        v122 = 0;
        v224 = *(_DWORD *)&v53[2 * v105 + 2];
      }
LABEL_230:
      if ( !v122 )
        goto LABEL_422;
      if ( v122 < 0 )
      {
        v124 = v228;
        v123 = v105;
        LODWORD(v236) = v105;
      }
      else
      {
        v123 = (int)v236;
        v124 = v105;
        v228 = v105;
      }
      if ( v123 - v124 <= 1 )
      {
        v142 = *v53;
        v224 = -1;
        if ( v142 == 26220 || v142 == 26732 )
        {
          v143 = (unsigned int *)&v53[4 * v124 + 2];
          v233 = (WCHAR *)v143;
          if ( v142 == 26220 )
          {
            v144 = 4;
            for ( mm = 0; mm < 4; ++mm )
            {
              if ( !*((_BYTE *)v143 + mm + 4) )
              {
                v144 = mm;
                break;
              }
            }
            v148 = a6;
            v149 = 0;
            v150 = *a6 >> 1;
            v151 = 8LL * v124;
            if ( v150 >= v144 )
              v150 = v144;
            while ( 1 )
            {
              if ( v149 >= v150 )
              {
                v143 = (unsigned int *)v233;
                v53 = v230;
                v124 = v228;
                goto LABEL_350;
              }
              v152 = *(unsigned __int16 *)(*((_QWORD *)v148 + 1) + 2LL * v149);
              v153 = *((_BYTE *)v230 + v149 + v151 + 8);
              if ( v152 >= 0x61 )
                v154 = v152 <= 0x7A ? v152 - 32 : RtlUpcaseUnicodeChar(v152);
              else
                v154 = *(unsigned __int16 *)(*((_QWORD *)v148 + 1) + 2LL * v149);
              if ( v153 >= 0x61u )
                v155 = v153 <= 0x7Au ? v153 - 32 : RtlUpcaseUnicodeChar(v153);
              else
                v155 = v153;
              v156 = v154 - v155;
              if ( v156 )
                break;
              v148 = a6;
              ++v149;
            }
            v157 = 1;
            if ( v156 <= 0 )
              v157 = -1;
            goto LABEL_311;
          }
LABEL_350:
          v49 = BugCheckParameter3;
          v242[0] = -1;
          v242[1] = 0;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v175 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)&v53[4 * v124 + 2], v242);
          else
            v175 = HvpGetCellPaged(BugCheckParameter3);
          if ( !v175 )
            goto LABEL_392;
          v176 = (const WCHAR *)(v175 + 76);
          if ( (*(_BYTE *)(v175 + 2) & 0x20) != 0 )
          {
            v177 = *(_WORD *)(v175 + 72);
            v178 = (WCHAR *)*((_QWORD *)a6 + 1);
            for ( nn = *a6 >> 1; nn && v177; --nn )
            {
              v181 = *v178++;
              v182 = *(unsigned __int8 *)v176;
              v176 = (const WCHAR *)((char *)v176 + 1);
              v244.m128i_i64[0] = (__int64)v176;
              if ( v181 != (_WORD)v182 )
              {
                if ( v181 >= 0x61u )
                {
                  if ( v181 > 0x7Au )
                    v181 = RtlUpcaseUnicodeChar(v181);
                  else
                    v181 -= 32;
                }
                if ( v182 >= 0x61 )
                {
                  if ( v182 > 0x7A )
                    LOWORD(v182) = RtlUpcaseUnicodeChar(v182);
                  else
                    LOWORD(v182) = v182 - 32;
                }
                v180 = v181 - (unsigned __int16)v182;
                if ( v180 )
                  goto LABEL_357;
                v176 = (const WCHAR *)v244.m128i_i64[0];
              }
              --v177;
            }
            v180 = nn - v177;
LABEL_357:
            v143 = (unsigned int *)v233;
            v49 = BugCheckParameter3;
          }
          else
          {
            v180 = RtlCompareUnicodeStrings(
                     *((PCWCH *)a6 + 1),
                     (unsigned __int64)*a6 >> 1,
                     v176,
                     (unsigned __int64)*(unsigned __int16 *)(v175 + 72) >> 1,
                     1u);
          }
          if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v49, (__int64)v242);
          else
            HvpReleaseCellPaged(v49, v242);
          if ( v180 )
          {
            if ( v180 < 0 )
              goto LABEL_388;
            goto LABEL_362;
          }
          v157 = 0;
          v224 = *v143;
LABEL_311:
          if ( v157 )
          {
            if ( v157 >= 0 )
            {
              v158 = v230;
              v224 = -1;
              v159 = *v230;
              if ( *v230 == 26220 || v159 == 26732 )
              {
                v160 = (int)v236;
                v161 = (unsigned int *)&v230[4 * (unsigned int)v236 + 2];
                v233 = (WCHAR *)v161;
                if ( v159 == 26220 )
                {
                  v162 = 4;
                  for ( i1 = 0; i1 < 4; ++i1 )
                  {
                    if ( !*((_BYTE *)v161 + i1 + 4) )
                    {
                      v162 = i1;
                      break;
                    }
                  }
                  v164 = a6;
                  v165 = 8LL * (unsigned int)v236;
                  v166 = 0;
                  v167 = *a6 >> 1;
                  if ( v167 >= v162 )
                    v167 = v162;
                  while ( 1 )
                  {
                    if ( v166 >= v167 )
                    {
                      v161 = (unsigned int *)v233;
                      v160 = (int)v236;
                      goto LABEL_395;
                    }
                    v168 = *(unsigned __int16 *)(*((_QWORD *)v164 + 1) + 2LL * v166);
                    v169 = *((_BYTE *)v158 + v166 + v165 + 8);
                    if ( v168 >= 0x61 )
                      v170 = v168 <= 0x7A ? v168 - 32 : RtlUpcaseUnicodeChar(v168);
                    else
                      v170 = *(unsigned __int16 *)(*((_QWORD *)v164 + 1) + 2LL * v166);
                    if ( v169 >= 0x61u )
                      v171 = v169 <= 0x7Au ? v169 - 32 : RtlUpcaseUnicodeChar(v169);
                    else
                      v171 = v169;
                    v172 = v170 - v171;
                    if ( v172 )
                      break;
                    v158 = v230;
                    ++v166;
                    v164 = a6;
                  }
                  v174 = 1;
                  if ( v172 <= 0 )
                    v174 = -1;
                }
                else
                {
                  v164 = a6;
LABEL_395:
                  v49 = BugCheckParameter3;
                  v243[0] = -1;
                  v243[1] = 0;
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    v190 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)&v158[4 * v160 + 2], v243);
                  else
                    v190 = HvpGetCellPaged(BugCheckParameter3);
                  if ( !v190 )
                    goto LABEL_392;
                  v191 = (const WCHAR *)(v190 + 76);
                  if ( (*(_BYTE *)(v190 + 2) & 0x20) != 0 )
                  {
                    v192 = (WCHAR *)*((_QWORD *)v164 + 1);
                    v193 = *(_WORD *)(v190 + 72);
                    for ( i2 = *v164 >> 1; i2 && v193; --i2 )
                    {
                      v196 = *v192++;
                      v197 = *(unsigned __int8 *)v191;
                      v191 = (const WCHAR *)((char *)v191 + 1);
                      v244.m128i_i64[0] = (__int64)v191;
                      if ( v196 != (_WORD)v197 )
                      {
                        if ( v196 >= 0x61u )
                        {
                          if ( v196 > 0x7Au )
                            v196 = RtlUpcaseUnicodeChar(v196);
                          else
                            v196 -= 32;
                        }
                        if ( v197 >= 0x61 )
                        {
                          if ( v197 > 0x7A )
                            LOWORD(v197) = RtlUpcaseUnicodeChar(v197);
                          else
                            LOWORD(v197) = v197 - 32;
                        }
                        v195 = v196 - (unsigned __int16)v197;
                        if ( v195 )
                          goto LABEL_402;
                        v191 = (const WCHAR *)v244.m128i_i64[0];
                      }
                      --v193;
                    }
                    v195 = i2 - v193;
LABEL_402:
                    v161 = (unsigned int *)v233;
                    v49 = BugCheckParameter3;
                  }
                  else
                  {
                    v195 = RtlCompareUnicodeStrings(
                             *((PCWCH *)v164 + 1),
                             (unsigned __int64)*v164 >> 1,
                             v191,
                             (unsigned __int64)*(unsigned __int16 *)(v190 + 72) >> 1,
                             1u);
                  }
                  if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v49, (__int64)v243);
                  else
                    HvpReleaseCellPaged(v49, v243);
                  if ( v195 )
                  {
                    if ( v195 < 0 )
                      v174 = -1;
                    else
                      v174 = 1;
                  }
                  else
                  {
                    v174 = 0;
                    v224 = *v161;
                  }
                }
              }
              else
              {
                v49 = BugCheckParameter3;
                v189 = &v230[2 * (unsigned int)v236];
                v174 = CmpDoCompareKeyName(BugCheckParameter3, a6, 0LL, *((_DWORD *)v189 + 1));
                if ( v174 == 2 )
                  goto LABEL_392;
                if ( !v174 )
                  v224 = *((_DWORD *)v189 + 1);
              }
              v49 = BugCheckParameter3;
              v53 = v230;
              v50 = v174 != 0 ? 0xC0000034 : 0;
              goto LABEL_167;
            }
            v49 = BugCheckParameter3;
            v50 = -1073741772;
            v53 = v230;
          }
          else
          {
LABEL_422:
            v49 = BugCheckParameter3;
            v53 = v230;
            v50 = 0;
          }
        }
        else
        {
          v49 = BugCheckParameter3;
          v241[0] = -1;
          v241[1] = 0;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v183 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)&v53[2 * v124 + 2], v241);
          else
            v183 = HvpGetCellPaged(BugCheckParameter3);
          if ( v183 )
          {
            v184 = (const WCHAR *)(v183 + 76);
            if ( (*(_BYTE *)(v183 + 2) & 0x20) != 0 )
            {
              v185 = (WCHAR *)*((_QWORD *)a6 + 1);
              v186 = *(_WORD *)(v183 + 72);
              for ( i3 = *a6 >> 1; i3 && v186; --i3 )
              {
                v198 = *v185++;
                v199 = *(unsigned __int8 *)v184;
                v184 = (const WCHAR *)((char *)v184 + 1);
                v244.m128i_i64[0] = (__int64)v184;
                if ( v198 != (_WORD)v199 )
                {
                  if ( v198 >= 0x61u )
                  {
                    if ( v198 > 0x7Au )
                      v198 = RtlUpcaseUnicodeChar(v198);
                    else
                      v198 -= 32;
                  }
                  if ( v199 >= 0x61 )
                  {
                    if ( v199 > 0x7A )
                      LOWORD(v199) = RtlUpcaseUnicodeChar(v199);
                    else
                      LOWORD(v199) = v199 - 32;
                  }
                  v188 = v198 - (unsigned __int16)v199;
                  if ( v188 )
                    goto LABEL_383;
                  v184 = (const WCHAR *)v244.m128i_i64[0];
                }
                --v186;
              }
              v188 = i3 - v186;
LABEL_383:
              v53 = v230;
              v124 = v228;
              v49 = BugCheckParameter3;
            }
            else
            {
              v188 = RtlCompareUnicodeStrings(
                       *((PCWCH *)a6 + 1),
                       (unsigned __int64)*a6 >> 1,
                       v184,
                       (unsigned __int64)*(unsigned __int16 *)(v183 + 72) >> 1,
                       1u);
            }
            if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v49, (__int64)v241);
            else
              HvpReleaseCellPaged(v49, v241);
            if ( v188 )
            {
              if ( v188 < 0 )
              {
LABEL_388:
                v157 = -1;
                goto LABEL_311;
              }
LABEL_362:
              v157 = 1;
              goto LABEL_311;
            }
            v157 = 0;
            v224 = *(_DWORD *)&v53[2 * v124 + 2];
            goto LABEL_311;
          }
LABEL_392:
          v50 = -1073741670;
LABEL_346:
          v53 = v230;
          v224 = -1;
        }
LABEL_167:
        if ( (int)(v50 + 0x80000000) < 0 || v50 == -1073741772 )
        {
          if ( v224 != -1 )
          {
            v89 = v224;
            v50 = 0;
            goto LABEL_148;
          }
          if ( (*(_BYTE *)(v49 + 140) & 1) == 0 )
          {
            HvpReleaseCellPaged(v49, v231);
            goto LABEL_171;
          }
          HvpReleaseCellFlat(v49, (__int64)v231);
          v51 = (unsigned int)(v245 + 1);
          goto LABEL_58;
        }
        v89 = v232;
LABEL_148:
        if ( v53 )
        {
LABEL_149:
          if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v49, (__int64)v231);
          else
            HvpReleaseCellPaged(v49, v231);
        }
LABEL_151:
        v34 = v248;
        v91 = *(_QWORD *)(v248 + 32);
        if ( (*(_BYTE *)(v91 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v91, (__int64)&v234);
        else
          HvpReleaseCellPaged(v91, &v234);
        if ( v50 == -1073741772 )
        {
          v89 = -1;
          goto LABEL_141;
        }
        if ( v50 < 0 )
        {
          v17 = v235;
          v93 = *(unsigned __int8 *)(a11 + 426);
          if ( (unsigned __int8)v93 < 4u )
          {
            *(_DWORD *)(a11 + 8 * v93 + 428) = v50;
            *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 426))++ + 432) = 328960;
          }
          v12 = a2;
          goto LABEL_79;
        }
        if ( v89 != -1 )
        {
          v17 = v235;
          goto LABEL_157;
        }
LABEL_141:
        v12 = a2;
        v17 = v235;
LABEL_142:
        if ( !*(_WORD *)(a1 + 66) && !a10 )
        {
          v50 = -1073741772;
          v90 = *(unsigned __int8 *)(a11 + 426);
          if ( (unsigned __int8)v90 < 4u )
          {
            *(_DWORD *)(a11 + 8 * v90 + 428) = -1073741772;
            *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 426))++ + 432) = 329216;
          }
          goto LABEL_79;
        }
LABEL_157:
        v92 = CmpCreateKeyControlBlock(*(_QWORD *)(v34 + 32), v89, v34, v17, 0, a6, a7, a8, &v246);
        v50 = v92;
        if ( v92 < 0 )
        {
          CmpRecordParseFailure(a11, 329472, v92);
          v12 = a2;
          goto LABEL_79;
        }
        if ( v17 && _InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
        v17 = v246;
        v202 = v226;
        v235 = v246;
        v246 = 0LL;
        ++*(_WORD *)(a4 + 2);
        if ( (int)v202 >= 2 )
          *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8 * v202 - 16) = v17;
        else
          *(_QWORD *)(a4 + 8 * v202 + 8) = v17;
        v19 = a1;
        if ( (_WORD)v202 != *(_WORD *)(a1 + 66) )
        {
          v203 = *(volatile signed __int32 **)(v34 + 32);
          v204 = (__int64 *)(*((_QWORD *)v203 + 206)
                           + 24
                           * ((unsigned int)(*((_DWORD *)v203 + 414) - 1) & ((101027
                                                                            * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9))));
          v204[1] = 0LL;
          _m_prefetchw(v204);
          v205 = *v204;
          v206 = *v204 - 16;
          if ( (*v204 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v206 = 0LL;
          if ( (v205 & 2) != 0 || (v207 = *v204, v207 != _InterlockedCompareExchange64(v204, v206, v205)) )
            ExfReleasePushLock(v204);
          KeAbPostRelease((unsigned __int64)v204);
          if ( _InterlockedExchangeAdd(v203 + 1060, 0xFFFFFFFF) == 1 )
          {
            v212 = v203 + 402;
            if ( *(volatile signed __int32 **)v212 != v212 )
            {
              CmpLockHiveListExclusive(v209, v208, v210, v211);
              v213 = *(_QWORD *)v212;
              if ( *(volatile signed __int32 **)(*(_QWORD *)v212 + 8LL) != v212
                || (v214 = (volatile signed __int32 **)*((_QWORD *)v203 + 202), *v214 != v212) )
              {
LABEL_122:
                __fastfail(3u);
              }
              *v214 = (volatile signed __int32 *)v213;
              *(_QWORD *)(v213 + 8) = v214;
              CmpUnlockHiveList();
            }
            *v203 = -1160724768;
            HvFreeDirtyData((__int64)v203);
            CmpDeleteKcbCache((__int64)v203);
            v215 = (void *)*((_QWORD *)v203 + 232);
            if ( v215 )
              ExFreePoolWithTag(v215, 0x624E4D43u);
            v216 = (void *)*((_QWORD *)v203 + 230);
            if ( v216 )
              ExFreePoolWithTag(v216, 0x20204D43u);
            v217 = (void *)*((_QWORD *)v203 + 234);
            if ( v217 )
              ExFreePoolWithTag(v217, 0);
            v218 = (void *)*((_QWORD *)v203 + 603);
            if ( v218 )
              ExFreePoolWithTag(v218, 0);
            CmpReleaseGlobalQuota(0x12E0u);
            ExFreePoolWithTag((PVOID)v203, 0);
          }
          ++j;
          LOWORD(v202) = v226;
          v19 = a1;
        }
        v12 = a2;
        v33 = v202 + 1;
        goto LABEL_35;
      }
      v49 = BugCheckParameter3;
      v105 = v124 + ((v123 - v124) >> 1);
    }
  }
LABEL_112:
  v50 = -1073741772;
  if ( a11 )
  {
    v82 = *(unsigned __int8 *)(a11 + 426);
    if ( (unsigned __int8)v82 < 4u )
    {
      *(_DWORD *)(a11 + 8 * v82 + 428) = -1073741772;
      *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 426))++ + 432) = 328192;
    }
  }
LABEL_79:
  for ( i4 = 0; i4 <= *(__int16 *)(v12 + 2); ++i4 )
  {
    if ( i4 >= 2 )
      v60 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * i4 - 16);
    else
      v60 = *(_QWORD *)(v12 + 8LL * i4 + 8);
    CmpUnlockKcb(v60);
  }
  for ( i5 = j; i5 <= v225; ++i5 )
  {
    if ( i5 >= 2 )
      v62 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * i5 - 16);
    else
      v62 = *(_QWORD *)(v12 + 8LL * i5 + 8);
    v63 = *(volatile signed __int32 **)(v62 + 32);
    v64 = (__int64 *)(*((_QWORD *)v63 + 206)
                    + 24LL
                    * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((101027
                                                                                  * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (*((_DWORD *)v63 + 414) - 1)));
    v64[1] = 0LL;
    _m_prefetchw(v64);
    v65 = *v64;
    v66 = *v64 - 16;
    if ( (*v64 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v66 = 0LL;
    if ( (v65 & 2) != 0 || (v67 = *v64, v67 != _InterlockedCompareExchange64(v64, v66, v65)) )
      ExfReleasePushLock(v64);
    KeAbPostRelease((unsigned __int64)v64);
    if ( _InterlockedExchangeAdd(v63 + 1060, 0xFFFFFFFF) == 1 )
    {
      v72 = v63 + 402;
      if ( *(volatile signed __int32 **)v72 != v72 )
      {
        CmpLockHiveListExclusive(v69, v68, v70, v71);
        v73 = *(_QWORD *)v72;
        if ( *(volatile signed __int32 **)(*(_QWORD *)v72 + 8LL) != v72 )
          goto LABEL_122;
        v74 = (volatile signed __int32 **)*((_QWORD *)v63 + 202);
        if ( *v74 != v72 )
          goto LABEL_122;
        *v74 = (volatile signed __int32 *)v73;
        *(_QWORD *)(v73 + 8) = v74;
        CmpUnlockHiveList();
      }
      *v63 = -1160724768;
      HvFreeDirtyData((__int64)v63);
      CmpDeleteKcbCache((__int64)v63);
      v75 = (void *)*((_QWORD *)v63 + 232);
      if ( v75 )
        ExFreePoolWithTag(v75, 0x624E4D43u);
      v76 = (void *)*((_QWORD *)v63 + 230);
      if ( v76 )
        ExFreePoolWithTag(v76, 0x20204D43u);
      v77 = (void *)*((_QWORD *)v63 + 234);
      if ( v77 )
        ExFreePoolWithTag(v77, 0);
      v78 = (void *)*((_QWORD *)v63 + 603);
      if ( v78 )
        ExFreePoolWithTag(v78, 0);
      CmpReleaseGlobalQuota(0x12E0u);
      ExFreePoolWithTag((PVOID)v63, 0);
    }
  }
  if ( v17 )
    CmpDereferenceKeyControlBlock(v17);
  return (unsigned int)v50;
}
