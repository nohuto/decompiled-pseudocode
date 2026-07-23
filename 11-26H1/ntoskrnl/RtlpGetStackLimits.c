/*
 * XREFs of RtlpGetStackLimits @ 0x140263230
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x140262420 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x1402631F0 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140263D20 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     MiDoStackCopy @ 0x1403E7C50 (MiDoStackCopy.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140974660 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlDeleteTreeInternal @ 0x140A3F538 (_RegRtlDeleteTreeInternal.c)
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x140C497C8 (MmVerifierTrimMemory.c)
 *     ViDeadlockCheckStackLimits @ 0x140C4B4E4 (ViDeadlockCheckStackLimits.c)
 *     ViMiscValidateKeWaitUsage @ 0x140C4CEBC (ViMiscValidateKeWaitUsage.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall RtlpGetStackLimits(__int64 a1, __int64 a2)
{
  __int64 CurrentStackPointer; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  CurrentStackPointer = KeGetCurrentStackPointer();
  result = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v6, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
