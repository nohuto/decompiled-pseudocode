/*
 * XREFs of RtlRbRemoveNode @ 0x140377C60
 * Callers:
 *     PfSnNameRemove @ 0x14024AE20 (PfSnNameRemove.c)
 *     ?KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x1402702CC (-KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1402722CC (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272FF0 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x140274C5C (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027AAF0 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x14029A38C (-KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     MiRemoveSlabEntry @ 0x1402A9800 (MiRemoveSlabEntry.c)
 *     MiFlowThroughRemoveNode @ 0x14031D554 (MiFlowThroughRemoveNode.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x14033678C (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     HalpPopCommonBufferEntry @ 0x140344374 (HalpPopCommonBufferEntry.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034D840 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x140350A9C (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpVaMgrAlloc @ 0x140350BAC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVsChunkFree @ 0x1403532B0 (RtlpHpVsChunkFree.c)
 *     RtlpHpLargeFree @ 0x1403546B4 (RtlpHpLargeFree.c)
 *     ?KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140375128 (-KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     ?KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140377390 (-KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     RtlpHpSegFreeRangeRemove @ 0x140377C00 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpVsFreeChunkRemove @ 0x140378D40 (RtlpHpVsFreeChunkRemove.c)
 *     KiRemoveTimer2 @ 0x140378EB0 (KiRemoveTimer2.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1403790A0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x140418834 (KiSetClockInterval.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14044C2E0 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x14044CAE8 (MiRescanPageFileBitmapPortion.c)
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140450ADC (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 *     MiLogNonStealNonPagedPoolWorker @ 0x1404591C0 (MiLogNonStealNonPagedPoolWorker.c)
 *     IoStopDiskIoAttributionForContext @ 0x1404636E0 (IoStopDiskIoAttributionForContext.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14047DE74 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x14047E148 (MiBitmapsCachedEntryLengthChanged.c)
 *     VmpRemoveMemoryRange @ 0x14051122C (VmpRemoveMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1405199E0 (VmpMergeMemoryRanges.c)
 *     KasanDriverUnloadImage @ 0x1405DD480 (KasanDriverUnloadImage.c)
 *     KiResetClockInterval @ 0x1405EE66C (KiResetClockInterval.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140615E00 (PspJobIoRateVolumeEntryRemove.c)
 *     RtlRemovePointerMapping @ 0x14061A760 (RtlRemovePointerMapping.c)
 *     VmpFaultEntryRemove @ 0x1406C0F34 (VmpFaultEntryRemove.c)
 *     VmpRefDerefPinnedPages @ 0x1406C1A5C (VmpRefDerefPinnedPages.c)
 *     VmpUpdatePinRangesForFirstPin @ 0x1406C1DFC (VmpUpdatePinRangesForFirstPin.c)
 *     KeRemoveCallbackRegistrationEntry @ 0x1407B9030 (KeRemoveCallbackRegistrationEntry.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14082CA20 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14082CEE0 (EtwpRegisterPrivateSession.c)
 *     HvpViewMapShrinkStorage @ 0x14085CBD8 (HvpViewMapShrinkStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408DD1F4 (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpSetProviderTraitsCommon @ 0x14093D5E4 (EtwpSetProviderTraitsCommon.c)
 *     PfProcessExitNotification @ 0x140A43B50 (PfProcessExitNotification.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A851FC (EtwpReleaseProviderTraitsReference.c)
 *     MmFreeLoaderBlock @ 0x140CF220C (MmFreeLoaderBlock.c)
 *     MxRemoveFreeZeroMemoryDescriptor @ 0x140CF82D0 (MxRemoveFreeZeroMemoryDescriptor.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x140619BDC (RtlpRbReportFatalError.c)
 */

