/*
 * XREFs of PopRecordPowerWatchdogBlackboxInformation @ 0x1406135B8
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x1407E39E0 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PopRecordPowerWatchdogBlackboxInformation()
{
  KIRQL v0; // al
  _KEVENT *v1; // r8
  int v2; // edi
  void *v3; // rbx
  KIRQL v4; // bp
  bool v5; // zf
  int v6; // edx
  __int64 v7; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v9; // r14
  _KEVENT *i; // rdi
  __int128 InputBuffer; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  unsigned __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  InputBuffer = 0LL;
  v12 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopModernStandbyStateNotify.SchedulerApc.SystemArgument2);
  v1 = *(_KEVENT **)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock;
  v2 = 0;
  v3 = 0LL;
  v4 = v0;
  if ( *(struct _KTHREAD **)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock == (struct _KTHREAD *)&PopModernStandbyStateNotify.SuspendEvent )
    goto LABEL_13;
  do
  {
    v5 = LOBYTE(v1[8].Header.WaitListHead.Blink) == 0;
    v6 = v2 + 1;
    v1 = *(_KEVENT **)&v1->Header.Lock;
    if ( v5 )
      v6 = v2;
    v2 = v6;
  }
  while ( v1 != &PopModernStandbyStateNotify.SuspendEvent );
  if ( !v6 )
  {
LABEL_13:
    v7 = 0LL;
  }
  else
  {
    v7 = 80LL * (unsigned int)(v6 - 1) + 96;
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v3 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      v9 = Pool2 + 4;
      Pool2[1] = v7;
      Pool2[2] = v2;
      for ( i = *(_KEVENT **)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock;
            i != &PopModernStandbyStateNotify.SuspendEvent;
            i = *(_KEVENT **)&i->Header.Lock )
      {
        if ( LOBYTE(i[8].Header.WaitListHead.Blink) )
        {
          *v9 = i->Header.WaitListHead.Blink;
          *((_QWORD *)v9 + 9) = *(_QWORD *)&i[12].Header.Lock;
          v9[1] = (RtlGetInterruptTimePrecise(&v13) - (unsigned __int64)i[12].Header.WaitListHead.Flink) / 0x2710;
          v9[2] = i[9].Header.Lock;
          v9[3] = i[9].Header.WaitListHead.Flink;
          *((_QWORD *)v9 + 2) = i[9].Header.WaitListHead.Blink;
          *((_QWORD *)v9 + 3) = *(_QWORD *)&i[10].Header.Lock;
          *((_QWORD *)v9 + 4) = i[10].Header.WaitListHead.Flink;
          *((_QWORD *)v9 + 5) = i[10].Header.WaitListHead.Blink;
          *((_QWORD *)v9 + 8) = i + 9;
          *((_QWORD *)v9 + 6) = i[11].Header.WaitListHead.Flink;
          *((_QWORD *)v9 + 7) = i[11].Header.WaitListHead.Blink;
          v9 += 20;
        }
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&PopModernStandbyStateNotify.SchedulerApc.SystemArgument2, v4);
  if ( v7 )
  {
    DWORD2(v12) = 8;
    *(_QWORD *)&InputBuffer = v3;
    *((_QWORD *)&InputBuffer + 1) = (unsigned int)v7;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x42424F50u);
}
