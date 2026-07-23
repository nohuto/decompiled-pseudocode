/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x18005FFD0
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlSetUserValueHeap @ 0x18005FD00 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetExtraStuffPointer(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 15) == 4 )
    return a1 - 32;
  else
    return a1 + 16LL * *(unsigned __int16 *)(a1 + 8) - 16;
}