char __fastcall RtlRbRemoveNode(__int64 a1, __int64 a2)
{
  __int128 v2; // rax
  __int64 v3; // rbx
  char v5; // cl
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  char v9; // cl
  unsigned __int64 v10; // r15
  char v11; // r8
  char v12; // r8
  unsigned __int64 v13; // rcx
  BOOL v14; // r13d
  char v15; // cl
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbx
  char v18; // r8
  unsigned __int64 v19; // r9
  char v20; // r15
  unsigned __int64 v21; // rcx
  int v22; // r15d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r14
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // cl
  __int64 v36; // rax
  char v37; // al
  unsigned __int64 v38; // rdx
  char v39; // r8
  unsigned __int64 v40; // rcx
  char v41; // r15
  unsigned __int64 v42; // rax
  int v43; // r15d
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // r14
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  char v56; // al
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r14
  __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  char v64; // dl
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // r14
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r14
  _BOOL8 v79; // r13
  unsigned __int64 v80; // rcx
  int v81; // r12d
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  __int64 v87; // r15
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rax
  unsigned int v94; // [rsp+78h] [rbp+50h]
  unsigned __int64 v95; // [rsp+80h] [rbp+58h] BYREF

  *((_QWORD *)&v2 + 1) = a2;
  v3 = **((_QWORD **)&v2 + 1);
  v5 = *(_BYTE *)(a1 + 8);
  v6 = *((_QWORD *)&v2 + 1);
  v95 = 0LL;
  LOBYTE(v2) = v5 & 1;
  if ( (v5 & 1) != 0 && v3 )
    v3 ^= *((_QWORD *)&v2 + 1);
  v7 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 8LL);
  if ( (v5 & 1) != 0 && v7 )
    v7 ^= *((_QWORD *)&v2 + 1);
  if ( v3 )
  {
    if ( !v7 )
      goto LABEL_9;
    v46 = *(_QWORD *)v7;
    v94 = 1;
    v10 = v7;
    v8 = v7;
    if ( *(_QWORD *)v7 )
    {
      v94 = 0;
      do
      {
        v8 = v10;
        if ( (v5 & 1) != 0 && v46 )
          v10 ^= v46;
        else
          v10 = v46;
        v46 = *(_QWORD *)v10;
      }
      while ( *(_QWORD *)v10 );
    }
    v47 = v3;
    if ( (v5 & 1) != 0 )
      v47 = v10 ^ v3;
    *(_QWORD *)v10 = v47;
    v48 = *(_QWORD *)(v3 + 16);
    v49 = v48 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v49 )
      v49 ^= v3;
    if ( v49 != v6 )
      RtlpRbReportFatalError(v49, v6, v3);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v50 = v10 ^ v3;
    else
      v50 = v10;
    *(_QWORD *)(v3 + 16) = v50 | v48 & 3;
    v51 = *(_QWORD *)(v7 + 16);
    v52 = v51 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v52 )
      v52 ^= v7;
    if ( v52 != v6 )
      RtlpRbReportFatalError(v52, v6, v7);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v53 = v10 ^ v7;
    else
      v53 = v10;
    *(_QWORD *)(v7 + 16) = v53 | v51 & 3;
    v3 = *(_QWORD *)(v10 + 8);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v3 )
    {
      v3 ^= v10;
    }
    else if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    {
LABEL_147:
      v54 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(v10 + 8) = v7;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v54 )
        v54 ^= v10;
      if ( v54 != v8 && (v54 || v8 != v10) )
        RtlpRbReportFatalError(v54, v8, v10);
      v55 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v11 = *(_BYTE *)(v10 + 16);
      v56 = *(_BYTE *)(a1 + 8) & 1;
      if ( v56 && v55 )
      {
        v55 ^= v6;
      }
      else if ( !v56 )
      {
LABEL_156:
        v57 = v55 | *(_DWORD *)(v10 + 16) & 3;
        *(_QWORD *)(v10 + 16) = v57;
        *(_BYTE *)(v10 + 16) = v57 ^ (*(_BYTE *)(v6 + 16) ^ v57) & 1;
        v58 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v58 )
        {
          v64 = *(_BYTE *)(a1 + 8) & 1;
          if ( v64 )
            v58 ^= v6;
          v65 = *(_QWORD *)(v58 + 8);
          if ( v64 && v65 )
            v65 ^= v58;
          v66 = 0LL;
          if ( v65 == v6 )
            v66 = 8LL;
          v67 = *(_QWORD *)(v58 + v66);
          if ( v64 && v67 )
            v67 ^= v58;
          if ( v67 != v6 )
            RtlpRbReportFatalError(v67, v6, v58);
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
            *(_QWORD *)&v2 = v10 ^ v58;
          else
            *(_QWORD *)&v2 = v10;
          *(_QWORD *)(v58 + v66) = v2;
        }
        else
        {
          v59 = *(_QWORD *)a1;
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v59 )
            v59 ^= a1;
          if ( v59 != v6 )
            RtlpRbReportFatalError(v59, v6, a1);
          *(_QWORD *)&v2 = v10;
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
            *(_QWORD *)&v2 = a1 ^ v10;
          *(_QWORD *)a1 = v2;
        }
        goto LABEL_19;
      }
      if ( v55 )
        v55 ^= v10;
      goto LABEL_156;
    }
    v7 ^= v10;
    goto LABEL_147;
  }
  v3 = v7;
