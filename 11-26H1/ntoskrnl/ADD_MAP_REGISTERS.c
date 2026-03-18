/*
 * XREFs of ADD_MAP_REGISTERS @ 0x140C2293C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140C230F0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C232D0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x140C237D0 (VfAllocateCrashDumpRegisters.c)
 *     VfHalAllocateMapRegisters @ 0x140C250A0 (VfHalAllocateMapRegisters.c)
 *     ViScatterGatherCallback @ 0x140C27C60 (ViScatterGatherCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140C2731C (ViHalPreprocessOptions.c)
 */

void __fastcall ADD_MAP_REGISTERS(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int32 v5; // esi

  v5 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), a2);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 188), a2);
  if ( a2 > *(_DWORD *)(a1 + 184) )
  {
    ViHalPreprocessOptions(Response, "Allocating too many map registers at a time: %x (max %x).", 12, a2);
    VfReportIssueWithOptions(0xE6u, 0xCuLL, a2, *(unsigned int *)(a1 + 184), 0LL, Response);
  }
  if ( !a3 && v5 > *(_DWORD *)(a1 + 184) )
  {
    ViHalPreprocessOptions(byte_140E0EA4C, "Allocated too many map registers : %x (max %x).", 21, v5);
    VfReportIssueWithOptions(0xE6u, 0x15uLL, v5, *(unsigned int *)(a1 + 184), 0LL, byte_140E0EA4C);
  }
}
