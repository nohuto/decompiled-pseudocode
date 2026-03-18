/*
 * XREFs of ExpWakePushLock @ 0x140433394
 * Callers:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1402E3150 (ExfReleasePushLockExclusive.c)
 *     ExfReleasePushLockSharedEx @ 0x14043326C (ExfReleasePushLockSharedEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreWakeupHandle @ 0x1402736A4 (KeAbPreWakeupHandle.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall ExpWakePushLock(volatile signed __int64 *a1, signed __int64 a2)
{
  int v3; // esi
  unsigned __int64 v4; // rcx
  _QWORD *v5; // r8
  struct _KEVENT *v6; // rbx
  _QWORD *v7; // rax
  struct _LIST_ENTRY **p_Blink; // r8
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KEVENT *Blink; // rsi
  __int64 Flink; // rcx
  signed __int64 v14; // rax

  v3 = 1;
  while ( 1 )
  {
    while ( (a2 & 1) != 0 )
    {
      v14 = _InterlockedCompareExchange64(a1, a2 - 4, a2);
      v9 = a2 == v14;
      a2 = v14;
      if ( v9 )
        return;
    }
    v4 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
    v5 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v6 = *(struct _KEVENT **)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
    if ( !v6 )
    {
      do
      {
        v7 = v5;
        v5 = (_QWORD *)v5[3];
        v5[5] = v7;
        v6 = (struct _KEVENT *)v5[4];
      }
      while ( !v6 );
      if ( v5 != (_QWORD *)v4 )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v6;
    }
    p_Blink = &v6[1].Header.WaitListHead.Blink;
    if ( (v6[2].Header.SignalState & 1) != 0 )
    {
      if ( *p_Blink )
        break;
    }
    v10 = _InterlockedCompareExchange64(a1, 0LL, a2);
    v9 = a2 == v10;
    a2 = v10;
    if ( v9 )
      goto LABEL_9;
  }
  *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = *p_Blink;
  *p_Blink = 0LL;
  _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
  v3 = 0;
LABEL_9:
  CurrentIrql = 2;
  if ( *p_Blink )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v4) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v4, a2);
    }
  }
  if ( !v3 )
  {
    Flink = (__int64)v6[2].Header.WaitListHead.Flink;
    if ( Flink )
      KeAbPreWakeupHandle(Flink, a2, 0LL);
  }
  do
  {
    Blink = (struct _KEVENT *)v6[1].Header.WaitListHead.Blink;
    if ( !_interlockedbittestandreset(&v6[2].Header.SignalState, 1u) )
      KeSetEvent(v6, 0, 0);
    v6 = Blink;
  }
  while ( Blink );
  if ( CurrentIrql != 2 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
