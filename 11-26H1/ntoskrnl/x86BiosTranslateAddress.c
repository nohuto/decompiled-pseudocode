/*
 * XREFs of x86BiosTranslateAddress @ 0x1404A21B0
 * Callers:
 *     x86BiosReadMemory @ 0x1404A0F70 (x86BiosReadMemory.c)
 *     XmPopStack @ 0x1404A1068 (XmPopStack.c)
 *     XmPushStack @ 0x1404A19DC (XmPushStack.c)
 *     XmGetStringAddressRange @ 0x1404A1A40 (XmGetStringAddressRange.c)
 *     XmGetWordImmediate @ 0x1404A1CA0 (XmGetWordImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1404A2170 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x140533904 (XmGetLongImmediate.c)
 *     HalInitializeBios @ 0x14057A9D0 (HalInitializeBios.c)
 *     x86BiosWriteMemory @ 0x140583500 (x86BiosWriteMemory.c)
 *     XmEmulateInterrupt @ 0x1405992F0 (XmEmulateInterrupt.c)
 *     XmInitializeEmulator @ 0x140599388 (XmInitializeEmulator.c)
 *     XmIntOp @ 0x1405B00F0 (XmIntOp.c)
 *     XmGetOffsetAddress @ 0x1405B1170 (XmGetOffsetAddress.c)
 *     XmGetStringAddress @ 0x1405B11B8 (XmGetStringAddress.c)
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
