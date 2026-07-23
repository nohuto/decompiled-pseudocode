/*
 * XREFs of RtlRbRemoveNode @ 0x140379A10
 * Callers:
 *     PfSnNameRemove @ 0x14024C780 (PfSnNameRemove.c)
 *     ?KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x14026F83C (-KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x1402998EC (-KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     MiRemoveSlabEntry @ 0x1402A8C10 (MiRemoveSlabEntry.c)
 *     MiFlowThroughRemoveNode @ 0x14031F584 (MiFlowThroughRemoveNode.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     HalpPopCommonBufferEntry @ 0x1403463F4 (HalpPopCommonBufferEntry.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034F8C0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x140352B1C (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpVaMgrAlloc @ 0x140352C2C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 *     RtlpHpLargeFree @ 0x14035645C (RtlpHpLargeFree.c)
 *     ?KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140376ED8 (-KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     ?KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140379140 (-KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     RtlpHpSegFreeRangeRemove @ 0x1403799B0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14037AAF0 (RtlpHpVsFreeChunkRemove.c)
 *     KiRemoveTimer2 @ 0x14037AC60 (KiRemoveTimer2.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x14040CD6C (KiSetClockInterval.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140444400 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x140444C08 (MiRescanPageFileBitmapPortion.c)
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448C0C (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 *     MiLogNonStealNonPagedPoolWorker @ 0x140450A40 (MiLogNonStealNonPagedPoolWorker.c)
 *     IoStopDiskIoAttributionForContext @ 0x14045C6A0 (IoStopDiskIoAttributionForContext.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1404777E4 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140477AB8 (MiBitmapsCachedEntryLengthChanged.c)
 *     VmpRemoveMemoryRange @ 0x14050AC9C (VmpRemoveMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x140513450 (VmpMergeMemoryRanges.c)
 *     KasanDriverUnloadImage @ 0x1405DFDF0 (KasanDriverUnloadImage.c)
 *     KiResetClockInterval @ 0x1405F0FDC (KiResetClockInterval.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140618D94 (PspJobIoRateVolumeEntryRemove.c)
 *     RtlRemovePointerMapping @ 0x14061D7B0 (RtlRemovePointerMapping.c)
 *     VmpFaultEntryRemove @ 0x1406C4B14 (VmpFaultEntryRemove.c)
 *     VmpRefDerefPinnedPages @ 0x1406C563C (VmpRefDerefPinnedPages.c)
 *     VmpUpdatePinRangesForFirstPin @ 0x1406C59DC (VmpUpdatePinRangesForFirstPin.c)
 *     KeRemoveCallbackRegistrationEntry @ 0x1407BC090 (KeRemoveCallbackRegistrationEntry.c)
 *     EtwpDeleteSessionDemuxObject @ 0x140832C60 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x140833120 (EtwpRegisterPrivateSession.c)
 *     HvpViewMapShrinkStorage @ 0x140862EC8 (HvpViewMapShrinkStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408E37B4 (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpSetProviderTraitsCommon @ 0x140919184 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1409BE87C (EtwpReleaseProviderTraitsReference.c)
 *     PfProcessExitNotification @ 0x140ACACC4 (PfProcessExitNotification.c)
 *     MmFreeLoaderBlock @ 0x140CF858C (MmFreeLoaderBlock.c)
 *     MxRemoveFreeZeroMemoryDescriptor @ 0x140CFE650 (MxRemoveFreeZeroMemoryDescriptor.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x14061CC2C (RtlpRbReportFatalError.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  signed __int64 v2; // rbx
  $7D93978C745EB1C2D28075BAF55422B4 v4; // cl
  PRTL_BALANCED_NODE v5; // r12
  char v6; // al
  unsigned __int64 v7; // r14
  _RTL_BALANCED_NODE *v8; // rdi
  char v9; // cl
  unsigned __int64 v10; // r15
  _RTL_BALANCED_NODE *v11; // rax
  __int64 v12; // rax
  _RTL_BALANCED_NODE *v13; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v14; // r8
  char v15; // r8
  _RTL_BALANCED_NODE *v16; // rcx
  BOOL v17; // r13d
  $7D93978C745EB1C2D28075BAF55422B4 v18; // cl
  _RTL_BALANCED_NODE *v19; // r12
  unsigned __int64 v20; // rbx
  $7D93978C745EB1C2D28075BAF55422B4 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  int v24; // r15d
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  _RTL_BALANCED_NODE *v33; // rcx
  unsigned __int64 v34; // rcx
  _RTL_BALANCED_NODE *v35; // rdx
  __int64 v36; // rax
  char v37; // cl
  __int64 v38; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v39; // al
  $424C8BBEF8F6C852886B4C6E806B5DB0 v40; // al
  unsigned __int64 v41; // rdx
  char v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  int v45; // r15d
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // rax
  _RTL_BALANCED_NODE *v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  char v58; // al
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r14
  unsigned __int64 Root; // rcx
  unsigned __int64 v62; // rax
  _RTL_BALANCED_NODE *v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  char v70; // dl
  unsigned __int64 v71; // rax
  __int64 v72; // r13
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 v80; // rax
  _RTL_BALANCED_NODE *v81; // rax
  char v82; // al
  char v83; // al
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // r14
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rcx
  _RTL_BALANCED_NODE *v91; // rcx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // r14
  _BOOL8 v96; // r13
  unsigned __int64 v97; // rcx
  int v98; // r12d
  __int64 v99; // rcx
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rcx
  _RTL_BALANCED_NODE *v102; // rcx
  unsigned __int64 v103; // rcx
  __int64 v104; // r15
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rcx
  _RTL_BALANCED_NODE *v109; // rax
  char v110; // al
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  char v113; // al
  __int64 v114; // rax
  __int128 v115; // rax
  signed __int64 v116; // rax
  _RTL_BALANCED_NODE *v117; // rax
  unsigned int v118; // [rsp+78h] [rbp+50h]
  unsigned __int64 v119; // [rsp+80h] [rbp+58h]
  unsigned __int64 v120; // [rsp+80h] [rbp+58h]

  v2 = (signed __int64)Node->Children[0];
  v4 = Tree->0;
  v5 = Node;
  v6 = *(_BYTE *)&v4 & 1;
  if ( (*(_BYTE *)&v4 & 1) != 0 && v2 )
    v2 ^= (unsigned __int64)Node;
  v7 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&v4 & 1) != 0 && v7 )
    v7 ^= (unsigned __int64)Node;
  if ( v2 )
  {
    if ( !v7 )
      goto LABEL_9;
    v48 = *(_QWORD *)v7;
    v118 = 1;
    v10 = v7;
    v8 = (_RTL_BALANCED_NODE *)v7;
    if ( *(_QWORD *)v7 )
    {
      v118 = 0;
      do
      {
        v8 = (_RTL_BALANCED_NODE *)v10;
        if ( (*(_BYTE *)&v4 & 1) != 0 && v48 )
          v10 ^= v48;
        else
          v10 = v48;
        v48 = *(_QWORD *)v10;
      }
      while ( *(_QWORD *)v10 );
    }
    v49 = (_RTL_BALANCED_NODE *)v2;
    if ( (*(_BYTE *)&v4 & 1) != 0 )
      v49 = (_RTL_BALANCED_NODE *)(v10 ^ v2);
    *(_QWORD *)v10 = v49;
    v50 = *(_QWORD *)(v2 + 16);
    v51 = v50 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v51 )
      v51 ^= v2;
    if ( (PRTL_BALANCED_NODE)v51 != v5 )
      RtlpRbReportFatalError(v51, v5);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v52 = v10 ^ v2;
    else
      v52 = v10;
    *(_QWORD *)(v2 + 16) = v52 | v50 & 3;
    v53 = *(_QWORD *)(v7 + 16);
    v54 = v53 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v54 )
      v54 ^= v7;
    if ( (PRTL_BALANCED_NODE)v54 != v5 )
      RtlpRbReportFatalError(v54, v5);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v55 = v10 ^ v7;
    else
      v55 = v10;
    *(_QWORD *)(v7 + 16) = v55 | v53 & 3;
    v2 = *(_QWORD *)(v10 + 8);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v2 )
    {
      v2 ^= v10;
    }
    else if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
    {
LABEL_147:
      v56 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(v10 + 8) = v7;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v56 )
        v56 ^= v10;
      if ( (_RTL_BALANCED_NODE *)v56 != v8 && (v56 || v8 != (_RTL_BALANCED_NODE *)v10) )
        RtlpRbReportFatalError(v56, v8);
      v57 = v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v14 = *($424C8BBEF8F6C852886B4C6E806B5DB0 *)(v10 + 16);
      v58 = *(_BYTE *)&Tree->0 & 1;
      if ( v58 && v57 )
      {
        v57 ^= (unsigned __int64)v5;
      }
      else if ( !v58 )
      {
LABEL_156:
        v59 = v57 | *(_DWORD *)(v10 + 16) & 3;
        *(_QWORD *)(v10 + 16) = v59;
        *(_BYTE *)(v10 + 16) = v59 ^ (*(_BYTE *)&v5->0 ^ v59) & 1;
        v60 = v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v60 )
        {
          v70 = *(_BYTE *)&Tree->0 & 1;
          if ( v70 )
            v60 ^= (unsigned __int64)v5;
          v71 = *(_QWORD *)(v60 + 8);
          if ( v70 && v71 )
            v71 ^= v60;
          v72 = 0LL;
          if ( (PRTL_BALANCED_NODE)v71 == v5 )
            v72 = 8LL;
          v73 = *(_QWORD *)(v60 + v72);
          if ( v70 && v73 )
            v73 ^= v60;
          if ( (PRTL_BALANCED_NODE)v73 != v5 )
            RtlpRbReportFatalError(v73, v5);
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v74 = v10 ^ v60;
          else
            v84 = v10;
          *(_QWORD *)(v60 + v72) = v75;
        }
        else
        {
          Root = (unsigned __int64)Tree->Root;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && Root )
            Root ^= (unsigned __int64)Tree;
          if ( (PRTL_BALANCED_NODE)Root != v5 )
            RtlpRbReportFatalError(Root, v5);
          v62 = v10;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v112 = (unsigned __int64)Tree ^ v10;
          Tree->Root = v63;
        }
        goto LABEL_19;
      }
      if ( v57 )
        v57 ^= v10;
      goto LABEL_156;
    }
    v7 ^= v10;
    goto LABEL_147;
  }
  v2 = v7;
LABEL_9:
  v8 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  v9 = *(_BYTE *)&v4 & 1;
  if ( v9 && v8 )
    v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v8);
  v10 = (unsigned __int64)Node;
  if ( !v8 )
  {
    if ( v2 )
      *(_QWORD *)(v2 + 16) = 0LL;
    v27 = (unsigned __int64)Tree->Root;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v27 )
      v27 ^= (unsigned __int64)Tree;
    if ( (PRTL_BALANCED_NODE)v27 != Node )
      RtlpRbReportFatalError(v27, Node);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      v114 = -v2;
      Tree->Min = (_RTL_BALANCED_NODE *)(((unsigned __int64)Tree ^ v2) & -(__int64)(v2 != 0));
      *(_BYTE *)&Tree->0 |= 1u;
    }
    else
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v2;
    }
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      v113 = (unsigned __int8)Tree ^ v2;
      v2 = ((unsigned __int64)Tree ^ v2) & -(__int64)(v2 != 0);
    }
    Tree->Root = (_RTL_BALANCED_NODE *)v2;
    return;
  }
  v11 = v8->Children[1];
  if ( v9 && v12 )
    v77 = (unsigned __int64)v8 ^ v76;
  if ( v13 != Node )
  {
    v78 = (unsigned __int64)v8->Children[0];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v78 )
      v78 ^= (unsigned __int64)v8;
    if ( (PRTL_BALANCED_NODE)v78 != Node )
      RtlpRbReportFatalError(v78, Node);
    Min = Tree->Min;
    v118 = 0;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Min == (_RTL_BALANCED_NODE *)1 )
        v111 = 0LL;
      else
        v80 = (unsigned __int64)Min ^ ((unsigned __int64)Tree | 1);
    }
    else
    {
      v109 = Tree->Min;
    }
    if ( v81 != Node )
      goto LABEL_18;
    v82 = *(_BYTE *)&Tree->0 & 1;
    if ( v2 )
    {
      if ( !v110 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)v2;
        goto LABEL_18;
      }
      v116 = v2;
    }
    else
    {
      if ( !v83 )
      {
        Tree->Min = v8;
        goto LABEL_18;
      }
      v116 = (signed __int64)v8;
    }
    v117 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v116);
    Tree->Min = v117;
    *(_BYTE *)&Tree->0 |= 1u;
    goto LABEL_18;
  }
  v118 = 1;
LABEL_18:
  v14 = Node->0;
LABEL_19:
  v15 = *(_BYTE *)&v14 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v2 )
    v16 = (_RTL_BALANCED_NODE *)(v2 ^ (unsigned __int64)v8);
  else
    v16 = (_RTL_BALANCED_NODE *)v2;
  v17 = v118;
  v8->Children[v118] = v16;
  if ( v2 )
  {
    v64 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v64 )
      v64 ^= v2;
    if ( v64 != v10 )
      RtlpRbReportFatalError(v64, v10);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v8 )
      v8 = (_RTL_BALANCED_NODE *)(v2 ^ (unsigned __int64)v8);
    *(_QWORD *)(v2 + 16) = v8;
    return;
  }
  if ( v15 )
    return;
  while ( 1 )
  {
    v18 = Tree->0;
    v19 = v8;
    v20 = (unsigned __int64)v8->Children[!v17];
    if ( (*(_BYTE *)&v18 & 1) != 0 && v20 )
      v20 ^= (unsigned __int64)v8;
    v21 = Tree->0;
    if ( (*(_BYTE *)(v20 + 16) & 1) != 0 )
    {
      v22 = (unsigned __int64)Tree->Root;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v22 )
        v22 ^= (unsigned __int64)Tree;
      v119 = v22;
      v23 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v24 = *(_BYTE *)&Tree->0 & 1;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v23 )
        v23 ^= v20;
      if ( (_RTL_BALANCED_NODE *)v23 != v8 )
        RtlpRbReportFatalError(v23, v8);
      v25 = (unsigned __int64)v8->Children[!v17];
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v25 )
        v25 ^= (unsigned __int64)v8;
      if ( v25 != v20 )
        RtlpRbReportFatalError(v25, v20);
      v26 = v8->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_41;
        v26 ^= (unsigned __int64)v8;
      }
      if ( v26 )
      {
        v28 = *(_QWORD *)(v26 + 8);
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v28 )
          v28 ^= v26;
        if ( (_RTL_BALANCED_NODE *)v28 == v8 )
        {
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v29 = v20 ^ v26;
          else
            v29 = v20;
          *(_QWORD *)(v26 + 8) = v29;
        }
        else
        {
          v65 = *(_QWORD *)v26;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v65 )
            v65 ^= v26;
          if ( (_RTL_BALANCED_NODE *)v65 != v8 )
            RtlpRbReportFatalError(v65, v8);
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v66 = v20 ^ v26;
          else
            v66 = v20;
          *(_QWORD *)v26 = v66;
        }
LABEL_63:
        if ( v24 && v26 )
          v26 ^= v20;
        *(_QWORD *)(v20 + 16) = v26 | *(_DWORD *)(v20 + 16) & 3;
        v30 = *(_QWORD *)(v20 + 8LL * v17);
        if ( v24 )
        {
          if ( !v30 )
          {
LABEL_78:
            if ( v24 && v30 )
              v30 ^= (unsigned __int64)v8;
            v8->Children[!v17] = (_RTL_BALANCED_NODE *)v30;
            if ( v24 )
              v33 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ v20);
            else
              v33 = v8;
            *(_QWORD *)(v20 + 8LL * v17) = v33;
            v34 = v20;
            if ( v24 )
              v34 = (unsigned __int64)v8 ^ v20;
            v8->ParentValue = v34 | *(_DWORD *)&v8->0 & 3;
            if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
              v35 = (_RTL_BALANCED_NODE *)((v119 ^ (unsigned __int64)Tree) & ((unsigned __int128)-(__int128)v119 >> 64));
            else
              v35 = (_RTL_BALANCED_NODE *)v119;
            Tree->Root = v35;
            *(_BYTE *)(v20 + 16) &= ~1u;
            *(_BYTE *)&v8->0 |= 1u;
            v21 = Tree->0;
            v20 = (unsigned __int64)v8->Children[!v17];
            if ( (*(_BYTE *)&v21 & 1) != 0 && v20 )
              v20 ^= (unsigned __int64)v8;
            v18 = Tree->0;
            goto LABEL_91;
          }
          v30 ^= v20;
        }
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v24 && v31 )
            v31 ^= v30;
          if ( v31 != v20 )
            RtlpRbReportFatalError(v31, v20);
          if ( v24 )
            v32 = (unsigned __int64)v8 ^ v30;
          else
            v32 = (unsigned __int64)v8;
          *(_QWORD *)(v30 + 16) = v32 | *(_DWORD *)(v30 + 16) & 3;
        }
        goto LABEL_78;
      }
LABEL_41:
      if ( (_RTL_BALANCED_NODE *)v22 != v8 )
        RtlpRbReportFatalError(v22, v8);
      v119 = v20;
      goto LABEL_63;
    }
LABEL_91:
    v36 = *(_QWORD *)v20;
    v37 = *(_BYTE *)&v18 & 1;
    if ( *(_QWORD *)v20 )
    {
      if ( v37 )
        v36 ^= v20;
      if ( (*(_BYTE *)(v36 + 16) & 1) != 0 )
        break;
    }
    v38 = *(_QWORD *)(v20 + 8);
    if ( v38 )
    {
      if ( v37 )
        v38 ^= v20;
      if ( (*(_BYTE *)(v38 + 16) & 1) != 0 )
        break;
    }
    v39 = v8->0;
    if ( (*(_BYTE *)&v39 & 1) != 0 )
    {
      v40 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(*(_BYTE *)&v39 & 0xFE);
      v8->0 = v40;
      *(_BYTE *)(v20 + 16) |= 1u;
      return;
    }
    *(_BYTE *)(v20 + 16) |= 1u;
    v67 = v8->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v68 )
      v8 = (_RTL_BALANCED_NODE *)(v85 ^ (unsigned __int64)v8);
    else
      v8 = (_RTL_BALANCED_NODE *)(v8->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v8 )
      return;
    v69 = (unsigned __int64)v8->Children[1];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( v69 )
        v69 ^= (unsigned __int64)v8;
    }
    v17 = v69 == (_QWORD)v19;
    v118 = v17;
  }
  v41 = *(_QWORD *)(v20 + 8 * !v17);
  v42 = *(_BYTE *)&v21 & 1;
  if ( v42 )
  {
    if ( v41 )
    {
      v41 ^= v20;
      goto LABEL_105;
    }
LABEL_283:
    v95 = *(_QWORD *)(v20 + 8LL * v17);
    if ( v42 && v95 )
      v95 ^= v20;
    *(_BYTE *)(v95 + 16) &= ~1u;
    v96 = !v17;
    v97 = *(_QWORD *)(v95 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v98 = *(_BYTE *)&Tree->0 & 1;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v97 )
      v97 ^= v95;
    if ( v97 != v20 )
      RtlpRbReportFatalError(v97, v20);
    v99 = *(_QWORD *)(v20 + 8 * !v96);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v99 )
      v99 ^= v20;
    if ( v99 != v95 )
      RtlpRbReportFatalError(v99, v95);
    v100 = (unsigned __int64)v8->Children[v96];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v100 )
      v100 ^= (unsigned __int64)v8;
    if ( v100 != v20 )
      RtlpRbReportFatalError(v100, v20);
    v101 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v101 )
      v101 ^= v20;
    if ( (_RTL_BALANCED_NODE *)v101 != v8 )
      RtlpRbReportFatalError(v101, v8);
    v102 = (_RTL_BALANCED_NODE *)v95;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v102 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ v95);
    v8->Children[v96] = v102;
    if ( v98 && v8 )
      v103 = (unsigned __int64)v8 ^ v95;
    else
      v103 = (unsigned __int64)v8;
    *(_QWORD *)(v95 + 16) = v103 | *(_DWORD *)(v95 + 16) & 3;
    v104 = *(_QWORD *)(v95 + 8 * v96);
    if ( v98 )
    {
      if ( v104 )
      {
        v104 ^= v95;
        goto LABEL_314;
      }
    }
    else
    {
LABEL_314:
      if ( v104 )
      {
        v105 = *(_QWORD *)(v104 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v98 && v105 )
          v105 ^= v104;
        if ( v105 != v95 )
          RtlpRbReportFatalError(v105, v95);
        if ( v98 )
          v106 = v20 ^ v104;
        else
          v106 = v20;
        *(_QWORD *)(v104 + 16) = v106 | *(_DWORD *)(v104 + 16) & 3;
      }
    }
    if ( v98 && v104 )
      v104 ^= v20;
    *(_QWORD *)(v20 + 8 * !v96) = v104;
    if ( v98 )
      v107 = v20 ^ v95;
    else
      v107 = v20;
    *(_QWORD *)(v95 + 8 * v96) = v107;
    v108 = v95;
    if ( v98 )
      v108 = v20 ^ v95;
    v41 = v20;
    v17 = v118;
    *(_QWORD *)(v20 + 16) = v108 | *(_DWORD *)(v20 + 16) & 3;
    v20 = v95;
  }
  else
  {
LABEL_105:
    if ( !v41 || (*(_BYTE *)(v41 + 16) & 1) == 0 )
      goto LABEL_283;
  }
  *(_BYTE *)(v20 + 16) ^= (*(_BYTE *)&v8->0 ^ *(_BYTE *)(v20 + 16)) & 1;
  *(_BYTE *)&v8->0 &= ~1u;
  *(_BYTE *)(v41 + 16) &= ~1u;
  v43 = (unsigned __int64)Tree->Root;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v43 )
    v43 ^= (unsigned __int64)Tree;
  v120 = v43;
  v44 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v45 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v44 )
    v44 ^= v20;
  if ( (_RTL_BALANCED_NODE *)v44 != v8 )
    RtlpRbReportFatalError(v44, v8);
  v46 = (unsigned __int64)v8->Children[!v17];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v46 )
    v46 ^= (unsigned __int64)v8;
  if ( v46 != v20 )
    RtlpRbReportFatalError(v46, v20);
  v47 = v8->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    if ( !v47 )
      goto LABEL_120;
    v47 ^= (unsigned __int64)v8;
  }
  if ( v47 )
  {
    v86 = *(_QWORD *)(v47 + 8);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v86 )
      v86 ^= v47;
    if ( (_RTL_BALANCED_NODE *)v86 == v8 )
    {
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        v87 = v20 ^ v47;
      else
        v87 = v20;
      *(_QWORD *)(v47 + 8) = v87;
    }
    else
    {
      v93 = *(_QWORD *)v47;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v93 )
        v93 ^= v47;
      if ( (_RTL_BALANCED_NODE *)v93 != v8 )
        RtlpRbReportFatalError(v93, v8);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        v94 = v20 ^ v47;
      else
        v94 = v20;
      *(_QWORD *)v47 = v94;
    }
  }
  else
  {
LABEL_120:
    if ( (_RTL_BALANCED_NODE *)v43 != v8 )
      RtlpRbReportFatalError(v43, v8);
    v120 = v20;
  }
  if ( v45 && v47 )
    v47 ^= v20;
  *(_QWORD *)(v20 + 16) = v47 | *(_DWORD *)(v20 + 16) & 3;
  v88 = *(_QWORD *)(v20 + 8LL * v17);
  if ( v45 )
  {
    if ( v88 )
    {
      v88 ^= v20;
      goto LABEL_250;
    }
  }
  else
  {
LABEL_250:
    if ( v88 )
    {
      v89 = *(_QWORD *)(v88 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v45 && v89 )
        v89 ^= v88;
      if ( v89 != v20 )
        RtlpRbReportFatalError(v89, v20);
      if ( v45 )
        v90 = (unsigned __int64)v8 ^ v88;
      else
        v90 = (unsigned __int64)v8;
      *(_QWORD *)(v88 + 16) = v90 | *(_DWORD *)(v88 + 16) & 3;
    }
  }
  if ( v45 && v88 )
    v88 ^= (unsigned __int64)v8;
  v8->Children[!v17] = (_RTL_BALANCED_NODE *)v88;
  if ( v45 )
    v91 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ v20);
  else
    v91 = v8;
  *(_QWORD *)(v20 + 8LL * v17) = v91;
  if ( v45 )
    v20 ^= (unsigned __int64)v8;
  v92 = v20 | *(_DWORD *)&v8->0 & 3;
  v8->ParentValue = v92;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    v115 = -(__int128)v120;
    Node = (PRTL_BALANCED_NODE)((v120 ^ (unsigned __int64)Tree) & *((_QWORD *)&v115 + 1));
  }
  else
  {
    Node = (PRTL_BALANCED_NODE)v120;
  }
  Tree->Root = Node;
}
