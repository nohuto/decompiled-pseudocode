/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x14048EA44
 * Callers:
 *     PspIoRateEntryActivate @ 0x140ABECE0 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x140ABEEC8 (PspSetJobIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     IopDiskIoAttributionTreeCompare @ 0x14048EB3C (IopDiskIoAttributionTreeCompare.c)
 */

void __fastcall IoStartDiskIoAttributionForContext(PRTL_BALANCED_NODE Node)
{
  KIRQL v2; // al
  unsigned __int64 Blink; // rdi
  BOOLEAN v4; // bl
  KIRQL v5; // r15
  int v6; // esi
  unsigned __int64 v7; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  Blink = (unsigned __int64)IopPerfIoTrackingLock.Header.WaitListHead.Blink;
  v4 = 0;
  v5 = v2;
  if ( ((__int64)IopPerfIoTrackingLock.SListFaultAddress & 1) != 0 )
  {
    if ( IopPerfIoTrackingLock.Header.WaitListHead.Blink )
      Blink = (unsigned __int64)&IopPerfIoTrackingLock.Header.WaitListHead.Blink ^ (unsigned __int64)IopPerfIoTrackingLock.Header.WaitListHead.Blink;
    else
      Blink = 0LL;
  }
  v6 = (__int64)IopPerfIoTrackingLock.SListFaultAddress & 1;
  if ( Blink )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare(&Node[1], Blink) >= 0 )
      {
        v7 = *(_QWORD *)(Blink + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_11;
          v7 ^= Blink;
        }
        if ( !v7 )
        {
LABEL_11:
          v4 = 1;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)Blink;
        if ( v6 )
        {
          if ( !v7 )
            break;
          v7 ^= Blink;
        }
        if ( !v7 )
          break;
      }
      Blink = v7;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)&IopPerfIoTrackingLock.Header.WaitListHead.Blink, (PRTL_BALANCED_NODE)Blink, v4, Node);
  ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v5);
}
