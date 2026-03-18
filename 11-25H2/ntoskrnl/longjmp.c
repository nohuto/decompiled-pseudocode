/*
 * XREFs of longjmp @ 0x1404F9210
 * Callers:
 *     XmPopStack @ 0x140469B38 (XmPopStack.c)
 *     XmGroup45General @ 0x14046A030 (XmGroup45General.c)
 *     XmGetStringAddressRange @ 0x14046A138 (XmGetStringAddressRange.c)
 *     XmOutOp @ 0x14046A360 (XmOutOp.c)
 *     XmPushStack @ 0x14046A638 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x14046A78C (XmGetWordImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x14046A7D4 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x14046AC28 (XmGetCodeByte.c)
 *     XmInOp @ 0x14046ADA0 (XmInOp.c)
 *     XmGetLongImmediate @ 0x1405695F0 (XmGetLongImmediate.c)
 *     XmEffectiveOffset @ 0x140571B90 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x140571CC0 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140571EA0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1405720D0 (XmLoadSegment.c)
 *     XmEnterOp @ 0x140573420 (XmEnterOp.c)
 *     XmHltOp @ 0x1405734D0 (XmHltOp.c)
 *     XmBoundOp @ 0x140573CF0 (XmBoundOp.c)
 *     XmIllOp @ 0x140573DC0 (XmIllOp.c)
 *     XmDivOp @ 0x1405740B0 (XmDivOp.c)
 *     XmIdivOp @ 0x140574180 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x140574338 (XmEvaluateIndexSpecifier.c)
 *     XmGetOffsetAddress @ 0x140574594 (XmGetOffsetAddress.c)
 *     XmGetStringAddress @ 0x1405745DC (XmGetStringAddress.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140439680 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x14069A780 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
