/*
 * XREFs of RtlRbInsertNodeEx @ 0x140379260
 * Callers:
 *     RtlpHpVsFreeChunkInsert @ 0x14024C3B0 (RtlpHpVsFreeChunkInsert.c)
 *     PfSnGetFileInformation @ 0x140265260 (PfSnGetFileInformation.c)
 *     ?KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x14026F83C (-KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299010 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     ?KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x1402998EC (-KiAbEntryUpdateOwnerTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140337D50 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     HalpAllocateCommonBufferEntry @ 0x14034AF30 (HalpAllocateCommonBufferEntry.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14034D30C (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVaMgrFree @ 0x140352A80 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x140353E20 (RtlpHpLargeAlloc.c)
 *     MiFlowThroughInsertNode @ 0x140375D30 (MiFlowThroughInsertNode.c)
 *     ?KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140376ED8 (-KiAbpEntryUpdateWaiterTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140378250 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     ?KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140379140 (-KiAbpEntryUpdateOwnerTreePosition@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14037A770 (KiInsertTimer2WithCollectionLockHeld.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x14040CD6C (KiSetClockInterval.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140444400 (MiCoalescePageFileBitmapsCache.c)
 *     MiRescanPageFileBitmapPortion @ 0x140444C08 (MiRescanPageFileBitmapPortion.c)
 *     MiInitializePagefileBitmapsCache @ 0x140445150 (MiInitializePagefileBitmapsCache.c)
 *     MiLogNonStealNonPagedPoolEntries @ 0x140450D60 (MiLogNonStealNonPagedPoolEntries.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1404777E4 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140477AB8 (MiBitmapsCachedEntryLengthChanged.c)
 *     IoStartDiskIoAttributionForContext @ 0x14048EA44 (IoStartDiskIoAttributionForContext.c)
 *     MiInsertSlabEntry @ 0x1404BCC44 (MiInsertSlabEntry.c)
 *     VmpSplitMemoryRange @ 0x1404C2504 (VmpSplitMemoryRange.c)
 *     VmpInsertMemoryRange @ 0x1404D1D84 (VmpInsertMemoryRange.c)
 *     KasanDriverLoadImageInternal @ 0x140525CA0 (KasanDriverLoadImageInternal.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x140618BE8 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlCompareExchangePointerMapping @ 0x14061D2D0 (RtlCompareExchangePointerMapping.c)
 *     VmpFaultEntryInsert @ 0x1406C4A08 (VmpFaultEntryInsert.c)
 *     VmpUpdatePinRangesForFirstPin @ 0x1406C59DC (VmpUpdatePinRangesForFirstPin.c)
 *     MiInsertPageFileMemoryExtents @ 0x1407118E8 (MiInsertPageFileMemoryExtents.c)
 *     KiGetSystemServiceTraceTable @ 0x14077CFA0 (KiGetSystemServiceTraceTable.c)
 *     KeInsertCallbackRegistrationEntry @ 0x1407BBCE8 (KeInsertCallbackRegistrationEntry.c)
 *     EtwpRegisterPrivateSession @ 0x140833120 (EtwpRegisterPrivateSession.c)
 *     MiCreatePagefileMemoryExtents @ 0x140884604 (MiCreatePagefileMemoryExtents.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1408BE958 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408E37B4 (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpSetProviderTraitsCommon @ 0x140919184 (EtwpSetProviderTraitsCommon.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 *     MxConstructLoaderMemoryTree @ 0x140CFB74C (MxConstructLoaderMemoryTree.c)
 *     MxInsertAllUsedRegionsInLoaderTree @ 0x140CFD550 (MxInsertAllUsedRegionsInLoaderTree.c)
 *     MxInsertFreeZeroMemoryDescriptor @ 0x140CFD8DC (MxInsertFreeZeroMemoryDescriptor.c)
 *     MxInsertFreeZeroPages @ 0x140CFD9C8 (MxInsertFreeZeroPages.c)
 *     MxInsertUsedRegionsInLoaderTree @ 0x140CFDC88 (MxInsertUsedRegionsInLoaderTree.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x14061CC2C (RtlpRbReportFatalError.c)
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  PRTL_BALANCED_NODE v11; // rcx
  unsigned __int64 v12; // rax
  char v13; // r9
  $7D93978C745EB1C2D28075BAF55422B4 v14; // r12
  unsigned __int64 v15; // rsi
  char v16; // cl
  __int64 v17; // rdx
  unsigned __int64 v18; // r11
  int v19; // r10d
  _BOOL8 v20; // r15
  unsigned __int64 v21; // r13
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
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned int v42; // edx
  unsigned __int64 v43; // rcx
  _RTL_BALANCED_NODE *v44; // rax
  unsigned __int64 Root; // r9
  __int64 v46; // r12
  unsigned __int64 v47; // rcx
  int v48; // r15d
  __int64 v49; // rcx
  _RTL_BALANCED_NODE *Min; // rcx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v55; // [rsp+20h] [rbp-68h] BYREF
  __int64 v56; // [rsp+28h] [rbp-60h]
  unsigned __int64 v57; // [rsp+30h] [rbp-58h]
  __int64 v58; // [rsp+38h] [rbp-50h]
  __int64 v59; // [rsp+40h] [rbp-48h]
  unsigned int v60; // [rsp+98h] [rbp+10h]
  unsigned __int64 v61; // [rsp+A8h] [rbp+20h]

  v4 = 0LL;
  v5 = (unsigned __int64)Node;
  Node->Children[0] = 0LL;
  v6 = (unsigned __int64)Parent;
  Node->Children[1] = 0LL;
  LOBYTE(v8) = *(_BYTE *)&Tree->0 & 1;
  v55 = 0LL;
  if ( Parent )
  {
    v10 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
    v11 = (PRTL_BALANCED_NODE)v10;
    if ( !(_BYTE)v8 )
      v11 = Node;
    *(_QWORD *)(v6 + 8LL * Right) = v11;
    v12 = v6;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v12 = v10;
    v8 = v12 | 1;
    Node->ParentValue = v8;
    if ( !Right )
    {
      Min = Tree->Min;
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        if ( Min == (_RTL_BALANCED_NODE *)1 )
          goto LABEL_9;
        v8 = (unsigned __int64)Min ^ ((unsigned __int64)Tree | 1);
      }
      else
      {
        v8 = (unsigned __int64)Tree->Min;
      }
      if ( v6 == v8 )
      {
        if ( ((unsigned __int8)Min & 1) != 0 )
        {
          v53 = 0LL;
          LOBYTE(v8) = (unsigned __int8)Node ^ (unsigned __int8)Tree;
          if ( Node )
            v53 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
          Tree->Min = (_RTL_BALANCED_NODE *)v53;
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v53 | 1);
        }
        else
        {
          Tree->Min = Node;
        }
      }
    }
    while ( 1 )
    {
LABEL_9:
      v13 = *(_BYTE *)(v6 + 16);
      if ( (v13 & 1) == 0 )
        return v8;
      v14 = Tree->0;
      v15 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v16 = *(_BYTE *)&v14 & 1;
      if ( (*(_BYTE *)&v14 & 1) != 0 && v15 )
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
        v8 = v17 != v6;
        v19 = v8;
        v20 = v17 == v6;
        v57 = v8;
        LODWORD(v56) = v17 != v6;
        v60 = v56;
        v21 = v8;
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
        if ( Right != v19 )
        {
          v32 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v33 = *(_BYTE *)&v14 & 1;
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
        v44 = Tree->Min;
        Root = (unsigned __int64)Tree->Root;
        if ( ((unsigned __int8)v44 & 1) != 0 )
        {
          if ( Root )
            Root ^= (unsigned __int64)Tree;
          else
            Root = 0LL;
        }
        v55 = Root;
        v46 = v60 ^ 1;
        v47 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v48 = (unsigned __int8)v44 & 1;
        if ( ((unsigned __int8)v44 & 1) != 0 && v47 )
          v47 ^= v6;
        if ( v47 != v15 )
          RtlpRbReportFatalError(v47, v15, v6);
        v49 = *(_QWORD *)(v15 + 8LL * v60);
        if ( ((unsigned __int8)v44 & 1) != 0 && v49 )
          v49 ^= v15;
        if ( v49 != v6 )
          RtlpRbReportFatalError(v49, v6, v15);
        v25 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( ((unsigned __int8)v44 & 1) != 0 )
        {
          if ( !v25 )
          {
LABEL_113:
            if ( Root != v15 )
              RtlpRbReportFatalError(Root, v15, &v55);
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
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        {
          LOBYTE(v8) = (unsigned __int8)Tree ^ v55;
          if ( v55 )
            v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v55);
        }
        else
        {
          v4 = (_RTL_BALANCED_NODE *)v55;
        }
        Tree->Root = v4;
        *(_BYTE *)(v15 + 16) |= 1u;
        *(_BYTE *)(v6 + 16) &= ~1u;
        return v8;
      }
      v5 = v15;
      *(_BYTE *)(v6 + 16) = v13 & 0xFE;
      *(_BYTE *)(v22 + 16) &= ~1u;
      v23 = *(_QWORD *)(v15 + 16);
      v6 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !v6 )
          return v8;
        v6 ^= v15;
      }
      if ( !v6 )
        return v8;
      *(_BYTE *)(v15 + 16) = v23 | 1;
      v24 = *(_QWORD *)v6;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v24 )
        v24 ^= v6;
      Right = v15 != v24;
    }
  }
  v9 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
  if ( (_BYTE)v8 )
  {
    v8 = 0LL;
    if ( Node )
      v8 = v9;
    Tree->Root = (_RTL_BALANCED_NODE *)v8;
    Tree->Min = (_RTL_BALANCED_NODE *)v9;
    Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v9 | 1);
    Node->ParentValue = 0LL;
  }
  else
  {
    Tree->Root = Node;
    Tree->Min = Node;
    Node->ParentValue = 0LL;
  }
  return v8;
}
