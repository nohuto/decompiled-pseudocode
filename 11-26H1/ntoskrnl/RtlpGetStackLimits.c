/*
 * XREFs of RtlpGetStackLimits @ 0x140263CC0
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     RtlWalkFrameChain @ 0x140262D70 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x140262EB0 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x140263C80 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1402647B0 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     MiDoStackCopy @ 0x1403E4A60 (MiDoStackCopy.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140919C00 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlDeleteTreeInternal @ 0x140A2DB2C (_RegRtlDeleteTreeInternal.c)
 *     PspGetSetContextInternal @ 0x140A31AF0 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x140C437B8 (MmVerifierTrimMemory.c)
 *     ViDeadlockCheckStackLimits @ 0x140C454D4 (ViDeadlockCheckStackLimits.c)
 *     ViMiscValidateKeWaitUsage @ 0x140C46EAC (ViMiscValidateKeWaitUsage.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140263F70 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x140727390 (KeGetCurrentStackPointer.c)
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
