/*
 * XREFs of EtwpExpandedStackWalk @ 0x140260E60
 * Callers:
 *     <none>
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 */

ULONG __fastcall EtwpExpandedStackWalk(__int64 a1)
{
  ULONG result; // eax

  result = RtlWalkFrameChain(*(PVOID **)a1, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
