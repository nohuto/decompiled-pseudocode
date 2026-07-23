/*
 * XREFs of PopInitializeWorkItem @ 0x1407CBD0C
 * Callers:
 *     PopInitializeIRTimer @ 0x140603270 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PopPowerRequestInitialize @ 0x140CD69F8 (PopPowerRequestInitialize.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140CD6C08 (PopDirectedDripsInitializePhase0.c)
 *     PopInitializeWin32kActivator @ 0x140CD6F6C (PopInitializeWin32kActivator.c)
 *     PopThermalInit @ 0x140CD7954 (PopThermalInit.c)
 *     PopInitializePowerButtonHold @ 0x140CDB3CC (PopInitializePowerButtonHold.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopInitializeWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)a1 = 0LL;
  return result;
}
