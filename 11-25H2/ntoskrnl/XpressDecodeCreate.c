/*
 * XREFs of XpressDecodeCreate @ 0x140696B60
 * Callers:
 *     CMFReadCompressedSegment @ 0x1407B3DE0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1407B30F0 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
