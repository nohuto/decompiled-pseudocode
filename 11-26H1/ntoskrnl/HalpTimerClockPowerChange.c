/*
 * XREFs of HalpTimerClockPowerChange @ 0x1405811D0
 * Callers:
 *     HalpTimerPowerChange @ 0x140582BE4 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     HalpSetTimerAnyMode @ 0x1404E3060 (HalpSetTimerAnyMode.c)
 *     HalpTimerClockStop @ 0x1404F9F10 (HalpTimerClockStop.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpTimerClockInitialize @ 0x140581160 (HalpTimerClockInitialize.c)
 *     KeGetNextClockTickDuration @ 0x1405ED1F0 (KeGetNextClockTickDuration.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG_PTR __fastcall HalpTimerClockPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG_PTR v3; // rbx
  ULONG_PTR result; // rax
  ULONG_PTR v5; // rdi
  signed __int64 v6; // rax
  __int64 InternalData; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  char v11; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  if ( a2 )
    return HalpTimerClockInitialize();
  v3 = HalpAlwaysOnTimer;
  if ( !HalpAlwaysOnTimer )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x21uLL, BugCheckParameter3, 0LL);
  if ( KiClockTimerPerCpuTickScheduling
    || (result = (unsigned int)KiClockTimerOwner, CurrentPrcb->Number == (_DWORD)KiClockTimerOwner) )
  {
    HalpTimerClockStop();
    result = KeGetNextClockTickDuration(&v11);
    v5 = result;
    if ( !v11 )
    {
      v6 = 0x989680uLL / *(_QWORD *)(v3 + 192);
      if ( v6 < 5000 )
        v6 = 5000LL;
      if ( (__int64)v5 < v6 )
      {
        ++HalpTimerClockSwapViolationCount;
        v5 = v6;
      }
      if ( v5 > HalpTimerMaxIncrement )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, v5, 0LL);
      InternalData = HalpTimerGetInternalData(v3);
      v9 = guard_dispatch_icall_no_overrides(InternalData, v8);
      if ( v9 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v3, v9);
      result = HalpSetTimerAnyMode(v3, (unsigned int)v5, v10, &v12);
      if ( (result & 0x80000000) != 0LL )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x23uLL, v3, (int)result);
      CurrentPrcb->PendingTickFlags |= 2u;
    }
  }
  return result;
}
