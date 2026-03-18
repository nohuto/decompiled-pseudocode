/*
 * XREFs of MiReturnPfnReferenceCountAtDpc @ 0x14031E324
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402D4B40 (MiResolveDemandZeroFault.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiReleasePrefetchGapPages @ 0x140337DB8 (MiReleasePrefetchGapPages.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404AE73C (MiInitializeNewImageSectionProtos.c)
 *     MiReturnPfnReferenceCount @ 0x1404AE950 (MiReturnPfnReferenceCount.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 */

__int64 __fastcall MiReturnPfnReferenceCountAtDpc(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v3);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = MiRemoveLockedPageChargeAndDecRef(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
