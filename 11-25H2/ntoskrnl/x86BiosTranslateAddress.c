/*
 * XREFs of x86BiosTranslateAddress @ 0x14046AC70
 * Callers:
 *     x86BiosReadMemory @ 0x140469A80 (x86BiosReadMemory.c)
 *     XmPopStack @ 0x140469B38 (XmPopStack.c)
 *     XmGetStringAddressRange @ 0x14046A138 (XmGetStringAddressRange.c)
 *     XmPushStack @ 0x14046A638 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x14046A78C (XmGetWordImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x14046A7D4 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x14046AC28 (XmGetCodeByte.c)
 *     HalInitializeBios @ 0x140539590 (HalInitializeBios.c)
 *     x86BiosWriteMemory @ 0x140543F90 (x86BiosWriteMemory.c)
 *     XmEmulateInterrupt @ 0x14055C170 (XmEmulateInterrupt.c)
 *     XmInitializeEmulator @ 0x14055C208 (XmInitializeEmulator.c)
 *     XmGetLongImmediate @ 0x1405695F0 (XmGetLongImmediate.c)
 *     XmIntOp @ 0x1405734F0 (XmIntOp.c)
 *     XmGetOffsetAddress @ 0x140574594 (XmGetOffsetAddress.c)
 *     XmGetStringAddress @ 0x1405745DC (XmGetStringAddress.c)
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
  if ( v2 > 0x8FFFF && v2 - 655360 > 0x1FFFF )
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
