/*
 * XREFs of EtwpExpandedStackWalk @ 0x1402618F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWalkFrameChain @ 0x140262D70 (RtlWalkFrameChain.c)
 */

ULONG __fastcall EtwpExpandedStackWalk(__int64 a1)
{
  ULONG result; // eax

  result = RtlWalkFrameChain(*(PVOID **)a1, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