LABEL_9:
  v8 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 16LL) & 0xFFFFFFFFFFFFFFFCuLL;
  v9 = v5 & 1;
  if ( v9 && v8 )
    v8 ^= *((_QWORD *)&v2 + 1);
  v10 = *((_QWORD *)&v2 + 1);
  if ( !v8 )
  {
    if ( v3 )
      *(_QWORD *)(v3 + 16) = 0LL;
    v25 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v25 )
      v25 ^= a1;
    if ( v25 != *((_QWORD *)&v2 + 1) )
      RtlpRbReportFatalError(v25, *((_QWORD *)&v2 + 1), a1);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      *(_QWORD *)&v2 = -v3;
      *(_QWORD *)(a1 + 8) = (a1 ^ v3) & -(__int64)(v3 != 0);
      *(_BYTE *)(a1 + 8) |= 1u;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v3;
    }
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      LOBYTE(v2) = a1 ^ v3;
      v3 = (a1 ^ v3) & -(__int64)(v3 != 0);
    }
    *(_QWORD *)a1 = v3;
    return v2;
  }
  *(_QWORD *)&v2 = *(_QWORD *)(v8 + 8);
  if ( v9 && (_QWORD)v2 )
    *(_QWORD *)&v2 = v8 ^ v2;
  if ( (_QWORD)v2 != *((_QWORD *)&v2 + 1) )
  {
    v68 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v68 )
      v68 ^= v8;
    if ( v68 != *((_QWORD *)&v2 + 1) )
      RtlpRbReportFatalError(v68, *((_QWORD *)&v2 + 1), v8);
    v69 = *(_QWORD *)(a1 + 8);
    v94 = 0;
    if ( (v69 & 1) != 0 )
    {
      if ( v69 == 1 )
        *(_QWORD *)&v2 = 0LL;
      else
        *(_QWORD *)&v2 = v69 ^ (a1 | 1);
    }
    else
    {
      *(_QWORD *)&v2 = *(_QWORD *)(a1 + 8);
    }
    if ( (_QWORD)v2 != *((_QWORD *)&v2 + 1) )
      goto LABEL_18;
    LOBYTE(v2) = *(_BYTE *)(a1 + 8) & 1;
    if ( v3 )
    {
      if ( !(_BYTE)v2 )
      {
        *(_QWORD *)(a1 + 8) = v3;
        goto LABEL_18;
      }
      v92 = v3;
    }
    else
    {
      if ( !(_BYTE)v2 )
      {
        *(_QWORD *)(a1 + 8) = v8;
        goto LABEL_18;
      }
      v92 = v8;
    }
    *(_QWORD *)&v2 = a1 ^ v92;
    *(_QWORD *)(a1 + 8) = v2;
    *(_BYTE *)(a1 + 8) |= 1u;
    goto LABEL_18;
  }
  v94 = 1;
LABEL_18:
  v11 = *(_BYTE *)(*((_QWORD *)&v2 + 1) + 16LL);
