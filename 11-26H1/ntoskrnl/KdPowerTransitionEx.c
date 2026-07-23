/*
 * XREFs of KdPowerTransitionEx @ 0x140503C90
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1402F93B8 (PpmExitCoordinatedIdle.c)
 *     PpmEnterCoordinatedIdle @ 0x1402F9960 (PpmEnterCoordinatedIdle.c)
 *     KdPowerTransition @ 0x14052DE60 (KdPowerTransition.c)
 *     HalReturnToFirmware @ 0x140581B60 (HalReturnToFirmware.c)
 *     KdDisableDebuggerWithLock @ 0x1405E6358 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1405E64BC (KdEnableDebuggerWithLock.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x140610EB0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     PpmCancelExitLatencyTrace @ 0x140604108 (PpmCancelExitLatencyTrace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdPowerTransitionEx(int a1, char a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rcx
  unsigned __int8 EffectiveIrql; // bl

  v3 = 0;
  if ( !KdPitchDebugger )
  {
    v4 = a1 & 0x40000000 ^ a1;
    if ( (_BYTE)KdDebuggerEnabled || (a1 & 0x40000000) != 0 )
    {
      CurrentIrql = -1;
      v6 = v4 & (v4 < 0 ? 0x80000000 : 0x20000000);
      v7 = v6 ^ v4;
      if ( KdTransportMaxPacketSize != 1152 )
        v6 = 0;
      if ( a2 )
      {
        if ( KeGetEffectiveIrql() < 2u )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v8) = 2;
            LOBYTE(v9) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v9, v8);
          }
        }
        KxAcquireSpinLock(&KdDebuggerLock);
      }
      v10 = v7 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 && (unsigned int)(v11 - 1) >= 2 )
          v3 = -1073741811;
        else
          v3 = KdPower(v6 | 4, &KdpContext);
      }
      else
      {
        PpmCancelExitLatencyTrace(KeGetCurrentPrcb());
        EffectiveIrql = KeGetEffectiveIrql();
        if ( EffectiveIrql >= 2u )
        {
          LOBYTE(v12) = 1;
          guard_dispatch_icall_no_overrides(v12, 0LL);
        }
        v3 = KdPower(v6 | 1, &KdpContext);
        if ( EffectiveIrql >= 2u )
          guard_dispatch_icall_no_overrides(0LL, 0LL);
      }
      if ( a2 )
      {
        KxReleaseSpinLock(&KdDebuggerLock);
        if ( CurrentIrql != 0xFF )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
      }
    }
  }
  return v3;
}
