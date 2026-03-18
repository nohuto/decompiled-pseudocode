/*
 * XREFs of x86BiosTranslateAddress @ 0x1404A8B20
 * Callers:
 *     x86BiosReadMemory @ 0x1404A78E0 (x86BiosReadMemory.c)
 *     XmPopStack @ 0x1404A79D8 (XmPopStack.c)
 *     XmPushStack @ 0x1404A834C (XmPushStack.c)
 *     XmGetStringAddressRange @ 0x1404A83B0 (XmGetStringAddressRange.c)
 *     XmGetWordImmediate @ 0x1404A8610 (XmGetWordImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1404A8AE0 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x140531404 (XmGetLongImmediate.c)
 *     HalInitializeBios @ 0x1405784A0 (HalInitializeBios.c)
 *     x86BiosWriteMemory @ 0x140580FE0 (x86BiosWriteMemory.c)
 *     XmEmulateInterrupt @ 0x140596B70 (XmEmulateInterrupt.c)
 *     XmInitializeEmulator @ 0x140596C08 (XmInitializeEmulator.c)
 *     XmIntOp @ 0x1405AD8E0 (XmIntOp.c)
 *     XmGetOffsetAddress @ 0x1405AE960 (XmGetOffsetAddress.c)
 *     XmGetStringAddress @ 0x1405AE9A8 (XmGetStringAddress.c)
 * Callees:
 *     <none>
 */

int *__fastcall x86BiosTranslateAddress(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  unsigned int v5; // r8d
  char *v6; // rcx
  unsigned int v7; // r8d

  _mm_lfence();
  v2 = (a2 + 16 * a1) & 0xFFFFF;
  if ( v2 >= 0xC0000 || v2 - 589824 <= 0xFFFF )
    return (int *)(x86BiosIoMemory + v2);
  if ( v2 >= 0xA0000 )
  {
    v4 = x86BiosFrameBuffer;
    v6 = (char *)v2;
    if ( !x86BiosFrameBuffer )
      v4 = x86BiosIoMemory;
    return (int *)&v6[v4];
  }
  v4 = (unsigned __int16)(a2 + 16 * a1);
  v5 = HIWORD(v2);
  if ( !v5 )
  {
    if ( (unsigned int)v4 <= 0x800 )
    {
      v6 = (char *)&x86BiosLowMemory;
      return (int *)&v6[v4];
    }
    goto LABEL_13;
  }
  v7 = v5 - 1;
  if ( !v7 || v7 - 1 >= 2 || (unsigned int)v4 >= x86BiosTransferLength )
  {
LABEL_13:
    x86BiosScratchMemory = 0;
    return &x86BiosScratchMemory;
  }
  return (int *)(x86BiosTransferMemory + v4);
}
