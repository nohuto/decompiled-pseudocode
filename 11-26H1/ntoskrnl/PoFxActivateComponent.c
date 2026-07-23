/*
 * XREFs of PoFxActivateComponent @ 0x14037C860
 * Callers:
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x1405846BC (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14058DFA4 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x140592834 (HalpInterruptInitPowerManagement.c)
 *     DifPoFxActivateComponentWrapper @ 0x140696910 (DifPoFxActivateComponentWrapper.c)
 *     PopFxUnregisterDevice @ 0x140B08758 (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140CDC3E8 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
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
