/*
 * XREFs of CcGetRandomVacbArrayWithReference @ 0x140408E70
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x140409590 (CcReferenceVacbArray.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1404095E4 (CcRecalculateVacbArrayHighwaterMark.c)
 */

__int64 CcGetRandomVacbArrayWithReference()
{
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rdx
  unsigned __int64 v2; // r8
  char *v3; // rax
  unsigned __int64 v4; // r8
  unsigned int v5; // ecx
  __int64 v6; // rbx
  KIRQL v7; // di
  __int64 v8; // rax
  __int64 v9; // rbx

  while ( 1 )
  {
    do
    {
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v2 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v3 = (char *)Blink + v2;
      v4 = (unsigned __int64)Blink ^ v2;
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v4 ^ __ROL8__(Blink, 24) ^ (v4 << 16));
      v5 = CcVacbArraysHighestUsedIndex + 1;
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v4, 37);
      v6 = HIDWORD(v3) % v5;
    }
    while ( !*((_QWORD *)EmpParseLock.SchedulerSharedSystemSlot + v6) );
    v7 = KeAcquireQueuedSpinLock(4uLL);
    v8 = CcReferenceVacbArray((unsigned int)v6);
    v9 = v8;
    if ( v8 )
      break;
    KeReleaseQueuedSpinLock(4uLL, v7);
  }
  CcRecalculateVacbArrayHighwaterMark(v8);
  KeReleaseQueuedSpinLock(4uLL, v7);
  return v9;
}
