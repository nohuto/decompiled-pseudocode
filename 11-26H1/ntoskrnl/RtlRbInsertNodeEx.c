/*
 * XREFs of RtlRbInsertNodeEx @ 0x1403774B0
 * Callers:
 *     RtlpHpVsFreeChunkInsert @ 0x14024AA50 (RtlpHpVsFreeChunkInsert.c)
 *     PfSnGetFileInformation @ 0x140265CF0 (PfSnGetFileInformation.c)
 *     ?KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x1402702CC (-KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272FF0 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x140274C5C (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299AB0 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     ?KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x14029A38C (-KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140335D20 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     HalpAllocateCommonBufferEntry @ 0x140348EB0 (HalpAllocateCommonBufferEntry.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14034B28C (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034DB40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVaMgrFree @ 0x140350A00 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x140351D9C (RtlpHpLargeAlloc.c)
 *     MiFlowThroughInsertNode @ 0x140373F80 (MiFlowThroughInsertNode.c)
 *     ?KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140375128 (-KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x1403764A0 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     ?KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140377390 (-KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403789C0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1403790A0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x140418834 (KiSetClockInterval.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14044C2E0 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x14044CAE8 (MiRescanPageFileBitmapPortion.c)
 *     MiInitializePagefileBitmapsCache @ 0x14044D030 (MiInitializePagefileBitmapsCache.c)
 *     MiLogNonStealNonPagedPoolEntries @ 0x1404594E0 (MiLogNonStealNonPagedPoolEntries.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14047DE74 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x14047E148 (MiBitmapsCachedEntryLengthChanged.c)
 *     IoStartDiskIoAttributionForContext @ 0x140494EF4 (IoStartDiskIoAttributionForContext.c)
 *     MiInsertSlabEntry @ 0x1404C33F4 (MiInsertSlabEntry.c)
 *     VmpSplitMemoryRange @ 0x1404C8B68 (VmpSplitMemoryRange.c)
 *     VmpInsertMemoryRange @ 0x1404D85B4 (VmpInsertMemoryRange.c)
 *     KasanDriverLoadImageInternal @ 0x140523630 (KasanDriverLoadImageInternal.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x140615C54 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlCompareExchangePointerMapping @ 0x14061A280 (RtlCompareExchangePointerMapping.c)
 *     VmpFaultEntryInsert @ 0x1406C0E28 (VmpFaultEntryInsert.c)
 *     VmpUpdatePinRangesForFirstPin @ 0x1406C1DFC (VmpUpdatePinRangesForFirstPin.c)
 *     MiInsertPageFileMemoryExtents @ 0x14070CC38 (MiInsertPageFileMemoryExtents.c)
 *     KiGetSystemServiceTraceTable @ 0x14077A070 (KiGetSystemServiceTraceTable.c)
 *     KeInsertCallbackRegistrationEntry @ 0x1407B8C88 (KeInsertCallbackRegistrationEntry.c)
 *     EtwpRegisterPrivateSession @ 0x14082CEE0 (EtwpRegisterPrivateSession.c)
 *     MiCreatePagefileMemoryExtents @ 0x14087E204 (MiCreatePagefileMemoryExtents.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1408B8388 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408DD1F4 (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpSetProviderTraitsCommon @ 0x14093D5E4 (EtwpSetProviderTraitsCommon.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6B900 (PfSnSetAltPrefetchParam.c)
 *     MxConstructLoaderMemoryTree @ 0x140CF53CC (MxConstructLoaderMemoryTree.c)
 *     MxInsertAllUsedRegionsInLoaderTree @ 0x140CF71D0 (MxInsertAllUsedRegionsInLoaderTree.c)
 *     MxInsertFreeZeroMemoryDescriptor @ 0x140CF755C (MxInsertFreeZeroMemoryDescriptor.c)
 *     MxInsertFreeZeroPages @ 0x140CF7648 (MxInsertFreeZeroPages.c)
 *     MxInsertUsedRegionsInLoaderTree @ 0x140CF7908 (MxInsertUsedRegionsInLoaderTree.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x140619BDC (RtlpRbReportFatalError.c)
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char v13; // r9
  char v14; // r12
  unsigned __int64 v15; // rsi
  char v16; // cl
  __int64 v17; // rdx
  unsigned __int64 v18; // r11
  int v19; // r10d
  _BOOL8 v20; // r15
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned int v42; // edx
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // r9
  __int64 v46; // r12
  unsigned __int64 v47; // rcx
  int v48; // r15d
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v55; // [rsp+20h] [rbp-68h] BYREF
  __int64 v56; // [rsp+28h] [rbp-60h]
  __int64 v57; // [rsp+30h] [rbp-58h]
  __int64 v58; // [rsp+38h] [rbp-50h]
  __int64 v59; // [rsp+40h] [rbp-48h]
  unsigned int v60; // [rsp+98h] [rbp+10h]
  unsigned __int64 v61; // [rsp+A8h] [rbp+20h]

  v4 = 0LL;
  v5 = a4;
  *(_QWORD *)a4 = 0LL;
  v6 = a2;
  *(_QWORD *)(a4 + 8) = 0LL;
  LOBYTE(v8) = *(_BYTE *)(a1 + 8) & 1;
  v55 = 0LL;
  if ( a2 )
  {
    v10 = a4 ^ a2;
    v11 = v10;
    if ( !(_BYTE)v8 )
      v11 = a4;
    *(_QWORD *)(v6 + 8LL * a3) = v11;
    v12 = v6;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      v12 = v10;
    v8 = v12 | 1;
    *(_QWORD *)(a4 + 16) = v8;
    if ( !a3 )
    {
      v50 = *(_QWORD *)(a1 + 8);
      if ( (v50 & 1) != 0 )
      {
        if ( v50 == 1 )
          goto LABEL_9;
        v8 = v50 ^ (a1 | 1);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 8);
      }
      if ( v6 == v8 )
      {
        if ( (v50 & 1) != 0 )
        {
          v53 = 0LL;
          LOBYTE(v8) = a4 ^ a1;
          if ( a4 )
            v53 = a4 ^ a1;
          *(_QWORD *)(a1 + 8) = v53;
          *(_BYTE *)(a1 + 8) = v53 | 1;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = a4;
        }
      }
    }
    while ( 1 )
    {
LABEL_9:
      v13 = *(_BYTE *)(v6 + 16);
      if ( (v13 & 1) == 0 )
        return v8;
      v14 = *(_BYTE *)(a1 + 8);
      v15 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v16 = v14 & 1;
      if ( (v14 & 1) != 0 && v15 )
      {
        v15 ^= v6;
        v18 = v15;
        v61 = v15;
        v17 = *(_QWORD *)v15;
      }
      else
      {
        v17 = *(_QWORD *)v15;
        v18 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v61 = v18;
        if ( !v16 )
          goto LABEL_14;
      }
      if ( !v17 )
      {
LABEL_14:
        LODWORD(v8) = v17 != v6;
        v19 = v8;
        v20 = v17 == v6;
        v57 = v17 != v6;
        LODWORD(v56) = v8;
        v60 = v8;
        v21 = v57;
        v22 = *(_QWORD *)(v15 + 8 * v20);
        v59 = (unsigned int)v8;
        v58 = (unsigned int)v8;
        if ( !v16 )
          goto LABEL_17;
        goto LABEL_15;
      }
      LOBYTE(v8) = (v15 ^ v17) != v6;
      v56 = (unsigned __int8)v8;
      v20 = (v15 ^ v17) == v6;
      v60 = (unsigned __int8)v8;
      v19 = (unsigned __int8)v8;
      v59 = (unsigned __int8)v8;
      v57 = (unsigned __int8)v8;
      v21 = (unsigned __int8)v8;
      v58 = (unsigned __int8)v8;
      v22 = *(_QWORD *)(v18 + 8 * v20);
LABEL_15:
      if ( !v22 )
        goto LABEL_59;
      v22 ^= v15;
LABEL_17:
      if ( !v22 || (*(_BYTE *)(v22 + 16) & 1) == 0 )
      {
LABEL_59:
        if ( a3 != v19 )
        {
          v32 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v33 = v14 & 1;
          if ( v33 && v32 )
            v32 ^= v5;
          if ( v32 != v6 )
            RtlpRbReportFatalError(v32, v6, v5);
          v34 = *(_QWORD *)(v6 + 8 * v20);
          if ( v33 && v34 )
            v34 ^= v6;
          if ( v34 != v5 )
            RtlpRbReportFatalError(v34, v5, v6);
          v35 = *(_QWORD *)(v15 + 8 * v21);
          if ( v33 && v35 )
            v35 ^= v15;
          if ( v35 != v6 )
            RtlpRbReportFatalError(v35, v6, v15);
          v36 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v33 && v36 )
            v36 ^= v6;
          if ( v36 != v15 )
            RtlpRbReportFatalError(v36, v15, v6);
          v37 = v61 ^ v5;
          if ( v33 )
          {
            v59 = (unsigned int)v57;
            *(_QWORD *)(v61 + 8 * v58) = v37;
          }
          else
          {
            v37 = v15;
            *(_QWORD *)(v61 + 8 * v59) = v5;
            v59 = (unsigned int)v57;
          }
          *(_QWORD *)(v5 + 16) = v37 | *(_DWORD *)(v5 + 16) & 3;
          v38 = *(_QWORD *)(v5 + 8 * v21);
          if ( v33 )
          {
            if ( v38 )
            {
              v38 ^= v5;
              goto LABEL_85;
            }
          }
          else
          {
LABEL_85:
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 16);
              v40 = v39 & 0xFFFFFFFFFFFFFFFCuLL;
              if ( v33 && v40 )
                v40 ^= v38;
              if ( v40 != v5 )
                RtlpRbReportFatalError(v40, v5, v38);
              v41 = v6;
              if ( v33 )
                v41 = v6 ^ v38;
              *(_QWORD *)(v38 + 16) = v41 | v39 & 3;
            }
          }
          if ( v33 && v38 )
          {
            v42 = v56;
            *(_QWORD *)(v6 + 8 * ((unsigned int)v56 ^ 1LL)) = v6 ^ v38;
LABEL_98:
            *(_QWORD *)(v5 + 8LL * v42) = v5 ^ v6;
            v43 = v5 ^ v6;
          }
          else
          {
            *(_QWORD *)(v6 + 8 * ((unsigned int)v59 ^ 1LL)) = v38;
            if ( v33 )
            {
              v42 = v56;
              goto LABEL_98;
            }
            v43 = v5;
            *(_QWORD *)(v5 + 8LL * (unsigned int)v56) = v6;
          }
          *(_QWORD *)(v6 + 16) = v43 | *(_DWORD *)(v6 + 16) & 3;
          v6 = v5;
        }
        v44 = *(_QWORD *)(a1 + 8);
        v45 = *(_QWORD *)a1;
        if ( (v44 & 1) != 0 )
        {
          if ( v45 )
            v45 ^= a1;
          else
            v45 = 0LL;
        }
        v55 = v45;
        v46 = v60 ^ 1;
        v47 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v48 = v44 & 1;
        if ( (v44 & 1) != 0 && v47 )
          v47 ^= v6;
        if ( v47 != v15 )
          RtlpRbReportFatalError(v47, v15, v6);
        v49 = *(_QWORD *)(v15 + 8LL * v60);
        if ( (v44 & 1) != 0 && v49 )
          v49 ^= v15;
        if ( v49 != v6 )
          RtlpRbReportFatalError(v49, v6, v15);
        v25 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (v44 & 1) != 0 )
        {
          if ( !v25 )
          {
LABEL_113:
            if ( v45 != v15 )
              RtlpRbReportFatalError(v45, v15, &v55);
            v55 = v6;
            goto LABEL_36;
          }
          v25 ^= v15;
        }
        if ( !v25 )
          goto LABEL_113;
        v26 = *(_QWORD *)(v25 + 8);
        if ( v48 && v26 )
          v26 ^= v25;
        if ( v26 == v15 )
        {
          v27 = v6;
          if ( v48 )
            v27 = v6 ^ v25;
          *(_QWORD *)(v25 + 8) = v27;
        }
        else
        {
          v51 = *(_QWORD *)v25;
          if ( v48 && v51 )
            v51 ^= v25;
          if ( v51 != v15 )
            RtlpRbReportFatalError(v51, v15, v25);
          v52 = v6;
          if ( v48 )
            v52 = v6 ^ v25;
          *(_QWORD *)v25 = v52;
        }
LABEL_36:
        if ( v48 && v25 )
          v25 ^= v6;
        *(_QWORD *)(v6 + 16) = v25 | *(_DWORD *)(v6 + 16) & 3;
        v28 = *(_QWORD *)(v6 + 8 * v46);
        if ( v48 )
        {
          if ( v28 )
          {
            v28 ^= v6;
            goto LABEL_42;
          }
        }
        else
        {
LABEL_42:
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v48 && v29 )
              v29 ^= v28;
            if ( v29 != v6 )
              RtlpRbReportFatalError(v29, v6, v28);
            v30 = v15;
            if ( v48 )
              v30 = v15 ^ v28;
            *(_QWORD *)(v28 + 16) = v30 | *(_DWORD *)(v28 + 16) & 3;
          }
        }
        if ( v48 && v28 )
        {
          *(_QWORD *)(v61 + 8LL * v60) = v15 ^ v28;
LABEL_54:
          *(_QWORD *)(v6 + 8 * v46) = v6 ^ v15;
          v31 = v6 ^ v15;
        }
        else
        {
          *(_QWORD *)(v15 + 8LL * v60) = v28;
          if ( v48 )
            goto LABEL_54;
          *(_QWORD *)(v6 + 8 * v46) = v15;
          v31 = v6;
        }
        v8 = v31 | *(_DWORD *)(v15 + 16) & 3;
        *(_QWORD *)(v15 + 16) = v8;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          LOBYTE(v8) = a1 ^ v55;
          if ( v55 )
            v4 = a1 ^ v55;
        }
        else
        {
          v4 = v55;
        }
        *(_QWORD *)a1 = v4;
        *(_BYTE *)(v15 + 16) |= 1u;
        *(_BYTE *)(v6 + 16) &= ~1u;
        return v8;
      }
      v5 = v15;
      *(_BYTE *)(v6 + 16) = v13 & 0xFE;
      *(_BYTE *)(v22 + 16) &= ~1u;
      v23 = *(_QWORD *)(v15 + 16);
      v6 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        if ( !v6 )
          return v8;
        v6 ^= v15;
      }
      if ( !v6 )
        return v8;
      *(_BYTE *)(v15 + 16) = v23 | 1;
      v24 = *(_QWORD *)v6;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v24 )
        v24 ^= v6;
      a3 = v15 != v24;
    }
  }
  v9 = a4 ^ a1;
  if ( (_BYTE)v8 )
  {
    v8 = 0LL;
    if ( a4 )
      v8 = v9;
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v9;
    *(_BYTE *)(a1 + 8) = v9 | 1;
    *(_QWORD *)(a4 + 16) = 0LL;
  }
  else
  {
    *(_QWORD *)a1 = a4;
    *(_QWORD *)(a1 + 8) = a4;
    *(_QWORD *)(a4 + 16) = 0LL;
  }
  return v8;
}
