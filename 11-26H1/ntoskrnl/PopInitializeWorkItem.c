/*
 * XREFs of PopInitializeWorkItem @ 0x1407C8C6C
 * Callers:
 *     PopInitializeIRTimer @ 0x1406007C0 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PopPowerRequestInitialize @ 0x140CD0850 (PopPowerRequestInitialize.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140CD0A60 (PopDirectedDripsInitializePhase0.c)
 *     PopInitializeWin32kActivator @ 0x140CD0DC4 (PopInitializeWin32kActivator.c)
 *     PopThermalInit @ 0x140CD17AC (PopThermalInit.c)
 *     PopInitializePowerButtonHold @ 0x140CD502C (PopInitializePowerButtonHold.c)
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
