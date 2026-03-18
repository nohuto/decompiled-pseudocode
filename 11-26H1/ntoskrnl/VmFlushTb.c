/*
 * XREFs of VmFlushTb @ 0x14041D644
 * Callers:
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1405F0C70 (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405F0DF4 (KeFlushSingleTb.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     VmpFlushTb @ 0x1402519C4 (VmpFlushTb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall VmFlushTb(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v3; // rsi
  int v4; // ebp
  _KPROCESS *Process; // rdi
  unsigned __int8 CurrentIrql; // bl

  if ( a3 == 1 )
  {
    v3 = a2;
    v4 = a1;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[3].ProcessListEntry.Blink )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 2u )
      {
        __int2c();
      }
      else if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          LOBYTE(a1) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(a1, a2);
        }
      }
      VmpFlushTb((PEX_SPIN_LOCK)Process[3].ProcessListEntry.Blink, v4, v3);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
  }
}
