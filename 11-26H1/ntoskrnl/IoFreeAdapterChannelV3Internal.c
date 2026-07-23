/*
 * XREFs of IoFreeAdapterChannelV3Internal @ 0x140437694
 * Callers:
 *     IoFreeAdapterChannelV3 @ 0x140437640 (IoFreeAdapterChannelV3.c)
 *     HalpContinueProcessingWaitQueue @ 0x1404377B0 (HalpContinueProcessingWaitQueue.c)
 * Callees:
 *     HalpFreeDmaChannels @ 0x140436F14 (HalpFreeDmaChannels.c)
 *     IoFreeMapRegistersV3 @ 0x1404376F0 (IoFreeMapRegistersV3.c)
 */

__int64 __fastcall IoFreeAdapterChannelV3Internal(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 248) )
  {
    result = IoFreeMapRegistersV3(a1, *(_QWORD *)(a1 + 240));
    *(_DWORD *)(a1 + 248) = 0;
  }
  if ( !*(_BYTE *)(a1 + 441) )
  {
    if ( *(_DWORD *)(a1 + 392) )
      return HalpFreeDmaChannels(a1);
  }
  return result;
}
