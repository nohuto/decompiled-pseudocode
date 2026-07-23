/*
 * XREFs of longjmp @ 0x140535DC0
 * Callers:
 *     XmPopStack @ 0x1404A1068 (XmPopStack.c)
 *     XmGroup45General @ 0x1404A1540 (XmGroup45General.c)
 *     XmOutOp @ 0x1404A1690 (XmOutOp.c)
 *     XmPushStack @ 0x1404A19DC (XmPushStack.c)
 *     XmGetStringAddressRange @ 0x1404A1A40 (XmGetStringAddressRange.c)
 *     XmGetWordImmediate @ 0x1404A1CA0 (XmGetWordImmediate.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1404A2170 (XmGetCodeByte.c)
 *     XmInOp @ 0x1404A22C0 (XmInOp.c)
 *     XmGetLongImmediate @ 0x140533904 (XmGetLongImmediate.c)
 *     XmEffectiveOffset @ 0x1405AE7D0 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x1405AE900 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1405AEAE0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1405AED10 (XmLoadSegment.c)
 *     XmEnterOp @ 0x1405B0020 (XmEnterOp.c)
 *     XmHltOp @ 0x1405B00D0 (XmHltOp.c)
 *     XmBoundOp @ 0x1405B08E0 (XmBoundOp.c)
 *     XmIllOp @ 0x1405B09B0 (XmIllOp.c)
 *     XmDivOp @ 0x1405B0CA0 (XmDivOp.c)
 *     XmIdivOp @ 0x1405B0D80 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1405B0F38 (XmEvaluateIndexSpecifier.c)
 *     XmGetOffsetAddress @ 0x1405B1170 (XmGetOffsetAddress.c)
 *     XmGetStringAddress @ 0x1405B11B8 (XmGetStringAddress.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140470910 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x140727570 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
