/*
 * XREFs of MiWriteComplete @ 0x140403960
 * Callers:
 *     MiModwriterIssueWrite @ 0x140401A18 (MiModwriterIssueWrite.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x140403940 (MiStoreWriteModifiedCompleteApc.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026E3F4 (FsRtlReleaseFileForModWrite.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiFreeModWriterEntry @ 0x1402AE950 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402AE9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1403FF560 (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403FF93C (MiStoreCheckCompleteWriteBatch.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MI_PAGEFILE_WRITE @ 0x140401D2C (MI_PAGEFILE_WRITE.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404027E8 (MiStoreDecrementOutstandingWrites.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     MiDecrementModifiedWriteCount @ 0x140462920 (MiDecrementModifiedWriteCount.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140466788 (CcNotifyOfMappedWriteComplete.c)
 *     MiIsRetryIoStatus @ 0x140467310 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140467358 (MmIsWriteErrorFatal.c)
 *     MiUnlockPartitionMappedWriter @ 0x1404907C4 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x140490FC8 (MiLockPartitionMappedWriter.c)
 *     MiRetardMdl @ 0x1404FDE4C (MiRetardMdl.c)
 *     MiSetDeleteOnClose @ 0x14050012C (MiSetDeleteOnClose.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiNotifyUserOfLostData @ 0x14052A188 (MiNotifyUserOfLostData.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(_QWORD *P, int *a2, int a3)
{
  struct _MDL *v3; // rbx
  int v4; // esi
  int v5; // edi
  __int64 v6; // r13
  ULONG_PTR v9; // r12
  int v10; // eax
  ULONG64 v11; // rax
  unsigned __int64 v12; // rbp
  struct _FILE_OBJECT *v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r10
  __int64 v18; // r8
  struct _MDL *v19; // r14
  __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  int v23; // ecx
  char v24; // r9
  unsigned int v25; // r8d
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v32; // rcx
  __int64 v33; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v35; // ebx
  __int64 v36; // rdx
  int v37; // ebx
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v39; // rax
  unsigned int v40; // eax
  int v41; // edi
  int v42; // eax
  __int64 v43; // rbp
  __int64 v44; // rbx
  unsigned __int8 *v45; // rbx
  KIRQL v46; // al
  unsigned __int8 v47; // cl
  unsigned __int64 v48; // rsi
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  _QWORD *v52; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v54; // rcx
  bool v55; // zf
  KIRQL v56; // al
  unsigned __int8 v57; // cl
  LONG result; // eax
  __int64 v59; // [rsp+30h] [rbp-88h]
  unsigned __int64 v60; // [rsp+38h] [rbp-80h] BYREF
  __int64 v61; // [rsp+40h] [rbp-78h]
  struct _MDL *v62; // [rsp+48h] [rbp-70h]
  PRKEVENT Event; // [rsp+50h] [rbp-68h]
  unsigned __int64 v64; // [rsp+58h] [rbp-60h]
  unsigned __int64 *v65; // [rsp+60h] [rbp-58h]
  __int64 v66; // [rsp+68h] [rbp-50h]
  __int64 retaddr; // [rsp+B8h] [rbp+0h]
  unsigned __int64 QpcTimeStamp; // [rsp+C0h] [rbp+8h] BYREF
  int v69; // [rsp+C8h] [rbp+10h]
  int v70; // [rsp+D0h] [rbp+18h]
  int v71; // [rsp+D8h] [rbp+20h]

  v70 = a3;
  v3 = (struct _MDL *)P[12];
  v4 = 0;
  v5 = 0;
  v6 = P[7];
  v69 = *((_DWORD *)P + 11);
  if ( _bittest16(&v3->MdlFlags, 9u) )
    MiRetardMdl(v3);
  if ( (v3->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v9 = *a2;
  v10 = *((_DWORD *)P + 10);
  v71 = *a2;
  if ( (v10 & 0x20) != 0 )
  {
    v61 = P[8];
    v11 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    MI_PAGEFILE_WRITE((__int64)P, v11, 5, 0, v9);
    v12 = 0LL;
    v59 = 0LL;
  }
  else
  {
    v5 = 128;
    v12 = P[10];
    v59 = P[9];
    v61 = 0LL;
  }
  v62 = v3 + 1;
  v64 = (unsigned __int64)&v3[1] + 8 * ((v69 & 0xFFF) != 0) + 8 * (v69 >> 12);
  if ( v12 )
  {
    v13 = (struct _FILE_OBJECT *)P[8];
    if ( (v12 & 1) != 0 )
      v12 &= ~1uLL;
    else
      CcNotifyOfMappedWriteComplete(v13->SectionObjectPointer, P[11], (unsigned int)v69, (unsigned int)v9);
    FsRtlReleaseFileForModWrite(v13, (struct _ERESOURCE *)v12);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v59 + 64), (ULONG_PTR)v13, 0x63536D4Du);
    if ( (v9 & 0x80000000) == 0LL )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 812));
      Event = 0LL;
      goto LABEL_25;
    }
  }
  else if ( (v9 & 0x80000000) == 0LL )
  {
    goto LABEL_23;
  }
  v14 = (*((_DWORD *)P + 10) >> 1) & 1;
  if ( (unsigned int)MmIsWriteErrorFatal(v59 != 0, v14, (unsigned int)v9) )
  {
    if ( !v59 )
      KeBugCheckEx(0x7Au, 0x20uLL, v9, (ULONG_PTR)v3, 0LL);
    if ( (*(_DWORD *)(v59 + 56) & 0x10) == 0 )
    {
      if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v9, v69) && v14 && v64 > (unsigned __int64)&v3[1].Size )
        v5 |= 1u;
      else
        v4 = 1;
    }
  }
  else
  {
    v5 |= 1u;
    if ( !v59 )
    {
      *(_DWORD *)(v6 + 804) = v9;
      Event = 0LL;
      goto LABEL_25;
    }
  }
  *(_DWORD *)(v6 + 808) = v9;
LABEL_23:
  Event = 0LL;
  if ( v4 )
    MiSetDeleteOnClose(v59, 1LL);
LABEL_25:
  v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v16 = *((_DWORD *)P + 10);
  v17 = v61;
  v18 = P[11] >> 12;
  v66 = v18;
  v60 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v65 = 0LL;
  if ( (v16 & 0x20) != 0 )
  {
    if ( _bittest16((const signed __int16 *)(v61 + 172), 0xBu) )
      LOBYTE(v4) = v4 | 2;
    v65 = &v60;
  }
  v19 = v62;
  v20 = 0LL;
  v21 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  LODWORD(QpcTimeStamp) = 0;
  if ( (unsigned __int64)v62 < v64 )
  {
    v22 = 2LL;
    while ( 1 )
    {
      v23 = *((_DWORD *)P + 10);
      if ( (v23 & 0x20) != 0 )
      {
        if ( (v23 & 0x40) != 0 )
        {
          v60 = *(_QWORD *)(P[9] + 8 * v20 + 96);
          v28 = v60;
          if ( (unsigned __int64)&v60 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v60 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v29 = v60;
            if ( (v60 & 1) != 0 && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                KernelWaitTime = Process[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v32 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v60 >> 3) & 0x1FF));
                  if ( (v32 & 0x20) != 0 )
                    v29 = v60 | 0x20;
                  v28 = v29 | 0x42;
                  if ( (v32 & 0x42) == 0 )
                    v28 = v29;
                }
              }
            }
          }
          v27 = v28 & 0xFFFFFFFFFFFFFFFBuLL;
        }
        else
        {
          if ( (*(_BYTE *)(v17 + 172) & 0x40) != 0 )
          {
            v24 = 0;
            v25 = 4;
            v26 = *(_QWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 1300) + 22304);
          }
          else
          {
            v25 = v20 + v18;
            v24 = 1;
            v26 = v17;
          }
          v27 = MiTransferSoftwarePte(v15, v26, v25, v24);
        }
        v60 = v27;
        v22 = 2LL;
        v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      if ( v19->Next != (struct _MDL *)qword_140E361B8 )
        break;
      if ( (P[5] & 0x40) == 0 )
        v21 = v60;
LABEL_107:
      if ( v21 )
      {
        MiReleasePageFileInfo((struct _KEVENT *)v6, v21, 0LL);
        v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v21 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      v17 = v61;
      v19 = (struct _MDL *)((char *)v19 + 8);
      LODWORD(v18) = v66;
      v20 = (unsigned int)(v20 + 1);
      v22 = 2LL;
      v62 = v19;
      LODWORD(QpcTimeStamp) = v20;
      if ( (unsigned __int64)v19 >= v64 )
      {
        v16 = *((_DWORD *)P + 10);
        LODWORD(v9) = v71;
        goto LABEL_111;
      }
    }
    v33 = 48 * (__int64)v19->Next - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v22) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v22);
    }
    v35 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v35 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v35);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v33 + 24) < 0 );
    }
    if ( (v5 & 1) == 0 && (v5 & 0x80u) == 0 )
    {
      if ( (*(_BYTE *)(v33 + 34) & 0x10) != 0 )
        v5 |= 2u;
      else
        v5 &= ~2u;
    }
    v5 &= 0xFFFFFFF3;
    if ( (P[5] & 0x40) != 0 )
    {
      v36 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v33 + 40) >> 43) & 0x3FFLL));
      if ( (v5 & 2) != 0 || (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_102;
      if ( (unsigned __int16)*(_DWORD *)(v33 + 32) > 1u )
      {
        v37 = *(_DWORD *)(v33 + 32);
        if ( *(__int64 *)(v33 + 40) < 0 && (*(_QWORD *)(v33 + 16) & 0x400000000000400LL) == 0x400 )
        {
          SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v33 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
            && (SubsectionFromPte[8] & 0x20000) == 0 )
          {
            KeBugCheckEx(0x1Au, 0x8840uLL, v33, 0LL, 1uLL);
          }
        }
        if ( *(__int64 *)(v33 + 40) < 0
          && (*(_DWORD *)(v33 + 16) & 0x400LL) != 0
          && (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) == 0 )
        {
          v39 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v33 + 16));
          if ( (*(_DWORD *)(*(_QWORD *)v39 + 56LL) & 0x20) == 0 && (v39[38] & 1) == 0 )
            MiSetSubsectionModified(v39, 0LL);
        }
        if ( (v37 & 0x80000) != 0
          && MiCanPfnOriginalPteBeLost(v33)
          && (v37 & 0x100000) == 0
          && (*(_DWORD *)(v33 + 16) & 8) != 0 )
        {
          *(_QWORD *)(v33 + 16) &= ~8uLL;
        }
        *(_DWORD *)(v33 + 32) = v37 | 0x100000;
        v5 |= 2u;
        goto LABEL_102;
      }
      *(_DWORD *)(v33 + 32) = *(_DWORD *)(v33 + 32) & 0xFFF8FFFF | 0x20000;
      if ( (*(_DWORD *)(v36 + 2068) & 1) != 0 )
      {
        v5 |= 4u;
LABEL_102:
        v21 = MiWriteCompletePfn(v33, v5, (__int64)v65);
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        LODWORD(v20) = QpcTimeStamp;
        v19 = v62;
        v15 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        goto LABEL_107;
      }
    }
    else if ( (v4 & 2) == 0 || (v5 & 2) != 0 || (v5 & 1) != 0 || (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) != 0 )
    {
      goto LABEL_102;
    }
    v5 |= 8u;
    goto LABEL_102;
  }
LABEL_111:
  v40 = *((_DWORD *)P + 12);
  if ( !v40 )
    goto LABEL_114;
  if ( (v16 & 0x20) != 0 )
  {
    MiReturnResident(v6, v40);
LABEL_114:
    v41 = 1;
    goto LABEL_115;
  }
  v41 = 1;
  MiReleaseWriteInProgressCharges(v6, v40, 1);
LABEL_115:
  v42 = *((_DWORD *)P + 10);
  if ( (v42 & 0x20) != 0 )
  {
    if ( (v42 & 0x1Cu) < 8 )
      --*(_DWORD *)(v6 + 820);
    MiMakePagefileWriterEntryAvailable(P);
    if ( *(_BYTE *)(v6 + 801) )
      Event = (PRKEVENT)(v6 + 1048);
    if ( (P[5] & 0x40) != 0 )
    {
      MiStoreDecrementOutstandingWrites(v6);
      if ( !*(_BYTE *)(v6 + 802) )
        MiStoreCheckCompleteWriteBatch(v6);
    }
    v43 = v59;
  }
  else
  {
    v43 = v59;
    if ( (v4 & 1) != 0 )
      MiNotifyUserOfLostData(v59, (unsigned int)v9);
    v49 = (_QWORD *)MiDecrementModifiedWriteCount(v59, 0LL);
    if ( v49 )
      MiReleaseControlAreaWaiters(v49, v50, v51);
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 752));
    v52 = (_QWORD *)P[12];
    if ( v52 != P + 13 )
      ExFreePoolWithTag(v52, 0);
    if ( (P[5] & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      MiLockPartitionMappedWriter(v6, CurrentThread);
      v54 = *(_QWORD **)(v6 + 768);
      if ( *v54 != v6 + 760 )
        __fastfail(3u);
      *P = v6 + 760;
      P[1] = v54;
      *v54 = P;
      *(_QWORD *)(v6 + 768) = P;
      if ( *(_BYTE *)(v6 + 800) )
      {
        *(_BYTE *)(v6 + 800) = 0;
        KeSetEvent((PRKEVENT)(v6 + 776), 0, 0);
      }
      MiUnlockPartitionMappedWriter(v6, CurrentThread);
    }
    else
    {
      *P = 0LL;
      MiFreeModWriterEntry(P, 1u);
    }
  }
  v44 = 1140LL;
  if ( !v61 )
    v44 = 1143LL;
  v45 = (unsigned __int8 *)(v6 + v44);
  if ( (v9 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v9 != -1073741670
      && (_DWORD)v9 != -1073741663
      && (_DWORD)v9 != -1073741801
      && ((unsigned int)v69 <= 0x1000
       || (_DWORD)v9 != -1073741761 && (_DWORD)v9 != -1073741668 && (_DWORD)v9 != -1073740688) )
    {
      v41 = 0;
    }
    if ( v70 )
    {
      if ( !v43 || (v4 & 1) != 0 || v41 )
        goto LABEL_187;
    }
    else if ( (_DWORD)v9 != -1073741740 )
    {
      if ( !v41 )
        goto LABEL_187;
      v56 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1136));
      v57 = *v45;
      v48 = v56;
      if ( *v45 )
      {
        if ( v57 > 1u )
          *v45 = v57 >> 1;
        if ( !v45[2] )
        {
          v55 = v45[1]-- == 1;
          if ( v55 )
            v45[2] = 1;
        }
      }
      else
      {
        v45[1] = 16;
        *v45 = 16;
      }
      if ( v56 == 17 )
        goto LABEL_153;
LABEL_176:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v6 + 1136) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v6 + 1136), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v48);
      __writecr8(v48);
      goto LABEL_187;
    }
    *(_BYTE *)(v6 + 1176) = 1;
    goto LABEL_187;
  }
  if ( v43 )
    *(_BYTE *)(v6 + 1176) = 0;
  if ( *v45 )
  {
    v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1136));
    v47 = *v45;
    v48 = v46;
    if ( *v45 )
    {
      if ( v45[2] )
      {
        if ( v47 > 1u )
        {
          v45[2] = 0;
          *v45 = 0;
        }
      }
      else
      {
        v55 = v45[1]-- == 1;
        if ( v55 )
        {
          if ( v47 <= 1u )
            v45[2] = 1;
          else
            *v45 = 0;
        }
      }
    }
    if ( v46 == 17 )
    {
LABEL_153:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v6 + 1136) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v6 + 1136), retaddr);
      goto LABEL_187;
    }
    goto LABEL_176;
  }
LABEL_187:
  result = (int)Event;
  if ( Event )
    return KeSetEvent(Event, 0, 0);
  return result;
}
