/*
 * XREFs of ExpTimerAdjust @ 0x1406D3490
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x14061A1B0 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeCancelTimerInternal @ 0x1404B2DDC (KeCancelTimerInternal.c)
 *     ExpCalcAdjustedDueTime @ 0x1406D2C90 (ExpCalcAdjustedDueTime.c)
 */

char __fastcall ExpTimerAdjust(PKTIMER Timer, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  ULONG v6; // esi
  char v10; // r14
  __int64 v11; // rax
  ULONG Dpc; // r8d
  LARGE_INTEGER v13; // r11
  int Dpc_high; // eax
  ULONG v15; // ecx
  ULONG v16; // eax
  volatile LONG Lock; // r9d
  char v18; // bl
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0;
  v20 = 0LL;
  v21 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)&Timer[1]);
  v10 = KeCancelTimerInternal((__int64)Timer, &v20, &v21, (unsigned int *)&Timer[5]);
  if ( v10 )
  {
    v11 = ExpCalcAdjustedDueTime(v20, v21, a3, a4, a5);
    Dpc = (ULONG)Timer[3].Dpc;
    v13.QuadPart = v11;
    if ( Dpc )
    {
      Dpc_high = HIDWORD(Timer[3].Dpc);
      v15 = Dpc - Dpc_high;
      if ( !Dpc_high )
        v15 = (ULONG)Timer[3].Dpc;
      Dpc = v15;
      v16 = v15 + a2 / 0x2710;
      if ( v16 >= v15 )
      {
        Dpc = v15 + a2 / 0x2710;
        LODWORD(Timer[3].Dpc) = v16;
        HIDWORD(Timer[3].Dpc) = a2 / 0x2710;
      }
    }
    Lock = Timer[5].Header.Lock;
    v18 = (__int64)Timer[4].Dpc & 1;
    *(LARGE_INTEGER *)&Timer[4].Processor = v13;
    if ( !v18 )
      v6 = Dpc;
    KeSetCoalescableTimer(
      Timer,
      v13,
      v6,
      Lock,
      (PKDPC)((unsigned __int64)&Timer[2].TimerListEntry & -(__int64)(v18 != 0)));
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&Timer[1]);
  return v10;
}