LABEL_19:
  v12 = v11 & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v3 )
    v13 = v3 ^ v8;
  else
    v13 = v3;
  v14 = v94;
  *(_QWORD *)(v8 + 8LL * v94) = v13;
  if ( v3 )
  {
    v60 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v60 )
      v60 ^= v3;
    if ( v60 != v10 )
      RtlpRbReportFatalError(v60, v10, v3);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v8 )
      v8 ^= v3;
    *(_QWORD *)(v3 + 16) = v8;
    return v2;
  }
  if ( v12 )
    return v2;
  while ( 1 )
  {
    v15 = *(_BYTE *)(a1 + 8);
    v16 = v8;
    v17 = *(_QWORD *)(v8 + 8 * !v14);
    if ( (v15 & 1) != 0 && v17 )
      v17 ^= v8;
    v18 = *(_BYTE *)(a1 + 8);
    if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
    {
      v19 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v19 )
        v19 ^= a1;
      v20 = *(_BYTE *)(a1 + 8);
      v95 = v19;
      v21 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v22 = v20 & 1;
      if ( v22 && v21 )
        v21 ^= v17;
      if ( v21 != v8 )
        RtlpRbReportFatalError(v21, v8, v17);
      v23 = *(_QWORD *)(v8 + 8 * !v14);
      if ( v22 && v23 )
        v23 ^= v8;
      if ( v23 != v17 )
        RtlpRbReportFatalError(v23, v17, v8);
      v24 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v22 )
      {
        if ( !v24 )
          goto LABEL_41;
        v24 ^= v8;
      }
      if ( v24 )
      {
        v26 = *(_QWORD *)(v24 + 8);
        if ( v22 && v26 )
          v26 ^= v24;
        if ( v26 == v8 )
        {
          if ( v22 )
            v27 = v17 ^ v24;
          else
            v27 = v17;
          *(_QWORD *)(v24 + 8) = v27;
        }
        else
        {
          v61 = *(_QWORD *)v24;
          if ( v22 && v61 )
            v61 ^= v24;
          if ( v61 != v8 )
            RtlpRbReportFatalError(v61, v8, v24);
          if ( v22 )
            v62 = v17 ^ v24;
          else
            v62 = v17;
          *(_QWORD *)v24 = v62;
        }
LABEL_63:
        if ( v22 && v24 )
          v24 ^= v17;
        *(_QWORD *)(v17 + 16) = v24 | *(_DWORD *)(v17 + 16) & 3;
        v28 = *(_QWORD *)(v17 + 8LL * v14);
        if ( v22 )
        {
          if ( !v28 )
          {
LABEL_78:
            if ( v22 && v28 )
              v28 ^= v8;
            *(_QWORD *)(v8 + 8 * !v14) = v28;
            if ( v22 )
              v31 = v8 ^ v17;
            else
              v31 = v8;
            *(_QWORD *)(v17 + 8LL * v14) = v31;
            v32 = v17;
            if ( v22 )
              v32 = v8 ^ v17;
            *(_QWORD *)(v8 + 16) = v32 | *(_DWORD *)(v8 + 16) & 3;
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
              v33 = (v95 ^ a1) & ((unsigned __int128)-(__int128)v95 >> 64);
            else
              v33 = v95;
            *(_QWORD *)a1 = v33;
            *(_BYTE *)(v17 + 16) &= ~1u;
            *(_BYTE *)(v8 + 16) |= 1u;
            v18 = *(_BYTE *)(a1 + 8);
            v17 = *(_QWORD *)(v8 + 8 * !v14);
            if ( (v18 & 1) != 0 && v17 )
              v17 ^= v8;
            v15 = *(_BYTE *)(a1 + 8);
            goto LABEL_91;
          }
          v28 ^= v17;
        }
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v22 && v29 )
            v29 ^= v28;
          if ( v29 != v17 )
            RtlpRbReportFatalError(v29, v17, v28);
          if ( v22 )
            v30 = v8 ^ v28;
          else
            v30 = v8;
          *(_QWORD *)(v28 + 16) = v30 | *(_DWORD *)(v28 + 16) & 3;
        }
        goto LABEL_78;
      }
