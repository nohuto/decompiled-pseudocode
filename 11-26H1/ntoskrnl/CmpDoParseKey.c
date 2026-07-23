/*
 * XREFs of CmpDoParseKey @ 0x1408D2240
 * Callers:
 *     CmpParseKey @ 0x1408D19A0 (CmpParseKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     CmpTransSilentIgnore @ 0x1404648A0 (CmpTransSilentIgnore.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140775428 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B8450 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpLockHiveListShared @ 0x1408B9780 (CmpLockHiveListShared.c)
 *     HvResetDirtyData @ 0x1408BE918 (HvResetDirtyData.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpGetComponentNameAtIndex @ 0x1408C1290 (CmpGetComponentNameAtIndex.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmpDoWritethroughReparse @ 0x1408C77A0 (CmpDoWritethroughReparse.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408CB390 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408CC824 (CmpUnlockHashEntryByKcb.c)
 *     CmpRecordParseFailure @ 0x1408CCA90 (CmpRecordParseFailure.c)
 *     CmpRemoveFromDelayedClose @ 0x1408CCAC4 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpComputeComponentHashes @ 0x1408D4670 (CmpComputeComponentHashes.c)
 *     CmpCleanupPathInfo @ 0x1408D4B60 (CmpCleanupPathInfo.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1408D4BDC (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpEnlistKeyBody @ 0x1408D5180 (CmpEnlistKeyBody.c)
 *     CmpIsKeyStackDeleted @ 0x1408D52A0 (CmpIsKeyStackDeleted.c)
 *     CmpUnlockHashEntryByIndex @ 0x1408D5368 (CmpUnlockHashEntryByIndex.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408F3684 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     CmpStartKcbStack @ 0x140943BD0 (CmpStartKcbStack.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x140945804 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140946C60 (CmpLockKcbStackShared.c)
 *     CmpIsKcbInvolvedInVirtualization @ 0x140A229E0 (CmpIsKcbInvolvedInVirtualization.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A41830 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpPopulateKcbStack @ 0x140A4E010 (CmpPopulateKcbStack.c)
 *     CmRmIsKcbStackVisible @ 0x140A4E080 (CmRmIsKcbStackVisible.c)
 *     CmpUnlockHashEntry @ 0x140A4F550 (CmpUnlockHashEntry.c)
 *     CmpIsKeyStackSymlink @ 0x140A4F6E0 (CmpIsKeyStackSymlink.c)
 *     CmpGetComponentHashAtIndex @ 0x140A69130 (CmpGetComponentHashAtIndex.c)
 *     CmpVEExecuteCreateLogic @ 0x140A9F978 (CmpVEExecuteCreateLogic.c)
 *     CmpCheckExeOwnerForPca @ 0x140AA7384 (CmpCheckExeOwnerForPca.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AADF2C (CmpDoesProcessBelongToServiceSession.c)
 *     CmpCheckKeyOwnerForPca @ 0x140AAECBC (CmpCheckKeyOwnerForPca.c)
 *     CmpPublishEventForPcaResolver @ 0x140ADAEC8 (CmpPublishEventForPcaResolver.c)
 *     CmpTransSearchAddTransFromRm @ 0x140ADE378 (CmpTransSearchAddTransFromRm.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140AE3518 (CmpTryToLockHashEntryExclusive.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140AE52F8 (CmpUpdateHiveRootCellFlags.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140AF6E78 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x140B47A70 (CmpSyncKcbCacheForHive.c)
 *     CmpCreateHiveRootCell @ 0x140B4D6CC (CmpCreateHiveRootCell.c)
 *     CmpWaitForHiveMount @ 0x140B58CE0 (CmpWaitForHiveMount.c)
 *     CmpLogUnsupportedOperation @ 0x140B5F4D8 (CmpLogUnsupportedOperation.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v20; // rcx
  ULONG_PTR v21; // rdi
  int v22; // eax
  _WORD *v23; // r8
  __int64 v24; // r9
  __int16 v25; // r15
  __int64 v26; // r10
  unsigned int k; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int16 v30; // ax
  int v31; // eax
  char v32; // al
  int *v33; // rdi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _KLOCK_ENTRIES *v37; // r9
  int v38; // r8d
  _QWORD *v39; // rdi
  __int64 v40; // rsi
  _QWORD **v41; // rsi
  _QWORD *m; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rcx
  int v48; // eax
  int started; // eax
  int v50; // eax
  __int64 *v51; // rdi
  int *v52; // r15
  __int16 v53; // ax
  int v54; // ebx
  int v55; // esi
  __int16 v56; // cx
  __int16 n; // bx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r10
  __int16 ii; // cx
  __int64 v62; // rax
  __int16 jj; // bx
  ULONG_PTR v64; // rcx
  __int64 v65; // r8
  int v66; // ecx
  __int64 v67; // r9
  ULONG_PTR v68; // rbx
  char v69; // dl
  int v70; // eax
  ULONG_PTR v71; // rcx
  __int64 v72; // r9
  __int64 NextElement; // rax
  int v74; // edx
  __int64 v75; // rcx
  __int64 v76; // r11
  char v77; // al
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v79; // r11
  unsigned __int16 *v80; // r8
  struct _LIST_ENTRY *Flink; // r14
  __int64 v82; // rax
  unsigned __int16 *v83; // rdi
  ULONG_PTR v84; // rax
  __int64 v85; // rsi
  ULONG_PTR v86; // r9
  unsigned __int64 v87; // r9
  unsigned __int64 v88; // r10
  __int64 v89; // rcx
  unsigned __int16 *v90; // r10
  _WORD *v91; // r8
  __int16 v92; // cx
  __int16 v93; // ax
  int v94; // edi
  int v95; // eax
  unsigned int v96; // ecx
  __int64 v97; // r10
  _WORD *v98; // rdx
  char v99; // al
  int v100; // edi
  struct _PRIVILEGE_SET *Pool; // rdx
  __int64 v102; // rax
  __int16 j; // cx
  char v104; // di
  __int64 v105; // rax
  __int128 v106; // xmm0
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rbx
  __int64 v110; // rdi
  __int64 *v111; // rbx
  signed __int64 v112; // rax
  signed __int64 v113; // rdx
  __int64 v114; // rtt
  char v115; // al
  ULONG_PTR v116; // rbx
  ULONG_PTR v117; // rcx
  int v118; // eax
  __int64 v119; // rcx
  void *v120; // rbx
  __int64 i; // rcx
  __int64 v123; // r8
  ULONG_PTR v124; // rsi
  __int64 *v125; // rbx
  unsigned int v126; // r13d
  __int64 v127; // r8
  struct _KLOCK_ENTRIES *v128; // r9
  __int64 *v129; // r15
  _QWORD *v130; // rdi
  _QWORD *v131; // rbx
  __int64 v132; // r12
  int v133; // eax
  int v134; // r12d
  __int64 v135; // r8
  struct _KLOCK_ENTRIES *v136; // r9
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int16 v139; // bx
  int v140; // eax
  int v141; // eax
  BOOLEAN v142; // bl
  int KeyBody; // eax
  __int64 v144; // r10
  __int64 v145; // rdx
  __int16 v146; // bx
  signed __int64 v147; // r14
  struct _LIST_ENTRY **p_Blink; // rsi
  ULONG_PTR *v149; // rcx
  __int16 kk; // bx
  ULONG_PTR v151; // rcx
  __int16 mm; // bx
  ULONG_PTR v153; // rcx
  __int64 v154; // rax
  __int16 v155; // r10
  __int64 v156; // r8
  __int64 v157; // rax
  unsigned __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rax
  int v161; // r8d
  int v162; // edx
  int v163; // edx
  int v164; // ebx
  const UNICODE_STRING *v165; // rbx
  int v166; // eax
  int v167; // eax
  __int64 v168; // rax
  __int64 v169; // rcx
  int v170; // edx
  __int64 *v171; // rax
  __int64 v172; // rdx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rcx
  int v176; // eax
  int v177; // r8d
  int v178; // eax
  int v179; // eax
  int v180; // r9d
  int v181; // eax
  int SymbolicLinkTarget; // eax
  __int64 v183; // rcx
  unsigned int v184; // edx
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 ComponentNameAtIndex; // rax
  __int64 v188; // rax
  int v189; // edx
  int v190; // r8d
  int v191; // r8d
  int v192; // r8d
  int v193; // r8d
  __int64 v194; // r14
  __int16 v195; // ax
  __int64 v196; // rax
  __int64 v197; // rax
  unsigned int v198; // r8d
  unsigned __int16 *v199; // r14
  __int64 v200; // rcx
  char ComponentHashAtIndex; // bl
  int v202; // r8d
  int v203; // edx
  int v204; // edx
  __int64 v205; // rcx
  ULONG_PTR v206; // rdx
  ULONG_PTR v207; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  ULONG_PTR v210; // r15
  ULONG_PTR v211; // r8
  __int64 v212; // rbx
  ULONG_PTR v213; // r15
  int v214; // eax
  int v215; // eax
  __int64 v216; // rdx
  __int64 v217; // r8
  struct _KLOCK_ENTRIES *v218; // r9
  ULONG_PTR v219; // rcx
  int v220; // r15d
  int v221; // eax
  __int64 v222; // r8
  ULONG_PTR v223; // rcx
  __int64 v224; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  char DoesProcessBelongToServiceSession; // al
  __int64 v227; // rdx
  __int64 v228; // rcx
  int v229; // eax
  int Logic; // eax
  int v231; // r9d
  _KPROCESS *v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  int v235; // eax
  int Child; // eax
  int v237; // eax
  __int64 v238; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  ULONG_PTR v240; // [rsp+38h] [rbp-C8h]
  char v241; // [rsp+60h] [rbp-A0h]
  int v242; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v243; // [rsp+68h] [rbp-98h]
  __int16 v244; // [rsp+6Ah] [rbp-96h]
  char v245; // [rsp+6Ch] [rbp-94h]
  _BYTE v246[11]; // [rsp+6Dh] [rbp-93h] BYREF
  BOOLEAN v247[8]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v248; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h] BYREF
  __int16 v250; // [rsp+90h] [rbp-70h] BYREF
  char v251; // [rsp+92h] [rbp-6Eh] BYREF
  __int16 v252; // [rsp+93h] [rbp-6Dh] BYREF
  ULONG_PTR v253; // [rsp+98h] [rbp-68h]
  char v254; // [rsp+A0h] [rbp-60h]
  __int64 v255; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h]
  __int64 v257; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v258; // [rsp+C0h] [rbp-40h]
  __int64 v259; // [rsp+C8h] [rbp-38h] BYREF
  int v260[2]; // [rsp+D0h] [rbp-30h]
  __int64 v261; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v262; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v263; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v264; // [rsp+F8h] [rbp-8h]
  int v265[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v266; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR v267; // [rsp+110h] [rbp+10h] BYREF
  __int64 v268; // [rsp+118h] [rbp+18h]
  __int128 v269; // [rsp+120h] [rbp+20h] BYREF
  __int64 v270; // [rsp+130h] [rbp+30h]
  __int64 *v271; // [rsp+138h] [rbp+38h]
  UNICODE_STRING DestinationString; // [rsp+140h] [rbp+40h] BYREF
  __int64 v273; // [rsp+150h] [rbp+50h]
  __int64 v274[2]; // [rsp+160h] [rbp+60h] BYREF
  PPRIVILEGE_SET v275[2]; // [rsp+170h] [rbp+70h]
  int v276[4]; // [rsp+180h] [rbp+80h] BYREF
  PPRIVILEGE_SET v277[2]; // [rsp+190h] [rbp+90h]
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v279; // [rsp+1D0h] [rbp+D0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+1E0h] [rbp+E0h]
  ULONG_PTR *v281; // [rsp+1F0h] [rbp+F0h]
  __int64 v282; // [rsp+1F8h] [rbp+F8h]

  v9 = 0;
  v10 = a7;
  v258 = a5;
  v12 = 0LL;
  v271 = a9;
  v255 = a1;
  Object = 0LL;
  v257 = 0LL;
  v250 = 0;
  v243 = 0;
  v254 = 0;
  v246[0] = 0;
  v245 = 0;
  v244 = a3;
  *(_QWORD *)v260 = a2;
  v273 = a7;
  v270 = 0LL;
  LOWORD(v259) = 0;
  v242 = 0;
  *(_QWORD *)v247 = 0LL;
  DestinationString = 0LL;
  v266 = 0LL;
  v269 = 0LL;
  v263 = 0LL;
  v252 = 0;
  BugCheckParameter2 = 0LL;
  *(_QWORD *)v265 = 0LL;
  *(_WORD *)&v246[3] = 0;
  v248 = 0;
  v267 = 0LL;
  HvpGetCellContextInitialize(&v266);
  v262 = *a6;
  CmpInitializeDelayDerefContext(&v269);
  v268 = 0LL;
  *(_OWORD *)(a7 + 160) = 0LL;
  v246[1] = 0;
  v251 = 0;
  *(_OWORD *)(a7 + 176) = 0LL;
  v264 = -1LL;
  *(_OWORD *)v274 = 0LL;
  WORD1(v274[0]) = -1;
  *(_OWORD *)v276 = 0LL;
  HIWORD(v276[0]) = -1;
  ApcState.ApcListHead[0] = 0LL;
  WORD1(ApcState.ApcListHead[0].Flink) = -1;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)v275 = 0LL;
  *(_OWORD *)v277 = 0LL;
  ApcState.ApcListHead[1] = 0LL;
  memset_0((void *)(a7 + 216), 0, 0xA8uLL);
  memset_0((void *)(a7 + 384), 0, 0x50uLL);
  if ( a7 )
    *(_QWORD *)(a7 + 384) = *(_QWORD *)(a7 + 88);
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v16 = *(_QWORD *)(a7 + 88);
  v17 = *(_QWORD *)(a7 + 72);
  v18 = v255;
  v253 = v16;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v17 )
  {
    v160 = *(_QWORD *)(v18 + 56);
    if ( v160 && v17 != v160 )
    {
      v242 = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      goto LABEL_211;
    }
    v261 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(v18 + 64);
    v17 = *(_QWORD *)(v18 + 56);
    v261 = v13;
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(v18 + 50);
  Blink = PspSiloMonitorLock.Header.WaitListHead.Flink->Blink;
  if ( *(struct _LIST_ENTRY **)(v18 + 8) != Blink )
  {
    if ( v16 )
    {
      CmpLockRegistry(Blink, v13, v14, v15);
      CmpDereferenceKeyControlBlock(v16);
      v16 = 0LL;
      v253 = 0LL;
      CmpUnlockRegistry(v20);
      HIBYTE(v243) = 0;
      v241 = 0;
      LODWORD(v12) = *(_DWORD *)&v246[3];
      goto LABEL_10;
    }
    goto LABEL_189;
  }
  if ( !v16 )
  {
LABEL_189:
    v241 = 0;
    *(_DWORD *)&v246[3] = 0;
    v253 = v16;
    v245 = 0;
    goto LABEL_141;
  }
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(Blink, v13, v14, v15);
  v76 = *(_QWORD *)(v16 + 296);
  HIBYTE(v243) = 1;
  v77 = v76 & 1;
  if ( (v76 & 1) != 0 )
    v76 &= ~1uLL;
  if ( !v76 || v77 )
  {
LABEL_140:
    CmpDereferenceKeyControlBlock(v16);
    v16 = 0LL;
    v253 = 0LL;
    CmpUnlockRegistry(v89);
    LODWORD(v12) = *(_DWORD *)&v246[3];
    v241 = 0;
LABEL_141:
    HIBYTE(v243) = 0;
    goto LABEL_10;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v80 = (unsigned __int16 *)*((_QWORD *)v79 + 1);
  Flink = CurrentServerSiloGlobals[75].Flink;
  v82 = *v79;
  if ( *(_WORD *)v258 < (unsigned __int16)v82 )
  {
LABEL_139:
    v16 = v253;
    goto LABEL_140;
  }
  v83 = (unsigned __int16 *)((char *)v80 + v82);
  v84 = v253;
  v85 = *(_QWORD *)(v258 + 8) - (_QWORD)v80;
  while ( 1 )
  {
    v86 = v84;
    if ( v80 >= v83 )
      break;
    v87 = *v80;
    v88 = *(unsigned __int16 *)((char *)v80 + v85);
    if ( (_WORD)v87 != (_WORD)v88 )
    {
      if ( (unsigned int)v87 >= 0x61 )
      {
        if ( (unsigned int)v87 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v87 >= 0xC0u )
            LOWORD(v87) = *((_WORD *)&Flink->Flink
                          + (v87 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v87 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v87 >> 8))))
                        + v87;
        }
        else
        {
          LOWORD(v87) = v87 - 32;
        }
      }
      if ( (unsigned int)v88 >= 0x61 )
      {
        if ( (unsigned int)v88 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v88 >= 0xC0u )
            LOWORD(v88) = *((_WORD *)&Flink->Flink
                          + (v88 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v88 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v88 >> 8))))
                        + v88;
        }
        else
        {
          LOWORD(v88) = v88 - 32;
        }
      }
      if ( (_WORD)v87 != (_WORD)v88 )
      {
        v18 = v255;
        goto LABEL_139;
      }
      v84 = v253;
    }
    ++v80;
  }
  v90 = (unsigned __int16 *)v258;
  v16 = v84;
  v91 = (_WORD *)(*(_QWORD *)(v258 + 8) + 2 * ((unsigned __int64)*v79 >> 1));
  v92 = *(_WORD *)v258 - *v79;
  v93 = *(_WORD *)(v258 + 2) - *v79;
  *((_QWORD *)&v262 + 1) = v91;
  LOWORD(v262) = v92;
  WORD1(v262) = v93;
  if ( v92 )
  {
    do
    {
      if ( *v91 != 92 )
        break;
      v92 -= 2;
      v93 -= 2;
      ++v91;
      LOWORD(v262) = v92;
      WORD1(v262) = v93;
    }
    while ( v92 );
    v90 = (unsigned __int16 *)v258;
    *((_QWORD *)&v262 + 1) = v91;
  }
  v94 = *(unsigned __int16 *)(v86 + 12) - 1;
  if ( (*(_DWORD *)a7 & 1) == 0 || v92 )
  {
    LODWORD(v12) = *(_DWORD *)&v246[3];
  }
  else
  {
    v154 = *((_QWORD *)v90 + 1);
    v86 = *v90;
    LOWORD(v86) = v86 - *v79;
    v155 = v90[1] - *v79;
    v156 = v154 + 2 * ((unsigned __int64)*v79 >> 1);
    v157 = *(_QWORD *)(v16 + 80);
    v158 = *(unsigned __int16 *)(v157 + 24);
    if ( (*(_DWORD *)(v157 + 12) & 1) != 0 )
    {
      v159 = 2 * v158;
      LOWORD(v158) = 2 * v158;
    }
    else
    {
      v159 = 2 * (v158 >> 1);
    }
    LODWORD(v12) = 1;
    *((_QWORD *)&v262 + 1) = v156 - v159;
    LOWORD(v262) = v86 + v158;
    WORD1(v262) = v155 + v158;
    --v94;
  }
  v95 = CmpComputeComponentHashes(&v262, &v248, a7 + 216, v86);
  v242 = v95;
  if ( v95 < 0 )
  {
    CmpRecordParseFailure(a7, 512, v95);
    v12 = 0LL;
    goto LABEL_211;
  }
  if ( (unsigned int)(v248 + v94) > 0x20 )
  {
    v242 = -1073741811;
    CmpRecordParseFailure(a7, 768, -1073741811);
    v12 = 0LL;
    goto LABEL_211;
  }
  v96 = 0;
  v97 = a7 + 216;
  while ( v96 < v248 )
  {
    if ( v96 >= 8 )
    {
      v97 = a7 + 216;
      v98 = (_WORD *)(*(_QWORD *)(a7 + 376) + 16 * (v96 - 8 + 6LL));
    }
    else
    {
      v98 = (_WORD *)(v97 + 16 * (v96 + 2LL));
    }
    if ( *v98 > 0x200u )
    {
      v242 = -1073741811;
      CmpRecordParseFailure(a7, 1024, -1073741811);
      v12 = 0LL;
      goto LABEL_211;
    }
    ++v96;
  }
  v242 = 0;
  if ( (_WORD)v12 == v248 )
  {
    CmpLockHashEntrySharedByKcb(v16);
    v99 = 1;
    v245 = 1;
  }
  else
  {
    v99 = 0;
  }
  v241 = v99;
  CmpLockKcbShared(v16);
  if ( (*(_DWORD *)(v16 + 8) & 0x20000) == 0 )
  {
    v100 = *(__int16 *)(v16 + 66);
    Pool = 0LL;
    v279 = 0LL;
    WORD1(v279.Ptr) = -1;
    *(_OWORD *)Privileges = 0LL;
    if ( v100 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
    {
      v102 = *(__int16 *)(v16 + 66);
      LOWORD(v279.Ptr) = v100;
      Privileges[1] = Pool;
      WORD1(v279.Ptr) = v102;
      if ( (_WORD)v102 )
      {
        for ( i = *(_QWORD *)(v16 + 192); i; LOWORD(v102) = v102 - 1 )
        {
          v123 = *(_QWORD *)(i + 16);
          if ( (__int16)v102 >= 2 )
          {
            *((_QWORD *)Pool + (__int16)v102 - 2) = v123;
          }
          else
          {
            *((_QWORD *)&v279.Size + (__int16)v102) = v123;
            Pool = Privileges[1];
          }
          i = *(_QWORD *)(i + 24);
        }
      }
      else
      {
        *((_QWORD *)&v279.Size + v102) = v16;
        Pool = Privileges[1];
      }
    }
    else
    {
      Pool = Privileges[1];
    }
    for ( j = WORD1(v279.Ptr); ; --j )
    {
      v104 = 1;
      if ( j < 0 )
        break;
      v105 = j >= 2 ? *((_QWORD *)Pool + j - 2) : *((_QWORD *)&v279.Size + j);
      if ( *(_WORD *)(v105 + 66) && *(_BYTE *)(v105 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v105 + 40) != -1 )
      {
        v104 = 0;
        break;
      }
    }
    if ( Pool )
      CmSiFreeMemory(Pool);
    if ( !v104 && (*(_DWORD *)(v16 + 8) & 0x40000) == 0 )
    {
      CmpUnlockKcb(v16);
      v21 = v16;
      v28 = HIBYTE(v243);
      v25 = v248;
      v245 = v241;
      *(_DWORD *)&v246[3] = v12;
      v253 = v16;
      goto LABEL_19;
    }
  }
  CmpUnlockKcb(v16);
  if ( v245 )
  {
    CmpUnlockHashEntryByKcb(v16);
    v245 = 0;
  }
  CmpDereferenceKeyControlBlock(v16);
  v106 = *a6;
  LODWORD(v12) = 0;
  v253 = 0LL;
  *(_DWORD *)&v246[3] = 0;
  v262 = v106;
  v16 = 0LL;
  CmpCleanupPathInfo(a7 + 216);
  memset_0((void *)(a7 + 216), 0, 0xA8uLL);
  v18 = v255;
  v241 = v245;
LABEL_10:
  v21 = *(_QWORD *)(v18 + 8);
  v22 = CmpComputeComponentHashes(&v262, &v248, a7 + 216, v15);
  v242 = v22;
  if ( v22 < 0 )
  {
    CmpRecordParseFailure(a7, 1280, v22);
    v12 = 0LL;
    goto LABEL_209;
  }
  v25 = v248;
  v26 = a7 + 216;
  for ( k = 0; k < v248; ++k )
  {
    if ( k >= 8 )
    {
      v26 = a7 + 216;
      v23 = (_WORD *)(*(_QWORD *)(a7 + 376) + 16 * (k - 8 + 6LL));
    }
    else
    {
      v23 = (_WORD *)(v26 + 16 * (k + 2LL));
    }
    if ( *v23 > 0x200u )
    {
      v242 = -1073741811;
      CmpRecordParseFailure(a7, 1536, -1073741811);
      v12 = 0LL;
      goto LABEL_209;
    }
  }
  v28 = HIBYTE(v243);
LABEL_19:
  *(_QWORD *)(a7 + 392) = v21;
  *(_QWORD *)(a7 + 416) = v21;
  v29 = v25 + *(unsigned __int16 *)(v21 + 12) - (unsigned int)(unsigned __int16)v12;
  if ( (unsigned int)v29 > 0x200 )
  {
    v242 = -1073741811;
    CmpRecordParseFailure(a7, 1792, -1073741811);
    v12 = 0LL;
    goto LABEL_209;
  }
  if ( !(_BYTE)v28 )
  {
    if ( (*(_DWORD *)a7 & 0x400) != 0 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v29, v28, v23, v24);
    HIBYTE(v243) = 1;
  }
  v30 = *(_WORD *)(v255 + 48);
  if ( (v30 & 9) != 0 )
  {
    v192 = -1073740763;
    if ( (v30 & 1) == 0 )
      v192 = -1073741444;
    v242 = v192;
    CmpRecordParseFailure(a7, 2048, v192);
    v12 = 0LL;
    goto LABEL_209;
  }
  if ( (_WORD)v12 == v25 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v21);
    BugCheckParameter2 = v21;
    v12 = v21;
    if ( v21 == v16 )
    {
      v245 = 0;
    }
    else
    {
      CmpLockHashEntrySharedByKcb(v21);
      v241 = 1;
    }
  }
  else
  {
    v31 = CmpPerformCompleteKcbCacheLookup(
            v21,
            (unsigned __int16)v12,
            v25,
            a7 + 216,
            a7,
            &BugCheckParameter2,
            (char *)&v252 + 1,
            (__int64)&v259);
    v242 = v31;
    if ( v31 < 0 || v31 == 259 )
    {
      CmpRecordParseFailure(a7, 2432, v31);
      v115 = HIBYTE(v252);
      v12 = BugCheckParameter2;
      goto LABEL_207;
    }
    LOWORD(v12) = v259 + v12;
    *(_BYTE *)(a7 + 424) = v259;
    v32 = HIBYTE(v252);
    *(_DWORD *)&v246[3] = v12;
    v12 = BugCheckParameter2;
    *(_QWORD *)(a7 + 400) = BugCheckParameter2;
    *(_QWORD *)(a7 + 416) = v12;
    v241 = v32;
  }
  if ( *(_WORD *)&v246[3] == v25 && (*(_DWORD *)a7 & 1) == 0 )
  {
    CmpUnlockHashEntryByKcb(v12);
    v241 = 0;
  }
  CmpLockKcbShared(v12);
  if ( *(__int16 *)&v246[3] < v25 )
  {
    v43 = (unsigned int)*(__int16 *)&v246[3];
    if ( (unsigned int)v43 >= 8 )
    {
      v45 = 16LL * (unsigned int)(v43 - 8);
      v44 = *(_QWORD *)(a7 + 376) + 104LL;
    }
    else
    {
      v44 = 16 * v43;
      v45 = a7 + 256;
    }
    DestinationString.Buffer = *(wchar_t **)(v44 + v45);
    DestinationString.Length = v262 - 2 * (((__int64)DestinationString.Buffer - *((_QWORD *)&v262 + 1)) >> 1);
    DestinationString.MaximumLength = DestinationString.Length;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  v33 = (int *)(*(_QWORD *)v260 + 32LL);
  if ( CmpVEEnabled )
  {
    if ( (*(_DWORD *)(a7 + 24) & 0x10) != 0 )
    {
      v34 = -1073741199;
    }
    else if ( *(_WORD *)(v12 + 66) )
    {
      v34 = -1073741199;
    }
    else if ( (unsigned __int8)CmpIsKcbInvolvedInVirtualization(v12) )
    {
      if ( (unsigned __int8)CmpIsSystemEntity((unsigned __int8)v244) )
      {
        v34 = -1073741199;
      }
      else if ( (*(_DWORD *)a7 & 8) != 0 )
      {
        v34 = -1073741199;
      }
      else
      {
        if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
        {
          CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
          *(_DWORD *)(a7 + 160) |= 1u;
        }
        if ( (*(_DWORD *)(v12 + 184) & 0x2000000) != 0 )
          v34 = CmpVEExecuteVirtualStoreParseLogic(v12, &DestinationString, a7, v258);
        else
          v34 = CmpVEExecuteRealStoreParseLogic(
                  v12,
                  (__m128i *)&DestinationString,
                  (_DWORD *)a7,
                  (UNICODE_STRING *)v258,
                  v33);
      }
    }
    else
    {
      v34 = -1073741199;
    }
  }
  else
  {
    v34 = -1073741199;
  }
  v242 = v34;
  CmpUnlockKcb(v12);
  v38 = v242;
  if ( v242 != -1073741199 )
  {
    v163 = 2496;
    goto LABEL_325;
  }
  v39 = *(_QWORD **)(a7 + 64);
  v40 = *(_QWORD *)(v12 + 32);
  if ( v39 && v39 != (_QWORD *)v40 )
  {
    if ( (*(_DWORD *)(v40 + 4120) & 1) != 0 )
    {
      CmpLockHiveListShared(v36, v35, (unsigned int)v242, v37);
      v41 = (_QWORD **)(v40 + 4128);
      for ( m = *v41; m != v41; m = (_QWORD *)*m )
      {
        if ( m - 516 == v39 )
        {
          CmpUnlockHiveList();
          goto LABEL_59;
        }
      }
      CmpUnlockHiveList();
    }
    if ( PsIsCurrentThreadInServerSilo() )
    {
      v184 = dword_140E09EE8;
      if ( (unsigned int)dword_140E09EE8 > 5 )
      {
        if ( (*(_QWORD *)&qword_140E09EF8 & 0x200000010000LL) != 0
          && (qword_140E09F00 & 0x200000010000LL) == qword_140E09F00 )
        {
          v267 = 0x1000000LL;
          v281 = &v267;
          v282 = 8LL;
          tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&word_140056F02, 0x200000010000LL, 3u, &v279);
          v184 = dword_140E09EE8;
        }
        if ( v184 > 5 )
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09EE8,
            (unsigned __int8 *)&dword_140056F54,
            0LL,
            0LL,
            2u,
            &v279);
      }
    }
    v185 = *(unsigned __int8 *)(a7 + 426);
    v12 = BugCheckParameter2;
    v242 = -1073741790;
    if ( (unsigned __int8)v185 < 4u )
    {
      *(_DWORD *)(a7 + 8 * v185 + 428) = -1073741790;
      *(_DWORD *)(a7 + 8LL * (unsigned __int8)(*(_BYTE *)(a7 + 426))++ + 432) = 2560;
    }
    goto LABEL_206;
  }
LABEL_59:
  if ( !v17 && !v261 )
  {
    v12 = BugCheckParameter2;
    v46 = 0LL;
    goto LABEL_62;
  }
  v12 = BugCheckParameter2;
  if ( *(_QWORD *)(BugCheckParameter2 + 32) == CmpMasterHive )
  {
    HIBYTE(v250) = 1;
    v17 = 0LL;
    v46 = 0LL;
  }
  else
  {
    if ( !v17 && !v261 || !*(_WORD *)(BugCheckParameter2 + 66) )
    {
      v46 = v261;
      goto LABEL_62;
    }
    CmpLogUnsupportedOperation(8LL);
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      v242 = -1072103419;
      v163 = 2816;
      v38 = -1072103419;
LABEL_325:
      CmpRecordParseFailure(a7, v163, v38);
      goto LABEL_206;
    }
    v17 = 0LL;
    v46 = 0LL;
  }
LABEL_62:
  if ( !CmpTransSilentIgnore() && (v17 || v46) )
  {
    v47 = *(_QWORD *)(v12 + 32);
    if ( !v47
      || ((v17 & 1) == 0
        ? (v48 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v47 + 4160), v17, v46, 0, (__int64)v247))
        : (v48 = CmpTransSearchAddLightWeightTrans(v17, *(_QWORD *)(v12 + 32), 0LL, v247)),
          v48 < 0) )
    {
      if ( v241 )
      {
        CmpUnlockHashEntryByKcb(v12);
        v241 = 0;
      }
      CmpUnlockRegistry(v47);
      v175 = *(_QWORD *)(v12 + 32);
      if ( v175 )
      {
        if ( (v17 & 1) != 0 )
          v176 = CmpTransSearchAddLightWeightTrans(v17, *(_QWORD *)(v12 + 32), 1LL, v247);
        else
          v176 = CmpTransSearchAddTransFromRm(*(_QWORD *)(v175 + 4160), v17, v46, 1, (__int64)v247);
      }
      else
      {
        v176 = -1073741811;
      }
      v242 = v176;
      CmpLockRegistry(v175, v172, v173, v174);
      v177 = v242;
      HIBYTE(v243) = 1;
      if ( v242 >= 0 )
      {
        v177 = -1073741267;
        v242 = -1073741267;
      }
      CmpRecordParseFailure(a7, 3072, v177);
      goto LABEL_206;
    }
  }
  started = CmpStartKcbStack(v274, *(unsigned __int16 *)(v12 + 66));
  v242 = started;
  if ( started < 0 )
  {
    v38 = started;
    v163 = 3328;
    goto LABEL_325;
  }
  v50 = CmpStartKcbStack(v276, *(unsigned __int16 *)(v12 + 66));
  v242 = v50;
  if ( v50 < 0 )
  {
    v38 = v50;
    v163 = 3584;
    goto LABEL_325;
  }
  v51 = v274;
  v52 = v276;
  CmpPopulateKcbStack(v274, v12);
  v53 = v248;
  LOWORD(v54) = *(_WORD *)&v246[3];
  v55 = v248;
  while ( 1 )
  {
    if ( (__int16)v54 >= v53 )
    {
      v12 = BugCheckParameter2;
      *(_QWORD *)&v246[3] = v52;
      v137 = *(_QWORD *)(BugCheckParameter2 + 72);
      if ( v137 )
      {
        CmpPopulateKcbStack(v52, v137);
      }
      else
      {
        v52 = 0LL;
        *(_QWORD *)&v246[3] = 0LL;
      }
      v138 = *(_QWORD *)(v255 + 8);
      if ( *(_QWORD *)(v12 + 72) != v138 && v12 != v138 )
      {
        CmpLockKcbShared(v138);
        HIBYTE(v244) = 1;
      }
      if ( v52 )
      {
        CmpLockKcbStackShared(v52);
        LOBYTE(v243) = 1;
      }
      CmpLockKcbStackShared(v51);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v255, 0LL) )
      {
        v193 = -1073740763;
        if ( (*(_BYTE *)(v255 + 48) & 1) == 0 )
          v193 = -1073741444;
        v242 = v193;
        CmpRecordParseFailure(a7, 5888, v193);
        goto LABEL_293;
      }
      if ( (*(_DWORD *)(v12 + 8) & 0x20000) != 0 )
      {
        v242 = -1073741772;
        CmpRecordParseFailure(a7, 6016, -1073741772);
        goto LABEL_293;
      }
      v139 = v54 - 1;
      if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
      {
        v242 = -1073741772;
        CmpRecordParseFailure(a7, 6144, -1073741772);
        goto LABEL_293;
      }
      if ( !(unsigned __int8)CmRmIsKcbStackVisible(v51, *(_QWORD *)v247) )
      {
        v242 = -1073741772;
        CmpRecordParseFailure(a7, 6400, -1073741772);
        goto LABEL_293;
      }
      if ( (*(_DWORD *)a7 & 2) == 0 )
      {
        if ( (*(_DWORD *)a7 & 0x20) == 0 )
        {
          if ( !(unsigned __int8)CmpIsKeyStackDeleted(v51, *(_QWORD *)v247) )
          {
            if ( (unsigned __int8)CmpIsKeyStackSymlink(v51) && !_bittest((const signed __int32 *)a7, 9u) )
            {
              if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
              {
                v242 = -1073741771;
                CmpRecordParseFailure(a7, 14080, -1073741771);
                goto LABEL_293;
              }
              if ( (_BYTE)v243 )
              {
                CmpUnlockKcbStack((__int64)v52);
                LOBYTE(v243) = 0;
              }
              if ( HIBYTE(v244) )
              {
                CmpUnlockKcb(*(_QWORD *)(v255 + 8));
                HIBYTE(v244) = 0;
              }
              if ( v241 )
              {
                CmpUnlockHashEntryByKcb(v12);
                v241 = 0;
              }
              SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                     (__int64)v51,
                                     a7 + 216,
                                     0,
                                     0,
                                     *(__int64 *)v247,
                                     a7,
                                     (__int64)&v269,
                                     v258,
                                     (ULONG_PTR *)(a7 + 88),
                                     &v263);
              v242 = SymbolicLinkTarget;
              if ( SymbolicLinkTarget < 0 )
              {
                CmpRecordParseFailure(a7, 14336, SymbolicLinkTarget);
              }
              else
              {
                *(_DWORD *)a7 &= ~8u;
                if ( !*(_QWORD *)(a7 + 64) )
                {
                  v183 = *(_QWORD *)(v263 + 32);
                  if ( (*(_DWORD *)(v183 + 4120) & 1) != 0 )
                    *(_QWORD *)(a7 + 64) = v183;
                }
                v242 = 260;
                CmpRecordParseFailure(a7, 14592, 260);
              }
              goto LABEL_297;
            }
            if ( HIBYTE(v250) )
            {
              v242 = -1073741811;
              CmpRecordParseFailure(a7, 14848, -1073741811);
              goto LABEL_293;
            }
            if ( (*(_DWORD *)(v12 + 184) & 0x20000) != 0 )
            {
              v242 = -1073741772;
              CmpRecordParseFailure(a7, 15104, -1073741772);
              goto LABEL_293;
            }
            if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
            {
              v242 = -1073741771;
              CmpRecordParseFailure(a7, 15360, -1073741771);
              goto LABEL_293;
            }
            v140 = CmpDoWritethroughReparse(v12, (__int64)v51, (__int64)v52, 0, 0LL, a7, (UNICODE_STRING *)v258);
            v242 = v140;
            if ( v140 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 15424, v140);
              goto LABEL_293;
            }
            v141 = CmpVEExecuteOpenLogic(v12, v244, *(_QWORD *)v260 + 32LL);
            v242 = v141;
            if ( v141 != -1073741199 )
            {
              CmpRecordParseFailure(a7, 15488, v141);
              goto LABEL_293;
            }
            v142 = v247[0];
            KeyBody = CmpCreateKeyBody(v12, 2, (__int64)v51, (__int64)&v257, (__int64)v246);
            v242 = KeyBody;
            if ( KeyBody >= 0 )
              goto LABEL_277;
            if ( KeyBody == -1073741444 )
            {
              KeyBody = -1073741772;
              v242 = -1073741772;
            }
            CmpRecordParseFailure(a7, 15552, KeyBody);
LABEL_493:
            Object = (PVOID)v257;
            goto LABEL_293;
          }
          if ( HIBYTE(v250) )
          {
            v242 = -1073741811;
            CmpRecordParseFailure(a7, 9728, -1073741811);
            goto LABEL_293;
          }
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v52, *(_QWORD *)v247)
            || !(unsigned __int8)CmRmIsKcbStackVisible(v52, *(_QWORD *)v247) )
          {
            v242 = -1073741772;
            CmpRecordParseFailure(a7, 9984, -1073741772);
            goto LABEL_293;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(v12 + 72) + 184LL) & 0x20000) != 0 )
          {
            v242 = -1073741772;
            CmpRecordParseFailure(a7, 10240, -1073741772);
            goto LABEL_293;
          }
          if ( (*(_DWORD *)a7 & 1) == 0 )
          {
            if ( LOBYTE(WheapPfaLock.StackLimit)
              && WheapPfaLock.StackBase != KeGetCurrentThread()
              && *(_QWORD *)(v12 + 32) == CmpMasterHive
              && *(_WORD *)(v12 + 12) == 3
              && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(a7 + 216, v139),
                  (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex)) )
            {
              *(_DWORD *)a7 |= 0x100u;
              v242 = 259;
              CmpRecordParseFailure(a7, 10496, 259);
            }
            else
            {
              v242 = -1073741772;
              CmpRecordParseFailure(a7, 10752, -1073741772);
            }
            goto LABEL_293;
          }
          if ( *(_QWORD *)(v12 + 32) == CmpMasterHive
            && CmpNoMasterCreates
            && WheapPfaLock.StackBase != KeGetCurrentThread() )
          {
            if ( LOBYTE(WheapPfaLock.StackLimit)
              && *(_WORD *)(v12 + 12) == 3
              && (v188 = CmpGetComponentNameAtIndex(a7 + 216, v139), (unsigned __int8)CmpWaitForHiveMount(v188)) )
            {
              *(_DWORD *)a7 |= 0x100u;
              v242 = 259;
              CmpRecordParseFailure(a7, 11008, 259);
            }
            else
            {
              v242 = -1073741811;
              CmpRecordParseFailure(a7, 11264, -1073741811);
            }
            goto LABEL_293;
          }
          v165 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(a7 + 216, v139);
          v166 = CmpDoWritethroughReparse(v12, (__int64)v51, *(__int64 *)&v246[3], 1, v165, a7, (UNICODE_STRING *)v258);
          v242 = v166;
          if ( v166 != -1073741199 )
          {
            CmpRecordParseFailure(a7, 11392, v166);
            v52 = *(int **)&v246[3];
            goto LABEL_293;
          }
          v167 = CmpCreateKeyBody(v12, 0, (__int64)v51, (__int64)&v257, (__int64)v246);
          v242 = v167;
          if ( v167 < 0 )
          {
            CmpRecordParseFailure(a7, 11456, v167);
            v52 = *(int **)&v246[3];
            Object = (PVOID)v257;
            goto LABEL_293;
          }
          if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
            *(_DWORD *)(a7 + 160) |= 1u;
          }
          v168 = *(_QWORD *)(v12 + 72);
          Object = (PVOID)v257;
          if ( *(_DWORD *)(v168 + 40) == -1 )
          {
            if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                     16 * (*(_DWORD *)(a7 + 24) & 2u),
                                     *(_DWORD *)&v246[3],
                                     a7,
                                     v260[0],
                                     v244,
                                     16 * (*(_DWORD *)(a7 + 24) & 2u),
                                     (*(_DWORD *)(a7 + 24) & 4) != 0,
                                     *(__int64 *)v247,
                                     v257,
                                     1,
                                     (__int64)&v242) )
            {
              if ( KeGetCurrentThread()->PreviousMode == 1 )
              {
                CurrentThreadProcess = PsGetCurrentThreadProcess();
                DoesProcessBelongToServiceSession = CmpDoesProcessBelongToServiceSession(CurrentThreadProcess);
                v52 = *(int **)&v246[3];
                if ( !DoesProcessBelongToServiceSession
                  && (unsigned __int8)CmpCheckKeyOwnerForPca(*(_QWORD *)&v246[3], *(_QWORD *)v247) )
                {
                  v228 = *(_QWORD *)(v12 + 72);
                  v246[1] = 1;
                  v268 = CmpConstructName(v228, v227);
                }
              }
              else
              {
                v52 = *(int **)&v246[3];
              }
              CmpRecordParseFailure(a7, 11520, v242);
              goto LABEL_293;
            }
            CmpUnlockKcbStack((__int64)v51);
            CmpUnlockKcbStack(*(__int64 *)&v246[3]);
            if ( HIBYTE(v244) )
            {
              CmpUnlockKcb(*(_QWORD *)(v255 + 8));
              HIBYTE(v244) = 0;
            }
            v229 = CmpPromoteKey(*(__int64 *)&v246[3], 0, 1);
            v242 = v229;
            if ( v229 < 0 )
            {
              if ( v229 == -1073741444 )
              {
                v229 = -1073741772;
                v242 = -1073741772;
              }
              CmpRecordParseFailure(a7, 11776, v229);
              goto LABEL_197;
            }
          }
          else
          {
            CmpUnlockKcbStack((__int64)v51);
            CmpUnlockKcbStack(*(__int64 *)&v246[3]);
            CmpLockKcbStackTopExclusiveRestShared(*(_QWORD *)&v246[3]);
          }
          CmpLockKcbStackTopExclusiveRestShared(v51);
          if ( (unsigned __int8)CmRmIsKcbStackVisible(v51, *(_QWORD *)v247) )
          {
            if ( (*(_DWORD *)(v12 + 8) & 0x20000) != 0 )
            {
              v189 = 12160;
            }
            else
            {
              if ( (unsigned __int8)CmpIsKeyStackDeleted(v51, *(_QWORD *)v247) )
              {
                v52 = *(int **)&v246[3];
                if ( (unsigned __int8)CmpIsKeyStackDeleted(*(_QWORD *)&v246[3], *(_QWORD *)v247)
                  || !(unsigned __int8)CmRmIsKcbStackVisible(v52, *(_QWORD *)v247) )
                {
                  v170 = 12288;
                  goto LABEL_441;
                }
                v169 = *(_QWORD *)(v12 + 72);
                if ( (*(_DWORD *)(v169 + 184) & 0x20000) != 0 )
                {
                  v170 = 12544;
LABEL_441:
                  v242 = -1073741772;
                  v191 = -1073741772;
LABEL_442:
                  CmpRecordParseFailure(a7, v170, v191);
                  LOBYTE(v243) = 1;
                  goto LABEL_293;
                }
                LOBYTE(BugCheckParameter4) = v244;
                Logic = CmpVEExecuteCreateLogic(
                          v169,
                          v12,
                          v165,
                          *(_QWORD *)v260,
                          BugCheckParameter4,
                          16 * (*(_DWORD *)(a7 + 24) & 2u),
                          *(_QWORD *)v247,
                          a7,
                          v258);
                v242 = Logic;
                if ( Logic == -1073741739 )
                {
                  *(_DWORD *)a7 |= 0x400u;
                  v242 = -1073741267;
                  CmpRecordParseFailure(a7, 12672, -1073741267);
                  LOBYTE(v243) = 1;
                  goto LABEL_293;
                }
                if ( Logic != -1073741199 )
                {
                  CmpRecordParseFailure(a7, 12736, Logic);
                  LOBYTE(v243) = 1;
                  goto LABEL_293;
                }
                if ( !(unsigned __int8)CmpCheckCreateAccessOnKcbStack(
                                         16 * (*(_DWORD *)(a7 + 24) & 2u),
                                         (_DWORD)v52,
                                         a7,
                                         v260[0],
                                         v244,
                                         16 * (*(_DWORD *)(a7 + 24) & 2u),
                                         (*(_DWORD *)(a7 + 24) & 4) != 0,
                                         *(__int64 *)v247,
                                         (__int64)Object,
                                         0,
                                         (__int64)&v242) )
                {
                  if ( KeGetCurrentThread()->PreviousMode == 1 )
                  {
                    v232 = PsGetCurrentThreadProcess();
                    if ( !(unsigned __int8)CmpDoesProcessBelongToServiceSession(v232) )
                    {
                      if ( (unsigned __int8)CmpCheckKeyOwnerForPca(v52, *(_QWORD *)v247) )
                      {
                        v234 = *(_QWORD *)(v12 + 72);
                        v246[1] = 1;
                        v268 = CmpConstructName(v234, v233);
                      }
                    }
                  }
                  CmpRecordParseFailure(a7, 12800, v242);
                  LOBYTE(v243) = 1;
                  goto LABEL_293;
                }
                LOBYTE(v231) = 1;
                v235 = CmpEnlistKeyBody((_DWORD)Object, v12, *(_DWORD *)v247, v231, (__int64)v51);
                v242 = v235;
                if ( v235 < 0 )
                {
                  CmpRecordParseFailure(a7, 12928, v235);
                  LOBYTE(v243) = 1;
                  goto LABEL_293;
                }
                Child = CmpCreateChild(
                          (_DWORD)v52,
                          (_DWORD)v51,
                          v260[0],
                          (_DWORD)v165,
                          a7,
                          8 * (*(_WORD *)(a7 + 24) & 2u),
                          0,
                          0,
                          *(__int64 *)v247);
                v242 = Child;
                if ( Child < 0 )
                {
                  CmpRecordParseFailure(a7, 12992, Child);
                  LOBYTE(v243) = 1;
                  goto LABEL_293;
                }
                v142 = v247[0];
                *(_DWORD *)(a7 + 32) = 1;
LABEL_385:
                v144 = (__int64)Object;
                LOBYTE(v243) = 1;
LABEL_278:
                if ( *(_DWORD *)(a7 + 32) == 1 )
                {
                  *(_WORD *)(v144 + 4) = *(_WORD *)(*(_QWORD *)(v144 + 8) + 66LL);
                }
                else
                {
                  if ( !(unsigned __int8)CmpCheckOpenAccessOnKeyBody(
                                           v144,
                                           (int)v51,
                                           a7,
                                           v260[0],
                                           v244,
                                           (*(_DWORD *)(a7 + 24) & 4) != 0,
                                           v142,
                                           (__int64)&v251,
                                           (__int64)&v242) )
                  {
                    v246[1] = v251;
                    if ( v251 )
                    {
                      if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                      {
                        CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
                        *(_DWORD *)(a7 + 160) |= 1u;
                      }
                      v268 = CmpConstructName(v12, v145);
                    }
                    CmpRecordParseFailure(a7, 15584, v242);
LABEL_285:
                    if ( !v254 )
                      goto LABEL_293;
                    goto LABEL_286;
                  }
                  v144 = (__int64)Object;
                  v246[1] = v251;
                }
                Object = 0LL;
                *v271 = v144;
                if ( !*(_DWORD *)(a7 + 32) )
                  *(_DWORD *)(a7 + 32) = 2;
                if ( v246[0] )
                  v242 = 1073741846;
                else
                  v242 = 0;
                goto LABEL_285;
              }
              if ( (unsigned __int8)CmpIsKeyStackSymlink(v51) && !_bittest((const signed __int32 *)a7, 9u) )
              {
                if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                {
                  CmpUnlockKcbStack(*(__int64 *)&v246[3]);
                  v109 = v255;
                  if ( HIBYTE(v244) )
                  {
                    CmpUnlockKcb(*(_QWORD *)(v255 + 8));
                    HIBYTE(v244) = 0;
                  }
                  if ( v241 )
                  {
                    CmpUnlockHashEntryByKcb(v12);
                    v241 = 0;
                  }
                  v237 = CmpGetSymbolicLinkTarget(
                           (__int64)v51,
                           a7 + 216,
                           0,
                           0,
                           *(__int64 *)v247,
                           a7,
                           (__int64)&v269,
                           v258,
                           (ULONG_PTR *)(a7 + 88),
                           &v263);
                  v242 = v237;
                  if ( v237 >= 0 )
                  {
                    *(_DWORD *)a7 &= ~8u;
                    if ( !*(_QWORD *)(a7 + 64) )
                    {
                      v238 = *(_QWORD *)(v263 + 32);
                      if ( (*(_DWORD *)(v238 + 4120) & 1) != 0 )
                        *(_QWORD *)(a7 + 64) = v238;
                    }
                    v242 = 260;
                    CmpRecordParseFailure(a7, 13440, 260);
                  }
                  else
                  {
                    CmpRecordParseFailure(a7, 13312, v237);
                  }
                  goto LABEL_198;
                }
                v242 = -1073741771;
                v189 = 13056;
                v190 = -1073741771;
                goto LABEL_479;
              }
              if ( (*(_DWORD *)(v12 + 184) & 0x20000) == 0 )
              {
                if ( (*(_DWORD *)(a7 + 24) & 2) == 0 )
                {
                  v52 = *(int **)&v246[3];
                  v178 = CmpDoWritethroughReparse(
                           v12,
                           (__int64)v51,
                           *(__int64 *)&v246[3],
                           0,
                           0LL,
                           a7,
                           (UNICODE_STRING *)v258);
                  v242 = v178;
                  if ( v178 != -1073741199 )
                  {
                    v191 = v178;
                    v170 = 13888;
                    goto LABEL_442;
                  }
                  v179 = CmpVEExecuteOpenLogic(v12, v244, *(_QWORD *)v260 + 32LL);
                  v242 = v179;
                  if ( v179 != -1073741199 )
                  {
                    v191 = v179;
                    v170 = 13952;
                    goto LABEL_442;
                  }
                  v142 = v247[0];
                  LOBYTE(v180) = 1;
                  v181 = CmpEnlistKeyBody((_DWORD)Object, v12, *(_DWORD *)v247, v180, (__int64)v51);
                  v242 = v181;
                  if ( v181 < 0 )
                  {
                    v191 = v181;
                    v170 = 14016;
                    goto LABEL_442;
                  }
                  goto LABEL_385;
                }
                v242 = -1073741771;
                v189 = 13824;
                v190 = -1073741771;
LABEL_479:
                CmpRecordParseFailure(a7, v189, v190);
                v52 = *(int **)&v246[3];
                LOBYTE(v243) = 1;
                goto LABEL_293;
              }
              v189 = 13568;
            }
          }
          else
          {
            v189 = 12032;
          }
          v242 = -1073741772;
          v190 = -1073741772;
          goto LABEL_479;
        }
        CmpUnlockKcbStack((__int64)v51);
        CmpUnlockKcbStack((__int64)v52);
        CmpLockKcbStackTopExclusiveRestShared(v52);
        CmpLockKcbStackTopExclusiveRestShared(v51);
        if ( (unsigned __int8)CmpIsKeyStackDeleted(v52, *(_QWORD *)v247) )
        {
          v242 = -1073741772;
          CmpRecordParseFailure(a7, 8960, -1073741772);
          goto LABEL_293;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v12 + 72) + 184LL) & 0x20000) != 0 )
        {
          v242 = -1073741772;
          CmpRecordParseFailure(a7, 9216, -1073741772);
          goto LABEL_293;
        }
        v164 = CmpGetComponentNameAtIndex(a7 + 216, v139);
        if ( (*(_DWORD *)(v12 + 184) & 0x400000) == 0 && (*(_DWORD *)(v12 + 8) & 8) != 0 )
        {
          CmpDelayDerefKeyControlBlock(*(_QWORD *)(v12 + 104), (__int64)&v269);
          *(_QWORD *)(v12 + 104) = 0LL;
          *(_WORD *)(v12 + 8) &= ~8u;
        }
        *(_WORD *)(v12 + 186) |= 0x40u;
        *(_DWORD *)(v12 + 100) = -1;
        *(_DWORD *)(v12 + 96) = *(_DWORD *)(a7 + 56);
        v242 = CmpCreateKeyBody(v12, 3, (__int64)v51, (__int64)&v257, (__int64)v246);
        if ( v242 < 0 )
          goto LABEL_493;
        if ( (unsigned __int8)CmpIsKeyStackDeleted(v51, *(_QWORD *)v247) )
        {
          v242 = CmpCreateChild((_DWORD)v52, (_DWORD)v51, v260[0], v164, a7, 64, 0, 0, *(__int64 *)v247);
          if ( v242 < 0 )
            goto LABEL_493;
          v142 = v247[0];
          *(_DWORD *)(a7 + 32) = 1;
LABEL_277:
          v144 = v257;
          Object = (PVOID)v257;
          goto LABEL_278;
        }
LABEL_332:
        v142 = v247[0];
        goto LABEL_277;
      }
      CmpUnlockKcbStack((__int64)v51);
      CmpUnlockKcbStack((__int64)v52);
      v194 = v255;
      if ( HIBYTE(v244) )
        CmpUnlockKcb(*(_QWORD *)(v255 + 8));
      LOBYTE(v252) = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
      if ( HIBYTE(v244) )
        CmpLockKcbShared(*(_QWORD *)(v194 + 8));
      CmpLockKcbStackTopExclusiveRestShared(v52);
      CmpLockKcbStackTopExclusiveRestShared(v51);
      v199 = (unsigned __int16 *)CmpGetComponentNameAtIndex(a7 + 216, v139);
      ComponentHashAtIndex = CmpGetComponentHashAtIndex(v200, v198);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v255, 0LL) )
      {
        v202 = -1073740763;
        if ( (*(_BYTE *)(v255 + 48) & 1) == 0 )
          v202 = -1073741444;
        v242 = v202;
        CmpRecordParseFailure(a7, 6656, v202);
        v16 = v253;
        goto LABEL_293;
      }
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v52, *(_QWORD *)v247) )
      {
        v203 = 6912;
        goto LABEL_518;
      }
      if ( (unsigned __int8)CmpIsKeyStackDeleted(v51, *(_QWORD *)v247) )
      {
        v205 = *(_QWORD *)(v12 + 72);
        if ( *(_QWORD *)(v205 + 32) == CmpMasterHive )
        {
          if ( (*(_DWORD *)(v205 + 184) & 0x20000) == 0 )
          {
            if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
            {
              CmpAttachToRegistryProcess((PRKAPC_STATE)(a7 + 168));
              *(_DWORD *)(a7 + 160) |= 1u;
            }
            v206 = *(unsigned int *)(a7 + 40);
            v207 = *(_QWORD *)(a7 + 48);
            if ( (_DWORD)v206 == -1 )
            {
              HiveRootCell = CmpCreateHiveRootCell(v207, a7 + 40);
              v242 = HiveRootCell;
              if ( HiveRootCell < 0 )
              {
                CmpRecordParseFailure(a7, 7808, HiveRootCell);
                goto LABEL_291;
              }
            }
            else
            {
              updated = CmpUpdateHiveRootCellFlags(v207, v206);
              v242 = updated;
              if ( updated < 0 )
              {
                CmpRecordParseFailure(a7, 7936, updated);
                goto LABEL_291;
              }
            }
            v210 = BugCheckParameter2;
            v211 = BugCheckParameter2;
            *(_WORD *)(BugCheckParameter2 + 186) |= 2u;
            v242 = CmpCreateKeyControlBlock(
                     *(_QWORD *)(a7 + 48),
                     -1,
                     v211,
                     *(_QWORD *)(a7 + 80),
                     1,
                     v199,
                     ComponentHashAtIndex,
                     0,
                     &v267);
            *(_WORD *)(v210 + 186) &= ~2u;
            if ( v242 < 0 )
            {
              CmpRecordParseFailure(a7, 0x2000, v242);
              v52 = *(int **)&v246[3];
              goto LABEL_291;
            }
            v212 = v210;
            v213 = v267;
            BugCheckParameter2 = v267;
            CmpDereferenceKeyControlBlockUnsafe(v212);
            CmpUnlockHashEntryByKcb(v212);
            v241 = 0;
            v214 = CmpStartKcbStackForTopLayerKcb((__int64)&ApcState, v213);
            v242 = v214;
            if ( v214 < 0 )
            {
              CmpRecordParseFailure(a7, 8448, v214);
              v52 = *(int **)&v246[3];
              goto LABEL_291;
            }
            *(_WORD *)(v212 + 186) |= 2u;
            CmpLockKcbStackTopExclusiveRestShared(&ApcState);
            *(_WORD *)(v212 + 186) &= ~2u;
            v254 = 1;
            v215 = CmpCreateKeyBody(v213, 3, (__int64)&ApcState, (__int64)&v257, (__int64)v246);
            v242 = v215;
            if ( v215 >= 0 )
            {
              HvLockHiveFlusherShared(*(_QWORD *)(v212 + 32), v216, v217, v218);
              HvLockHiveFlusherExclusive(*(_QWORD *)(v213 + 32));
              v219 = *(_QWORD *)(v213 + 32);
              v220 = *(_DWORD *)(v219 + 104);
              v221 = HvpMarkCellDirty(v219, *(unsigned int *)(a7 + 40));
              v242 = v221;
              if ( v221 >= 0 )
              {
                v242 = CmpCreateChild(
                         *(_DWORD *)&v246[3],
                         (_DWORD)v51,
                         v260[0],
                         (_DWORD)v199,
                         a7,
                         10,
                         0,
                         1,
                         *(__int64 *)v247);
                if ( v242 >= 0 )
                {
                  v12 = BugCheckParameter2;
                  LOBYTE(v222) = 1;
                  v223 = BugCheckParameter2;
                  *(_DWORD *)(BugCheckParameter2 + 40) = *(_DWORD *)(a7 + 40);
                  *(_DWORD *)(CmpGetKeyNodeForKcb(v223, &v266, v222) + 16) = *(_DWORD *)(v212 + 40);
                  ++*(_QWORD *)(v12 + 304);
                  CmpRebuildKcbCacheFromNode(v12);
                  v224 = *(_QWORD *)(v12 + 32);
                  if ( (*(_BYTE *)(v224 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v224, &v266);
                  else
                    HvpReleaseCellPaged(v224, &v266);
                  if ( !v220 )
                    HvResetDirtyData(*(_QWORD *)(v12 + 32));
                  HvUnlockHiveFlusherExclusive(*(_QWORD *)(v12 + 32));
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v212 + 32));
                  *(_WORD *)(v212 + 8) |= 8u;
                  CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v12);
                  *(_QWORD *)(v212 + 104) = v12;
                  CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
                  v16 = v253;
                  v52 = *(int **)&v246[3];
                  v264 = WORD1(ApcState.ApcListHead[0].Flink);
                  LOBYTE(v252) = 0;
                  *(_DWORD *)(a7 + 32) = 1;
                  goto LABEL_332;
                }
              }
              else
              {
                CmpRecordParseFailure(a7, 8704, v221);
              }
              v12 = BugCheckParameter2;
              HvUnlockHiveFlusherExclusive(*(_QWORD *)(BugCheckParameter2 + 32));
              HvUnlockHiveFlusherShared(*(_QWORD *)(v212 + 32));
              v16 = v253;
              v52 = *(int **)&v246[3];
              Object = (PVOID)v257;
              v264 = WORD1(ApcState.ApcListHead[0].Flink);
            }
            else
            {
              CmpRecordParseFailure(a7, 8576, v215);
              v16 = v253;
              v12 = BugCheckParameter2;
              v52 = *(int **)&v246[3];
              Object = (PVOID)v257;
              v264 = WORD1(ApcState.ApcListHead[0].Flink);
            }
LABEL_286:
            v146 = 0;
            if ( (v264 & 0x8000u) != 0LL )
              goto LABEL_293;
            v147 = (char *)ApcState.ApcListHead[1].Blink - (char *)&ApcState.ApcListHead[0].Blink;
            p_Blink = &ApcState.ApcListHead[0].Blink;
            do
            {
              if ( v146 >= 2 )
                v149 = (ULONG_PTR *)((char *)p_Blink + v147 - 16);
              else
                v149 = (ULONG_PTR *)p_Blink;
              CmpUnlockKcb(*v149);
              ++v146;
              ++p_Blink;
            }
            while ( v146 <= (__int16)v264 );
LABEL_291:
            v16 = v253;
            goto LABEL_292;
          }
          v203 = 7680;
LABEL_518:
          v242 = -1073741772;
          CmpRecordParseFailure(a7, v203, -1073741772);
          v16 = v253;
          goto LABEL_293;
        }
        v204 = 7424;
      }
      else
      {
        v204 = 7168;
      }
      v242 = -1073741790;
      CmpRecordParseFailure(a7, v204, -1073741790);
      v16 = v253;
      goto LABEL_293;
    }
    v56 = *((_WORD *)v51 + 1);
    for ( n = 0; n <= v56; ++n )
    {
      if ( n >= 2 )
        v58 = *(_QWORD *)(v51[3] + 8LL * n - 16);
      else
        v58 = v51[n + 1];
      CmpLockKcbShared(v58);
      v56 = *((_WORD *)v51 + 1);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x20000) != 0 )
    {
      v74 = 3968;
      goto LABEL_112;
    }
    v261 = 0LL;
    while ( 1 )
    {
      if ( v56 < 0 )
        goto LABEL_110;
      v59 = v56 >= 2 ? *(_QWORD *)(v51[3] + 8LL * v56 - 16) : v51[v56 + 1];
      if ( *(_WORD *)(v59 + 66) && *(_BYTE *)(v59 + 65) == 1 )
        goto LABEL_110;
      if ( *(_DWORD *)(v59 + 40) != -1 )
        break;
      --v56;
    }
    v60 = *(_QWORD *)v247;
    if ( *(_QWORD *)v247 )
      break;
LABEL_86:
    for ( ii = *((_WORD *)v51 + 1); ; --ii )
    {
      if ( ii < 0 )
        goto LABEL_92;
      v62 = ii >= 2 ? *(_QWORD *)(v51[3] + 8LL * ii - 16) : v51[ii + 1];
      if ( *(_DWORD *)(v62 + 40) != -1 )
        break;
    }
    if ( (*(_DWORD *)(v62 + 184) & 0x100000) != 0 )
    {
      v107 = CmpGetSymbolicLinkTarget(
               (__int64)v51,
               a7 + 216,
               *(__int16 *)&v246[3],
               v248,
               v60,
               a7,
               (__int64)&v269,
               v258,
               (ULONG_PTR *)(a7 + 88),
               &v263);
      v242 = v107;
      if ( v107 < 0 )
      {
        CmpRecordParseFailure(a7, 4608, v107);
        v12 = BugCheckParameter2;
      }
      else
      {
        *(_DWORD *)a7 &= ~8u;
        if ( !*(_QWORD *)(a7 + 64) )
        {
          v108 = *(_QWORD *)(v263 + 32);
          if ( (*(_DWORD *)(v108 + 4120) & 1) != 0 )
            *(_QWORD *)(a7 + 64) = v108;
        }
        v242 = 260;
        CmpRecordParseFailure(a7, 4864, 260);
        v12 = BugCheckParameter2;
      }
      goto LABEL_206;
    }
LABEL_92:
    for ( jj = 0; jj <= *((__int16 *)v51 + 1); ++jj )
    {
      if ( jj >= 2 )
        v64 = *(_QWORD *)(v51[3] + 8LL * jj - 16);
      else
        v64 = v51[jj + 1];
      CmpUnlockKcb(v64);
    }
    v65 = (unsigned int)*(__int16 *)&v246[3];
    v253 = v16;
    if ( (unsigned int)v65 >= 8 )
    {
      v75 = *(_QWORD *)(a7 + 376);
      v253 = v16;
      v67 = *(_QWORD *)(a7 + 376) + 16 * ((unsigned int)(v65 - 8) + 6LL);
      v66 = *(_DWORD *)(v75 + 4LL * (unsigned int)(v65 - 8));
    }
    else
    {
      v66 = *(_DWORD *)(a7 + 216 + 4 * v65);
      v67 = a7 + 216 + 16 * (v65 + 2);
    }
    v68 = BugCheckParameter2;
    v69 = (*(_DWORD *)a7 & 1) != 0 && (_DWORD)v65 == v55 - 1;
    LODWORD(v240) = v66 + 37 * *(_DWORD *)(BugCheckParameter2 + 16);
    v70 = CmpWalkOneLevel(
            BugCheckParameter2,
            (int)v51,
            (int)v265,
            (int)v52,
            (__int64)&v250,
            v67,
            v66,
            v240,
            *(__int64 *)v247,
            v69,
            a7);
    v242 = v70;
    if ( LOBYTE(WheapPfaLock.StackLimit) && v70 == -1073741772 )
    {
      if ( WheapPfaLock.StackBase != KeGetCurrentThread() && *(_QWORD *)(v68 + 32) == CmpMasterHive )
      {
        v195 = *(_WORD *)&v246[3];
        if ( *(_WORD *)(v68 + 12) == 3 && *(__int16 *)&v246[3] > 0 )
        {
          v196 = CmpGetComponentNameAtIndex(a7 + 216, *(__int16 *)&v246[3] - 1);
          if ( (unsigned __int8)CmpWaitForHiveMount(v196) )
          {
            v162 = 5120;
            goto LABEL_508;
          }
          v195 = *(_WORD *)&v246[3];
        }
        if ( *(_WORD *)(v68 + 12) == 2 )
        {
          v197 = CmpGetComponentNameAtIndex(a7 + 216, v195);
          if ( (unsigned __int8)CmpWaitForHiveMount(v197) )
          {
            v162 = 5376;
LABEL_508:
            *(_DWORD *)a7 |= 0x100u;
            v161 = 259;
            v242 = 259;
            goto LABEL_315;
          }
        }
      }
      v70 = v242;
    }
    if ( v70 < 0 )
    {
      v161 = v70;
      v162 = 5504;
LABEL_315:
      CmpRecordParseFailure(a7, v162, v161);
      v12 = BugCheckParameter2;
      goto LABEL_206;
    }
    v71 = *(_QWORD *)v265;
    ++*(_BYTE *)(a7 + 425);
    *(_QWORD *)(a7 + 408) = v71;
    *(_QWORD *)(a7 + 416) = v71;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    HIWORD(v54) = *(_WORD *)&v246[5];
    v241 = v250;
    LOWORD(v54) = *(_WORD *)&v246[3] + 1;
    v171 = v51;
    BugCheckParameter2 = v71;
    v51 = (__int64 *)v52;
    *(_QWORD *)v265 = 0LL;
    v52 = (int *)v171;
    LOBYTE(v250) = 0;
    v53 = v248;
    *(_DWORD *)&v246[3] = v54;
  }
  v72 = v51[1];
  do
  {
    NextElement = CmListGetNextElement(v72 + 208, &v261, 32LL);
    if ( !NextElement )
      goto LABEL_86;
  }
  while ( *(_DWORD *)(NextElement + 68) != 2 );
  if ( !CmEqualTrans(*(_QWORD *)(NextElement + 56), v60) )
  {
    v60 = *(_QWORD *)v247;
    goto LABEL_86;
  }
LABEL_110:
  if ( !LOBYTE(WheapPfaLock.StackLimit)
    || WheapPfaLock.StackBase == KeGetCurrentThread()
    || *(_QWORD *)(BugCheckParameter2 + 32) != CmpMasterHive
    || *(_WORD *)(BugCheckParameter2 + 12) != 3
    || *(__int16 *)&v246[3] <= 0
    || (v186 = CmpGetComponentNameAtIndex(a7 + 216, *(__int16 *)&v246[3] - 1),
        !(unsigned __int8)CmpWaitForHiveMount(v186)) )
  {
    v74 = 4096;
LABEL_112:
    v242 = -1073741772;
    CmpRecordParseFailure(a7, v74, -1073741772);
    v52 = 0LL;
    goto LABEL_292;
  }
  *(_DWORD *)a7 |= 0x100u;
  v242 = 259;
  CmpRecordParseFailure(a7, 3840, 259);
  v52 = 0LL;
LABEL_292:
  v12 = BugCheckParameter2;
LABEL_293:
  for ( kk = 0; kk <= *((__int16 *)v51 + 1); ++kk )
  {
    if ( kk >= 2 )
      v151 = *(_QWORD *)(v51[3] + 8LL * kk - 16);
    else
      v151 = v51[kk + 1];
    CmpUnlockKcb(v151);
  }
LABEL_297:
  if ( (_BYTE)v243 )
  {
    for ( mm = 0; mm <= *((__int16 *)v52 + 1); ++mm )
    {
      if ( mm >= 2 )
        v153 = *(_QWORD *)(*((_QWORD *)v52 + 3) + 8LL * mm - 16);
      else
        v153 = *(_QWORD *)&v52[2 * mm + 2];
      CmpUnlockKcb(v153);
    }
  }
LABEL_197:
  v109 = v255;
LABEL_198:
  if ( HIBYTE(v244) )
    CmpUnlockKcb(*(_QWORD *)(v109 + 8));
  if ( (_BYTE)v252 )
  {
    v110 = *(_QWORD *)(a7 + 48);
    v111 = *(__int64 **)(v110 + 1648);
    v111[1] = 0LL;
    _m_prefetchw(v111);
    v112 = *v111;
    v113 = *v111 - 16;
    if ( (*v111 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v113 = 0LL;
    if ( (v112 & 2) != 0 || (v114 = *v111, v114 != _InterlockedCompareExchange64(v111, v113, v112)) )
      ExfReleasePushLock(v111);
    KeAbPostRelease((unsigned __int64)v111);
    CmpDereferenceHive((char *)v110);
  }
LABEL_206:
  v115 = v241;
LABEL_207:
  if ( v115 )
    CmpUnlockHashEntryByKcb(v12);
LABEL_209:
  if ( v245 )
    CmpUnlockHashEntryByKcb(v16);
LABEL_211:
  if ( v275[1] )
    CmSiFreeMemory(v275[1]);
  if ( v277[1] )
    CmSiFreeMemory(v277[1]);
  if ( ApcState.ApcListHead[1].Blink )
    CmSiFreeMemory((PPRIVILEGE_SET)ApcState.ApcListHead[1].Blink);
  v116 = *(_QWORD *)v265;
  if ( *(_QWORD *)v265 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v12);
    v117 = v116;
LABEL_220:
    CmpDereferenceKeyControlBlock(v117);
  }
  else if ( v12 )
  {
    v117 = v12;
    goto LABEL_220;
  }
  if ( v16 )
    CmpDereferenceKeyControlBlock(v16);
  v118 = *(_DWORD *)(a7 + 100);
  if ( v118 && (v118 & 2) != 0 )
  {
    v124 = *(_QWORD *)(a7 + 112);
    memset(&ApcState, 0, sizeof(ApcState));
    v125 = *(__int64 **)(v124 + 1648);
    v126 = *(_DWORD *)(v124 + 1656);
    v271 = v125;
    CmpAttachToRegistryProcess(&ApcState);
LABEL_244:
    if ( v9 >= v126 )
    {
      CmpDetachFromRegistryProcess(&ApcState);
      v10 = v273;
      *(_DWORD *)(v273 + 100) &= ~2u;
    }
    else
    {
      CmpLockHashEntryByIndexExclusive(v124, v9, v127, v128);
      v129 = &v125[3 * v9];
LABEL_246:
      v130 = v129 + 2;
      while ( 1 )
      {
        if ( !*v130 )
        {
          v134 = v270;
          CmpUnlockHashEntryByIndex((PVOID)v124);
          v125 = v271;
          v9 = v134 + 1;
          v270 = v9;
          goto LABEL_244;
        }
        v131 = (_QWORD *)(*v130 - 16LL);
        CmpLockKcbExclusive(v131);
        if ( !*v131 )
        {
          CmpRemoveFromDelayedClose((__int64)v131);
          CmpCleanUpKcbCacheWithLock((ULONG_PTR)v131, (__int64)&v269, v135, v136);
          CmpUnlockKcb((ULONG_PTR)v131);
          goto LABEL_246;
        }
        v132 = v131[3];
        v133 = CmpSyncKcbCacheForHive(v131, v124, &v269, 0LL);
        if ( ((v133 - 1) & 0xFFFFFFFD) == 0 )
          break;
        if ( v133 == 2 )
        {
          CmpUnlockKcb((ULONG_PTR)v131);
          *v130 = v132;
        }
        else
        {
          v130 = v131 + 3;
          CmpUnlockKcb((ULONG_PTR)v131);
        }
      }
      CmpUnlockKcb((ULONG_PTR)v131);
      CmpUnlockHashEntryByIndex((PVOID)v124);
      v10 = v273;
      *(_DWORD *)(v273 + 100) &= ~2u;
    }
  }
  CmpDrainDelayDerefContext((_QWORD **)&v269);
  if ( HIBYTE(v243) )
    CmpUnlockRegistry(v119);
  v120 = (void *)v268;
  if ( v268 )
  {
    if ( v246[1] && (unsigned __int8)CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(v10, v120);
    CmpFreeTransientPoolWithTag(v120, 0x624E4D43u);
  }
  if ( (*(_DWORD *)(v10 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(v10 + 168);
  if ( Object )
    ObfDereferenceObject(Object);
  CmpCleanupPathInfo(v10 + 216);
  return (unsigned int)v242;
}
