/*
 * XREFs of CmpDoParseKey @ 0x1408CBC90
 * Callers:
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     CmpTransSilentIgnore @ 0x14046B120 (CmpTransSilentIgnore.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x1404AA5F0 (PsGetCurrentThreadProcess.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140772428 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B1E74 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     HvResetDirtyData @ 0x1408B8348 (HvResetDirtyData.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpGetComponentNameAtIndex @ 0x1408BACC0 (CmpGetComponentNameAtIndex.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408BC670 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x1408BC9D0 (CmEqualTrans.c)
 *     CmpDoWritethroughReparse @ 0x1408C11D0 (CmpDoWritethroughReparse.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C3890 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpConstructName @ 0x1408C53A0 (CmpConstructName.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408C6254 (CmpUnlockHashEntryByKcb.c)
 *     CmpRecordParseFailure @ 0x1408C64C0 (CmpRecordParseFailure.c)
 *     CmpRemoveFromDelayedClose @ 0x1408C64F4 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpComputeComponentHashes @ 0x1408CE0C0 (CmpComputeComponentHashes.c)
 *     CmpCleanupPathInfo @ 0x1408CE5B0 (CmpCleanupPathInfo.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1408CE62C (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     CmpEnlistKeyBody @ 0x1408CEBD0 (CmpEnlistKeyBody.c)
 *     CmpIsKeyStackDeleted @ 0x1408CECF0 (CmpIsKeyStackDeleted.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408CEDB8 (CmpUnlockHashEntryByIndex.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpVEExecuteOpenLogic @ 0x1408D9360 (CmpVEExecuteOpenLogic.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E0760 (CmpRebuildKcbCacheFromNode.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408ED0C4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpStartKcbStack @ 0x140981BC0 (CmpStartKcbStack.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1409837F4 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140984C50 (CmpLockKcbStackShared.c)
 *     CmpIsKcbInvolvedInVirtualization @ 0x140A193B0 (CmpIsKcbInvolvedInVirtualization.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A2F9B0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpPopulateKcbStack @ 0x140A330B0 (CmpPopulateKcbStack.c)
 *     CmRmIsKcbStackVisible @ 0x140A33120 (CmRmIsKcbStackVisible.c)
 *     CmpUnlockHashEntry @ 0x140A345F0 (CmpUnlockHashEntry.c)
 *     CmpIsKeyStackSymlink @ 0x140A34780 (CmpIsKeyStackSymlink.c)
 *     CmpGetComponentHashAtIndex @ 0x140A5C170 (CmpGetComponentHashAtIndex.c)
 *     CmpVEExecuteCreateLogic @ 0x140A9F648 (CmpVEExecuteCreateLogic.c)
 *     CmpCheckExeOwnerForPca @ 0x140AAE3A0 (CmpCheckExeOwnerForPca.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AB02DC (CmpDoesProcessBelongToServiceSession.c)
 *     CmpCheckKeyOwnerForPca @ 0x140AB0CD8 (CmpCheckKeyOwnerForPca.c)
 *     CmpPublishEventForPcaResolver @ 0x140ADE158 (CmpPublishEventForPcaResolver.c)
 *     CmpTransSearchAddTransFromRm @ 0x140AE0F20 (CmpTransSearchAddTransFromRm.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140AE5758 (CmpTryToLockHashEntryExclusive.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140AE7478 (CmpUpdateHiveRootCellFlags.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140AF47D8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x140B45A40 (CmpSyncKcbCacheForHive.c)
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x140B55FE0 (CmpWaitForHiveMount.c)
 *     CmpLogUnsupportedOperation @ 0x140B5C1B8 (CmpLogUnsupportedOperation.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140C58A70 (CmListGetNextElement.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int16 a4,
        __int64 a5,
        __int128 *a6,
        __int64 a7,
        int a8,
        __int64 *a9)
{
  unsigned int v9; // r12d
  __int64 v10; // r13
  ULONG_PTR v12; // rsi
  __int64 v13; // r9
  ULONG_PTR v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v18; // rcx
  ULONG_PTR v19; // rdi
  int v20; // eax
  __int16 v21; // r15
  __int64 v22; // r10
  unsigned int k; // ecx
  _WORD *v24; // r8
  char v25; // dl
  __int64 v26; // rcx
  __int16 v27; // ax
  int v28; // eax
  char v29; // al
  int *v30; // rdi
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _KLOCK_ENTRIES *v34; // r9
  int v35; // r8d
  _QWORD *v36; // rdi
  __int64 v37; // rsi
  _QWORD **v38; // rsi
  _QWORD *m; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rcx
  int v45; // eax
  int started; // eax
  int v47; // eax
  __int64 *v48; // rdi
  int *v49; // r15
  __int16 v50; // ax
  int v51; // ebx
  int v52; // esi
  __int16 v53; // cx
  __int16 n; // bx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r10
  __int16 ii; // cx
  __int64 v59; // rax
  __int16 jj; // bx
  ULONG_PTR v61; // rcx
  __int64 v62; // r8
  int v63; // ecx
  __int64 v64; // r9
  ULONG_PTR v65; // rbx
  char v66; // dl
  int v67; // eax
  ULONG_PTR v68; // rcx
  __int64 v69; // r9
  __int64 NextElement; // rax
  int v71; // edx
  __int64 v72; // rcx
  __int64 v73; // r11
  char v74; // al
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v76; // r11
  unsigned __int16 *v77; // r8
  struct _LIST_ENTRY *Flink; // r14
  __int64 v79; // rax
  unsigned __int16 *v80; // rdi
  ULONG_PTR v81; // rax
  __int64 v82; // rsi
  ULONG_PTR v83; // r9
  unsigned __int64 v84; // r9
  unsigned __int64 v85; // r10
  __int64 v86; // rcx
  unsigned __int16 *v87; // r10
  _WORD *v88; // r8
  __int16 v89; // cx
  __int16 v90; // ax
  int v91; // edi
  int v92; // eax
  unsigned int v93; // ecx
  __int64 v94; // r10
  _WORD *v95; // rdx
  char v96; // al
  int v97; // edi
  struct _PRIVILEGE_SET *Pool; // rdx
  __int64 v99; // rax
  __int16 j; // cx
  char v101; // di
  __int64 v102; // rax
  __int128 v103; // xmm0
  int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // rbx
  __int64 v107; // rdi
  __int64 *v108; // rbx
  signed __int64 v109; // rax
  signed __int64 v110; // rdx
  __int64 v111; // rtt
  char v112; // al
  ULONG_PTR v113; // rbx
  ULONG_PTR v114; // rcx
  int v115; // eax
  __int64 v116; // rcx
  void *v117; // rbx
  __int64 i; // rcx
  __int64 v120; // r8
  ULONG_PTR v121; // rsi
  __int64 *v122; // rbx
  unsigned int v123; // r13d
  __int64 v124; // r8
  struct _KLOCK_ENTRIES *v125; // r9
  __int64 *v126; // r15
  _QWORD *v127; // rdi
  _QWORD *v128; // rbx
  __int64 v129; // r12
  int v130; // eax
  int v131; // r12d
  __int64 v132; // r8
  struct _KLOCK_ENTRIES *v133; // r9
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int16 v136; // bx
  int v137; // eax
  int v138; // eax
  BOOLEAN v139; // bl
  int KeyBody; // eax
  __int64 v141; // r10
  __int64 v142; // rdx
  __int16 v143; // bx
  signed __int64 v144; // r14
  struct _LIST_ENTRY **p_Blink; // rsi
  ULONG_PTR *v146; // rcx
  __int16 kk; // bx
  ULONG_PTR v148; // rcx
  __int16 mm; // bx
  ULONG_PTR v150; // rcx
  __int64 v151; // rax
  __int16 v152; // r10
  __int64 v153; // r8
  __int64 v154; // rax
  unsigned __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rax
  int v158; // r8d
  int v159; // edx
  int v160; // edx
  int v161; // ebx
  const UNICODE_STRING *v162; // rbx
  int v163; // eax
  int v164; // eax
  __int64 v165; // rax
  __int64 v166; // rcx
  int v167; // edx
  __int64 *v168; // rax
  __int64 v169; // rcx
  int v170; // eax
  int v171; // r8d
  int v172; // eax
  int v173; // eax
  int v174; // r9d
  int v175; // eax
  int SymbolicLinkTarget; // eax
  __int64 v177; // rcx
  unsigned int v178; // edx
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 ComponentNameAtIndex; // rax
  __int64 v182; // rax
  int v183; // edx
  int v184; // r8d
  int v185; // r8d
  int v186; // r8d
  int v187; // r8d
  __int64 v188; // r14
  __int16 v189; // ax
  __int64 v190; // rax
  __int64 v191; // rax
  unsigned int v192; // r8d
  unsigned __int16 *v193; // r14
  __int64 v194; // rcx
  char ComponentHashAtIndex; // bl
  int v196; // r8d
  int v197; // edx
  int v198; // edx
  __int64 v199; // rcx
  ULONG_PTR v200; // rdx
  ULONG_PTR v201; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  ULONG_PTR v204; // r15
  ULONG_PTR v205; // r8
  __int64 v206; // rbx
  ULONG_PTR v207; // r15
  int v208; // eax
  int v209; // eax
  __int64 v210; // rdx
  __int64 v211; // r8
  struct _KLOCK_ENTRIES *v212; // r9
  ULONG_PTR v213; // rcx
  int v214; // r15d
  int v215; // eax
  __int64 v216; // r8
  ULONG_PTR v217; // rcx
  __int64 v218; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  char DoesProcessBelongToServiceSession; // al
  __int64 v221; // rdx
  __int64 v222; // rcx
  int v223; // eax
  int Logic; // eax
  int v225; // r9d
  _KPROCESS *v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  int v229; // eax
  int Child; // eax
  int v231; // eax
  __int64 v232; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  ULONG_PTR v234; // [rsp+38h] [rbp-C8h]
  char v235; // [rsp+60h] [rbp-A0h]
  int v236; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v237; // [rsp+68h] [rbp-98h]
  __int16 v238; // [rsp+6Ah] [rbp-96h]
  char v239; // [rsp+6Ch] [rbp-94h]
  _BYTE v240[11]; // [rsp+6Dh] [rbp-93h] BYREF
  BOOLEAN v241[8]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v242; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h] BYREF
  __int16 v244; // [rsp+90h] [rbp-70h] BYREF
  char v245; // [rsp+92h] [rbp-6Eh] BYREF
  __int16 v246; // [rsp+93h] [rbp-6Dh] BYREF
  ULONG_PTR v247; // [rsp+98h] [rbp-68h]
  char v248; // [rsp+A0h] [rbp-60h]
  __int64 v249; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h]
  __int64 v251; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v252; // [rsp+C0h] [rbp-40h]
  __int64 v253; // [rsp+C8h] [rbp-38h] BYREF
  int v254[2]; // [rsp+D0h] [rbp-30h]
  __int64 v255; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v256; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v257; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v258; // [rsp+F8h] [rbp-8h]
  int v259[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v260; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR v261; // [rsp+110h] [rbp+10h] BYREF
  __int64 v262; // [rsp+118h] [rbp+18h]
  __int128 v263; // [rsp+120h] [rbp+20h] BYREF
  __int64 v264; // [rsp+130h] [rbp+30h]
  __int64 *v265; // [rsp+138h] [rbp+38h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+40h] BYREF
  __int64 v267; // [rsp+150h] [rbp+50h]
  __int64 v268[2]; // [rsp+160h] [rbp+60h] BYREF
  PPRIVILEGE_SET v269[2]; // [rsp+170h] [rbp+70h]
  int v270[4]; // [rsp+180h] [rbp+80h] BYREF
  PPRIVILEGE_SET v271[2]; // [rsp+190h] [rbp+90h]
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v273; // [rsp+1D0h] [rbp+D0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+1E0h] [rbp+E0h]
  ULONG_PTR *v275; // [rsp+1F0h] [rbp+F0h]
  __int64 v276; // [rsp+1F8h] [rbp+F8h]

  v9 = 0;
  v10 = a7;
  v252 = a5;
  v12 = 0LL;
  v265 = a9;
  v249 = a1;
  Object = 0LL;
  v251 = 0LL;
  v244 = 0;
  v237 = 0;
  v248 = 0;
  v240[0] = 0;
  v239 = 0;
  v238 = a3;
  *(_QWORD *)v254 = a2;
  v267 = a7;
  v264 = 0LL;
  LOWORD(v253) = 0;
  v236 = 0;
  *(_QWORD *)v241 = 0LL;
  DestinationString = 0LL;
  v260 = 0LL;
  v263 = 0LL;
  v257 = 0LL;
  v246 = 0;
  BugCheckParameter2 = 0LL;
  *(_QWORD *)v259 = 0LL;
  *(_WORD *)&v240[3] = 0;
  v242 = 0;
  v261 = 0LL;
  HvpGetCellContextInitialize(&v260);
  v256 = *a6;
  CmpInitializeDelayDerefContext(&v263);
  v262 = 0LL;
  *(_OWORD *)(a7 + 160) = 0LL;
  v240[1] = 0;
  v245 = 0;
  *(_OWORD *)(a7 + 176) = 0LL;
  v258 = -1LL;
  *(_OWORD *)v268 = 0LL;
  WORD1(v268[0]) = -1;
  *(_OWORD *)v270 = 0LL;
  HIWORD(v270[0]) = -1;
  ApcState.ApcListHead[0] = 0LL;
  WORD1(ApcState.ApcListHead[0].Flink) = -1;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)v269 = 0LL;
  *(_OWORD *)v271 = 0LL;
  ApcState.ApcListHead[1] = 0LL;
  memset_0((void *)(a7 + 216), 0, 0xA8uLL);
  memset_0((void *)(a7 + 384), 0, 0x50uLL);
  if ( a7 )
    *(_QWORD *)(a7 + 384) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v14 = *(_QWORD *)(a7 + 88);
  v15 = *(_QWORD *)(a7 + 72);
  v16 = v249;
  v247 = v14;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v15 )
  {
    v157 = *(_QWORD *)(v16 + 56);
    if ( v157 && v15 != v157 )
    {
      v236 = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      goto LABEL_211;
    }
    v255 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v16 + 56);
    v255 = *(_QWORD *)(v16 + 64);
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v16 + 50);
  Blink = PspSiloMonitorLock.Header.WaitListHead.Flink->Blink;
  if ( *(struct _LIST_ENTRY **)(v16 + 8) != Blink )
  {
    if ( v14 )
    {
      CmpLockRegistry(Blink);
      CmpDereferenceKeyControlBlock(v14);
      v14 = 0LL;
      v247 = 0LL;
      CmpUnlockRegistry(v18);
      HIBYTE(v237) = 0;
      v235 = 0;
      LODWORD(v12) = *(_DWORD *)&v240[3];
      goto LABEL_10;
    }
    goto LABEL_189;
  }
  if ( !v14 )
  {
LABEL_189:
    v235 = 0;
    *(_DWORD *)&v240[3] = 0;
    v247 = v14;
    v239 = 0;
    goto LABEL_141;
  }
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(Blink);
  v73 = *(_QWORD *)(v14 + 296);
  HIBYTE(v237) = 1;
  v74 = v73 & 1;
  if ( (v73 & 1) != 0 )
    v73 &= ~1uLL;
  if ( !v73 || v74 )
  {
LABEL_140:
    CmpDereferenceKeyControlBlock(v14);
    v14 = 0LL;
    v247 = 0LL;
    CmpUnlockRegistry(v86);
    LODWORD(v12) = *(_DWORD *)&v240[3];
    v235 = 0;
LABEL_141:
    HIBYTE(v237) = 0;
    goto LABEL_10;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v77 = (unsigned __int16 *)*((_QWORD *)v76 + 1);
  Flink = CurrentServerSiloGlobals[75].Flink;
  v79 = *v76;
  if ( *(_WORD *)v252 < (unsigned __int16)v79 )
  {
LABEL_139:
    v14 = v247;
    goto LABEL_140;
  }
  v80 = (unsigned __int16 *)((char *)v77 + v79);
  v81 = v247;
  v82 = *(_QWORD *)(v252 + 8) - (_QWORD)v77;
  while ( 1 )
  {
    v83 = v81;
    if ( v77 >= v80 )
      break;
    v84 = *v77;
    v85 = *(unsigned __int16 *)((char *)v77 + v82);
    if ( (_WORD)v84 != (_WORD)v85 )
    {
      if ( (unsigned int)v84 >= 0x61 )
      {
        if ( (unsigned int)v84 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v84 >= 0xC0u )
            LOWORD(v84) = *((_WORD *)&Flink->Flink
                          + (v84 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v84 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v84 >> 8))))
                        + v84;
        }
        else
        {
          LOWORD(v84) = v84 - 32;
        }
      }
      if ( (unsigned int)v85 >= 0x61 )
      {
        if ( (unsigned int)v85 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v85 >= 0xC0u )
            LOWORD(v85) = *((_WORD *)&Flink->Flink
                          + (v85 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v85 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v85 >> 8))))
                        + v85;
        }
        else
        {
          LOWORD(v85) = v85 - 32;
        }
      }
      if ( (_WORD)v84 != (_WORD)v85 )
      {
        v16 = v249;
        goto LABEL_139;
      }
      v81 = v247;
    }
    ++v77;
  }
  v87 = (unsigned __int16 *)v252;
  v14 = v81;
  v88 = (_WORD *)(*(_QWORD *)(v252 + 8) + 2 * ((unsigned __int64)*v76 >> 1));
  v89 = *(_WORD *)v252 - *v76;
  v90 = *(_WORD *)(v252 + 2) - *v76;
  *((_QWORD *)&v256 + 1) = v88;
  LOWORD(v256) = v89;
  WORD1(v256) = v90;
  if ( v89 )
  {
    do
    {
      if ( *v88 != 92 )
        break;
      v89 -= 2;
      v90 -= 2;
      ++v88;
      LOWORD(v256) = v89;
      WORD1(v256) = v90;
    }
    while ( v89 );
    v87 = (unsigned __int16 *)v252;
    *((_QWORD *)&v256 + 1) = v88;
  }
  v91 = *(unsigned __int16 *)(v83 + 12) - 1;
  if ( (*(_DWORD *)a7 & 1) == 0 || v89 )
  {
    LODWORD(v12) = *(_DWORD *)&v240[3];
  }
  else
  {
    v151 = *((_QWORD *)v87 + 1);
    v83 = *v87;
    LOWORD(v83) = v83 - *v76;
    v152 = v87[1] - *v76;
    v153 = v151 + 2 * ((unsigned __int64)*v76 >> 1);
    v154 = *(_QWORD *)(v14 + 80);
    v155 = *(unsigned __int16 *)(v154 + 24);
    if ( (*(_DWORD *)(v154 + 12) & 1) != 0 )
    {
      v156 = 2 * v155;
      LOWORD(v155) = 2 * v155;
    }
    else
    {
      v156 = 2 * (v155 >> 1);
    }
    LODWORD(v12) = 1;
    *((_QWORD *)&v256 + 1) = v153 - v156;
    LOWORD(v256) = v83 + v155;
    WORD1(v256) = v152 + v155;
    --v91;
  }
  v92 = CmpComputeComponentHashes(&v256, &v242, a7 + 216, v83);
  v236 = v92;
  if ( v92 < 0 )
  {
    CmpRecordParseFailure(a7, 512, v92);
    v12 = 0LL;
    goto LABEL_211;
  }
  if ( (unsigned int)(v242 + v91) > 0x20 )
  {
    v236 = -1073741811;
    CmpRecordParseFailure(a7, 768, -1073741811);
    v12 = 0LL;
    goto LABEL_211;
  }
  v93 = 0;
  v94 = a7 + 216;
  while ( v93 < v242 )
  {
    if ( v93 >= 8 )
    {
      v94 = a7 + 216;
      v95 = (_WORD *)(*(_QWORD *)(a7 + 376) + 16 * (v93 - 8 + 6LL));
    }
    else
    {
      v95 = (_WORD *)(v94 + 16 * (v93 + 2LL));
    }
    if ( *v95 > 0x200u )
    {
      v236 = -1073741811;
      CmpRecordParseFailure(a7, 1024, -1073741811);
      v12 = 0LL;
      goto LABEL_211;
    }
    ++v93;
  }
  v236 = 0;
  if ( (_WORD)v12 == v242 )
  {
    CmpLockHashEntrySharedByKcb(v14);
    v96 = 1;
    v239 = 1;
  }
  else
  {
    v96 = 0;
  }
  v235 = v96;
  CmpLockKcbShared(v14);
  if ( (*(_DWORD *)(v14 + 8) & 0x20000) == 0 )
  {
    v97 = *(__int16 *)(v14 + 66);
    Pool = 0LL;
    v273 = 0LL;
    WORD1(v273.Ptr) = -1;
    *(_OWORD *)Privileges = 0LL;
    if ( v97 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
    {
      v99 = *(__int16 *)(v14 + 66);
      LOWORD(v273.Ptr) = v97;
      Privileges[1] = Pool;
      WORD1(v273.Ptr) = v99;
      if ( (_WORD)v99 )
      {
        for ( i = *(_QWORD *)(v14 + 192); i; LOWORD(v99) = v99 - 1 )
        {
          v120 = *(_QWORD *)(i + 16);
          if ( (__int16)v99 >= 2 )
          {
            *((_QWORD *)Pool + (__int16)v99 - 2) = v120;
          }
          else
          {
            *((_QWORD *)&v273.Size + (__int16)v99) = v120;
            Pool = Privileges[1];
          }
          i = *(_QWORD *)(i + 24);
        }
      }
      else
      {
        *((_QWORD *)&v273.Size + v99) = v14;
        Pool = Privileges[1];
      }
    }
    else
    {
      Pool = Privileges[1];
    }
    for ( j = WORD1(v273.Ptr); ; --j )
    {
      v101 = 1;
      if ( j < 0 )
        break;
      v102 = j >= 2 ? *((_QWORD *)Pool + j - 2) : *((_QWORD *)&v273.Size + j);
      if ( *(_WORD *)(v102 + 66) && *(_BYTE *)(v102 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v102 + 40) != -1 )
      {
        v101 = 0;
        break;
      }
    }
    if ( Pool )
      CmSiFreeMemory(Pool);
    if ( !v101 && (*(_DWORD *)(v14 + 8) & 0x40000) == 0 )
    {
      CmpUnlockKcb(v14);
      v19 = v14;
      v25 = HIBYTE(v237);
      v21 = v242;
      v239 = v235;
      *(_DWORD *)&v240[3] = v12;
      v247 = v14;
      goto LABEL_19;
    }
  }
  CmpUnlockKcb(v14);
  if ( v239 )
  {
    CmpUnlockHashEntryByKcb(v14);
    v239 = 0;
  }
  CmpDereferenceKeyControlBlock(v14);
  v103 = *a6;
  LODWORD(v12) = 0;
  v247 = 0LL;
  *(_DWORD *)&v240[3] = 0;
  v256 = v103;
  v14 = 0LL;
  CmpCleanupPathInfo(a7 + 216);
  memset_0((void *)(a7 + 216), 0, 0xA8uLL);
  v16 = v249;
  v235 = v239;
LABEL_10:
  v19 = *(_QWORD *)(v16 + 8);
  v20 = CmpComputeComponentHashes(&v256, &v242, a7 + 216, v13);
  v236 = v20;
  if ( v20 < 0 )
  {
    CmpRecordParseFailure(a7, 1280, v20);
    v12 = 0LL;
    goto LABEL_209;
  }
  v21 = v242;
  v22 = a7 + 216;
  for ( k = 0; k < v242; ++k )
  {
    if ( k >= 8 )
    {
      v22 = a7 + 216;
      v24 = (_WORD *)(*(_QWORD *)(a7 + 376) + 16 * (k - 8 + 6LL));
    }
    else
    {
      v24 = (_WORD *)(v22 + 16 * (k + 2LL));
    }
    if ( *v24 > 0x200u )
    {
      v236 = -1073741811;
      CmpRecordParseFailure(a7, 1536, -1073741811);
      v12 = 0LL;
      goto LABEL_209;
    }
  }
  v25 = HIBYTE(v237);
LABEL_19:
  *(_QWORD *)(a7 + 392) = v19;
  *(_QWORD *)(a7 + 416) = v19;
  v26 = v21 + *(unsigned __int16 *)(v19 + 12) - (unsigned int)(unsigned __int16)v12;
  if ( (unsigned int)v26 > 0x200 )
  {
    v236 = -1073741811;
    CmpRecordParseFailure(a7, 1792, -1073741811);
    v12 = 0LL;
    goto LABEL_209;
  }
  if ( !v25 )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v26);
    HIBYTE(v237) = 1;
  }
  v27 = *(_WORD *)(v249 + 48);
  if ( (v27 & 9) != 0 )
  {
    v186 = -1073740763;
    if ( (v27 & 1) == 0 )
      v186 = -1073741444;
    v236 = v186;
    CmpRecordParseFailure(a7, 2048, v186);
    v12 = 0LL;
    goto LABEL_209;
  }
  if ( (_WORD)v12 == v21 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v19);
    BugCheckParameter2 = v19;
    v12 = v19;
    if ( v19 == v14 )
    {
      v239 = 0;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(v19);
      v235 = 1;
    }
  }
  else
  {
    v28 = CmpPerformCompleteKcbCacheLookup(
            (volatile signed __int64 *)v19,
            (unsigned __int16)v12,
            v21,
            a7 + 216,
            a7,
            &BugCheckParameter2,
            (char *)&v246 + 1,
            (__int64)&v253);
    v236 = v28;
    if ( v28 < 0 || v28 == 259 )
    {
      CmpRecordParseFailure(a7, 2432, v28);
      v112 = HIBYTE(v246);
      v12 = BugCheckParameter2;
      goto LABEL_207;
    }
    LOWORD(v12) = v253 + v12;
    *(_BYTE *)(a7 + 424) = v253;
    v29 = HIBYTE(v246);
    *(_DWORD *)&v240[3] = v12;
    v12 = BugCheckParameter2;
    *(_QWORD *)(a7 + 400) = BugCheckParameter2;
    *(_QWORD *)(a7 + 416) = v12;
    v235 = v29;
  }
  if ( *(_WORD *)&v240[3] == v21 && (*(_DWORD *)a7 & 1) == 0 )
  {
    CmpUnlockHashEntryByKcb(v12);
    v235 = 0;
  }
  CmpLockKcbShared(v12);
  if ( *(__int16 *)&v240[3] < v21 )
  {
    v40 = (unsigned int)*(__int16 *)&v240[3];
    if ( (unsigned int)v40 >= 8 )
    {
      v42 = 16LL * (unsigned int)(v40 - 8);
      v41 = *(_QWORD *)(a7 + 376) + 104LL;
    }
    else
    {
      v41 = 16 * v40;
      v42 = a7 + 256;
    }
    DestinationString.Buffer = *(wchar_t **)(v41 + v42);
    DestinationString.Length = v256 - 2 * (((__int64)DestinationString.Buffer - *((_QWORD *)&v256 + 1)) >> 1);
    DestinationString.MaximumLength = DestinationString.Length;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  v30 = (int *)(*(_QWORD *)v254 + 32LL);
  if ( CmpVEEnabled )
  {
    if ( (*(_DWORD *)(a7 + 24) & 0x10) != 0 )
    {
      v31 = -1073741199;
    }
    else if ( *(_WORD *)(v12 + 66) )
    {
      v31 = -1073741199;
    }
    else if ( (unsigned __int8)CmpIsKcbInvolvedInVirtualization(v12) )
    {
      if ( (unsigned __int8)CmpIsSystemEntity((unsigned __int8)v238) )
      {
        v31 = -1073741199;
      }
      else if ( (*(_DWORD *)a7 & 8) != 0 )
      {
        v31 = -1073741199;
      }
      else
      {
        if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
        {
          CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
          *(_DWORD *)(a7 + 160) |= 1u;
        }
        if ( (*(_DWORD *)(v12 + 184) & 0x2000000) != 0 )
          v31 = CmpVEExecuteVirtualStoreParseLogic(v12, &DestinationString, a7, v252);
        else
          v31 = CmpVEExecuteRealStoreParseLogic(
                  v12,
                  (__m128i *)&DestinationString,
                  (_DWORD *)a7,
                  (UNICODE_STRING *)v252,
                  v30);
      }
    }
    else
    {
      v31 = -1073741199;
    }
  }
  else
  {
    v31 = -1073741199;
  }
  v236 = v31;
  CmpUnlockKcb(v12);
  v35 = v236;
  if ( v236 != -1073741199 )
  {
    v160 = 2496;
    goto LABEL_325;
  }
  v36 = *(_QWORD **)(a7 + 64);
  v37 = *(_QWORD *)(v12 + 32);
  if ( v36 && v36 != (_QWORD *)v37 )
  {
    if ( (*(_DWORD *)(v37 + 4120) & 1) != 0 )
    {
      CmpLockHiveListShared(v33, v32, (unsigned int)v236, v34);
      v38 = (_QWORD **)(v37 + 4128);
      for ( m = *v38; m != v38; m = (_QWORD *)*m )
      {
        if ( m - 516 == v36 )
        {
          CmpUnlockHiveList();
          goto LABEL_59;
        }
      }
      CmpUnlockHiveList();
    }
    if ( PsIsCurrentThreadInServerSilo() )
    {
      v178 = dword_140E09EE8;
      if ( (unsigned int)dword_140E09EE8 > 5 )
      {
        if ( (*(_QWORD *)&qword_140E09EF8 & 0x200000010000LL) != 0
          && (qword_140E09F00 & 0x200000010000LL) == qword_140E09F00 )
        {
          v261 = 0x1000000LL;
          v275 = &v261;
          v276 = 8LL;
          tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&byte_140055F0F, 0x200000010000LL, 3u, &v273);
          v178 = dword_140E09EE8;
        }
        if ( v178 > 5 )
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09EE8,
            (unsigned __int8 *)byte_140055F61,
            0LL,
            0LL,
            2u,
            &v273);
      }
    }
    v179 = *(unsigned __int8 *)(a7 + 426);
    v12 = BugCheckParameter2;
    v236 = -1073741790;
    if ( (unsigned __int8)v179 < 4u )
    {
      *(_DWORD *)(a7 + 8 * v179 + 428) = -1073741790;
      *(_DWORD *)(a7 + 8LL * (unsigned __int8)(*(_BYTE *)(a7 + 426))++ + 432) = 2560;
    }
    goto LABEL_206;
  }
LABEL_59:
  if ( !v15 && !v255 )
  {
    v12 = BugCheckParameter2;
    v43 = 0LL;
    goto LABEL_62;
  }
  v12 = BugCheckParameter2;
  if ( *(_QWORD *)(BugCheckParameter2 + 32) == CmpMasterHive )
  {
    HIBYTE(v244) = 1;
    v15 = 0LL;
    v43 = 0LL;
  }
  else
  {
    if ( !v15 && !v255 || !*(_WORD *)(BugCheckParameter2 + 66) )
    {
      v43 = v255;
      goto LABEL_62;
    }
    CmpLogUnsupportedOperation(8LL);
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      v236 = -1072103419;
      v160 = 2816;
      v35 = -1072103419;
LABEL_325:
      CmpRecordParseFailure(a7, v160, v35);
      goto LABEL_206;
    }
    v15 = 0LL;
    v43 = 0LL;
  }
LABEL_62:
  if ( !CmpTransSilentIgnore() && (v15 || v43) )
  {
    v44 = *(_QWORD *)(v12 + 32);
    if ( !v44
      || ((v15 & 1) == 0
        ? (v45 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v44 + 4160), v15, v43, 0, (__int64)v241))
        : (v45 = CmpTransSearchAddLightWeightTrans(v15, *(_QWORD *)(v12 + 32), 0LL, v241)),
          v45 < 0) )
    {
      if ( v235 )
      {
        CmpUnlockHashEntryByKcb(v12);
        v235 = 0;
      }
      CmpUnlockRegistry(v44);
      v169 = *(_QWORD *)(v12 + 32);
      if ( v169 )
      {
        if ( (v15 & 1) != 0 )
          v170 = CmpTransSearchAddLightWeightTrans(v15, *(_QWORD *)(v12 + 32), 1LL, v241);
        else
          v170 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v169 + 4160), v15, v43, 1, (__int64)v241);
      }
      else
      {
        v170 = -1073741811;
      }
      v236 = v170;
      CmpLockRegistry(v169);
      v171 = v236;
      HIBYTE(v237) = 1;
      if ( v236 >= 0 )
      {
        v171 = -1073741267;
        v236 = -1073741267;
      }
      CmpRecordParseFailure(a7, 3072, v171);
      goto LABEL_206;
    }
  }
  started = CmpStartKcbStack(v268, *(unsigned __int16 *)(v12 + 66));
  v236 = started;
  if ( started < 0 )
  {
    v35 = started;
    v160 = 3328;
    goto LABEL_325;
  }
  v47 = CmpStartKcbStack(v270, *(unsigned __int16 *)(v12 + 66));
  v236 = v47;
  if ( v47 < 0 )
  {
    v35 = v47;
    v160 = 3584;
    goto LABEL_325;
  }
  v48 = v268;
  v49 = v270;
  CmpPopulateKcbStack(v268, v12);
  v50 = v242;
  LOWORD(v51) = *(_WORD *)&v240[3];
  v52 = v242;
  while ( 1 )
  {
    if ( (__int16)v51 >= v50 )
    {
      v12 = BugCheckParameter2;
      *(_QWORD *)&v240[3] = v49;
      v134 = *(_QWORD *)(BugCheckParameter2 + 72);
      if ( v134 )
      {
        CmpPopulateKcbStack(v49, v134);
      }
      else
      {
        v49 = 0LL;
        *(_QWORD *)&v240[3] = 0LL;
      }
      v135 = *(_QWORD *)(v249 + 8);
      if ( *(_QWORD *)(v12 + 72) != v135 && v12 != v135 )
      {
        CmpLockKcbShared(v135);
        HIBYTE(v238) = 1;
      }
      if ( v49 )
      {
        CmpLockKcbStackShared(v49);
        LOBYTE(v237) = 1;
      }
      CmpLockKcbStackShared(v48);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v249, 0LL) )
      {
        v187 = -1073740763;
        if ( (*(_BYTE *)(v249 + 48) & 1) == 0 )
          v187 = -1073741444;
        v236 = v187;
        CmpRecordParseFailure(a7, 5888, v187);
        goto LABEL_293;
      }
      if ( (*(_DWORD *)(v12 + 8) & 0x20000) != 0 )
      {
        v236 = -1073741772;
        CmpRecordParseFailure(a7, 6016, -1073741772);
        goto LABEL_293;
      }
      v136 = v51 - 1;
      if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
      {
        v236 = -1073741772;
        CmpRecordParseFailure(a7, 6144, -1073741772);
        goto LABEL_293;
      }
      if ( !(unsigned __int8)CmRmIsKcbStackVisible(v48, *(_QWORD *)v241) )
      {
        v236 = -1073741772;
        CmpRecordParseFailure(a7, 6400, -1073741772);
        goto LABEL_293;
      }
      if ( (*(_DWORD *)a7 & 2) == 0 )
      {
        if ( (*(_DWORD *)a7 & 0x20) == 0 )
        {
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v48, *(_QWORD *)v241) )
          {
            if ( (unsigned __int8)CmpIsKeyStackSymlink(v48) && !_bittest((const signed __int32 *)a7, 9u) )
            {
              if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
              {
                v236 = -1073741771;
                CmpRecordParseFailure(a7, 14080, -1073741771);
                goto LABEL_293;
              }
              if ( (_BYTE)v237 )
              {
                CmpUnlockKcbStack((__int64)v49);
                LOBYTE(v237) = 0;
              }
              if ( HIBYTE(v238) )
              {
                CmpUnlockKcb(*(_QWORD *)(v249 + 8));
                HIBYTE(v238) = 0;
              }
              if ( v235 )
              {
                CmpUnlockHashEntryByKcb(v12);
                v235 = 0;
              }
              SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                     (__int64)v48,
                                     a7 + 216,
                                     0,
                                     0,
                                     *(__int64 *)v241,
                                     a7,
                                     (__int64)&v263,
                                     v252,
                                     (ULONG_PTR *)(a7 + 88),
                                     &v257);
              v236 = SymbolicLinkTarget;
              if ( SymbolicLinkTarget < 0 )
              {
                CmpRecordParseFailure(a7, 14336, SymbolicLinkTarget);
              }
              else
              {
                *(_DWORD *)a7 &= ~8u;
                if ( !*(_QWORD *)(a7 + 64) )
                {
                  v177 = *(_QWORD *)(v257 + 32);
                  if ( (*(_DWORD *)(v177 + 4120) & 1) != 0 )
                    *(_QWORD *)(a7 + 64) = v177;
                }
                v236 = 260;
                CmpRecordParseFailure(a7, 14592, 260);
              }
              goto LABEL_297;
            }
            if ( HIBYTE(v244) )
            {
              v236 = -1073741811;
              CmpRecordParseFailure(a7, 14848, -1073741811);
              goto LABEL_293;
            }
            if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
            {
              v236 = -1073741772;
              CmpRecordParseFailure(a7, 15104, -1073741772);
              goto LABEL_293;
            }
            if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
            {
              v236 = -1073741771;
              CmpRecordParseFailure(a7, 15360, -1073741771);
              goto LABEL_293;
            }
            v137 = CmpDoWritethroughReparse(v12, (__int64)v48, (__int64)v49, 0, 0LL, a7, (UNICODE_STRING *)v252);
            v236 = v137;
            if ( v137 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 15424, v137);
              goto LABEL_293;
            }
            v138 = CmpVEExecuteOpenLogic(v12, v238, *(_QWORD *)v254 + 32LL);
            v236 = v138;
            if ( v138 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 15488, v138);
              goto LABEL_293;
            }
            v139 = v241[0];
            KeyBody = CmpCreateKeyBody(v12, 2, (__int64)v48, (__int64)&v251, (__int64)v240);
            v236 = KeyBody;
            if ( KeyBody >= 0 )
              goto LABEL_277;
            if ( KeyBody == -1073741444 )
            {
              KeyBody = -1073741772;
              v236 = -1073741772;
            }
            CmpRecordParseFailure(a7, 15552, KeyBody);
LABEL_493:
            Object = (PVOID)v251;
            goto LABEL_293;
          }
          if ( HIBYTE(v244) )
          {
            v236 = -1073741811;
            CmpRecordParseFailure(a7, 9728, -1073741811);
            goto LABEL_293;
          }
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v49, *(_QWORD *)v241)
            || !(unsigned __int8)CmRmIsKcbStackVisible(v49, *(_QWORD *)v241) )
          {
            v236 = -1073741772;
            CmpRecordParseFailure(a7, 9984, -1073741772);
            goto LABEL_293;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(v12 + 72) + 184LL) & 0x20000) != 0 )
          {
            v236 = -1073741772;
            CmpRecordParseFailure(a7, 10240, -1073741772);
            goto LABEL_293;
          }
          if ( (*(_DWORD *)a7 & 1) == 0 )
          {
            if ( BYTE4(WheapPfaLock.InitialStack)
              && (struct _KTHREAD *)WheapPfaLock.QuantumTarget != KeGetCurrentThread()
              && *(_QWORD *)(v12 + 32) == CmpMasterHive
              && *(_WORD *)(v12 + 12) == 3
              && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(a7 + 216, v136),
                  (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex)) )
            {
              *(_DWORD *)a7 |= 0x100u;
              v236 = 259;
              CmpRecordParseFailure(a7, 10496, 259);
            }
            else
            {
              v236 = -1073741772;
              CmpRecordParseFailure(a7, 10752, -1073741772);
            }
            goto LABEL_293;
          }
          if ( *(_QWORD *)(v12 + 32) == CmpMasterHive
            && CmpNoMasterCreates
            && (struct _KTHREAD *)WheapPfaLock.QuantumTarget != KeGetCurrentThread() )
          {
            if ( BYTE4(WheapPfaLock.InitialStack)
              && *(_WORD *)(v12 + 12) == 3
              && (v182 = CmpGetComponentNameAtIndex(a7 + 216, v136), (unsigned __int8)CmpWaitForHiveMount(v182)) )
            {
              *(_DWORD *)a7 |= 0x100u;
              v236 = 259;
              CmpRecordParseFailure(a7, 11008, 259);
            }
            else
            {
              v236 = -1073741811;
              CmpRecordParseFailure(a7, 11264, -1073741811);
            }
            goto LABEL_293;
          }
          v162 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(a7 + 216, v136);
          v163 = CmpDoWritethroughReparse(v12, (__int64)v48, *(__int64 *)&v240[3], 1, v162, a7, (UNICODE_STRING *)v252);
          v236 = v163;
          if ( v163 != -1073741199 )
          {
            CmpRecordParseFailure(a7, 11392, v163);
            v49 = *(int **)&v240[3];
            goto LABEL_293;
          }
          v164 = CmpCreateKeyBody(v12, 0, (__int64)v48, (__int64)&v251, (__int64)v240);
          v236 = v164;
          if ( v164 < 0 )
          {
            CmpRecordParseFailure(a7, 11456, v164);
            v49 = *(int **)&v240[3];
            Object = (PVOID)v251;
            goto LABEL_293;
          }
          if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
            *(_DWORD *)(a7 + 160) |= 1u;
          }
          v165 = *(_QWORD *)(v12 + 72);
          Object = (PVOID)v251;
          if ( *(_DWORD *)(v165 + 40) == -1 )
          {
            if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                     16 * (*(_DWORD *)(a7 + 24) & 2u),
                                     *(_DWORD *)&v240[3],
                                     a7,
                                     v254[0],
                                     v238,
                                     16 * (*(_DWORD *)(a7 + 24) & 2u),
                                     (*(_DWORD *)(a7 + 24) & 4) != 0,
                                     *(__int64 *)v241,
                                     v251,
                                     1,
                                     (__int64)&v236) )
            {
              if ( KeGetCurrentThread()->PreviousMode == 1 )
              {
                CurrentThreadProcess = PsGetCurrentThreadProcess();
                DoesProcessBelongToServiceSession = CmpDoesProcessBelongToServiceSession(CurrentThreadProcess);
                v49 = *(int **)&v240[3];
                if ( !DoesProcessBelongToServiceSession
                  && (unsigned __int8)CmpCheckKeyOwnerForPca(*(_QWORD *)&v240[3], *(_QWORD *)v241) )
                {
                  v222 = *(_QWORD *)(v12 + 72);
                  v240[1] = 1;
                  v262 = CmpConstructName(v222, v221);
                }
              }
              else
              {
                v49 = *(int **)&v240[3];
              }
              CmpRecordParseFailure(a7, 11520, v236);
              goto LABEL_293;
            }
            CmpUnlockKcbStack((__int64)v48);
            CmpUnlockKcbStack(*(__int64 *)&v240[3]);
            if ( HIBYTE(v238) )
            {
              CmpUnlockKcb(*(_QWORD *)(v249 + 8));
              HIBYTE(v238) = 0;
            }
            v223 = CmpPromoteKey(*(__int64 *)&v240[3], 0, 1);
            v236 = v223;
            if ( v223 < 0 )
            {
              if ( v223 == -1073741444 )
              {
                v223 = -1073741772;
                v236 = -1073741772;
              }
              CmpRecordParseFailure(a7, 11776, v223);
              goto LABEL_197;
            }
          }
          else
          {
            CmpUnlockKcbStack((__int64)v48);
            CmpUnlockKcbStack(*(__int64 *)&v240[3]);
            CmpLockKcbStackTopExclusiveRestShared(*(_QWORD *)&v240[3]);
          }
          CmpLockKcbStackTopExclusiveRestShared(v48);
          if ( (unsigned __int8)CmRmIsKcbStackVisible(v48, *(_QWORD *)v241) )
          {
            if ( (*(_DWORD *)(v12 + 8) & 0x20000) != 0 )
            {
              v183 = 12160;
            }
            else
            {
              if ( (unsigned __int8)CmpIsKeyStackDeleted(v48, *(_QWORD *)v241) )
              {
                v49 = *(int **)&v240[3];
                if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)&v240[3], *(_QWORD *)v241)
                  || !(unsigned __int8)CmRmIsKcbStackVisible(v49, *(_QWORD *)v241) )
                {
                  v167 = 12288;
                  goto LABEL_441;
                }
                v166 = *(_QWORD *)(v12 + 72);
                if ( (*(_DWORD *)(v166 + 184) & 0x20000) != 0 )
                {
                  v167 = 12544;
LABEL_441:
                  v236 = -1073741772;
                  v185 = -1073741772;
LABEL_442:
                  CmpRecordParseFailure(a7, v167, v185);
                  LOBYTE(v237) = 1;
                  goto LABEL_293;
                }
                LOBYTE(BugCheckParameter4) = v238;
                Logic = CmpVEExecuteCreateLogic(
                          v166,
                          v12,
                          v162,
                          *(_QWORD *)v254,
                          BugCheckParameter4,
                          16 * (*(_DWORD *)(a7 + 24) & 2u),
                          *(_QWORD *)v241,
                          a7,
                          v252);
                v236 = Logic;
                if ( Logic == -1073741739 )
                {
                  *(_DWORD *)a7 |= 0x400u;
                  v236 = -1073741267;
                  CmpRecordParseFailure(a7, 12672, -1073741267);
                  LOBYTE(v237) = 1;
                  goto LABEL_293;
                }
                if ( Logic != -1073741199 )
                {
                  CmpRecordParseFailure(a7, 12736, Logic);
                  LOBYTE(v237) = 1;
                  goto LABEL_293;
                }
                if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                         16 * (*(_DWORD *)(a7 + 24) & 2u),
                                         (_DWORD)v49,
                                         a7,
                                         v254[0],
                                         v238,
                                         16 * (*(_DWORD *)(a7 + 24) & 2u),
                                         (*(_DWORD *)(a7 + 24) & 4) != 0,
                                         *(__int64 *)v241,
                                         (__int64)Object,
                                         0,
                                         (__int64)&v236) )
                {
                  if ( KeGetCurrentThread()->PreviousMode == 1 )
                  {
                    v226 = PsGetCurrentThreadProcess();
                    if ( !(unsigned __int8)CmpDoesProcessBelongToServiceSession(v226) )
                    {
                      if ( (unsigned __int8)CmpCheckKeyOwnerForPca(v49, *(_QWORD *)v241) )
                      {
                        v228 = *(_QWORD *)(v12 + 72);
                        v240[1] = 1;
                        v262 = CmpConstructName(v228, v227);
                      }
                    }
                  }
                  CmpRecordParseFailure(a7, 12800, v236);
                  LOBYTE(v237) = 1;
                  goto LABEL_293;
                }
                LOBYTE(v225) = 1;
                v229 = CmpEnlistKeyBody((_DWORD)Object, v12, *(_DWORD *)v241, v225, (__int64)v48);
                v236 = v229;
                if ( v229 < 0 )
                {
                  CmpRecordParseFailure(a7, 12928, v229);
                  LOBYTE(v237) = 1;
                  goto LABEL_293;
                }
                Child = CmpCreateChild(
                          (_DWORD)v49,
                          (_DWORD)v48,
                          v254[0],
                          (_DWORD)v162,
                          a7,
                          8 * (*(_WORD *)(a7 + 24) & 2u),
                          0,
                          0,
                          *(__int64 *)v241);
                v236 = Child;
                if ( Child < 0 )
                {
                  CmpRecordParseFailure(a7, 12992, Child);
                  LOBYTE(v237) = 1;
                  goto LABEL_293;
                }
                v139 = v241[0];
                *(_DWORD *)(a7 + 32) = 1;
LABEL_385:
                v141 = (__int64)Object;
                LOBYTE(v237) = 1;
LABEL_278:
                if ( *(_DWORD *)(a7 + 32) == 1 )
                {
                  *(_WORD *)(v141 + 4) = *(_WORD *)(*(_QWORD *)(v141 + 8) + 66LL);
                }
                else
                {
                  if ( !(unsigned __int8)CmpCheckOpenAccessOnKeyBody(
                                           v141,
                                           (int)v48,
                                           a7,
                                           v254[0],
                                           v238,
                                           (*(_DWORD *)(a7 + 24) & 4) != 0,
                                           v139,
                                           (__int64)&v245,
                                           (__int64)&v236) )
                  {
                    v240[1] = v245;
                    if ( v245 )
                    {
                      if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                      {
                        CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
                        *(_DWORD *)(a7 + 160) |= 1u;
                      }
                      v262 = CmpConstructName(v12, v142);
                    }
                    CmpRecordParseFailure(a7, 15584, v236);
LABEL_285:
                    if ( !v248 )
                      goto LABEL_293;
                    goto LABEL_286;
                  }
                  v141 = (__int64)Object;
                  v240[1] = v245;
                }
                Object = 0LL;
                *v265 = v141;
                if ( !*(_DWORD *)(a7 + 32) )
                  *(_DWORD *)(a7 + 32) = 2;
                if ( v240[0] )
                  v236 = 1073741846;
                else
                  v236 = 0;
                goto LABEL_285;
              }
              if ( (unsigned __int8)CmpIsKeyStackSymlink(v48) && !_bittest((const signed __int32 *)a7, 9u) )
              {
                if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                {
                  CmpUnlockKcbStack(*(__int64 *)&v240[3]);
                  v106 = v249;
                  if ( HIBYTE(v238) )
                  {
                    CmpUnlockKcb(*(_QWORD *)(v249 + 8));
                    HIBYTE(v238) = 0;
                  }
                  if ( v235 )
                  {
                    CmpUnlockHashEntryByKcb(v12);
                    v235 = 0;
                  }
                  v231 = CmpGetSymbolicLinkTarget(
                           (__int64)v48,
                           a7 + 216,
                           0,
                           0,
                           *(__int64 *)v241,
                           a7,
                           (__int64)&v263,
                           v252,
                           (ULONG_PTR *)(a7 + 88),
                           &v257);
                  v236 = v231;
                  if ( v231 >= 0 )
                  {
                    *(_DWORD *)a7 &= ~8u;
                    if ( !*(_QWORD *)(a7 + 64) )
                    {
                      v232 = *(_QWORD *)(v257 + 32);
                      if ( (*(_DWORD *)(v232 + 4120) & 1) != 0 )
                        *(_QWORD *)(a7 + 64) = v232;
                    }
                    v236 = 260;
                    CmpRecordParseFailure(a7, 13440, 260);
                  }
                  else
                  {
                    CmpRecordParseFailure(a7, 13312, v231);
                  }
                  goto LABEL_198;
                }
                v236 = -1073741771;
                v183 = 13056;
                v184 = -1073741771;
                goto LABEL_479;
              }
              if ( (*(_DWORD *)(v12 + 184) & 0x20000) == 0 )
              {
                if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                {
                  v49 = *(int **)&v240[3];
                  v172 = CmpDoWritethroughReparse(
                           v12,
                           (__int64)v48,
                           *(__int64 *)&v240[3],
                           0,
                           0LL,
                           a7,
                           (UNICODE_STRING *)v252);
                  v236 = v172;
                  if ( v172 != -1073741199 )
                  {
                    v185 = v172;
                    v167 = 13888;
                    goto LABEL_442;
                  }
                  v173 = CmpVEExecuteOpenLogic(v12, v238, *(_QWORD *)v254 + 32LL);
                  v236 = v173;
                  if ( v173 != -1073741199 )
                  {
                    v185 = v173;
                    v167 = 13952;
                    goto LABEL_442;
                  }
                  v139 = v241[0];
                  LOBYTE(v174) = 1;
                  v175 = CmpEnlistKeyBody((_DWORD)Object, v12, *(_DWORD *)v241, v174, (__int64)v48);
                  v236 = v175;
                  if ( v175 < 0 )
                  {
                    v185 = v175;
                    v167 = 14016;
                    goto LABEL_442;
                  }
                  goto LABEL_385;
                }
                v236 = -1073741771;
                v183 = 13824;
                v184 = -1073741771;
LABEL_479:
                CmpRecordParseFailure(a7, v183, v184);
                v49 = *(int **)&v240[3];
                LOBYTE(v237) = 1;
                goto LABEL_293;
              }
              v183 = 13568;
            }
          }
          else
          {
            v183 = 12032;
          }
          v236 = -1073741772;
          v184 = -1073741772;
          goto LABEL_479;
        }
        CmpUnlockKcbStack((__int64)v48);
        CmpUnlockKcbStack((__int64)v49);
        CmpLockKcbStackTopExclusiveRestShared(v49);
        CmpLockKcbStackTopExclusiveRestShared(v48);
        if ( (unsigned __int8)CmpIsKeyStackDeleted(v49, *(_QWORD *)v241) )
        {
          v236 = -1073741772;
          CmpRecordParseFailure(a7, 8960, -1073741772);
          goto LABEL_293;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v12 + 72) + 184LL) & 0x20000) != 0 )
        {
          v236 = -1073741772;
          CmpRecordParseFailure(a7, 9216, -1073741772);
          goto LABEL_293;
        }
        v161 = CmpGetComponentNameAtIndex(a7 + 216, v136);
        if ( (*(_DWORD *)(v12 + 184) & 0x400000) == 0 && (*(_DWORD *)(v12 + 8) & 8) != 0 )
        {
          CmpDelayDerefKeyControlBlock(*(_QWORD *)(v12 + 104), (__int64)&v263);
          *(_QWORD *)(v12 + 104) = 0LL;
          *(_WORD *)(v12 + 8) &= ~8u;
        }
        *(_WORD *)(v12 + 186) |= 0x40u;
        *(_DWORD *)(v12 + 100) = -1;
        *(_DWORD *)(v12 + 96) = *(_DWORD *)(a7 + 56);
        v236 = CmpCreateKeyBody(v12, 3, (__int64)v48, (__int64)&v251, (__int64)v240);
        if ( v236 < 0 )
          goto LABEL_493;
        if ( (unsigned __int8)CmpIsKeyStackDeleted(v48, *(_QWORD *)v241) )
        {
          v236 = CmpCreateChild((_DWORD)v49, (_DWORD)v48, v254[0], v161, a7, 64, 0, 0, *(__int64 *)v241);
          if ( v236 < 0 )
            goto LABEL_493;
          v139 = v241[0];
          *(_DWORD *)(a7 + 32) = 1;
LABEL_277:
          v141 = v251;
          Object = (PVOID)v251;
          goto LABEL_278;
        }
LABEL_332:
        v139 = v241[0];
        goto LABEL_277;
      }
      CmpUnlockKcbStack((__int64)v48);
      CmpUnlockKcbStack((__int64)v49);
      v188 = v249;
      if ( HIBYTE(v238) )
        CmpUnlockKcb(*(_QWORD *)(v249 + 8));
      LOBYTE(v246) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
      if ( HIBYTE(v238) )
        CmpLockKcbShared(*(_QWORD *)(v188 + 8));
      CmpLockKcbStackTopExclusiveRestShared(v49);
      CmpLockKcbStackTopExclusiveRestShared(v48);
      v193 = (unsigned __int16 *)CmpGetComponentNameAtIndex(a7 + 216, v136);
      ComponentHashAtIndex = CmpGetComponentHashAtIndex(v194, v192);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v249, 0LL) )
      {
        v196 = -1073740763;
        if ( (*(_BYTE *)(v249 + 48) & 1) == 0 )
          v196 = -1073741444;
        v236 = v196;
        CmpRecordParseFailure(a7, 6656, v196);
        v14 = v247;
        goto LABEL_293;
      }
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v49, *(_QWORD *)v241) )
      {
        v197 = 6912;
        goto LABEL_518;
      }
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v48, *(_QWORD *)v241) )
      {
        v199 = *(_QWORD *)(v12 + 72);
        if ( *(_QWORD *)(v199 + 32) == CmpMasterHive )
        {
          if ( (*(_DWORD *)(v199 + 184) & 0x20000) == 0 )
          {
            if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
            {
              CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
              *(_DWORD *)(a7 + 160) |= 1u;
            }
            v200 = *(unsigned int *)(a7 + 40);
            v201 = *(_QWORD *)(a7 + 48);
            if ( (_DWORD)v200 == -1 )
            {
              HiveRootCell = CmpCreateHiveRootCell(v201, a7 + 40);
              v236 = HiveRootCell;
              if ( HiveRootCell < 0 )
              {
                CmpRecordParseFailure(a7, 7808, HiveRootCell);
                goto LABEL_291;
              }
            }
            else
            {
              updated = CmpUpdateHiveRootCellFlags(v201, v200);
              v236 = updated;
              if ( updated < 0 )
              {
                CmpRecordParseFailure(a7, 7936, updated);
                goto LABEL_291;
              }
            }
            v204 = BugCheckParameter2;
            v205 = BugCheckParameter2;
            *(_WORD *)(BugCheckParameter2 + 186) |= 2u;
            v236 = CmpCreateKeyControlBlock(
                     *(_QWORD *)(a7 + 48),
                     -1,
                     v205,
                     *(_QWORD *)(a7 + 80),
                     1,
                     v193,
                     ComponentHashAtIndex,
                     0,
                     &v261);
            *(_WORD *)(v204 + 186) &= ~2u;
            if ( v236 < 0 )
            {
              CmpRecordParseFailure(a7, 0x2000, v236);
              v49 = *(int **)&v240[3];
              goto LABEL_291;
            }
            v206 = v204;
            v207 = v261;
            BugCheckParameter2 = v261;
            CmpDereferenceKeyControlBlockUnsafe(v206);
            CmpUnlockHashEntryByKcb(v206);
            v235 = 0;
            v208 = CmpStartKcbStackForTopLayerKcb((__int64)&ApcState, v207);
            v236 = v208;
            if ( v208 < 0 )
            {
              CmpRecordParseFailure(a7, 8448, v208);
              v49 = *(int **)&v240[3];
              goto LABEL_291;
            }
            *(_WORD *)(v206 + 186) |= 2u;
            CmpLockKcbStackTopExclusiveRestShared(&ApcState);
            *(_WORD *)(v206 + 186) &= ~2u;
            v248 = 1;
            v209 = CmpCreateKeyBody(v207, 3, (__int64)&ApcState, (__int64)&v251, (__int64)v240);
            v236 = v209;
            if ( v209 >= 0 )
            {
              HvLockHiveFlusherShared(*(_QWORD *)(v206 + 32), v210, v211, v212);
              HvLockHiveFlusherExclusive(*(_QWORD *)(v207 + 32));
              v213 = *(_QWORD *)(v207 + 32);
              v214 = *(_DWORD *)(v213 + 104);
              v215 = HvpMarkCellDirty(v213, *(unsigned int *)(a7 + 40));
              v236 = v215;
              if ( v215 >= 0 )
              {
                v236 = CmpCreateChild(
                         *(_DWORD *)&v240[3],
                         (_DWORD)v48,
                         v254[0],
                         (_DWORD)v193,
                         a7,
                         10,
                         0,
                         1,
                         *(__int64 *)v241);
                if ( v236 >= 0 )
                {
                  v12 = BugCheckParameter2;
                  LOBYTE(v216) = 1;
                  v217 = BugCheckParameter2;
                  *(_DWORD *)(BugCheckParameter2 + 40) = *(_DWORD *)(a7 + 40);
                  *(_DWORD *)(CmpGetKeyNodeForKcb(v217, &v260, v216) + 16) = *(_DWORD *)(v206 + 40);
                  ++*(_QWORD *)(v12 + 304);
                  CmpRebuildKcbCacheFromNode(v12);
                  v218 = *(_QWORD *)(v12 + 32);
                  if ( (*(_BYTE *)(v218 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v218, &v260);
                  else
                    HvpReleaseCellPaged(v218, &v260);
                  if ( !v214 )
                    HvResetDirtyData(*(_QWORD *)(v12 + 32));
                  HvUnlockHiveFlusherExclusive(*(_QWORD *)(v12 + 32));
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v206 + 32));
                  *(_WORD *)(v206 + 8) |= 8u;
                  CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v12);
                  *(_QWORD *)(v206 + 104) = v12;
                  CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
                  v14 = v247;
                  v49 = *(int **)&v240[3];
                  v258 = WORD1(ApcState.ApcListHead[0].Flink);
                  LOBYTE(v246) = 0;
                  *(_DWORD *)(a7 + 32) = 1;
                  goto LABEL_332;
                }
              }
              else
              {
                CmpRecordParseFailure(a7, 8704, v215);
              }
              v12 = BugCheckParameter2;
              HvUnlockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter2 + 32));
              HvUnlockHiveFlusherShared(*(_QWORD *)(v206 + 32));
              v14 = v247;
              v49 = *(int **)&v240[3];
              Object = (PVOID)v251;
              v258 = WORD1(ApcState.ApcListHead[0].Flink);
            }
            else
            {
              CmpRecordParseFailure(a7, 8576, v209);
              v14 = v247;
              v12 = BugCheckParameter2;
              v49 = *(int **)&v240[3];
              Object = (PVOID)v251;
              v258 = WORD1(ApcState.ApcListHead[0].Flink);
            }
LABEL_286:
            v143 = 0;
            if ( (v258 & 0x8000u) != 0LL )
              goto LABEL_293;
            v144 = (char *)ApcState.ApcListHead[1].Blink - (char *)&ApcState.ApcListHead[0].Blink;
            p_Blink = &ApcState.ApcListHead[0].Blink;
            do
            {
              if ( v143 >= 2 )
                v146 = (ULONG_PTR *)((char *)p_Blink + v144 - 16);
              else
                v146 = (ULONG_PTR *)p_Blink;
              CmpUnlockKcb(*v146);
              ++v143;
              ++p_Blink;
            }
            while ( v143 <= (__int16)v258 );
LABEL_291:
            v14 = v247;
            goto LABEL_292;
          }
          v197 = 7680;
LABEL_518:
          v236 = -1073741772;
          CmpRecordParseFailure(a7, v197, -1073741772);
          v14 = v247;
          goto LABEL_293;
        }
        v198 = 7424;
      }
      else
      {
        v198 = 7168;
      }
      v236 = -1073741790;
      CmpRecordParseFailure(a7, v198, -1073741790);
      v14 = v247;
      goto LABEL_293;
    }
    v53 = *((_WORD *)v48 + 1);
    for ( n = 0; n <= v53; ++n )
    {
      if ( n >= 2 )
        v55 = *(_QWORD *)(v48[3] + 8LL * n - 16);
      else
        v55 = v48[n + 1];
      CmpLockKcbShared(v55);
      v53 = *((_WORD *)v48 + 1);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x20000) != 0 )
    {
      v71 = 3968;
      goto LABEL_112;
    }
    v255 = 0LL;
    while ( 1 )
    {
      if ( v53 < 0 )
        goto LABEL_110;
      v56 = v53 >= 2 ? *(_QWORD *)(v48[3] + 8LL * v53 - 16) : v48[v53 + 1];
      if ( *(_WORD *)(v56 + 66) && *(_BYTE *)(v56 + 65) == 1 )
        goto LABEL_110;
      if ( *(_DWORD *)(v56 + 40) != -1 )
        break;
      --v53;
    }
    v57 = *(_QWORD *)v241;
    if ( *(_QWORD *)v241 )
      break;
LABEL_86:
    for ( ii = *((_WORD *)v48 + 1); ; --ii )
    {
      if ( ii < 0 )
        goto LABEL_92;
      v59 = ii >= 2 ? *(_QWORD *)(v48[3] + 8LL * ii - 16) : v48[ii + 1];
      if ( *(_DWORD *)(v59 + 40) != -1 )
        break;
    }
    if ( (*(_DWORD *)(v59 + 184) & 0x100000) != 0 )
    {
      v104 = CmpGetSymbolicLinkTarget(
               (__int64)v48,
               a7 + 216,
               *(__int16 *)&v240[3],
               v242,
               v57,
               a7,
               (__int64)&v263,
               v252,
               (ULONG_PTR *)(a7 + 88),
               &v257);
      v236 = v104;
      if ( v104 < 0 )
      {
        CmpRecordParseFailure(a7, 4608, v104);
        v12 = BugCheckParameter2;
      }
      else
      {
        *(_DWORD *)a7 &= ~8u;
        if ( !*(_QWORD *)(a7 + 64) )
        {
          v105 = *(_QWORD *)(v257 + 32);
          if ( (*(_DWORD *)(v105 + 4120) & 1) != 0 )
            *(_QWORD *)(a7 + 64) = v105;
        }
        v236 = 260;
        CmpRecordParseFailure(a7, 4864, 260);
        v12 = BugCheckParameter2;
      }
      goto LABEL_206;
    }
LABEL_92:
    for ( jj = 0; jj <= *((__int16 *)v48 + 1); ++jj )
    {
      if ( jj >= 2 )
        v61 = *(_QWORD *)(v48[3] + 8LL * jj - 16);
      else
        v61 = v48[jj + 1];
      CmpUnlockKcb(v61);
    }
    v62 = (unsigned int)*(__int16 *)&v240[3];
    v247 = v14;
    if ( (unsigned int)v62 >= 8 )
    {
      v72 = *(_QWORD *)(a7 + 376);
      v247 = v14;
      v64 = *(_QWORD *)(a7 + 376) + 16 * ((unsigned int)(v62 - 8) + 6LL);
      v63 = *(_DWORD *)(v72 + 4LL * (unsigned int)(v62 - 8));
    }
    else
    {
      v63 = *(_DWORD *)(a7 + 216 + 4 * v62);
      v64 = a7 + 216 + 16 * (v62 + 2);
    }
    v65 = BugCheckParameter2;
    v66 = (*(_DWORD *)a7 & 1) != 0 && (_DWORD)v62 == v52 - 1;
    LODWORD(v234) = v63 + 37 * *(_DWORD *)(BugCheckParameter2 + 16);
    v67 = CmpWalkOneLevel(
            BugCheckParameter2,
            (int)v48,
            (int)v259,
            (int)v49,
            (__int64)&v244,
            v64,
            v63,
            v234,
            *(__int64 *)v241,
            v66,
            a7);
    v236 = v67;
    if ( BYTE4(WheapPfaLock.InitialStack) && v67 == -1073741772 )
    {
      if ( (struct _KTHREAD *)WheapPfaLock.QuantumTarget != KeGetCurrentThread()
        && *(_QWORD *)(v65 + 32) == CmpMasterHive )
      {
        v189 = *(_WORD *)&v240[3];
        if ( *(_WORD *)(v65 + 12) == 3 && *(__int16 *)&v240[3] > 0 )
        {
          v190 = CmpGetComponentNameAtIndex(a7 + 216, *(__int16 *)&v240[3] - 1);
          if ( (unsigned __int8)CmpWaitForHiveMount(v190) )
          {
            v159 = 5120;
            goto LABEL_508;
          }
          v189 = *(_WORD *)&v240[3];
        }
        if ( *(_WORD *)(v65 + 12) == 2 )
        {
          v191 = CmpGetComponentNameAtIndex(a7 + 216, v189);
          if ( (unsigned __int8)CmpWaitForHiveMount(v191) )
          {
            v159 = 5376;
LABEL_508:
            *(_DWORD *)a7 |= 0x100u;
            v158 = 259;
            v236 = 259;
            goto LABEL_315;
          }
        }
      }
      v67 = v236;
    }
    if ( v67 < 0 )
    {
      v158 = v67;
      v159 = 5504;
LABEL_315:
      CmpRecordParseFailure(a7, v159, v158);
      v12 = BugCheckParameter2;
      goto LABEL_206;
    }
    v68 = *(_QWORD *)v259;
    ++*(_BYTE *)(a7 + 425);
    *(_QWORD *)(a7 + 408) = v68;
    *(_QWORD *)(a7 + 416) = v68;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v65, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    HIWORD(v51) = *(_WORD *)&v240[5];
    v235 = v244;
    LOWORD(v51) = *(_WORD *)&v240[3] + 1;
    v168 = v48;
    BugCheckParameter2 = v68;
    v48 = (__int64 *)v49;
    *(_QWORD *)v259 = 0LL;
    v49 = (int *)v168;
    LOBYTE(v244) = 0;
    v50 = v242;
    *(_DWORD *)&v240[3] = v51;
  }
  v69 = v48[1];
  do
  {
    NextElement = CmListGetNextElement(v69 + 208, &v255, 32LL);
    if ( !NextElement )
      goto LABEL_86;
  }
  while ( *(_DWORD *)(NextElement + 68) != 2 );
  if ( !CmEqualTrans(*(_QWORD *)(NextElement + 56), v57) )
  {
    v57 = *(_QWORD *)v241;
    goto LABEL_86;
  }
LABEL_110:
  if ( !BYTE4(WheapPfaLock.InitialStack)
    || (struct _KTHREAD *)WheapPfaLock.QuantumTarget == KeGetCurrentThread()
    || *(_QWORD *)(BugCheckParameter2 + 32) != CmpMasterHive
    || *(_WORD *)(BugCheckParameter2 + 12) != 3
    || *(__int16 *)&v240[3] <= 0
    || (v180 = CmpGetComponentNameAtIndex(a7 + 216, *(__int16 *)&v240[3] - 1),
        !(unsigned __int8)CmpWaitForHiveMount(v180)) )
  {
    v71 = 4096;
LABEL_112:
    v236 = -1073741772;
    CmpRecordParseFailure(a7, v71, -1073741772);
    v49 = 0LL;
    goto LABEL_292;
  }
  *(_DWORD *)a7 |= 0x100u;
  v236 = 259;
  CmpRecordParseFailure(a7, 3840, 259);
  v49 = 0LL;
LABEL_292:
  v12 = BugCheckParameter2;
LABEL_293:
  for ( kk = 0; kk <= *((__int16 *)v48 + 1); ++kk )
  {
    if ( kk >= 2 )
      v148 = *(_QWORD *)(v48[3] + 8LL * kk - 16);
    else
      v148 = v48[kk + 1];
    CmpUnlockKcb(v148);
  }
LABEL_297:
  if ( (_BYTE)v237 )
  {
    for ( mm = 0; mm <= *((__int16 *)v49 + 1); ++mm )
    {
      if ( mm >= 2 )
        v150 = *(_QWORD *)(*((_QWORD *)v49 + 3) + 8LL * mm - 16);
      else
        v150 = *(_QWORD *)&v49[2 * mm + 2];
      CmpUnlockKcb(v150);
    }
  }
LABEL_197:
  v106 = v249;
LABEL_198:
  if ( HIBYTE(v238) )
    CmpUnlockKcb(*(_QWORD *)(v106 + 8));
  if ( (_BYTE)v246 )
  {
    v107 = *(_QWORD *)(a7 + 48);
    v108 = *(__int64 **)(v107 + 1648);
    v108[1] = 0LL;
    _m_prefetchw(v108);
    v109 = *v108;
    v110 = *v108 - 16;
    if ( (*v108 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v110 = 0LL;
    if ( (v109 & 2) != 0 || (v111 = *v108, v111 != _InterlockedCompareExchange64(v108, v110, v109)) )
      ExfReleasePushLock(v108);
    KeAbPostRelease((unsigned __int64)v108);
    CmpDereferenceHive((char *)v107);
  }
LABEL_206:
  v112 = v235;
LABEL_207:
  if ( v112 )
    CmpUnlockHashEntryByKcb(v12);
LABEL_209:
  if ( v239 )
    CmpUnlockHashEntryByKcb(v14);
LABEL_211:
  if ( v269[1] )
    CmSiFreeMemory(v269[1]);
  if ( v271[1] )
    CmSiFreeMemory(v271[1]);
  if ( ApcState.ApcListHead[1].Blink )
    CmSiFreeMemory((PPRIVILEGE_SET)ApcState.ApcListHead[1].Blink);
  v113 = *(_QWORD *)v259;
  if ( *(_QWORD *)v259 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v12);
    v114 = v113;
LABEL_220:
    CmpDereferenceKeyControlBlock(v114);
  }
  else if ( v12 )
  {
    v114 = v12;
    goto LABEL_220;
  }
  if ( v14 )
    CmpDereferenceKeyControlBlock(v14);
  v115 = *(_DWORD *)(a7 + 100);
  if ( v115 && (v115 & 2) != 0 )
  {
    v121 = *(_QWORD *)(a7 + 112);
    memset(&ApcState, 0, sizeof(ApcState));
    v122 = *(__int64 **)(v121 + 1648);
    v123 = *(_DWORD *)(v121 + 1656);
    v265 = v122;
    CmpAttachToRegistryProcess(&ApcState);
LABEL_244:
    if ( v9 >= v123 )
    {
      CmpDetachFromRegistryProcess(&ApcState);
      v10 = v267;
      *(_DWORD *)(v267 + 100) &= ~2u;
    }
    else
    {
      CmpLockHashEntryByIndexExclusive(v121, v9, v124, v125);
      v126 = &v122[3 * v9];
LABEL_246:
      v127 = v126 + 2;
      while ( 1 )
      {
        if ( !*v127 )
        {
          v131 = v264;
          CmpUnlockHashEntryByIndex((PVOID)v121);
          v122 = v265;
          v9 = v131 + 1;
          v264 = v9;
          goto LABEL_244;
        }
        v128 = (_QWORD *)(*v127 - 16LL);
        CmpLockKcbExclusive(v128);
        if ( !*v128 )
        {
          CmpRemoveFromDelayedClose((__int64)v128);
          CmpCleanUpKcbCacheWithLock((ULONG_PTR)v128, (__int64)&v263, v132, v133);
          CmpUnlockKcb((ULONG_PTR)v128);
          goto LABEL_246;
        }
        v129 = v128[3];
        v130 = CmpSyncKcbCacheForHive(v128, v121, &v263, 0LL);
        if ( ((v130 - 1) & 0xFFFFFFFD) == 0 )
          break;
        if ( v130 == 2 )
        {
          CmpUnlockKcb((ULONG_PTR)v128);
          *v127 = v129;
        }
        else
        {
          v127 = v128 + 3;
          CmpUnlockKcb((ULONG_PTR)v128);
        }
      }
      CmpUnlockKcb((ULONG_PTR)v128);
      CmpUnlockHashEntryByIndex((PVOID)v121);
      v10 = v267;
      *(_DWORD *)(v267 + 100) &= ~2u;
    }
  }
  CmpDrainDelayDerefContext((_QWORD **)&v263);
  if ( HIBYTE(v237) )
    CmpUnlockRegistry(v116);
  v117 = (void *)v262;
  if ( v262 )
  {
    if ( v240[1] && (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(v10, v117);
    CmpFreeTransientPoolWithTag(v117, 0x624E4D43u);
  }
  if ( (*(_DWORD *)(v10 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(v10 + 168);
  if ( Object )
    ObfDereferenceObject(Object);
  CmpCleanupPathInfo(v10 + 216);
  return (unsigned int)v236;
}
