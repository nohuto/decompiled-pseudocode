/*
 * XREFs of HalpInterruptFindLinesForGsiRange @ 0x140426C08
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     HalDisableInterrupt @ 0x1404240E0 (HalDisableInterrupt.c)
 *     HalEnableInterrupt @ 0x1404252A0 (HalEnableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x140425E10 (HalpInterruptSetDestination.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140425F5C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptApplyOverrides @ 0x140426138 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x14042638C (HalpInterruptGsiToLine.c)
 *     HalpInterruptFindControllerAndLineState @ 0x140426644 (HalpInterruptFindControllerAndLineState.c)
 *     HalpMaskInterrupt @ 0x140426960 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140426AB0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B7014 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     ExtEnvSetVpptTarget @ 0x1404D20BC (ExtEnvSetVpptTarget.c)
 *     HalpInterruptGetApicVersion @ 0x140507B30 (HalpInterruptGetApicVersion.c)
 *     HalpInterruptRequestInterrupt @ 0x14057D7A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRegisterLine @ 0x14059B0C4 (HalpInterruptRegisterLine.c)
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
