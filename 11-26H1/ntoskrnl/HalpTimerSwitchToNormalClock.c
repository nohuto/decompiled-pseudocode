/*
 * XREFs of HalpTimerSwitchToNormalClock @ 0x1405202C0
 * Callers:
 *     HalpTimerClockArm @ 0x140208950 (HalpTimerClockArm.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140596CC0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     HalpTimerClockArm @ 0x140208950 (HalpTimerClockArm.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeGetClockTimerResolution @ 0x1405ED190 (KeGetClockTimerResolution.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerSwitchToNormalClock(__int64 a1)
{
  char v1; // si
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 InternalData; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  char v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  v7 = 0;
  LODWORD(v8) = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  guard_dispatch_icall_no_overrides(InternalData, v5);
  CurrentPrcb->PendingTickFlags &= ~2u;
  if ( v1 )
  {
    KeGetClockTimerResolution(&v8, &v9, &v7);
    if ( !v7 )
      HalpTimerClockArm(0, (unsigned int)v8, &v8);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
