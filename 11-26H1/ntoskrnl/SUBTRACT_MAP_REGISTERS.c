/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140C22D7C
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14064113C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140C230F0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C232D0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140C23F80 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140C24430 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140C244E0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140C24780 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140C25980 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140C25C00 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140C2731C (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140E0EA54, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140E0EA54);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 220), 0);
}
