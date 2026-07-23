/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x14032FC8C
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     HalDisableInterrupt @ 0x1404311D0 (HalDisableInterrupt.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x14043306C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpMaskInterrupt @ 0x140433A70 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140433BC0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetDestinationInternal @ 0x140435518 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404360DC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptRestoreController @ 0x1404D792C (HalpInterruptRestoreController.c)
 *     HalpInterruptRemapFixedLines @ 0x14057FA78 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRestoreClock @ 0x14057FDE8 (HalpInterruptRestoreClock.c)
 *     HalpConnectThermalInterrupt @ 0x140592320 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x140592534 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x1405925F0 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x14059C770 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x140C0EDD0 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptSetLineStateInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // eax
  int v6; // r8d
  bool v8; // bl
  __int64 v9; // rdx
  __int64 v10; // r8

  v3 = *(_DWORD *)(a3 + 12);
  if ( (v3 & 0x10) == 0 || (v3 & 0x20) != 0 )
    v5 = v3 & 0xFFFFFFFE;
  else
    v5 = v3 | 1;
  *(_DWORD *)(a3 + 12) = v5;
  if ( (*(_DWORD *)(a1 + 244) & 0x200) != 0 )
  {
    v8 = HalpDisableInterrupts();
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), v9, v10);
    if ( v8 )
      _enable();
  }
  else
  {
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2, a3);
  }
  if ( v6 < 0 )
    HalpInterruptSetProblemEx(a1, 7, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3239);
  return (unsigned int)v6;
}
