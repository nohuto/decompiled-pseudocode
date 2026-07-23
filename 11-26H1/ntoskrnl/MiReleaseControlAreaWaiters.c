/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x140272950
 * Callers:
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiReservePageFileSpace @ 0x140368E88 (MiReservePageFileSpace.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiUnlockFlushMdl @ 0x1403CB7C4 (MiUnlockFlushMdl.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiReleasePageFileSectionInfo @ 0x1404628D4 (MiReleasePageFileSectionInfo.c)
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiComputeDataFlushRange @ 0x140480064 (MiComputeDataFlushRange.c)
 *     MiReferenceExistingControlArea @ 0x14049E0E0 (MiReferenceExistingControlArea.c)
 *     MiReferencePfBackedSection @ 0x1404CB310 (MiReferencePfBackedSection.c)
 *     MiPrepareToFlushSubsection @ 0x1404E5300 (MiPrepareToFlushSubsection.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 *     MiIncrementLargeSubsections @ 0x1406FF0D4 (MiIncrementLargeSubsections.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiReleaseControlAreaWaiters(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *v9; // rdx
  volatile signed __int32 *v10; // rax
  volatile signed __int32 **v11; // rcx
  char v12; // cl
  int v13; // eax

  if ( a1 )
  {
    while ( 1 )
    {
      v3 = (_QWORD *)*a1;
      v4 = (volatile signed __int32 *)(a1 + 3);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = 0;
      if ( _interlockedbittestandset(v4, 7u) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*v4 & 0x80u) != 0 || _interlockedbittestandset(v4, 7u) );
      }
      if ( !*((_DWORD *)v4 + 1) )
        break;
LABEL_15:
      _InterlockedAnd(v4, 0xFFFFFF7F);
      KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
      a1 = v3;
      if ( !v3 )
        return;
    }
    *((_DWORD *)v4 + 1) = 1;
    v8 = (volatile signed __int32 *)*((_QWORD *)v4 + 1);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v8 == v4 + 2 )
          goto LABEL_15;
        v9 = *(volatile signed __int32 **)v8;
        v10 = v8;
        v8 = v9;
        v11 = (volatile signed __int32 **)*((_QWORD *)v10 + 1);
        if ( *((volatile signed __int32 **)v9 + 1) != v10 || *v11 != v10 )
          __fastfail(3u);
        *v11 = v9;
        *((_QWORD *)v9 + 1) = v11;
        v12 = *((_BYTE *)v10 + 16);
        if ( v12 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v10, *((unsigned __int16 *)v10 + 9), 0LL) )
        {
LABEL_14:
          v13 = *((_DWORD *)v4 + 1) - 1;
          *((_DWORD *)v4 + 1) = v13;
          if ( !v13 )
            goto LABEL_15;
        }
      }
      if ( v12 == 2 )
      {
        *((_BYTE *)v10 + 17) = 5;
        KiInsertQueueInternal(*((_QWORD *)v10 + 3), v10);
        goto LABEL_14;
      }
      if ( v12 == 4 )
      {
        *((_BYTE *)v10 + 17) = 5;
        *((_DWORD *)v4 + 1) = 0;
        KiInsertQueueDpc(*((_QWORD *)v10 + 3), 0);
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v10, 256LL, 0LL);
      }
    }
  }
}
