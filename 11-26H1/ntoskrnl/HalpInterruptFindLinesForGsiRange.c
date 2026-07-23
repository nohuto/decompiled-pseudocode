/*
 * XREFs of HalpInterruptFindLinesForGsiRange @ 0x140433D18
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     HalDisableInterrupt @ 0x1404311D0 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x140432390 (HalEnableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x140432F20 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x14043306C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpInterruptFindControllerAndLineState @ 0x140433754 (HalpInterruptFindControllerAndLineState.c)
 *     HalpMaskInterrupt @ 0x140433A70 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140433BC0 (HalpUnmaskInterrupt.c)
 *     ExtEnvSetVpptTarget @ 0x1404358D0 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B0844 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptGetApicVersion @ 0x140501500 (HalpInterruptGetApicVersion.c)
 *     HalpInterruptRequestInterrupt @ 0x14057FCC0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRegisterLine @ 0x14059D844 (HalpInterruptRegisterLine.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall HalpInterruptFindLinesForGsiRange(unsigned int a1, unsigned int a2)
{
  ULONG_PTR *v2; // r8
  ULONG_PTR *v5; // rdi
  _QWORD **v6; // rdi
  _QWORD *v7; // rdx
  _DWORD *v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // r11d

  v2 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v2 != &HalpRegisteredInterruptControllers )
  {
    v5 = v2;
    v2 = (ULONG_PTR *)*v2;
    v6 = (_QWORD **)(v5 + 33);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      v9 = v8[7];
      if ( v9 != -1 )
      {
        if ( v9 >= a1 && v9 < a2 )
          return v8;
        v10 = v9 + v8[6] + ~v8[5];
        if ( v10 < a2 && v10 >= a1 )
          return v8;
        if ( v10 >= a2 && v9 < a1 )
          return v8;
      }
    }
  }
  return 0LL;
}
