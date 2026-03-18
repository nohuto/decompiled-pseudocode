/*
 * XREFs of PoFxActivateComponent @ 0x14037AAB0
 * Callers:
 *     PopFxActivateDevice @ 0x1404D5290 (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1404EAC40 (PoFxStartDevicePowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x14058219C (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14058B824 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x1405900B4 (HalpInterruptInitPowerManagement.c)
 *     DifPoFxActivateComponentWrapper @ 0x140692D30 (DifPoFxActivateComponentWrapper.c)
 *     PopFxUnregisterDevice @ 0x140B06628 (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140CD6094 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateComponent @ 0x14037AB40 (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  char v3; // r8

  v3 = a3 & 0xF7;
  if ( (v3 & 1) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
      PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
    if ( (v3 & 2) != 0 )
      PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  }
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  return PopFxActivateComponent(BugCheckParameter2);
}
