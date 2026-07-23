/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x140C28A64
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140C29100 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140C292E0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140C29F90 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140C2A440 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140C2A4F0 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x140C2BC10 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140C2D32C (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
  if ( *(_DWORD *)(a1 + 224) < 3u && v2 != *(_DWORD *)(a1 + 212) )
  {
    ViHalPreprocessOptions(byte_140E0EAB8, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 212), 0LL, 0LL, byte_140E0EAB8);
  }
}
