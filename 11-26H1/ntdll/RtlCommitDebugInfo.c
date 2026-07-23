/*
 * XREFs of RtlCommitDebugInfo @ 0x1800BAC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __cdecl RtlCommitDebugInfo(PRTL_DEBUG_INFORMATION Buffer, SIZE_T Size)
{
  return (PVOID)RtlpCommitQueryDebugInfo(Buffer, Size);
}
