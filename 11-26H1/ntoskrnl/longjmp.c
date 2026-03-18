/*
 * XREFs of longjmp @ 0x140533940
 * Callers:
 *     XmPopStack @ 0x1404A79D8 (XmPopStack.c)
 *     XmGroup45General @ 0x1404A7EB0 (XmGroup45General.c)
 *     XmOutOp @ 0x1404A8000 (XmOutOp.c)
 *     XmPushStack @ 0x1404A834C (XmPushStack.c)
 *     XmGetStringAddressRange @ 0x1404A83B0 (XmGetStringAddressRange.c)
 *     XmGetWordImmediate @ 0x1404A8610 (XmGetWordImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1404A8AE0 (XmGetCodeByte.c)
 *     XmInOp @ 0x1404A8C30 (XmInOp.c)
 *     XmGetLongImmediate @ 0x140531404 (XmGetLongImmediate.c)
 *     XmEffectiveOffset @ 0x1405ABFC0 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x1405AC0F0 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1405AC2D0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1405AC500 (XmLoadSegment.c)
 *     XmEnterOp @ 0x1405AD810 (XmEnterOp.c)
 *     XmHltOp @ 0x1405AD8C0 (XmHltOp.c)
 *     XmBoundOp @ 0x1405AE0D0 (XmBoundOp.c)
 *     XmIllOp @ 0x1405AE1A0 (XmIllOp.c)
 *     XmDivOp @ 0x1405AE490 (XmDivOp.c)
 *     XmIdivOp @ 0x1405AE570 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1405AE728 (XmEvaluateIndexSpecifier.c)
 *     XmGetOffsetAddress @ 0x1405AE960 (XmGetOffsetAddress.c)
 *     XmGetStringAddress @ 0x1405AE9A8 (XmGetStringAddress.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140477190 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1407229A0 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
