/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x1800148A0
 * Callers:
 *     RtlSetUserValueHeap @ 0x1800145D0 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180014940 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800DC3A0 (RtlGetUserInfoHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800DD034 (RtlpValidateHeapSegment.c)
 *     RtlDebugFreeHeap @ 0x1800FF818 (RtlDebugFreeHeap.c)
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