LABEL_41:
      if ( v19 != v8 )
        RtlpRbReportFatalError(v19, v8, &v95);
      v95 = v17;
      goto LABEL_63;
    }
LABEL_91:
    v34 = *(_QWORD *)v17;
    v35 = v15 & 1;
    if ( *(_QWORD *)v17 )
    {
      if ( v35 )
        v34 ^= v17;
      if ( (*(_BYTE *)(v34 + 16) & 1) != 0 )
        break;
    }
    v36 = *(_QWORD *)(v17 + 8);
    if ( v36 )
    {
      if ( v35 )
        v36 ^= v17;
      if ( (*(_BYTE *)(v36 + 16) & 1) != 0 )
        break;
    }
    v37 = *(_BYTE *)(v8 + 16);
    if ( (v37 & 1) != 0 )
    {
      LOBYTE(v2) = v37 & 0xFE;
      *(_BYTE *)(v8 + 16) = v2;
      *(_BYTE *)(v17 + 16) |= 1u;
      return v2;
    }
    *(_BYTE *)(v17 + 16) |= 1u;
    *(_QWORD *)&v2 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && (_QWORD)v2 )
      v8 ^= v2;
    else
      v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v8 )
      return v2;
    v63 = *(_QWORD *)(v8 + 8);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v63 )
      v63 ^= v8;
    v14 = v63 == v16;
    v94 = v14;
  }
  v38 = *(_QWORD *)(v17 + 8 * !v14);
  v39 = v18 & 1;
  if ( v39 )
  {
    if ( v38 )
    {
      v38 ^= v17;
      goto LABEL_105;
    }
LABEL_283:
    v78 = *(_QWORD *)(v17 + 8LL * v14);
    if ( v39 && v78 )
      v78 ^= v17;
    *(_BYTE *)(v78 + 16) &= ~1u;
    v79 = !v14;
    v80 = *(_QWORD *)(v78 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v81 = *(_BYTE *)(a1 + 8) & 1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v80 )
      v80 ^= v78;
    if ( v80 != v17 )
      RtlpRbReportFatalError(v80, v17, v78);
    v82 = *(_QWORD *)(v17 + 8 * !v79);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v82 )
      v82 ^= v17;
    if ( v82 != v78 )
      RtlpRbReportFatalError(v82, v78, v17);
    v83 = *(_QWORD *)(v8 + 8 * v79);
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v83 )
      v83 ^= v8;
    if ( v83 != v17 )
      RtlpRbReportFatalError(v83, v17, v8);
    v84 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v84 )
      v84 ^= v17;
    if ( v84 != v8 )
      RtlpRbReportFatalError(v84, v8, v17);
    v85 = v78;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v85 = v8 ^ v78;
    *(_QWORD *)(v8 + 8 * v79) = v85;
    if ( v81 && v8 )
      v86 = v8 ^ v78;
    else
      v86 = v8;
    *(_QWORD *)(v78 + 16) = v86 | *(_DWORD *)(v78 + 16) & 3;
    v87 = *(_QWORD *)(v78 + 8 * v79);
    if ( v81 )
    {
      if ( v87 )
      {
        v87 ^= v78;
        goto LABEL_314;
      }
    }
    else
    {
LABEL_314:
      if ( v87 )
      {
        v88 = *(_QWORD *)(v87 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v81 && v88 )
          v88 ^= v87;
        if ( v88 != v78 )
          RtlpRbReportFatalError(v88, v78, v87);
        if ( v81 )
          v89 = v17 ^ v87;
        else
          v89 = v17;
        *(_QWORD *)(v87 + 16) = v89 | *(_DWORD *)(v87 + 16) & 3;
      }
    }
    if ( v81 && v87 )
      v87 ^= v17;
    *(_QWORD *)(v17 + 8 * !v79) = v87;
    if ( v81 )
      v90 = v17 ^ v78;
    else
      v90 = v17;
    *(_QWORD *)(v78 + 8 * v79) = v90;
    v91 = v78;
    if ( v81 )
      v91 = v17 ^ v78;
    v38 = v17;
    v14 = v94;
    *(_QWORD *)(v17 + 16) = v91 | *(_DWORD *)(v17 + 16) & 3;
    v17 = v78;
  }
  else
  {
LABEL_105:
    if ( !v38 || (*(_BYTE *)(v38 + 16) & 1) == 0 )
      goto LABEL_283;
  }
  *(_BYTE *)(v17 + 16) ^= (*(_BYTE *)(v8 + 16) ^ *(_BYTE *)(v17 + 16)) & 1;
  *(_BYTE *)(v8 + 16) &= ~1u;
  *(_BYTE *)(v38 + 16) &= ~1u;
  v40 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v40 )
    v40 ^= a1;
  v41 = *(_BYTE *)(a1 + 8);
  v95 = v40;
  v42 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v43 = v41 & 1;
  if ( v43 && v42 )
    v42 ^= v17;
  if ( v42 != v8 )
    RtlpRbReportFatalError(v42, v8, v17);
  v44 = *(_QWORD *)(v8 + 8 * !v14);
  if ( v43 && v44 )
    v44 ^= v8;
  if ( v44 != v17 )
    RtlpRbReportFatalError(v44, v17, v8);
  v45 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v43 )
  {
    if ( !v45 )
      goto LABEL_120;
    v45 ^= v8;
  }
  if ( v45 )
  {
    v70 = *(_QWORD *)(v45 + 8);
    if ( v43 && v70 )
      v70 ^= v45;
    if ( v70 == v8 )
    {
      if ( v43 )
        v71 = v17 ^ v45;
      else
        v71 = v17;
      *(_QWORD *)(v45 + 8) = v71;
    }
    else
    {
      v76 = *(_QWORD *)v45;
      if ( v43 && v76 )
        v76 ^= v45;
      if ( v76 != v8 )
        RtlpRbReportFatalError(v76, v8, v45);
      if ( v43 )
        v77 = v17 ^ v45;
      else
        v77 = v17;
      *(_QWORD *)v45 = v77;
    }
  }
  else
  {
LABEL_120:
    if ( v40 != v8 )
      RtlpRbReportFatalError(v40, v8, &v95);
    v95 = v17;
  }
  if ( v43 && v45 )
    v45 ^= v17;
  *(_QWORD *)(v17 + 16) = v45 | *(_DWORD *)(v17 + 16) & 3;
  v72 = *(_QWORD *)(v17 + 8LL * v14);
  if ( v43 )
  {
    if ( v72 )
    {
      v72 ^= v17;
      goto LABEL_250;
    }
  }
  else
  {
LABEL_250:
    if ( v72 )
    {
      v73 = *(_QWORD *)(v72 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v43 && v73 )
        v73 ^= v72;
      if ( v73 != v17 )
        RtlpRbReportFatalError(v73, v17, v72);
      if ( v43 )
        v74 = v8 ^ v72;
      else
        v74 = v8;
      *(_QWORD *)(v72 + 16) = v74 | *(_DWORD *)(v72 + 16) & 3;
    }
  }
  if ( v43 && v72 )
    v72 ^= v8;
  *(_QWORD *)(v8 + 8 * !v14) = v72;
  if ( v43 )
    v75 = v8 ^ v17;
  else
    v75 = v8;
  *(_QWORD *)(v17 + 8LL * v14) = v75;
  if ( v43 )
    v17 ^= v8;
  *(_QWORD *)&v2 = v17 | *(_DWORD *)(v8 + 16) & 3;
  *(_QWORD *)(v8 + 16) = v2;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    v2 = -(__int128)v95;
    *((_QWORD *)&v2 + 1) &= v95 ^ a1;
  }
  else
  {
    *((_QWORD *)&v2 + 1) = v95;
  }
  *(_QWORD *)a1 = *((_QWORD *)&v2 + 1);
  return v2;
}
